#pragma once
#include "Includes.h"

namespace Replication {
	UChannel* (__fastcall* FnCreateChannel)(UNetConnection* Connection, int Type, bool bOpenedLocally, int Idx);
	void(__fastcall* FnSetChannelActor)(UActorChannel* Ch, AActor* Actor);
	bool(__fastcall* FnReplicateActor)(UActorChannel* Ch);
	void(__fastcall* FnCloseChannel)(UChannel* Ch);
	void(__fastcall* FnClientSendAdjustment)(APlayerController* PC);
	void(__fastcall* FnCallPreReplication)(AActor* Actor, UNetDriver* NetDriver);

	UActorChannel* FindOrGetCh(UNetConnection* Client, AActor* Actor) {
		if (Client == nullptr) {
			return nullptr;
		}
		//Find an existing channel
		for (int i = 0; i < Client->OpenChannels.Num(); i++) {
			UChannel* Ch = Client->OpenChannels[i];
			if (Ch && Ch->Class == UActorChannel::StaticClass()) {
				UActorChannel* ActorCh = (UActorChannel*)Ch;
				if (ActorCh->Actor == Actor) return ActorCh;
			}
		}
		//No Channel found, create one
		UActorChannel* Ch = reinterpret_cast<UActorChannel*>(FnCreateChannel(Client, 2, true, -1));
		FnSetChannelActor(Ch, Actor);
		Ch->Connection = Client;
		return Ch;
	}

	//FIX ME
	bool IsNetRelevantFor(AActor* InActor, UNetConnection* Client) {
		if (!InActor) {
			return false;
		}
		auto FnIsNetRelevantFor = reinterpret_cast<bool(__fastcall*)(AActor * InActor, AActor * RealViewer, AActor * ViewTarget, FVector & SrcLocation)>(InActor->Vft[Offsets::IsNetRelevantFor]);
		FVector Loc = Client->ViewTarget->K2_GetActorLocation();
		return FnIsNetRelevantFor(InActor, Client->ViewTarget, Client->ViewTarget, Loc);
	}

	bool IsReplicableActor(AActor* Actor) {
		if (Actor && Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup) return false;
		if (Actor && Actor->Name.ComparisonIndex != 0 && Actor->bReplicates && Actor->RemoteRole != ENetRole::ROLE_None) return true;
		else return false;
	}

	void ReplicateToClient(AActor* Actor, UNetConnection* Client) {
		if (Actor->IsA(APlayerController::StaticClass()) && Actor != Client->PlayerController) {
			return;
		}
		auto Ch = FindOrGetCh(Client, Actor);
		if (!Ch) {
			return;
		}
		FnCallPreReplication(Actor, Client->Driver);
		FnReplicateActor(Ch);
	}

	void ReplicateActor(AActor* Actor, UNetDriver* NetDriver) {
		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++) {
			UNetConnection* Client = NetDriver->ClientConnections[i];
			if (Actor->IsA(APlayerController::StaticClass()) && Actor != Client->PlayerController) {
				continue;
			}
			if (Client) {
				ReplicateToClient(Actor, Client);
			}
		}
	}

	std::string GetConnectionName(UNetConnection* Client) {
		if (!Client) {
			return "INVALID";
		}
		if (Client->PlayerController) {
			UMcpProfileGroup* MCPPG = reinterpret_cast<AFortPlayerControllerAthena*>(Client->PlayerController)->McpProfileGroup;
			if (MCPPG) {
				return MCPPG->PlayerName.ToString();
			}
		}
		return Client->GetName();
	}

	//Server Replicate Actors
	void ServerReplicateActors_PrepConnections(UNetDriver* NetDriver) {
		auto Connections = NetDriver->ClientConnections;
		if (Connections.Num()) {
			for (int i = 0; i < Connections.Num(); i++) {
				UNetConnection* Connection = Connections[i];
				AActor* OwningActor = Connection->OwningActor;
				if (OwningActor != nullptr) {
					Connection->ViewTarget = ((Connection->PlayerController) ? Connection->PlayerController->GetViewTarget() : OwningActor);
				}
				else {
					Connection->ViewTarget = nullptr;
				}
			}
		}
	}

	std::vector<AActor*> ServerReplicateActors_BuildConsiderList(UNetDriver* NetDriver) {
		std::vector<AActor*> Out = {};
		TArray<AActor*> WorldActors = {};
		GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, AActor::StaticClass(), &WorldActors);
		LOG("Building Consider List with " + std::to_string(WorldActors.Num()) + " Actors!");
		for (int i = 0; i < WorldActors.Num(); i++) {
			auto Data = WorldActors[i];
			if (Data) {
				AActor* Actor = Data;
				if (IsReplicableActor(Actor)) {
					Out.push_back(Actor);
					FnCallPreReplication(Actor, NetDriver);
				}
			}
		}
		WorldActors.Data = nullptr;
		WorldActors.ResetNum();
		LOG("Built Consider List with " + std::to_string(Out.size()) + " Actors!");
		return Out;
	}

	int ServerReplicateActors_ProcessActors(UNetConnection* Connection, std::vector<AActor*> Actors) {
		int FinalActors = 0;
		LOG("Processing " + std::to_string(Actors.size()) + " Actors for Connection " + GetConnectionName(Connection));
		for (AActor* Actor : Actors) {
			if (Actor == nullptr || Connection == nullptr) continue;
			UActorChannel* Ch = FindOrGetCh(Connection, Actor);
			if (Ch == nullptr) {
				return FinalActors;
			}
			{
				FinalActors++;
				ReplicateToClient(Actor, Connection);
				if (Actor->bReplicateMovement) Actor->OnRep_AttachmentReplication();
			}
		}
		Actors.empty();
		Actors.clear();
		return FinalActors;
	}

	void ServerReplicateActors(UNetDriver* NetDriver) {
		++*(DWORD*)(__int64(NetDriver) + 0x288);

		ServerReplicateActors_PrepConnections(NetDriver);
		auto ConsiderList = ServerReplicateActors_BuildConsiderList(NetDriver);
		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++) {
			UNetConnection* Connection = NetDriver->ClientConnections[i];
			if (Connection->ViewTarget) {
				if (Connection->PlayerController) {
					FnClientSendAdjustment(Connection->PlayerController);
					int ReplicatedActorCount = ServerReplicateActors_ProcessActors(Connection, ConsiderList);
					LOG("Replicated " + std::to_string(ReplicatedActorCount) + " Actors for Connection: " + GetConnectionName(Connection));
				}
			}
		}
		ConsiderList.empty();
		ConsiderList.clear();
	}
}

namespace Hooks {
	void (*TickFlushO)(UNetDriver* NetDriver, float DeltaSeconds);
	void TickFlush_Hk(UNetDriver* NetDriver, float DeltaSeconds) {
		if (NetDriver->ClientConnections.Num() > 0 && NetDriver->ClientConnections[0]->InternalAck == false) {
			//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Replication::ServerReplicateActors, NetDriver, 0, 0);
			Replication::ServerReplicateActors(NetDriver);
		}
		return TickFlushO(NetDriver, DeltaSeconds);
	}
}
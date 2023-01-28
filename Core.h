#pragma once
#include "Includes.h"
#include "Replication.h"
#include "Inventory.h"
#include "Abilities.h"
#include <ostream>
#include <fstream>
FVector GetSpawnLoc() {
	TArray<AActor*> SpawnLocs = {};
	GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, AFortPlayerStartWarmup::StaticClass(), &SpawnLocs);
	return SpawnLocs[(rand() % SpawnLocs.Num() - 1)]->K2_GetActorLocation();
}

APlayerPawn_Athena_C* SpawnPawn(FVector SpawnLoc = GetSpawnLoc()) {
	APlayerPawn_Athena_C* Pawn = SpawnActor<APlayerPawn_Athena_C>(SpawnLoc);
	Pawn->bCanBeDamaged = false;
	Pawn->HealthRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenGameplayEffect = nullptr;
	Pawn->HealthRegenGameplayEffect = nullptr;
	Pawn->CharacterMovement->bReplicates = true;
	Pawn->SetReplicates(true);
	Pawn->SetReplicateMovement(true);
	Pawn->OnRep_ReplicatedBasedMovement();
	Pawn->OnRep_ReplicatedMovement();
	Pawn->SetMaxHealth(100);
	Pawn->SetHealth(100);
	return Pawn;
}
namespace Hooks {
	UNetConnection* GetNetConnection_Hk(APlayerController* PC)
	{
		return (UNetConnection*)PC->Player;
	}

	APlayerController* (*SpawnPlayActor)(UWorld* World, UNetConnection* Connection, ENetRole NetRole, FURL InUrl, void* UniqueId, FString& Error, uint8_t InNetPlayerIndex);
	AFortPlayerControllerAthena* SpawnPlayActor_Hk(UWorld* World, UNetConnection* Connection, ENetRole NetRole, FURL InUrl, void* UniqueId, FString& Error, uint8_t InNetPlayerIndex) {
		Replication::ServerReplicateActors_ProcessActors(Connection, Replication::ServerReplicateActors_BuildConsiderList(Connection->Driver));
		AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)SpawnPlayActor(GEngine->GameViewport->World, Connection, NetRole, InUrl, UniqueId, Error, InNetPlayerIndex);
		//MessageBoxA(0, PlayerController->GetName().c_str(), "SPA", MB_OK);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		PlayerController->Player = Connection;
		Connection->OwningActor = PlayerController;
		//AFortPlayerControllerAthena* PlayerController = SpawnActor<AFortPlayerControllerAthena>();
		/*PlayerController->NetPlayerIndex = InNetPlayerIndex;
		PlayerController->RemoteRole = ENetRole::ROLE_Authority;
		Connection->PlayerID = *UniqueId.Get();
		PlayerController->SetReplicates(true);*/
		//reinterpret_cast<void(*)(AGameModeBase*, APlayerController*)>(GEngine->GameViewport->World->AuthorityGameMode->Vft[0xE2])(GEngine->GameViewport->World->AuthorityGameMode, PlayerController);
		//if (PlayerController != GEngine->GameInstance->LocalPlayers[0]->PlayerController) {
			PlayerController->bAlwaysRelevant = true;
			Replication::ReplicateToClient(PlayerController, Connection);
			Replication::ReplicateToClient(PlayerController->PlayerState, Connection);
			Replication::ReplicateToClient(World->GameState, Connection);
			auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
			PlayerState->SetReplicates(true);
			APlayerPawn_Athena_C* Pawn = SpawnPawn();
			Pawn->SetOwner(PlayerController);
			Pawn->SetReplicates(true);
			PlayerController->Possess(Pawn);
			Pawn->SetMaxHealth(100);
			Pawn->SetHealth(100);
			((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1"));
			((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01"));
			PlayerState->SetOwner(PlayerController);
			Pawn->PlayerState = PlayerState;
			Replication::ReplicateToClient(Pawn, Connection);
			PlayerController->bClientPawnIsLoaded = true;
			PlayerController->bReadyToStartMatch = true;
			PlayerController->bAssignedStartSpawn = true;
			PlayerController->bHasInitiallySpawned = true;
			PlayerController->bHasClientFinishedLoading = true;
			PlayerController->bHasServerFinishedLoading = true;
			PlayerController->OnRep_bHasServerFinishedLoading();
			PlayerController->ServerReadyToStartMatch();
			PlayerState->OnRep_CharacterParts();

			PlayerState->bHasStartedPlaying = true;
			PlayerState->bHasFinishedLoading = true;
			PlayerState->bIsReadyToContinue = true;
			PlayerState->OnRep_bHasStartedPlaying();
			PlayerState->bAlwaysRelevant = true;

			PlayerState->OnRep_PlayerTeam();

			auto WorldInventory = SpawnActor<AFortInventory>({ 0,0,0 }, PlayerController);
			WorldInventory->InventoryType = EFortInventoryType::World;
			WorldInventory->Inventory = FFortItemList();
			WorldInventory->Inventory.ReplicatedEntries = TArray<struct FFortItemEntry>(1);
			WorldInventory->Inventory.ItemInstances = TArray<class UFortWorldItem*>(1);
			/*reinterpret_cast<Inventory::WorldInventoryOffsetFix*>*/(PlayerController)->WorldInventory = WorldInventory;
			AFortQuickBars* QuickBars = SpawnActor<AFortQuickBars>({ 0,0,0 }, PlayerController);
			reinterpret_cast<Inventory::QuickbarOffsetFix*>(PlayerController)->QuickBars = QuickBars;
			(PlayerController)->QuickBars = QuickBars;
			PlayerController->OnRep_QuickBar();

			Abilities::GiveBaseAbilities(Pawn);

			Inventory::SetupInventory(PlayerController);

			PlayerController->OverriddenBackpackSize = 5;
			PlayerController->bHasInitializedWorldInventory = true;
		//}
		return PlayerController;
	}

	void (*NCM)(UWorld* InWorld, UNetConnection* Client, uint8_t MessageType, void* Bunch);
	
	void NCM_Hk(UWorld* InWorld, UNetConnection* Client, uint8_t MessageType, void* Bunch) {
		if (MessageType == 15) {
			return;
		}

		return NCM(InWorld, Client, MessageType, Bunch);
	}
}

namespace Core {

	void StartServer() {
		UNetDriver* NetDriver = reinterpret_cast<UNetDriver * (*)(UEngine * Engine, UWorld * InWorld, FName NetDriverDefinition)>(Base + Offsets::CreateNetDriver)(GEngine, GEngine->GameViewport->World, FName(282));
		NetDriver->NetDriverName = FName(282);
		NetDriver->World = GEngine->GameViewport->World;
		FURL ListenURL = {};
		ListenURL.Port = 7777;
		if (reinterpret_cast<bool(*)(UNetDriver*, void*, FURL*, bool, FString*)>(NetDriver->Vft[Offsets::InitListen])(NetDriver, GEngine->GameViewport->World, &ListenURL, false, {})) {
			LOG("Server Listening on Port 7777!", false);
		}
		reinterpret_cast<void(*)(UNetDriver*, UWorld*)>(Base + Offsets::SetWorld)(NetDriver, GEngine->GameViewport->World);
		GEngine->GameViewport->World->NetDriver = NetDriver;
		GEngine->GameViewport->World->LevelCollections[0].NetDriver = NetDriver;
		GEngine->GameViewport->World->LevelCollections[1].NetDriver = NetDriver;
		uintptr_t TickFlushAddr = (Base + Offsets::TickFlush);
		CreateHook(TickFlushAddr, Hooks::TickFlush_Hk, (void**)&Hooks::TickFlushO);
		uintptr_t SpawnPlayActorAddr = (Base + Offsets::SpawnPlayActor);
		CreateHook(SpawnPlayActorAddr, Hooks::SpawnPlayActor_Hk, (void**)&Hooks::SpawnPlayActor); 
		/*uintptr_t GetNetConnectionAddr = __int64(GEngine->GameInstance->LocalPlayers[0]->PlayerController->Vft[Offsets::GetNetConnection]);
		CreateHook(GetNetConnectionAddr, Hooks::GetNetConnection_Hk, nullptr);*/
		uintptr_t NCMAddr = (Base + Offsets::NCM);
		CreateHook(NCMAddr, Hooks::NCM_Hk, (void**)&Hooks::NCM);
	}

	void (*ProcessEventO)(UObject* Obj, UFunction* Func, void* Params);
	void ProcessEvent_Hk(UObject* Obj, UFunction* Func, void* Params) {
		std::string FuncName = Func->GetName();
		static bool bRTSM = false;
		if (FuncName == "ReadyToStartMatch" && !bRTSM) {
			bRTSM = true;
			StartServer();
			AFortGameModeAthena* GM = reinterpret_cast<AFortGameModeAthena*>(Obj);
			AFortGameStateAthena* GS = reinterpret_cast<AFortGameStateAthena*>(GM->GameState);
			GM->GameSession = SpawnActor<AFortGameSession>();
			GM->GameSession->MaxPlayers = 100;
			GS->GameSessionID = L"GSID";
			GS->OnRep_GameSessionID();
			GS->PlayersLeft = 0;
			EAthenaGamePhase OldGP = GS->GamePhase;
			GS->GamePhase = EAthenaGamePhase::Warmup;
			GS->OnRep_GamePhase(OldGP);
			GM->StartMatch();
			GM->StartPlay();
		}

		if (FuncName == "ServerAttemptAircraftJump") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			APlayerPawn_Athena_C* Pawn = SpawnPawn(((AFortGameStateAthena*)GEngine->GameViewport->World->GameState)->GetAircraft()->K2_GetActorLocation());
			Pawn->SetOwner(PlayerController);
			PlayerController->Possess(Pawn);
			((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1"));
			((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01"));
			Abilities::GiveBaseAbilities(Pawn);
		}

		/*if (FuncName == "ServerTryActivateAbility") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerTryActivateAbility_Params*)Params;
			
			FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
			FPredictionKey PredictionKey = InParams->PredictionKey;

			static auto InternalTryActivateAbility = reinterpret_cast<char(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;

			if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Base);
			}
		}
		
		if (FuncName == "ServerTryActivateAbilityWithEventData") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Params;
			
			FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
			FPredictionKey PredictionKey = InParams->PredictionKey;

			static auto InternalTryActivateAbility = reinterpret_cast<char(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;

			if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, &InParams->TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Base);
			}
		}*/

		if (FuncName == "ServerAbilityRPCBatch") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Params;

			static auto InternalTryActivateAbility = reinterpret_cast<char(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility ** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;

			if (!InternalTryActivateAbility(ASC, InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey.Base);
			}
		}

		//if (FuncName == "HandleStartingNewPlayer") {
		//	ProcessEventO(Obj, Func, Params);
		//	AFortPlayerControllerAthena* PlayerController = *(AFortPlayerControllerAthena**)Params;
		//	if (PlayerController != GEngine->GameInstance->LocalPlayers[0]->PlayerController) {
		//		PlayerController->bAlwaysRelevant = true;
		//		auto Connection = PlayerController->NetConnection;
		//		Replication::ReplicateToClient(PlayerController, Connection);
		//		Replication::ReplicateToClient(PlayerController->PlayerState, Connection);
		//		Replication::ReplicateToClient(GEngine->GameViewport->World->GameState, Connection);
		//		auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
		//		PlayerState->SetReplicates(true);
		//		APlayerPawn_Athena_C* Pawn = SpawnPawn();
		//		Pawn->SetReplicates(true);
		//		PlayerController->Possess(Pawn);
		//		Pawn->SetMaxHealth(100);
		//		Pawn->SetHealth(100);
		//		((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1"));
		//		((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01"));
		//		Pawn->PlayerState = PlayerState;
		//		Replication::ReplicateToClient(Pawn, Connection);
		//		PlayerController->bClientPawnIsLoaded = true;
		//		PlayerController->bReadyToStartMatch = true;
		//		PlayerController->bAssignedStartSpawn = true;
		//		PlayerController->bHasInitiallySpawned = true;
		//		PlayerController->bHasClientFinishedLoading = true;
		//		PlayerController->bHasServerFinishedLoading = true;
		//		PlayerController->OnRep_bHasServerFinishedLoading();
		//		PlayerState->OnRep_CharacterParts();

		//		PlayerState->bHasStartedPlaying = true;
		//		PlayerState->bHasFinishedLoading = true;
		//		PlayerState->bIsReadyToContinue = true;
		//		PlayerState->OnRep_bHasStartedPlaying();
		//		PlayerState->bAlwaysRelevant = true;

		//		PlayerState->OnRep_PlayerTeam();

		//		auto WorldInventory = SpawnActor<AFortInventory>({ -280, 400, 3000 }, PlayerController);
		//		WorldInventory->InventoryType = EFortInventoryType::World;
		//		WorldInventory->Inventory = FFortItemList();
		//		WorldInventory->Inventory.ReplicatedEntries = TArray<struct FFortItemEntry>(1);
		//		WorldInventory->Inventory.ItemInstances = TArray<class UFortWorldItem*>(1);
		//		/*reinterpret_cast<Inventory::WorldInventoryOffsetFix*>*/(PlayerController)->WorldInventory = WorldInventory;
		//		AFortQuickBars* QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
		//		reinterpret_cast<Inventory::QuickbarOffsetFix*>(PlayerController)->QuickBars = QuickBars;
		//		(PlayerController)->QuickBars = QuickBars;
		//		PlayerController->OnRep_QuickBar();
		//		QuickBars->EnableSlot(EFortQuickBars::Primary, 0);
		//		QuickBars->EnableSlot(EFortQuickBars::Primary, 1);
		//		QuickBars->EnableSlot(EFortQuickBars::Primary, 2);
		//		QuickBars->EnableSlot(EFortQuickBars::Primary, 3);
		//		QuickBars->EnableSlot(EFortQuickBars::Primary, 4);
		//		QuickBars->EnableSlot(EFortQuickBars::Secondary, 0);
		//		QuickBars->EnableSlot(EFortQuickBars::Secondary, 1);
		//		QuickBars->EnableSlot(EFortQuickBars::Secondary, 2);
		//		QuickBars->EnableSlot(EFortQuickBars::Secondary, 3);
		//		QuickBars->EnableSlot(EFortQuickBars::Secondary, 4);

		//		Abilities::GiveBaseAbilities(Pawn);

		//		Inventory::SetupInventory(PlayerController);

		//		PlayerController->OverriddenBackpackSize = 7;
		//		PlayerController->bHasInitializedWorldInventory = true;
		//	}
		//	return;
		//}
		
		return ProcessEventO(Obj, Func, Params);
	}

	void Init() {
		AllocConsole();
		FILE* pFile;
		freopen_s(&pFile, ("CONOUT$"), "w", stdout);
		MH_Initialize();
		InitGObjects();
		using namespace Replication;
		FnCreateChannel = decltype(FnCreateChannel)(Base + Offsets::CreateChannel);
		FnSetChannelActor = decltype(FnSetChannelActor)(Base + Offsets::SetChannelActor);
		FnReplicateActor = decltype(FnReplicateActor)(Base + Offsets::ReplicateActor);
		FnCloseChannel = decltype(FnCloseChannel)(Base + Offsets::CreateChannel);
		FnClientSendAdjustment = decltype(FnClientSendAdjustment)(Base + Offsets::SendClientAdjustment);
		FnCallPreReplication = decltype(FnCallPreReplication)(Base + Offsets::CallPreReplication);
		/*std::ofstream log("Objects.txt");
		for (int i = 0; i < UObject::GObjects->Num(); i++) {
			UObject* Object = UObject::GObjects->GetByIndex(i);
			std::string ObjName = Object->GetFullName();
			std::string item = "\nName: " + ObjName;
			log << item;
		}*/

		GGameplayStatics = UObject::FindObjectFast<UGameplayStatics>("Default__GameplayStatics");
		GEngine = UObject::FindObjectFast<UFortEngine>("FortEngine_0");
		GEngine->GameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"Athena_Terrain?game=/game/athena/athena_gamemode.athena_gamemode_C ");

		uintptr_t ProcessEventAddr = (Base + Offsets::ProcessEvent);
		CreateHook(ProcessEventAddr, ProcessEvent_Hk, (void**)&ProcessEventO);
		CreateHook(Base + Offsets::NoReservation, Patch, nullptr);
		CreateHook(Base + Offsets::KickPlayer, Patch, nullptr);
		CreateHook(Base + Offsets::ValidationFailure, Patch, nullptr);
	}
}
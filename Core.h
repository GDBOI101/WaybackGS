#pragma once
#include "Includes.h"
#include "Replication.h"
#include "Inventory.h"
#include "Abilities.h"
#include <ostream>
#include <fstream>

static __forceinline bool IsBadReadPtr(void* p)
{
	MEMORY_BASIC_INFORMATION mbi;
	if (VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

		return b;
	}
	return true;
}

FVector GetSpawnLoc() {
	TArray<AActor*> SpawnLocs = {};
	GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, AFortPlayerStartWarmup::StaticClass(), &SpawnLocs);
	return SpawnLocs[(rand() % (size_t)SpawnLocs.Num())]->K2_GetActorLocation();
}

APlayerPawn_Athena_C* SpawnPawn(FVector SpawnLoc = GetSpawnLoc()) {
	APlayerPawn_Athena_C* Pawn = SpawnActor<APlayerPawn_Athena_C>(SpawnLoc, nullptr);
	Pawn->HealthRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenGameplayEffect = nullptr;
	Pawn->HealthRegenGameplayEffect = nullptr;
	Pawn->SetReplicates(true);
	Pawn->SetReplicateMovement(true);
	Pawn->OnRep_ReplicatedBasedMovement();
	Pawn->OnRep_ReplicatedMovement();
	return Pawn;
}

void FixPickups(AFortPlayerController* PC) {
	PC->OverriddenBackpackSize = 5;
	if (PC->CheatManager) {
		//Idk if this is needed
		((UFortCheatManager*)PC->CheatManager)->BackpackSetSize(5);
	}
}

std::vector<UCustomCharacterPart*> GetPlayerParts(AFortPlayerControllerAthena* PC) {
	auto Loadout = PC->CustomizationLoadout;
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (!Loadout.Character) {
		Loadout = Pawn->CustomizationLoadout;
	}
	if (!Loadout.Character) {
		static UFortMcpContext* MCPContext = UObject::FindObjectFast<UFortMcpContext>("FortMcpContext_0");
		Loadout = MCPContext->GetLoadoutForPlayer(PC->NetConnection->PlayerID);
	}
	static std::vector<UCustomCharacterPart*> Base = { UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH") , UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body") , UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses") };
	std::vector<UCustomCharacterPart*> Ret = Base;
	if (Loadout.Character) {
		auto CID = Loadout.Character;
		if (!CID) {
			return Ret;
		}
		auto Hero = CID->HeroDefinition;
		if (!Hero) {
			return Ret;
		}
		auto Specializations = Hero->Specializations;
		if (!Specializations.Data) {
			return Ret;
		}
		for (int i = 0; i < Specializations.Num(); i++) {
			auto SpecializationName = Specializations[i].ObjectID.AssetPathName.ToString();
			auto Specialization = LoadObject<UFortHeroSpecialization>(UFortHeroSpecialization::StaticClass(), std::wstring(SpecializationName.begin(), SpecializationName.end()).c_str());
			if (!Specialization) {
				continue;
			}
			auto Parts = Specialization->CharacterParts;
			if (!Parts.Data) {
				continue;
			}

			for (int x = 0; x < Parts.Num(); x++) {
				auto PartName = Parts[x].ObjectID.AssetPathName.ToString();
				auto Part = LoadObject<UCustomCharacterPart>(UCustomCharacterPart::StaticClass(), std::wstring(PartName.begin(), PartName.end()).c_str());
				if (!Part) {
					continue;
				}
				Ret.push_back(Part);
			}
		}
	}

	return Ret;
}

void ApplyDefaultCosmetics(AFortPlayerPawnAthena* Pawn) {
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH"));
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body"));
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Hat, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses"));
}

void ApplyCosmetics(AFortPlayerControllerAthena* PC) {
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (!Pawn) {
		return;
	}
	return ApplyDefaultCosmetics(Pawn);
	auto Loadout = PC->CustomizationLoadout;
	if (!Loadout.Character) {
		Loadout = Pawn->CustomizationLoadout;
	}
	if (!Loadout.Character) {
		static UFortMcpContext* MCPContext = UObject::FindObjectFast<UFortMcpContext>("FortMcpContext_0");
		Loadout = MCPContext->GetLoadoutForPlayer(PC->NetConnection->PlayerID);
	}
	if (Loadout.Character) {
		auto CID = Loadout.Character;
		if (!CID) {
			return ApplyDefaultCosmetics(Pawn);
		}
		auto Hero = CID->HeroDefinition;
		if (!Hero) {
			return ApplyDefaultCosmetics(Pawn);
		}
		auto Specializations = Hero->Specializations;
		if (!Specializations.Data) {
			return ApplyDefaultCosmetics(Pawn);
		}
		for (int i = 0; i < Specializations.Num(); i++) {
			auto SpecializationName = Specializations[i].ObjectID.AssetPathName.ToString();
			auto Specialization = LoadObject<UFortHeroSpecialization>(UFortHeroSpecialization::StaticClass(), std::wstring(SpecializationName.begin(), SpecializationName.end()).c_str());
			if (!Specialization) {
				continue;
			}
			auto Parts = Specialization->CharacterParts;
			if (!Parts.Data) {
				continue;
			}

			for (int x = 0; x < Parts.Num(); x++) {
				auto PartName = Parts[x].ObjectID.AssetPathName.ToString();
				auto Part = LoadObject<UCustomCharacterPart>(UCustomCharacterPart::StaticClass(), std::wstring(PartName.begin(), PartName.end()).c_str());

				if (!Part) {
					continue;
				}
				Pawn->ServerChoosePart(Part->CharacterPartType, Part);
			}
		}
	}
	else {
		//MessageBoxA(0, "INVALID", "Test", MB_OK);
		return ApplyDefaultCosmetics(Pawn);
	}
}

UFortWeaponMeleeItemDefinition* GetPlayerPickaxe(AFortPlayerControllerAthena* PC) {
	static auto DefaultPickaxe = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
	auto Pickaxe = DefaultPickaxe;
	auto Loadout = PC->CustomizationLoadout;
	if (!Loadout.Character) {
		Loadout = reinterpret_cast<AFortPlayerPawnAthena*>(PC->Pawn)->CustomizationLoadout;
	}
	if (Loadout.Pickaxe) {
		Pickaxe = Loadout.Pickaxe->WeaponDefinition;
	}
	return Pickaxe;
}

namespace Hooks {
	void (*HandleReloadCost)(AFortWeapon* Weapon, int AmmoToRemove);
	void HandleReloadCost_Hk(AFortWeapon* Weapon, int AmmoToRemove) {
		if (!Weapon) {
			return;
		}
		auto Pawn = (AFortPlayerPawnAthena*)Weapon->GetOwner();
		if (!Pawn)
		{
			return;
		}
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		if (!PC) {
			return;
		}
		FFortItemEntry Entry = Inventory::GetEntryInInv(PC, Weapon->ItemEntryGuid);
		if (!Entry.ItemDefinition) {
			return;
		}
		auto Item = (UFortWorldItemDefinition*)Weapon->WeaponData;
		if (!Item) {
			return;
		}
		auto WorldInventory = PC->WorldInventory;
		if (!Item->GetName().contains("WID_")) {
			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
				if (WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == Entry.ItemGuid) {
					WorldInventory->Inventory.ItemInstances.RemoveAt(i);
					break;
				}
			}
			for (int i = 0; i < WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
				if (WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Entry.ItemGuid) {
					WorldInventory->Inventory.ReplicatedEntries.RemoveAt(i);
					break;
				}
			}
			Inventory::Update(PC);
			return;
		}
		Entry.LoadedAmmo = Weapon->AmmoCount;
		WorldInventory->Inventory.MarkItemDirty(Entry);
		auto AmmoDef = Item->GetAmmoWorldItemDefinition_BP();
		if (!AmmoDef) {
			return;
		}
		Inventory::AddItem(PC, AmmoDef, -AmmoToRemove, 0, EFortQuickBars::Secondary);
	}

	APlayerController* (*SpawnPlayActor)(UWorld* World, UNetConnection* Connection, ENetRole NetRole, FURL InUrl, void* UniqueId, FString& Error, uint8_t InNetPlayerIndex);
	AFortPlayerControllerAthena* SpawnPlayActor_Hk(UWorld* World, UNetConnection* Connection, ENetRole NetRole, FURL InUrl, void* UniqueId, FString& Error, uint8_t InNetPlayerIndex) {
		Replication::ServerReplicateActors_ProcessActors(Connection, Replication::ServerReplicateActors_BuildConsiderList(Connection->Driver));
		AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)SpawnPlayActor(GEngine->GameViewport->World, Connection, NetRole, InUrl, UniqueId, Error, InNetPlayerIndex);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		PlayerController->Player = Connection;
		Connection->OwningActor = PlayerController;
		Replication::ReplicateToClient(PlayerController, Connection);
		Replication::ReplicateToClient(PlayerController->PlayerState, Connection);
		Replication::ReplicateToClient(World->GameState, Connection);
		auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
		PlayerState->SetReplicates(true);
		APlayerPawn_Athena_C* Pawn = SpawnPawn();
		Pawn->bCanBeDamaged = false;
		Pawn->SetOwner(PlayerController);
		Pawn->SetReplicates(true);
		PlayerController->Possess(Pawn);
		PlayerController->ClientForceProfileQuery();
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
		ApplyCosmetics(PlayerController);
		PlayerState->OnRep_CharacterParts();

		PlayerState->bHasStartedPlaying = true;
		PlayerState->bHasFinishedLoading = true;
		PlayerState->bIsReadyToContinue = true;
		PlayerState->OnRep_bHasStartedPlaying();
		PlayerState->bAlwaysRelevant = true;

		PlayerState->OnRep_PlayerTeam();
		auto WorldInventory = SpawnActor<AFortInventory>({ 0,0,0 }, PlayerController);
		WorldInventory->bAlwaysRelevant = true;
		WorldInventory->InventoryType = EFortInventoryType::World;
		WorldInventory->Inventory = FFortItemList();
		WorldInventory->Inventory.ReplicatedEntries = TArray<struct FFortItemEntry>(6);
		WorldInventory->Inventory.ItemInstances = TArray<class UFortWorldItem*>(6);
		WorldInventory->SetOwner(PlayerController);
		PlayerController->WorldInventory = WorldInventory;
		AFortQuickBars* QuickBars = SpawnActor<AFortQuickBars>({ 0,0,0 }, PlayerController);
		QuickBars->bAlwaysRelevant = true;
		QuickBars->SetOwner(PlayerController);
		PlayerController->QuickBars = QuickBars;
		PlayerController->QuickBars = QuickBars;
		PlayerController->OnRep_QuickBar();
		QuickBars->EnableSlot(EFortQuickBars::Primary, 0);
		QuickBars->EnableSlot(EFortQuickBars::Primary, 1);
		QuickBars->EnableSlot(EFortQuickBars::Primary, 2);
		QuickBars->EnableSlot(EFortQuickBars::Primary, 3);
		QuickBars->EnableSlot(EFortQuickBars::Primary, 4);
		QuickBars->EnableSlot(EFortQuickBars::Secondary, 0);
		QuickBars->EnableSlot(EFortQuickBars::Secondary, 1);
		QuickBars->EnableSlot(EFortQuickBars::Secondary, 2);
		QuickBars->EnableSlot(EFortQuickBars::Secondary, 3);
		QuickBars->EnableSlot(EFortQuickBars::Secondary, 4);

		Abilities::GiveBaseAbilities(Pawn);

		FixPickups(PlayerController);
		Inventory::SetupInventory(PlayerController);

		FixPickups(PlayerController);
		PlayerController->bHasInitializedWorldInventory = true;
		Inventory::Update(PlayerController);

		auto HealthSet = reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->HealthSet;
		HealthSet->CurrentShield.Minimum = 0;
		HealthSet->CurrentShield.Maximum = 100;
		HealthSet->CurrentShield.BaseValue = 0;
		HealthSet->CurrentShield.CurrentValue = 0;
		HealthSet->Shield.Minimum = 0;
		HealthSet->Shield.Maximum = 100;
		HealthSet->Shield.BaseValue = 100;
		HealthSet->Shield.CurrentValue = 100;
		HealthSet->OnRep_Shield();
		HealthSet->OnRep_CurrentShield();

		PlayerController->bInfiniteAmmo = true;
		PlayerController->CheatManager = (UCheatManager*)GGameplayStatics->SpawnObject(UFortCheatManager::StaticClass(), PlayerController);
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
	static FVector SZLoc;
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
		uintptr_t NCMAddr = (Base + Offsets::NCM);
		CreateHook(NCMAddr, Hooks::NCM_Hk, (void**)&Hooks::NCM);
	}

	void SpawnFloorLoot() {
		TArray<AActor*> FloorLootActors;
		GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, UObject::FindObjectFast<UClass>("Tiered_Athena_FloorLoot_01_C"), &FloorLootActors);
		for (int i = 0; i < FloorLootActors.Num(); i++) {
			auto Actor = FloorLootActors[i];

			FVector Location = Actor->K2_GetActorLocation();

			auto ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
			while (!ItemDef) {
				ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
			}
			UFortWorldItem* Item = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(1, 1);
			Item->ItemEntry.Count = 1;
			Inventory::SpawnPickup(Item, Location);

			int ACount = (ItemDef->GetAmmoWorldItemDefinition_BP()->DropCount * 3);
			UFortWorldItem* Ammo = (UFortWorldItem*)ItemDef->GetAmmoWorldItemDefinition_BP()->CreateTemporaryItemInstanceBP(ACount, 1);
			Ammo->ItemEntry.Count = ACount;
			Inventory::SpawnPickup(Ammo, Location);

			Actor->K2_DestroyActor();
		}
	}

	void* (*DispatchRequestOG)(void* McpProfileGroup, void* RequestContent);
	void* DispatchRequest_Hk(void* McpProfileGroup, void* RequestContent) {
		*((DWORD*)RequestContent + 0x18) = 3;
		return DispatchRequestOG(McpProfileGroup, RequestContent);
	}

	void (*ProcessEventO)(UObject* Obj, UFunction* Func, void* Params);
	void ProcessEvent_Hk(UObject* Obj, UFunction* Func, void* Params) {
		std::string FuncName = Func->GetName();
		static bool bRTSM = false;
		if (FuncName == "ReadyToStartMatch" && !bRTSM) {
			bRTSM = true;
			LoadObject(UCustomCharacterPart::StaticClass(), L"/Game/Athena/Heroes/Meshes/Heads/F_Med_Head1_ATH.F_Med_Head1_ATH");
			LoadObject(UCustomCharacterPart::StaticClass(), L"/Game/Characters/CharacterParts/Hats/Ramirez_Glasses.Ramirez_Glasses");
			Inventory::SetupLoadout();
			StartServer();
			AFortGameModeAthena* GM = reinterpret_cast<AFortGameModeAthena*>(Obj);
			AFortGameStateAthena* GS = reinterpret_cast<AFortGameStateAthena*>(GM->GameState);
			GM->GameSession = SpawnActor<AFortGameSession>({}, nullptr);
			GM->GameSession->MaxPlayers = 100;
			GS->GameSessionID = L"GSID";
			GS->OnRep_GameSessionID();
			GM->StartMatch();
			GM->StartPlay();
			EAthenaGamePhase OldGP = GS->GamePhase;
			GS->GamePhase = EAthenaGamePhase::Warmup;
			GS->OnRep_GamePhase(OldGP);
			GS->WarmupCountdownEndTime = 99990.0f;
			SpawnFloorLoot();
		}

		//Battle Bus
		if (FuncName == "ServerAttemptAircraftJump") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			APlayerPawn_Athena_C* Pawn = SpawnPawn(((AFortGameStateAthena*)GEngine->GameViewport->World->GameState)->GetAircraft()->K2_GetActorLocation());
			PlayerController->Possess(Pawn);
			auto HealthSet = reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->HealthSet;
			Pawn->SetMaxHealth(100);
			Pawn->SetHealth(100);
			HealthSet->CurrentShield.Minimum = 0;
			HealthSet->CurrentShield.Maximum = 100;
			HealthSet->CurrentShield.BaseValue = 0;
			HealthSet->CurrentShield.CurrentValue = 0;
			HealthSet->Shield.Minimum = 0;
			HealthSet->Shield.Maximum = 100;
			HealthSet->Shield.BaseValue = 100;
			HealthSet->Shield.CurrentValue = 100;
			HealthSet->OnRep_Shield();
			HealthSet->OnRep_CurrentShield();
			ApplyCosmetics(PlayerController);
			Abilities::GiveBaseAbilities(Pawn);
			Inventory::Update(PlayerController);
			FixPickups(PlayerController);
		}

		if (FuncName == "OnAircraftExitedDropZone") {
			auto Clients = GEngine->GameViewport->World->NetDriver->ClientConnections;
			for (int i = 0; i < Clients.Num(); i++) {
				auto Client = Clients[i];
				if (Client && Client->PlayerController && ((AFortPlayerControllerAthena*)(Client->PlayerController))->IsInAircraft()) {
					((AFortPlayerControllerAthena*)(Client->PlayerController))->ServerAttemptAircraftJump({});
				}
			}
		}

		//Abilities
		if (FuncName == "ServerTryActivateAbility") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerTryActivateAbility_Params*)Params;

			FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
			FPredictionKey PredictionKey = InParams->PredictionKey;

			static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, AbilityToActivate);
			Spec->InputPressed = true;

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;

			if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Current);
				return;
			}

			reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
		}

		if (FuncName == "ServerTryActivateAbilityWithEventData") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Params;

			FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
			FPredictionKey PredictionKey = InParams->PredictionKey;

			static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, AbilityToActivate);
			Spec->InputPressed = true;

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;

			if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, &InParams->TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Current);
				return;
			}

			reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
		}

		if (FuncName == "ServerAbilityRPCBatch") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Params;

			static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

			auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, InParams->BatchInfo.AbilitySpecHandle);
			Spec->InputPressed = true;

			UGameplayAbility* InstancedAbility = nullptr;
			FGameplayEventData* TriggerEventData = nullptr;


			if (!InternalTryActivateAbility(ASC, InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
				ASC->ClientActivateAbilityFailed(InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey.Current);
				return;
			}

			reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
		}

		//Inventory
		if (FuncName == "ServerExecuteInventoryItem") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerExecuteInventoryItem_Params*)Params;
			if (!PlayerController || !InParams || PlayerController->IsInAircraft()) {
				return ProcessEventO(Obj, Func, Params);
			}

			auto Weapon = Inventory::EquipInventoryItem(PlayerController, InParams->ItemGuid);
			if (!IsBadReadPtr(Weapon)) {
				if (Weapon && Weapon->IsA(AFortWeap_BuildingTool::StaticClass())) {
					AFortWeap_BuildingTool* BuildingTool = reinterpret_cast<AFortWeap_BuildingTool*>(Weapon);
					BuildingTool->DefaultMetadata = reinterpret_cast<UFortBuildingItemDefinition*>(Weapon->WeaponData)->BuildingMetaData.Get();
					BuildingTool->OnRep_DefaultMetadata();
				}
			}
		}

		if (FuncName == "ServerHandlePickup") {
			auto Pawn = (AFortPlayerPawn*)Obj;
			auto InParams = (Params::AFortPlayerPawn_ServerHandlePickup_Params*)Params;
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;

			if (!InParams->Pickup || !InParams->Pickup->PrimaryPickupItemEntry.ItemDefinition) {
				return ProcessEventO(Obj, Func, Params);
			}

			auto ItemEntry = InParams->Pickup->PrimaryPickupItemEntry;

			EFortQuickBars QB = ((ItemEntry.ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) || ItemEntry.ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass())) ? EFortQuickBars::Secondary : EFortQuickBars::Primary);

			if (QB == EFortQuickBars::Primary && Inventory::GetOpenSlot(PlayerController) == -1) {
				return;
			}

			InParams->Pickup->K2_DestroyActor();

			Inventory::AddItem(PlayerController, ItemEntry.ItemDefinition, ItemEntry.Count, -1, QB);
		}

		if (FuncName == "ServerSpawnInventoryDrop") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerSpawnInventoryDrop_Params*)Params;

			Inventory::DropItem(PlayerController, InParams->ItemGuid);
		}

		//Interacting
		if (FuncName == "ServerAttemptInteract") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerAttemptInteract_Params*)Params;

			auto Actor = InParams->ReceivingActor;
			if (Actor) {
				auto ClassName = Actor->Class->GetName();
				if (ClassName.contains("Tiered_Short_Ammo")) {
					FVector Location = Actor->K2_GetActorLocation();
					Actor->K2_DestroyActor();
					for (int i = 0; i < 3; i++) {
						auto ItemDef = (UFortWeaponItemDefinition*)Inventory::Ammo[rand() % (Inventory::Ammo.size())];
						while (!ItemDef) {
							ItemDef = Inventory::Ammo[rand() % (Inventory::Ammo.size())];
						}
						int Count = (ItemDef->DropCount * 3);
						UFortWorldItem* Item = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);
						Item->ItemEntry.Count = Count;
						Inventory::SpawnPickup(Item, Location);
					}
					return;
				}

				if (ClassName.contains("Tiered_Chest")) {
					FVector Location = Actor->K2_GetActorLocation();
					Actor->K2_DestroyActor();
					auto ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
					while (!ItemDef) {
						ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
					}
					UFortWorldItem* Item = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(1, 1);
					Item->ItemEntry.Count = 1;
					Inventory::SpawnPickup(Item, Location);

					int ACount = (ItemDef->GetAmmoWorldItemDefinition_BP()->DropCount * 3);
					UFortWorldItem* Ammo = (UFortWorldItem*)ItemDef->GetAmmoWorldItemDefinition_BP()->CreateTemporaryItemInstanceBP(ACount, 1);
					Ammo->ItemEntry.Count = ACount;
					Inventory::SpawnPickup(Ammo, Location);

					UFortWeaponRangedItemDefinition* ItemDef2 = Inventory::Consumables[rand() % (Inventory::Consumables.size())];
					int Count = (ItemDef2->MaxStackSize / 2);

					UFortWorldItem* Item2 = (UFortWorldItem*)ItemDef2->CreateTemporaryItemInstanceBP(Count, 1);
					Item2->ItemEntry.Count = Count;
					Inventory::SpawnPickup(Item2, Location);
					return;
				}

				if (ClassName.contains("AthenaSupplyDrop_02")) {
					FVector Location = Actor->K2_GetActorLocation();
					Actor->K2_DestroyActor();
					static auto ItemDef = UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_AMR_Athena_SR_Ore_T03.WID_Sniper_AMR_Athena_SR_Ore_T03");
					UFortWorldItem* Item = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(1, 1);
					Item->ItemEntry.Count = 1;
					Inventory::SpawnPickup(Item, Location);

					int ACount = (ItemDef->GetAmmoWorldItemDefinition_BP()->DropCount * 3);
					UFortWorldItem* Ammo = (UFortWorldItem*)ItemDef->GetAmmoWorldItemDefinition_BP()->CreateTemporaryItemInstanceBP(ACount, 1);
					Ammo->ItemEntry.Count = ACount;
					Inventory::SpawnPickup(Ammo, Location);

					UFortWeaponRangedItemDefinition* ItemDef2 = Inventory::Consumables[rand() % (Inventory::Consumables.size())];
					int Count = (ItemDef2->MaxStackSize / 2);

					UFortWorldItem* Item2 = (UFortWorldItem*)ItemDef2->CreateTemporaryItemInstanceBP(Count, 1);
					Item2->ItemEntry.Count = Count;
					Inventory::SpawnPickup(Item2, Location);
				}
			}
		}

		//Harvesting (No Work)
		if (FuncName == "ClientReportDamagedResourceBuilding") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ClientReportDamagedResourceBuilding_Params*)Params;
			static UFortResourceItemDefinition* Wood = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
			static UFortResourceItemDefinition* Stone = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
			static UFortResourceItemDefinition* Metal = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
			UFortResourceItemDefinition* ItemDef = nullptr;
			if (InParams->PotentialResourceType == EFortResourceType::Wood)
				ItemDef = Wood;

			if (InParams->PotentialResourceType == EFortResourceType::Stone)
				ItemDef = Stone;

			if (InParams->PotentialResourceType == EFortResourceType::Metal)
				ItemDef = Metal;

			if (ItemDef != nullptr) {
				Inventory::AddItem(PlayerController, ItemDef, InParams->PotentialResourceCount, 0, EFortQuickBars::Secondary);
			}
		}

		if (FuncName == "OnDamageServer") {
			if (Obj->IsA(ABuildingSMActor::StaticClass())) {
				auto BuildingActor = (ABuildingSMActor*)Obj;
				auto InParams = (Params::ABuildingActor_OnDamageServer_Params*)Params;
				static UFortWeaponMeleeItemDefinition* PicaxeDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
				if (InParams->InstigatedBy && InParams->InstigatedBy->IsA(AFortPlayerController::StaticClass()) && !BuildingActor->bPlayerPlaced) {
					AFortPlayerController* FortController = (AFortPlayerController*)InParams->InstigatedBy;
					if (FortController->MyFortPawn && FortController->MyFortPawn->CurrentWeapon && FortController->MyFortPawn->CurrentWeapon->WeaponData == PicaxeDef)
						FortController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, 6, BuildingActor->bDestroyed, (InParams->Damage == 100.f));
				}
			}
		}

		//Late Game
#ifdef LATEGAME
		if (FuncName == "OnSafeZoneStateChange") {
			auto InParams = (Params::AFortSafeZoneIndicator_OnSafeZoneStateChange_Params*)Params;
			AFortSafeZoneIndicator* Indicator = (AFortSafeZoneIndicator*)Obj;
			Indicator->NextCenter = (FVector_NetQuantize100)SZLoc;
			Indicator->LastCenter = (FVector_NetQuantize100)SZLoc;
			Indicator->Radius = 7500;
			Indicator->NextRadius = 7500;
			Indicator->LastRadius = 7500;
			Indicator->SafeZoneFinishShrinkTime = 1000000;
		}
#endif

		//Misc
		if (FuncName == "ServerCheat" || FuncName == "ServerCheatAll" || FuncName == "CheatAll" || FuncName == "ServerPlayEmoteItem") {
			return;
		}

		if (FuncName == "ClientOnPawnDied") {
			auto InParams = (Params::AFortPlayerControllerZone_ClientOnPawnDied_Params*)Params;
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			PlayerController->bMarkedAlive = false;
			reinterpret_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState)->PlayersLeft--;
			auto Pickaxe = PlayerController->QuickBars->PrimaryQuickBar.Slots[0].Items[0];
			for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
				auto Item = PlayerController->WorldInventory->Inventory.ItemInstances[i];
				if (Item && Item->GetItemGuid() != Pickaxe) {
					Inventory::DropItem(PlayerController, Item->GetItemGuid());
				}
			}
			if (reinterpret_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState)->PlayersLeft < 2) {
				if (InParams->DeathReport.KillerPawn) {
					auto KPC = (AFortPlayerControllerAthena*)InParams->DeathReport.KillerPawn->Controller;
					if (KPC) {
						KPC->ClientNotifyWon();
						KPC->PlayWinEffects();
					}
				}
			}
		}

		if (FuncName == "ServerLoadingScreenDropped") {
			auto PlayerController = (AFortPlayerControllerAthena*)Obj;
			ApplyCosmetics(PlayerController);
			Inventory::AddItem(PlayerController, GetPlayerPickaxe(PlayerController), 1, 0);
			PlayerController->ServerExecuteInventoryItem(PlayerController->QuickBars->PrimaryQuickBar.Slots[0].Items[0]);
		}

		//Only allows owned cosmetics
		/*if (FuncName == "ServerChoosePart") {
			auto InParams = (Params::AFortPlayerPawn_ServerChoosePart_Params*)(Params);
			if (!InParams->ChosenCharacterPart) {
				return;
			}
			else {
				auto Pawn = reinterpret_cast<AFortPlayerPawnAthena*>(Obj);
				bool Allowed = false;
				for (auto Part : GetPlayerParts(reinterpret_cast<AFortPlayerControllerAthena*>(Pawn->Controller))) {
					if (InParams->ChosenCharacterPart == Part) {
						Allowed = true;
						break;
					}
				}
				if (!Allowed) {
					return;
				}
			}
		}*/

		//Building
		if (FuncName == "ServerCreateBuildingActor") {
			static UFortResourceItemDefinition* Wood = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
			static UFortResourceItemDefinition* Stone = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
			static UFortResourceItemDefinition* Metal = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
			auto InParams = (Params::AFortPlayerController_ServerCreateBuildingActor_Params*)(Params);
			auto Class = InParams->BuildingClassData.BuildingClass;
			auto Loc = InParams->BuildLoc;
			auto Rot = InParams->BuildRot;

			ABuildingSMActor* Build = (ABuildingSMActor*)SpawnActor2(Class, Rot, Loc);

			if (Build) {
				auto PC = (AFortPlayerControllerAthena*)(Obj);
				Build->bPlayerPlaced = true;
				Build->SetMirrored(InParams->bMirrored);
				Build->ForceNetUpdate();
				Build->InitializeKismetSpawnedBuildingActor(Build, PC);
				switch (Build->ResourceType) {
				case EFortResourceType::Wood:
				{
					Inventory::AddItem(PC, Wood, -10, 0, EFortQuickBars::Secondary);
					break;
				}
				case EFortResourceType::Stone:
				{
					Inventory::AddItem(PC, Stone, -10, 0, EFortQuickBars::Secondary);
					break;
				}
				case EFortResourceType::Metal:
				{
					Inventory::AddItem(PC, Metal, -10, 0, EFortQuickBars::Secondary);
					break;
				}
				}
			}
		}

		if (FuncName == "ServerEditBuildingActor") {
			AFortPlayerController* PC = (AFortPlayerController*)(Obj);
			auto InParams = (Params::AFortPlayerController_ServerEditBuildingActor_Params*)(Params);
			if (InParams->BuildingActorToEdit) {
				auto Loc = InParams->BuildingActorToEdit->K2_GetActorLocation();
				auto Rot = InParams->BuildingActorToEdit->K2_GetActorRotation();
				auto ForwardVector = InParams->BuildingActorToEdit->GetActorForwardVector();
				auto RightVector = InParams->BuildingActorToEdit->GetActorRightVector();
				if (InParams->BuildingActorToEdit->BuildingType != EFortBuildingType::Wall) // Centers building pieces if necessary
				{
					switch (InParams->RotationIterations)
					{
					case 1:
						Loc = Loc + ForwardVector * 256.0f + RightVector * 256.0f;
						break;
					case 2:
						Loc = Loc + RightVector * 512.0f;
						break;
					case 3:
						Loc = Loc + ForwardVector * -256.0f + RightVector * 256.0f;
					}
				}
				Rot.Yaw = (round(float((int(Rot.Yaw) + 360) % 360) / 10) * 10) + 90 * InParams->RotationIterations;
				InParams->BuildingActorToEdit->K2_DestroyActor();
				/*FBuildingClassData Data = {};
				Data.PreviousBuildingLevel = 0;
				Data.UpgradeLevel = 1;
				Data.BuildingClass = InParams->NewBuildingClass;
				PC->ServerCreateBuildingActor(Data, Loc, Rot, InParams->bMirrored);*/
				ABuildingSMActor* Build = (ABuildingSMActor*)SpawnActor2(InParams->NewBuildingClass, Rot, Loc);

				if (Build) {
					Build->bPlayerPlaced = true;
					Build->SetMirrored(InParams->bMirrored);
					Build->ForceNetUpdate();
					Build->InitializeKismetSpawnedBuildingActor(Build, PC);
				}
			}
		}

		if (FuncName == "ServerEndEditingBuildingActor") {
			auto InParams = (Params::AFortPlayerController_ServerEndEditingBuildingActor_Params*)(Params);
			if (InParams->BuildingActorToStopEditing) {
				InParams->BuildingActorToStopEditing->EditingPlayer = nullptr;
				InParams->BuildingActorToStopEditing->OnRep_EditingPlayer();
			}
		}

		if (FuncName == "ServerBeginEditingBuildingActor") {
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)(Obj);
			auto InParams = (Params::AFortPlayerController_ServerBeginEditingBuildingActor_Params*)(Params);
			static UFortEditToolItemDefinition* EditToolDef = UObject::FindObject<UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
			if (PC && InParams->BuildingActorToEdit) {
				auto EditTool = Inventory::GetItemInInv(PC, EditToolDef);
				if (EditTool && !IsBadReadPtr(EditTool)) {
					auto EditToolData = (AFortWeap_EditingTool*)Inventory::EquipItem(PC, EditTool);
					InParams->BuildingActorToEdit->EditingPlayer = (AFortPlayerStateZone*)PC->PlayerState;
					InParams->BuildingActorToEdit->OnRep_EditingPlayer();
					if (EditToolData) {
						EditToolData->EditActor = InParams->BuildingActorToEdit;
					}
				}
			}
		}

		return ProcessEventO(Obj, Func, Params);
	}

	ABuildingFoundation* GetRandomFoundation() {
		TArray<AActor*> Foundations;
		GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, ABuildingFoundation::StaticClass(), &Foundations);
		return (ABuildingFoundation*)Foundations[rand() % Foundations.Num()];
	}

	void InputThread() {
		while (true) {
#ifdef LATEGAME
			if (GetAsyncKeyState(VK_F3) & 0x1) {
				AFortGameModeAthena* GM = reinterpret_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);
				AFortGameStateAthena* GS = reinterpret_cast<AFortGameStateAthena*>(GM->GameState);
				UObject::FindObjectFast<UKismetSystemLibrary>("Default__KismetSystemLibrary")->ExecuteConsoleCommand(GEngine->GameViewport->World, L"startaircraft", nullptr);
				Sleep(1000);
				auto AC = GS->GetAircraft();
				AC->FlightEndTime = 10.0f;
				AC->FlightSpeed = 0.0f;
				AC->FlightStartLocation = FVector(GetRandomFoundation()->K2_GetActorLocation() + FVector{ 0,0,10000 });
				SZLoc = AC->FlightStartLocation;
				AC->K2_TeleportTo(AC->FlightStartLocation, AC->K2_GetActorRotation());
				GS->OnRep_Aircraft();
				//GS->SafeZoneIndicator->OnSafeZoneStateChange(EFortSafeZoneState::Starting);

}
#endif
			if (GetAsyncKeyState(VK_F6) & 0x1) {
				Sleep(1000);
				UObject::FindObjectFast<UKismetSystemLibrary>("Default__KismetSystemLibrary")->ExecuteConsoleCommand(GEngine->GameViewport->World, L"startaircraft", nullptr);
			}

			if (GetAsyncKeyState(VK_F7) & 0x1) {
				Sleep(1000);
				std::ofstream log("Objects.txt");
				for (int i = 0; i < UObject::GObjects->Num(); i++) {
					UObject* Object = UObject::GObjects->GetByIndex(i);
					std::string ObjName = Object->GetFullName();
					std::string item = "\nName: " + ObjName;
					log << item;
				}
			}
			Sleep(1000 / 30);
		}
	}

	void Init() {
		AllocConsole();
		FILE* pFile;
		freopen_s(&pFile, ("CONOUT$"), "w+", stdout);
		SetConsoleTitleA("WaybackGS");
		MH_Initialize();
		InitGObjects();
		using namespace Replication;
		FnCreateChannel = decltype(FnCreateChannel)(Base + Offsets::CreateChannel);
		FnSetChannelActor = decltype(FnSetChannelActor)(Base + Offsets::SetChannelActor);
		FnReplicateActor = decltype(FnReplicateActor)(Base + Offsets::ReplicateActor);
		FnCloseChannel = decltype(FnCloseChannel)(Base + Offsets::CreateChannel);
		FnClientSendAdjustment = decltype(FnClientSendAdjustment)(Base + Offsets::SendClientAdjustment);
		FnCallPreReplication = decltype(FnCallPreReplication)(Base + Offsets::CallPreReplication);

		GGameplayStatics = UObject::FindObjectFast<UGameplayStatics>("Default__GameplayStatics");
		GEngine = UObject::FindObjectFast<UFortEngine>("FortEngine_0");

		GEngine->GameViewport->ViewportConsole = (UConsole*)GGameplayStatics->SpawnObject(UConsole::StaticClass(), GEngine->GameViewport);

		GEngine->GameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"Athena_Terrain?Game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");

		uintptr_t ProcessEventAddr = (Base + Offsets::ProcessEvent);
		CreateHook(ProcessEventAddr, ProcessEvent_Hk, (void**)&ProcessEventO);
		CreateHook(Base + Offsets::NoReservation, Patch, nullptr);
		CreateHook(Base + Offsets::KickPlayer, Patch, nullptr);
		CreateHook(Base + Offsets::ValidationFailure, Patch, nullptr);
		CreateHook(Base + Offsets::CollectGarbage, Patch, nullptr);
		//CreateHook(Base + Offsets::NoMcp, Patch, nullptr);
		CreateHook(Base + Offsets::GetNetMode, Patch, nullptr);
		CreateHook(Base + Offsets::DispatchRequest, DispatchRequest_Hk, (void**)&DispatchRequestOG);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InputThread, 0, 0, 0);

		GEngine->GameInstance->LocalPlayers.RemoveAt(0);

		//CreateHook(Base + Offsets::HandleReloadCost, Hooks::HandleReloadCost_Hk, (void**)&Hooks::HandleReloadCost);
	}
}
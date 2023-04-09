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
	return SpawnLocs[(rand() % (size_t)SpawnLocs.Num())]->K2_GetActorLocation();
}

ABuildingFoundation* GetRandomFoundation() {
	TArray<AActor*> Foundations;
	GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, ABuildingFoundation::StaticClass(), &Foundations);
	return (ABuildingFoundation*)Foundations[rand() % Foundations.Num()];
}

APlayerPawn_Athena_C* SpawnPawn(FVector SpawnLoc = GetSpawnLoc()) {
	APlayerPawn_Athena_C* Pawn = SpawnActor<APlayerPawn_Athena_C>(SpawnLoc, nullptr);
	Pawn->HealthRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenDelayGameplayEffect = nullptr;
	Pawn->ShieldRegenGameplayEffect = nullptr;
	Pawn->HealthRegenGameplayEffect = nullptr;
	return Pawn;
}

void FixPickups(AFortPlayerController* PC) {
	PC->OverriddenBackpackSize = 5;
	if (PC->CheatManager) ((UFortCheatManager*)PC->CheatManager)->BackpackSetSize(5);
}

std::vector<UCustomCharacterPart*> GetPlayerParts(AFortPlayerControllerAthena* PC) {
	auto Loadout = PC->CustomizationLoadout;
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (!Loadout.Character) Loadout = Pawn->CustomizationLoadout;
	static std::vector<UCustomCharacterPart*> Base = { UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH") , UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body") , UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses") };
	std::vector<UCustomCharacterPart*> Ret = Base;
	if (Loadout.Character) {
		auto CID = Loadout.Character;
		auto Hero = CID->HeroDefinition;
		auto Specializations = Hero->Specializations;
		if (!CID) return Ret;
		if (!Hero) return Ret;
		if (!Specializations.Data) return Ret;

		for (int i = 0; i < Specializations.Num(); i++) {
			auto SpecializationName = Specializations[i].ObjectID.AssetPathName.ToString();
			auto Specialization = LoadObject<UFortHeroSpecialization>(UFortHeroSpecialization::StaticClass(), std::wstring(SpecializationName.begin(), SpecializationName.end()).c_str());
			if (!Specialization) continue;

			auto Parts = Specialization->CharacterParts;
			if (!Parts.Data) continue;


			for (int x = 0; x < Parts.Num(); x++) {
				auto PartName = Parts[x].ObjectID.AssetPathName.ToString();
				auto Part = LoadObject<UCustomCharacterPart>(UCustomCharacterPart::StaticClass(), std::wstring(PartName.begin(), PartName.end()).c_str());
				if (!Part) continue;
				Ret.push_back(Part);
			}
		}
	}

	return Ret;
}

void ApplyDefaultCosmetics(AFortPlayerPawnAthena* Pawn) {
	static auto Head = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH");
	static auto Body = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body");
	static auto Hat = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses");
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, Head);
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, Body);
	//((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Hat, Hat);
}

void ApplyCosmetics(AFortPlayerControllerAthena* PC) {
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	auto Loadout = PC->CustomizationLoadout;
	if (!Pawn) return;
	if (!Loadout.Character) Loadout = Pawn->CustomizationLoadout;

	if (Loadout.Character) {
		Pawn->CustomizationLoadout = Loadout;
		Pawn->OnRep_CustomizationLoadout();
		auto CID = Loadout.Character;
		auto Hero = CID->HeroDefinition;
		auto Specializations = Hero->Specializations;
		if (!CID) return ApplyDefaultCosmetics(Pawn);
		
		if (!Hero) return ApplyDefaultCosmetics(Pawn);
		
		if (!Specializations.Data) return ApplyDefaultCosmetics(Pawn);

		for (int i = 0; i < Specializations.Num(); i++) {
			auto SpecializationName = Specializations[i].ObjectID.AssetPathName.ToString();
			auto Specialization = LoadObject<UFortHeroSpecialization>(UFortHeroSpecialization::StaticClass(), std::wstring(SpecializationName.begin(), SpecializationName.end()).c_str());
			if (!Specialization) continue;
			auto Parts = Specialization->CharacterParts;
			if (!Parts.Data) continue;

			for (int x = 0; x < Parts.Num(); x++) {
				auto PartName = Parts[x].ObjectID.AssetPathName.ToString();
				auto Part = LoadObject<UCustomCharacterPart>(UCustomCharacterPart::StaticClass(), std::wstring(PartName.begin(), PartName.end()).c_str());

				if (!Part) continue;
				Pawn->ServerChoosePart(Part->CharacterPartType, Part);
			}
		}
	}
	else {
		LOG("Loadout Invalid!", false);
		return ApplyDefaultCosmetics(Pawn);
	}
}

UFortWeaponMeleeItemDefinition* GetPlayerPickaxe(AFortPlayerControllerAthena* PC) {
	static auto DefaultPickaxe = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
	auto Pickaxe = DefaultPickaxe;
	auto Loadout = PC->CustomizationLoadout;
	if (!Loadout.Character) Loadout = reinterpret_cast<AFortPlayerPawnAthena*>(PC->Pawn)->CustomizationLoadout;
	if (Loadout.Pickaxe) Pickaxe = Loadout.Pickaxe->WeaponDefinition;
	return Pickaxe;
}

namespace Hooks {
	void (*HandleReloadCost)(AFortWeapon* Weapon, int AmmoToRemove);
	void HandleReloadCost_Hk(AFortWeapon* Weapon, int AmmoToRemove) {
		auto Pawn = (AFortPlayerPawnAthena*)Weapon->GetOwner();
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		if (!Weapon) return;
		if (!Pawn) return;
		if (!PC) return;

		FFortItemEntry Entry = Inventory::GetEntryInInv(PC, Weapon->ItemEntryGuid);
		auto Item = (UFortWorldItemDefinition*)Weapon->WeaponData;
		if (!Entry.ItemDefinition) return;
		if (!Item) return;
			
		auto WorldInventory = PC->WorldInventory;
		if (!Item->GetName().contains("WID_")) {
			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
				if (WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == Entry.ItemGuid) {
					HandleReloadCost(Weapon, AmmoToRemove);
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
		if (!AmmoDef) return;
		Inventory::AddItem(PC, AmmoDef, -AmmoToRemove, 0, EFortQuickBars::Secondary);
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
	}

	void SpawnFloorLoot() {
		TArray<AActor*> FloorLootActors;
		GGameplayStatics->GetAllActorsOfClass(GEngine->GameViewport->World, UObject::FindObjectFast<UClass>("Tiered_Athena_FloorLoot_01_C"), &FloorLootActors);
		for (int i = 0; i < FloorLootActors.Num(); i++) {
			auto Actor = FloorLootActors[i];

			FVector Location = Actor->K2_GetActorLocation();

			auto ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
			while (!ItemDef) ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
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

		if (FuncName == "HandleStartingNewPlayer") {
			AFortPlayerControllerAthena* PlayerController = *(AFortPlayerControllerAthena**)Params;
			auto Connection = PlayerController->NetConnection;
			Replication::ReplicateToClient(PlayerController, Connection);
			Replication::ReplicateToClient(PlayerController->PlayerState, Connection);
			Replication::ReplicateToClient(GEngine->GameViewport->World->GameState, Connection);
			auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
			APlayerPawn_Athena_C* Pawn = SpawnPawn();
			Pawn->bCanBeDamaged = false;
			Pawn->PlayerState = PlayerState;
			Pawn->OnRep_PlayerState();
			PlayerController->Possess(Pawn);
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

			auto WorldInventory = SpawnActor<AFortInventory>({ 0,0,0 }, PlayerController);
			WorldInventory->InventoryType = EFortInventoryType::World;
			WorldInventory->Inventory = FFortItemList();
			WorldInventory->Inventory.ReplicatedEntries = TArray<struct FFortItemEntry>(6);
			WorldInventory->Inventory.ItemInstances = TArray<class UFortWorldItem*>(6);
			WorldInventory->SetOwner(PlayerController);
			PlayerController->WorldInventory = WorldInventory;
			AFortQuickBars* QuickBars = SpawnActor<AFortQuickBars>({ 0,0,0 }, PlayerController);
			QuickBars->SetOwner(PlayerController);
			PlayerController->QuickBars = QuickBars;

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

			PlayerController->CheatManager = (UCheatManager*)GGameplayStatics->SpawnObject(UFortCheatManager::StaticClass(), PlayerController);
		}

		//Battle Bus
		if (FuncName == "ServerAttemptAircraftJump") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			APlayerPawn_Athena_C* Pawn = SpawnPawn(((AFortGameStateAthena*)GEngine->GameViewport->World->GameState)->GetAircraft()->K2_GetActorLocation());
			PlayerController->Possess(Pawn);
			auto HealthSet = reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->HealthSet;
			Pawn->SetMaxHealth(100);
			Pawn->SetHealth(100);
#ifndef LATEGAME
			HealthSet->CurrentShield.Minimum = 0;
			HealthSet->CurrentShield.Maximum = 100;
			HealthSet->CurrentShield.BaseValue = 0;
			HealthSet->CurrentShield.CurrentValue = 0;
			HealthSet->Shield.Minimum = 0;
			HealthSet->Shield.Maximum = 100;
			HealthSet->Shield.BaseValue = 100;
			HealthSet->Shield.CurrentValue = 100;
#else
			static UFortWeaponRangedItemDefinition* AR = Inventory::LootPool[1];//UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
			static UFortWeaponRangedItemDefinition* SG = Inventory::LootPool[13];//UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
			static UFortWeaponRangedItemDefinition* SJ = Inventory::Consumables[1];//UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition Athena_PurpleStuff.Athena_PurpleStuff");

			Inventory::AddItem(PlayerController, Wood, 999, 0, EFortQuickBars::Secondary);
			Inventory::AddItem(PlayerController, Stone, 999, 0, EFortQuickBars::Secondary);
			Inventory::AddItem(PlayerController, Metal, 999, 0, EFortQuickBars::Secondary);
			Inventory::AddItem(PlayerController, SG, 1, 1, EFortQuickBars::Primary);
			Inventory::AddItem(PlayerController, AR, 1, 2, EFortQuickBars::Primary);
			Inventory::AddItem(PlayerController, SJ, 1, 3, EFortQuickBars::Primary);
			for (auto Item : Inventory::Ammo) {
				Inventory::AddItem(PlayerController, Item, 999, 0, EFortQuickBars::Secondary);
			}

			HealthSet->CurrentShield.Minimum = 0;
			HealthSet->CurrentShield.Maximum = 100;
			HealthSet->CurrentShield.BaseValue = 100;
			HealthSet->CurrentShield.CurrentValue = 0;
			HealthSet->Shield.Minimum = 0;
			HealthSet->Shield.Maximum = 100;
			HealthSet->Shield.BaseValue = 100;
			HealthSet->Shield.CurrentValue = 100;
#endif
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
			if (!PlayerController || !PlayerController->Pawn || reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->IsDead() || !InParams) {
				return ProcessEventO(Obj, Func, Params);
			}

			Inventory::EquipInventoryItem(PlayerController, InParams->ItemGuid);

			auto Weapon = reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->CurrentWeapon;
			if (Weapon && Weapon->Class && Weapon->IsA(AFortWeap_BuildingTool::StaticClass())) {
				AFortWeap_BuildingTool* BuildingTool = reinterpret_cast<AFortWeap_BuildingTool*>(Weapon);
				if (Weapon->WeaponData) {
					BuildingTool->DefaultMetadata = reinterpret_cast<UFortBuildingItemDefinition*>(Weapon->WeaponData)->BuildingMetaData.Get();
					BuildingTool->OnRep_DefaultMetadata();
				}
			}
		}

		if (FuncName == "ServerHandlePickup") {
			auto Pawn = (AFortPlayerPawn*)Obj;
			auto InParams = (Params::AFortPlayerPawn_ServerHandlePickup_Params*)Params;
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;

			if (!InParams->Pickup || !InParams->Pickup->PrimaryPickupItemEntry.ItemDefinition) return ProcessEventO(Obj, Func, Params);

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
						while (!ItemDef) ItemDef = Inventory::Ammo[rand() % (Inventory::Ammo.size())];
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
					while (!ItemDef) ItemDef = Inventory::LootPool[rand() % (Inventory::LootPool.size())];
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

		//Harvesting
		if (FuncName == "ClientReportDamagedResourceBuilding") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ClientReportDamagedResourceBuilding_Params*)Params;
			UFortResourceItemDefinition* ItemDef = nullptr;
			if (InParams->PotentialResourceType == EFortResourceType::Wood) ItemDef = Wood;
			if (InParams->PotentialResourceType == EFortResourceType::Stone) ItemDef = Stone;
			if (InParams->PotentialResourceType == EFortResourceType::Metal) ItemDef = Metal;

			if (ItemDef != nullptr) Inventory::AddItem(PlayerController, ItemDef, InParams->PotentialResourceCount, 0, EFortQuickBars::Secondary);
		}

		if (FuncName == "OnDamageServer") {
			if (Obj->IsA(ABuildingSMActor::StaticClass())) {
				auto BuildingActor = (ABuildingSMActor*)Obj;
				auto InParams = (Params::ABuildingActor_OnDamageServer_Params*)Params;
				//static UFortWeaponMeleeItemDefinition* PicaxeDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
				if (InParams->InstigatedBy && InParams->InstigatedBy->IsA(AFortPlayerController::StaticClass()) && !BuildingActor->bPlayerPlaced) {
					AFortPlayerControllerAthena* FortController = (AFortPlayerControllerAthena*)InParams->InstigatedBy;
					UFortWeaponMeleeItemDefinition* PickaxeDef = GetPlayerPickaxe(FortController);
					if (FortController && FortController->MyFortPawn && FortController->MyFortPawn->CurrentWeapon && FortController->MyFortPawn->CurrentWeapon->WeaponData == PickaxeDef)
						FortController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, 6, BuildingActor->bDestroyed, (InParams->Damage == 100.f));
				}
			}
		}

		//Late Game
#ifdef LATEGAME
		if (FuncName == "OnSafeZoneStateChange") {
			AFortGameModeAthena* GM = reinterpret_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);
			auto InParams = (Params::AFortSafeZoneIndicator_OnSafeZoneStateChange_Params*)Params;
			AFortSafeZoneIndicator* Indicator = (AFortSafeZoneIndicator*)Obj;
			Indicator->NextCenter = (FVector_NetQuantize100)SZLoc;
			Indicator->LastCenter = (FVector_NetQuantize100)SZLoc;
			Indicator->Radius = 10000;
			Indicator->NextRadius = 10000;
			Indicator->LastRadius = 10000;
			if (GM->SafeZonePhase == 0 || GM->SafeZonePhase == 1) {
				GM->SafeZonePhase = 2;
			}
			else {
				Indicator->SafeZoneFinishShrinkTime = 99999;
			}
		}

		if (FuncName == "OnAircraftEnteredDropZone") {
			static bool Set = false;
			if (!Set) {
				Set = true;
				SZLoc = FVector(GetRandomFoundation()->K2_GetActorLocation() + FVector{ 0,0,10000 });
				AFortGameModeAthena* GM = reinterpret_cast<AFortGameModeAthena*>(Obj);
				AFortGameStateAthena* GS = reinterpret_cast<AFortGameStateAthena*>(GM->GameState);
				auto AC = GS->GetAircraft();
				AC->FlightEndTime = 1.0f;
				AC->FlightSpeed = 0.0f;
				AC->FlightStartLocation = SZLoc;
				AC->K2_TeleportTo(AC->FlightStartLocation, AC->K2_GetActorRotation());
				GS->OnRep_Aircraft();
				GS->SafeZonesStartTime = 1;
				GS->GamePhase = EAthenaGamePhase::SafeZones;
				GS->OnRep_GamePhase(EAthenaGamePhase::Aircraft);
				GS->SafeZonesStartTime = 1;
			}
		}
#endif

		//Misc
		if (FuncName == "ServerCheat" || FuncName == "ServerCheatAll" || FuncName == "CheatAll" || FuncName == "ServerPlayEmoteItem") return;

		//Death and Winning Logic
		if (FuncName == "ClientOnPawnDied") {
			auto InParams = (Params::AFortPlayerControllerZone_ClientOnPawnDied_Params*)Params;
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			PlayerController->bMarkedAlive = false;
			reinterpret_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState)->PlayersLeft--;
			auto Pickaxe = PlayerController->QuickBars->PrimaryQuickBar.Slots[0].Items[0];
			for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
				auto Item = PlayerController->WorldInventory->Inventory.ItemInstances[i];
				if (Item && Item->GetItemGuid() != Pickaxe) Inventory::DropItem(PlayerController, Item->GetItemGuid());
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

			PlayerController->Pawn->K2_DestroyActor();
		}

		if (FuncName == "ServerLoadingScreenDropped") {
			auto PlayerController = (AFortPlayerControllerAthena*)Obj;
			reinterpret_cast<bool(*)(AFortPlayerControllerAthena*)>(Base + 0x424E40)(PlayerController); //GetOrInitializeHero (Applys the loadout)
			ApplyCosmetics(PlayerController);
			Inventory::AddItem(PlayerController, GetPlayerPickaxe(PlayerController), 1, 0);
			PlayerController->QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
		}

		//Only allows equipped cosmetics
		if (FuncName == "ServerChoosePart") {
			auto InParams = (Params::AFortPlayerPawn_ServerChoosePart_Params*)(Params);
			if (!InParams->ChosenCharacterPart) return;
			else {
				auto Pawn = reinterpret_cast<AFortPlayerPawnAthena*>(Obj);
				bool Allowed = false;
				for (auto Part : GetPlayerParts(reinterpret_cast<AFortPlayerControllerAthena*>(Pawn->Controller))) {
					if (InParams->ChosenCharacterPart == Part) {
						Allowed = true;
						break;
					}
				}
				if (!Allowed) return;
			}
		}

		//Building
		if (FuncName == "ServerCreateBuildingActor") {
			auto InParams = (Params::AFortPlayerController_ServerCreateBuildingActor_Params*)(Params);
			if (InParams) {
				auto Class = InParams->BuildingClassData.BuildingClass;
				auto Loc = InParams->BuildLoc;
				auto Rot = InParams->BuildRot;

				ABuildingSMActor* Build = (ABuildingSMActor*)SpawnActor2(Class, Rot, Loc);

				if (Build) {
					auto PC = (AFortPlayerControllerAthena*)(Obj);
					Build->bPlayerPlaced = true;
					Build->SetMirrored(InParams->bMirrored);
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
		}

		if (FuncName == "ServerEditBuildingActor") {
			AFortPlayerController* PC = (AFortPlayerController*)(Obj);
			auto InParams = (Params::AFortPlayerController_ServerEditBuildingActor_Params*)(Params);
			if (InParams->BuildingActorToEdit) {
				auto Loc = InParams->BuildingActorToEdit->K2_GetActorLocation();
				auto Rot = InParams->BuildingActorToEdit->K2_GetActorRotation();
				auto ForwardVector = InParams->BuildingActorToEdit->GetActorForwardVector();
				auto RightVector = InParams->BuildingActorToEdit->GetActorRightVector();
				if (InParams->BuildingActorToEdit->BuildingType != EFortBuildingType::Wall)
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
						break;
					}
				}
				Rot.Yaw = (round(float((int(Rot.Yaw) + 360) % 360) / 10) * 10) + 90 * InParams->RotationIterations;
				InParams->BuildingActorToEdit->K2_DestroyActor();
				ABuildingSMActor* Build = (ABuildingSMActor*)SpawnActor2(InParams->NewBuildingClass, Rot, Loc);

				if (Build) {
					Build->bPlayerPlaced = true;
					Build->SetMirrored(InParams->bMirrored);
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
				if (EditTool) {
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

		//Crash & Kick Fixes
		CreateHook(Base + Offsets::NoReservation, Patch, nullptr);
		CreateHook(Base + Offsets::KickPlayer, Patch, nullptr);
		CreateHook(Base + Offsets::ValidationFailure, Patch, nullptr);
		CreateHook(Base + Offsets::CollectGarbageInternal, Patch, nullptr);

		//Reloading
		CreateHook(Base + Offsets::HandleReloadCost, Hooks::HandleReloadCost_Hk, (void**)&Hooks::HandleReloadCost);

		//Dedi Server
		CreateHook(Base + Offsets::GetNetMode, Patch, nullptr);
		//Fix Profile Query
		CreateHook(Base + Offsets::DispatchRequest, DispatchRequest_Hk, (void**)&DispatchRequestOG);

		GEngine->GameInstance->LocalPlayers.RemoveAt(0);

	}
}
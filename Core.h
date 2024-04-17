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
	if (PC->CheatManager) {
		//Idk if this is needed
		((UFortCheatManager*)PC->CheatManager)->BackpackSetSize(5);
	}
}

bool IsValidLoadout(FFortAthenaLoadout Loadout) {
	if (Loadout.Character && Loadout.Glider && Loadout.Pickaxe) return true;
	return false;
}

static std::vector<UCustomCharacterPart*> BaseParts;

std::vector<UCustomCharacterPart*> GetPlayerParts(AFortPlayerControllerAthena* PC) {
	auto Loadout = PC->CustomizationLoadout;
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	std::vector<UCustomCharacterPart*> Ret = BaseParts;
	if (IsValidLoadout(Loadout)) {
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
	static auto Head = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH");
	static auto Body = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body");
	//static auto Hat = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses");
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Head, Head);
	((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Body, Body);
	//((AFortPlayerPawnAthena*)Pawn)->ServerChoosePart(EFortCustomPartType::Hat, Hat);
}

void ApplyCosmetics(AFortPlayerControllerAthena* PC) {
#ifndef BE
	return ApplyDefaultCosmetics(reinterpret_cast<AFortPlayerPawnAthena*>(PC->Pawn));
#endif
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (!Pawn) {
		return;
	}
	auto Loadout = PC->CustomizationLoadout;

	if (IsValidLoadout(Loadout)) {
		Pawn->CustomizationLoadout = Loadout;
		Pawn->OnRep_CustomizationLoadout();
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
		LOG("Loadout Invalid!", false);
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

//Skunky Hardcoded AI (Not working) (Skidded Poalris Lmao)
namespace AI {
	enum class EWeaponType : uint8_t {
		Pickaxe,
		Light,
		Medium,
		Shotgun,
		Heavy,
		Rocket,
		Other,
		None
	};

	class AFortAIPlayer {
	public:
		//Config Vars
		AAthena_PlayerController_C* MyPC;
		UAthenaCharacterItemDefinition* Skin;
		UFortWeaponMeleeItemDefinition* Pickaxe;
		APawn* TargetPlayerPawn = nullptr;
		//Temp Inventory Mapping
		std::vector<UFortWeaponItemDefinition*> Items = {
			{nullptr}, //Slot 0 Pickaxe
			{nullptr}, //Slot 1 (SMG/Pistol)
			{nullptr}, //Slot 2 (AR/Pistol)
			{nullptr}, //Slot 3 (Shotgun)
			{nullptr}, //Slot 4 (Explosive/Sniper)
			{nullptr}  //Slot 5 (Heals) 
		};
		int LAmmo = 100; //Light
		int MAmmo = 100; //Medium
		int SAmmo = 100; //Shotgun
		int HAmmo = 100; //Heavy
		int RAmmo = 100; //Rocket
		int HCount = 100; //Healing
		bool bTick = false;

		int CurrentSlot = 0;

		AFortPlayerPawnAthena* GetAIPawn() {
			AFortPlayerPawnAthena* MyPawn = (AFortPlayerPawnAthena*)MyPC->Pawn;
			if (!MyPawn) {
				bTick = false;
				return nullptr;
			}
			return MyPawn;
		}

		EWeaponType GetWeaponType() {
			auto CurrentItem = Items[CurrentSlot];
			if (!CurrentItem) {
				return EWeaponType::None;
			}
			else if (CurrentSlot == 0) {
				return EWeaponType::Pickaxe;
			}
			else if (CurrentSlot == 5 || Inventory::IsConsumable(CurrentItem)) {
				return EWeaponType::Other;
			}
			else {
				auto AmmoType = CurrentItem->GetAmmoWorldItemDefinition_BP();
				if (AmmoType == Inventory::Ammo[0]) {
					return EWeaponType::Rocket;
				}
				else if (AmmoType == Inventory::Ammo[1]) {
					return EWeaponType::Shotgun;
				}
				else if (AmmoType == Inventory::Ammo[2]) {
					return EWeaponType::Medium;
				}
				else if (AmmoType == Inventory::Ammo[3]) {
					return EWeaponType::Light;
				}
				else if (AmmoType == Inventory::Ammo[4]) {
					return EWeaponType::Heavy;
				}
				else {
					return EWeaponType::None;
				}
			}
		}

		void EquipItem(UFortWeaponItemDefinition* Weapon) {
			auto MyPawn = GetAIPawn();
			if (bTick) {
				MyPawn->EquipWeaponDefinition(Weapon, {});
			}
		}

		void Reload(EWeaponType Type) {
			int y = sizeof(AFortAIPlayer);
		}

		bool HandlePreShot() {
			if (bTick) {
				EWeaponType Type = GetWeaponType();
				bool bNeedsReload = false;
				if (Type == EWeaponType::Pickaxe) {
					return true;
				}
				if (Type == EWeaponType::Light) {
					if (LAmmo > 0) {
						LAmmo--;
					}
					else {
						bNeedsReload = true;
					}
				}
				else if (Type == EWeaponType::Medium) {
					if (MAmmo > 0) {
						MAmmo--;
					}
					else {
						bNeedsReload = true;
					}
				}
				else if (Type == EWeaponType::Shotgun) {
					if (SAmmo > 0) {
						SAmmo--;
					}
					else {
						bNeedsReload = true;
					}
				}
				else if (Type == EWeaponType::Heavy) {
					if (HAmmo > 0) {
						HAmmo--;
					}
					else {
						bNeedsReload = true;
					}
				}
				else if (Type == EWeaponType::Rocket) {
					if (RAmmo > 0) {
						RAmmo--;
					}
					else {
						bNeedsReload = true;
					}
				}
				else if (Type == EWeaponType::Other) {
					if (HCount > 0) {
						HCount--;
					}
					else {
						return false;
					}
				}
				if (!bNeedsReload) {
					return true;
				}
				else {
					Reload(Type);
				}
			}
			return false;
		}

		void Shoot() {
			auto MyPawn = GetAIPawn();
			if (bTick && HandlePreShot()) {
				MyPawn->PawnStartFire(0);
				Sleep(2000);
			}
		}

		static void Tick(AFortAIPlayer* Player) {
			static auto MathLib = (UKismetMathLibrary*)UObject::FindObjectFast<UKismetMathLibrary>("Default__KismetMathLibrary");
			while (true) {
				Sleep(1000 / 30);
				if (Player->bTick) {
					auto MyPawn = Player->GetAIPawn();
					if (Player->bTick && Player->TargetPlayerPawn) {
						FVector loc = MathLib->Subtract_VectorVector(
							Player->TargetPlayerPawn->K2_GetActorLocation(),
							MyPawn->K2_GetActorLocation());
						MyPawn->AddMovementInput(loc, 1, true);
						FRotator rot = MathLib->Conv_VectorToRotator(loc);
						Player->MyPC->ControlRotation = rot;
						rot.Pitch = 0;
						MyPawn->K2_SetActorRotation(rot, false);
						MyPawn->CurrentMovementStyle = EFortMovementStyle::Sprinting;
						Player->Shoot();
					}
				}
				else {
					return;
				}
			}
		}

		static AFortAIPlayer* CreateBot(FVector Pos, FString InPlayerName) {
			static UFortHeroType* DefHeroType = UObject::FindObject<UFortHeroType>("FortHeroType HID_001_Athena_Commando_F.HID_001_Athena_Commando_F");
			APlayerPawn_Generic_C* Pawn = SpawnActor<APlayerPawn_Generic_C>(Pos, nullptr);
			if (Pawn) {
				Pawn->bCanBeDamaged = false;
				//Pawn is valid continue spawning
				AAthena_PlayerController_C* PC = SpawnActor<AAthena_PlayerController_C>(Pos, nullptr);
				PC->Player = (UPlayer*)GGameplayStatics->SpawnObject(UPlayer::StaticClass(), PC);
				PC->Player->PlayerController = PC;
				PC->Possess(Pawn);
				Pawn->PawnUniqueID = (rand() % 100);
				Pawn->OnRep_PawnUniqueID();
				AFortPlayerStateAthena* PS = SpawnActor<AFortPlayerStateAthena>(Pos, PC);
				Pawn->PlayerState = PS;
				Pawn->OnRep_PlayerState();
				PC->PlayerState = PS;
				PC->OnRep_PlayerState();
				PC->ServerChangeName(InPlayerName);
				PS->HeroType = DefHeroType;
				PS->OnRep_HeroType();
				Pawn->SetMaxHealth(100.0f);
				Pawn->SetHealth(100.0f);
				Pawn->CurrentMovementStyle = SDK::EFortMovementStyle::Sprinting;
				PS->bIsSpectator = false;
				PS->bIsABot = true;
				PS->bHasFinishedLoading = true;
				PS->bHasStartedPlaying = true;
				PS->OnRep_bHasStartedPlaying();
				ApplyDefaultCosmetics((AFortPlayerPawnAthena*)Pawn);
				PS->OnRep_CharacterParts();
				AFortAIPlayer* Ret = {};
				Ret->MyPC = PC;
				Ret->Items[2] = Inventory::LootPool[0];
				Ret->CurrentSlot = 2;
				Ret->bTick = true;
				return Ret;
			}
			else {
				MessageBoxA(0, "Bot no work", "Ratio", MB_OK);
				return nullptr;
			}
		}
	};
}

namespace Hooks {
	void (*HandleReloadCost)(AFortWeapon* Weapon, int AmmoToRemove);
	void HandleReloadCost_Hk(AFortWeapon* Weapon, int AmmoToRemove) {
		if (!Weapon) {
			return;
		}
		auto Pawn = (AFortPlayerPawnAthena*)Weapon->Owner;
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
		if (!AmmoDef) {
			return;
		}
		Inventory::AddItem(PC, AmmoDef, -AmmoToRemove, 0, EFortQuickBars::Secondary);
	}
}

void SpectateFix(AFortPlayerControllerAthena* PC) {
	Sleep(3000);
	PC->SpectateOnDeath();
	return;
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

	void (*ApplyHomebaseEffectsOnPlayerSetupOG)(AFortGameState* GameState, __int64 a2, __int64 a3, APlayerController* PlayerController, UFortHero* Hero, char a6, unsigned __int8 a7);
	//Idk if PlayerController is actually a Player Controller but oh well
	void ApplyHomebaseEffectsOnPlayerSetup_Hk(AFortGameState* GameState, __int64 a2, __int64 a3, APlayerController* PlayerController, UFortHero* Hero, char a6, unsigned __int8 a7) {
		if (!Hero) {
			return ApplyHomebaseEffectsOnPlayerSetupOG(GameState, a2, a3, PlayerController, Hero, a6, a7);
		}
		else {
			static UFortHeroType* HeroType = UObject::FindObject<UFortHeroType>("FortHeroType HID_001_Athena_Commando_F.HID_001_Athena_Commando_F");
			Hero->ItemDefinition = HeroType;
			return ApplyHomebaseEffectsOnPlayerSetupOG(GameState, a2, a3, PlayerController, Hero, a6, a7);
		}
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
			BaseParts.push_back(UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH"));
			BaseParts.push_back(UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart CP_001_Athena_Body.CP_001_Athena_Body"));
			BaseParts.push_back(UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Ramirez_Glasses.Ramirez_Glasses"));
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
			PlayerController->Possess(Pawn);
			Replication::ReplicateToClient(Pawn, Connection);
			PlayerController->bHasClientFinishedLoading = true;
			PlayerController->bHasServerFinishedLoading = true;
			PlayerController->OnRep_bHasServerFinishedLoading();
			PlayerController->ServerReadyToStartMatch();
			ApplyDefaultCosmetics(Pawn);
			PlayerState->OnRep_CharacterParts();

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

			PlayerController->CheatManager = (UCheatManager*)GGameplayStatics->SpawnObject(UFortCheatManager::StaticClass(), PlayerController);
#ifdef RESPAWNING
			PlayerController->bBuildFree = true;
			PlayerController->bInfiniteAmmo = true;
#endif
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

			Inventory::AddItem(PlayerController, SG, 1, 1, EFortQuickBars::Primary);
			Inventory::AddItem(PlayerController, AR, 1, 2, EFortQuickBars::Primary);
			Inventory::AddItem(PlayerController, SJ, 1, 3, EFortQuickBars::Primary);

			PlayerController->bBuildFree = true;
			PlayerController->bInfiniteAmmo = true;

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
			if (InParams) {
				FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
				FPredictionKey PredictionKey = InParams->PredictionKey;

				static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

				auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, AbilityToActivate);
				if (Spec) {
					Spec->InputPressed = true;

					UGameplayAbility* InstancedAbility = nullptr;
					FGameplayEventData* TriggerEventData = nullptr;

					if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
						ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Current);
						return;
					}

					reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
				}
			}
		}

		if (FuncName == "ServerTryActivateAbilityWithEventData") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Params;
			if (InParams) {
				FGameplayAbilitySpecHandle AbilityToActivate = InParams->AbilityToActivate;
				FPredictionKey PredictionKey = InParams->PredictionKey;

				static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

				auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, AbilityToActivate);
				if (Spec) {
					Spec->InputPressed = true;

					UGameplayAbility* InstancedAbility = nullptr;
					FGameplayEventData* TriggerEventData = nullptr;

					if (!InternalTryActivateAbility(ASC, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, &InParams->TriggerEventData)) {
						ASC->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey.Current);
						return;
					}

					reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
				}
			}
		}

		if (FuncName == "ServerAbilityRPCBatch") {
			UAbilitySystemComponent* ASC = (UAbilitySystemComponent*)Obj;
			auto InParams = (Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Params;
			if (InParams) {
				static auto InternalTryActivateAbility = reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility * *OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData)>(Base + Offsets::InternalTryActivateAbility);

				auto Spec = Abilities::FindAbilitySpecFromHandle(ASC, InParams->BatchInfo.AbilitySpecHandle);
				if (Spec) {
					Spec->InputPressed = true;

					UGameplayAbility* InstancedAbility = nullptr;
					FGameplayEventData* TriggerEventData = nullptr;

					if (!InternalTryActivateAbility(ASC, InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
						ASC->ClientActivateAbilityFailed(InParams->BatchInfo.AbilitySpecHandle, InParams->BatchInfo.PredictionKey.Current);
						return;
					}

					reinterpret_cast<bool(*)(UAbilitySystemComponent * ASC, FGameplayAbilitySpec & Spec)>(Base + Offsets::MarkAbilitySpecDirty)(ASC, *Spec);
				}
			}
		}

		//Inventory
		if (FuncName == "ServerExecuteInventoryItem") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerExecuteInventoryItem_Params*)Params;
			if (!PlayerController || !PlayerController->Pawn || reinterpret_cast<AFortPlayerPawnAthena*>(PlayerController->Pawn)->IsDead() || !InParams) {
				return ProcessEventO(Obj, Func, Params);
			}

			auto Weapon = Inventory::EquipInventoryItem(PlayerController, InParams->ItemGuid);
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
			if (InParams) {
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
		}

		if (FuncName == "ServerSpawnInventoryDrop") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerSpawnInventoryDrop_Params*)Params;
			if (InParams) {
				Inventory::DropItem(PlayerController, InParams->ItemGuid);
			}
		}

		//Interacting
		if (FuncName == "ServerAttemptInteract") {
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
			auto InParams = (Params::AFortPlayerController_ServerAttemptInteract_Params*)Params;
			if (InParams) {
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
		}

		//Harvesting
		if (FuncName == "ClientReportDamagedResourceBuilding") {
			auto InParams = (Params::AFortPlayerController_ClientReportDamagedResourceBuilding_Params*)Params;
			if (InParams) {
				AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;

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
		}

		if (FuncName == "OnDamageServer") {
			if (Obj->IsA(ABuildingSMActor::StaticClass())) {
				auto BuildingActor = (ABuildingSMActor*)Obj;
				auto InParams = (Params::ABuildingActor_OnDamageServer_Params*)Params;
				//static UFortWeaponMeleeItemDefinition* PicaxeDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
				if (InParams && InParams->InstigatedBy && InParams->InstigatedBy->IsA(AFortPlayerController::StaticClass()) && !BuildingActor->bPlayerPlaced) {
					AFortPlayerControllerAthena* FortController = (AFortPlayerControllerAthena*)InParams->InstigatedBy;
					UFortWeaponMeleeItemDefinition* PickaxeDef = GetPlayerPickaxe(FortController);
					if (FortController && FortController->MyFortPawn && FortController->MyFortPawn->CurrentWeapon && FortController->MyFortPawn->CurrentWeapon->WeaponData == PickaxeDef)
						FortController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, 6, BuildingActor->bDestroyed, (InParams->Damage == 100.f));
				}
			}
		}

		//Late Game
#ifdef LATEGAME
		float ElapsedTime = 0.0f;

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
				// Incrementar el tiempo transcurrido en cada llamada a la función
				//ElapsedTime += DeltaTime;

				// Si han pasado 140 segundos, cerrar el círculo de la tormenta
				if (ElapsedTime >= 140.0f) {
					Indicator->SafeZoneFinishShrinkTime = 99999;
					// Reiniciar el tiempo transcurrido para contar los siguientes 140 segundos
					ElapsedTime = 0.0f;
				}
			}
		}

		if (FuncName == "OnAircraftEnteredDropZone") {
			static bool Set = false;
			if (!Set) {
				Set = true;
				auto POI = GetRandomFoundation();
				while (!POI) {
					POI = GetRandomFoundation();
				}
				SZLoc = FVector(POI->K2_GetActorLocation() + FVector{ 0,0,10000 });
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
		if (FuncName == "ServerCheat" || FuncName == "ServerCheatAll" || FuncName == "CheatAll" || FuncName == "ServerPlayEmoteItem") {
			return;
		}

		//Death and Winning Logic
		if (FuncName == "ClientOnPawnDied") {
			auto InParams = (Params::AFortPlayerControllerZone_ClientOnPawnDied_Params*)Params;
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Obj;
#ifdef RESPAWNING
			GEngine->GameViewport->World->AuthorityGameMode->RestartPlayer(PlayerController);
			APlayerPawn_Athena_C* Pawn = SpawnPawn((FVector)(reinterpret_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode))->SafeZoneIndicator->NextCenter);
			PlayerController->Possess(Pawn);
			reinterpret_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->DeathInfo = {};
			reinterpret_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->OnRep_DeathInfo();
			Abilities::GiveBaseAbilities(Pawn);
			ApplyCosmetics(PlayerController);
			PlayerController->bMarkedAlive = true;
#else
			PlayerController->bMarkedAlive = false;
			reinterpret_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState)->PlayersLeft--;
			auto Pickaxe = PlayerController->QuickBars->PrimaryQuickBar.Slots[0].Items[0];
			for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
				auto Item = PlayerController->WorldInventory->Inventory.ItemInstances[i];
				if (Item && Item->GetItemGuid() != Pickaxe && !Item->IsA(UFortBuildingItemDefinition::StaticClass()) && !Item->IsA(UFortEditToolItemDefinition::StaticClass())) {
					Inventory::DropItem(PlayerController, Item->GetItemGuid());
				}
			}
			if (InParams->DeathReport.KillerPawn) {
				auto KPP = InParams->DeathReport.KillerPawn;
				auto KPC = (AFortPlayerControllerAthena*)KPP->Controller;

				PlayerController->PlayerToSpectateOnDeath = KPP;
				CreateThread(0, 0, (LPTHREAD_START_ROUTINE)SpectateFix, PlayerController, 0, 0);

				if (reinterpret_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState)->PlayersLeft < 2) {
					if (KPC) {
						KPC->ClientNotifyWon();
						KPC->PlayWinEffects();
					}
				}
			}
#endif
		}

		if (FuncName == "ServerLoadingScreenDropped") {
			auto PlayerController = (AFortPlayerControllerAthena*)Obj;
			if (!PlayerController->PlayerState->bIsABot) {
				reinterpret_cast<bool(*)(AFortPlayerControllerAthena*)>(Base + 0x424E40)(PlayerController); //GetOrInitializeHero (Applys the loadout)
				ApplyCosmetics(PlayerController);
				Inventory::AddItem(PlayerController, GetPlayerPickaxe(PlayerController), 1, 0);
				PlayerController->QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
				/*
				auto AITest = AI::AFortAIPlayer::CreateBot(PlayerController->Pawn->K2_GetActorLocation() + FVector{ 500,0,0 }, L"TestPlayer1");
				AITest->TargetPlayerPawn = PlayerController->Pawn;
				CreateThread(0, 0, (LPTHREAD_START_ROUTINE)AI::AFortAIPlayer::Tick, AITest, 0, 0);
				*/
			}
		}

		if (FuncName == "ServerReturnToMainMenu") {
			AFortPlayerController* PC = (AFortPlayerController*)(Obj);

			PC->bIsDisconnecting = true;

			PC->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
		}

		//Only allows equipped cosmetics
		if (FuncName == "ServerChoosePart") {
			auto InParams = (Params::AFortPlayerPawn_ServerChoosePart_Params*)(Params);
			if (!InParams->ChosenCharacterPart) {
				return;
			}
			else {
				auto Pawn = reinterpret_cast<AFortPlayerPawnAthena*>(Obj);
				if (!Pawn->PlayerState->bIsABot) {
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
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Obj;
			if (InParams->BuildingActorToStopEditing) {
				InParams->BuildingActorToStopEditing->EditingPlayer = nullptr;
				InParams->BuildingActorToStopEditing->OnRep_EditingPlayer();

				AFortWeap_EditingTool* EditToolData = (AFortWeap_EditingTool*)reinterpret_cast<APlayerPawn_Athena_C*>(PC->Pawn)->CurrentWeapon;

				if (EditToolData && EditToolData->IsA(AFortWeap_EditingTool::StaticClass())) {
					EditToolData->bEditConfirmed = true;
					EditToolData->EditActor = nullptr;
					EditToolData->OnRep_EditActor();
				}
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
					if (EditToolData) {
						EditToolData->EditActor = InParams->BuildingActorToEdit;
						EditToolData->OnRep_EditActor();
					}
					InParams->BuildingActorToEdit->EditingPlayer = (AFortPlayerStateZone*)PC->PlayerState;
					InParams->BuildingActorToEdit->OnRep_EditingPlayer();
					
				}
			}
		}

		return ProcessEventO(Obj, Func, Params);
	}

	void Init() {
		AllocConsole();
		FILE* pFile;
		freopen_s(&pFile, ("CONOUT$"), "w+", stdout);
		SetConsoleTitleA("WaybackGS - @GDBOI101");
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

		//Health and Shield Fix (Credit: RebootV3)
		CreateHook(Base + Offsets::ApplyHomebaseEffectsOnPlayerSetup, ApplyHomebaseEffectsOnPlayerSetup_Hk, (void**)&ApplyHomebaseEffectsOnPlayerSetupOG);

		//Reloading
		CreateHook(Base + Offsets::HandleReloadCost, Hooks::HandleReloadCost_Hk, (void**)&Hooks::HandleReloadCost);

		//Dedi Server
		CreateHook(Base + Offsets::GetNetMode, Patch, nullptr);

		//Fix Profile Query
		//CreateHook(Base + Offsets::DispatchRequest, DispatchRequest_Hk, (void**)&DispatchRequestOG);


		//God Fix :)
		GEngine->GameInstance->LocalPlayers.RemoveAt(0);
	}
}

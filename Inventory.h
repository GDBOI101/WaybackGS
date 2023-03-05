#pragma once
#include "Includes.h"

static UFortResourceItemDefinition* Wood;
static UFortResourceItemDefinition* Stone;
static UFortResourceItemDefinition* Metal;

namespace Inventory {
	//Crashes
	int GetMaxAmmo(UFortWeaponItemDefinition* ItemDef) {
		if (ItemDef) {
			auto Stats = ItemDef->GetWeaponStatHandle();
			auto DataTable = Stats.DataTable;
			if (DataTable && Stats.RowName.ComparisonIndex != 0) {
				static UDataTableFunctionLibrary* TableFuncLib = UObject::FindObjectFast<UDataTableFunctionLibrary>("Default__DataTableFunctionLibrary");
				FFortBaseWeaponStats* Out = {};
				TableFuncLib->GetDataTableRowFromName(DataTable, Stats.RowName, Out);
				if (Out) {
					return Out->ClipSize;
				}
			}
		}
		return 0;
	}

	void Update(AFortPlayerControllerAthena* PC) {
		auto WorldInventory = PC->WorldInventory;
		auto QuickBars = PC->QuickBars;
		WorldInventory->HandleInventoryLocalUpdate();
		PC->HandleWorldInventoryLocalUpdate();
		WorldInventory->bRequiresLocalUpdate = true;
		PC->OnRep_QuickBar();
		QuickBars->OnRep_PrimaryQuickBar();
		QuickBars->OnRep_SecondaryQuickBar();
		QuickBars->ForceNetUpdate();
		PC->ForceUpdateQuickbar(EFortQuickBars::Primary);
		PC->ForceUpdateQuickbar(EFortQuickBars::Secondary);
		WorldInventory->ForceNetUpdate();
		WorldInventory->Inventory.MarkArrayDirty();
	}

	int GetOpenSlot(AFortPlayerControllerAthena* PC) {
		auto Quickbars = PC->QuickBars;
		for (int i = 0; i < Quickbars->PrimaryQuickBar.Slots.Num(); i++) {
			if (Quickbars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
				return i;
			}
		}
		return -1;
	}

	UFortWorldItem* GetItemInInv(AFortPlayerControllerAthena* PC, UFortItemDefinition* Def) {
		for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (PC->WorldInventory->Inventory.ItemInstances[i]->GetItemDefinitionBP() == Def) {
				return PC->WorldInventory->Inventory.ItemInstances[i];
			}
		}
		return nullptr;
	}

	FFortItemEntry GetEntryInInv(AFortPlayerControllerAthena* PC, FGuid GUID) {
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == GUID) {
				return PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return {};
	}

	std::pair<EFortQuickBars, int> GetItemSlot(AFortPlayerControllerAthena* PC, FGuid GUID) {
		auto Quickbars = PC->QuickBars;
		for (int i = 0; i < Quickbars->PrimaryQuickBar.Slots.Num(); i++) {
			if (Quickbars->PrimaryQuickBar.Slots[i].Items.Data && Quickbars->PrimaryQuickBar.Slots[i].Items[0] == GUID) {
				return std::make_pair(EFortQuickBars::Primary, i);
			}
		}
		for (int i = 0; i < Quickbars->SecondaryQuickBar.Slots.Num(); i++) {
			if (Quickbars->SecondaryQuickBar.Slots[i].Items.Data && Quickbars->SecondaryQuickBar.Slots[i].Items[0] == GUID) {
				return std::make_pair(EFortQuickBars::Secondary, i);
			}
		}
		return std::make_pair(EFortQuickBars::Max_None, -1);
	}

	void SpawnPickup(UFortWorldItem* Item, FVector Loc) {
		FTransform SpawnTransform = {};
		SpawnTransform.Scale3D = { 1,1,1 };
		SpawnTransform.Translation = Loc;
		AFortPickupAthena* Pickup = SpawnActor<AFortPickupAthena>(Loc, nullptr);
		Pickup->PrimaryPickupItemEntry = Item->ItemEntry;
		Pickup->OnRep_PrimaryPickupItemEntry();
		Pickup->TossPickup(Loc, nullptr, Pickup->PrimaryPickupItemEntry.Count, true);
	}

	void DropItem(AFortPlayerControllerAthena* PC, FGuid GUID) {
		auto Slot = GetItemSlot(PC, GUID);
		auto WorldInventory = PC->WorldInventory;
		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == GUID) {
				SpawnPickup(WorldInventory->Inventory.ItemInstances[i], PC->Pawn->K2_GetActorLocation());
				WorldInventory->Inventory.ItemInstances.RemoveAt(i);
				break;
			}
		}
		for (int i = 0; i < WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			if (WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == GUID) {
				WorldInventory->Inventory.ReplicatedEntries.RemoveAt(i);
				break;
			}
		}
		PC->QuickBars->ServerRemoveItemInternal(GUID, false, true);
		if (Slot.first == EFortQuickBars::Primary) {
			PC->QuickBars->EmptySlot(Slot.first, Slot.second);
			PC->QuickBars->PrimaryQuickBar.Slots[Slot.second].Items.Data = nullptr;
			PC->QuickBars->PrimaryQuickBar.Slots[Slot.second].Items.ResetNum();
		}
		else if (Slot.first == EFortQuickBars::Secondary) {
			PC->QuickBars->SecondaryQuickBar.Slots[Slot.second].Items.Data = nullptr;
			PC->QuickBars->SecondaryQuickBar.Slots[Slot.second].Items.ResetNum();
		}
		Update(PC);
		//PC->ServerExecuteInventoryItem(PC->QuickBars->PrimaryQuickBar.Slots[0].Items[0]);
		PC->QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
	}

	UFortWorldItem* AddItem(AFortPlayerControllerAthena* PC, UFortItemDefinition* ItemDef, int Count = 1, int Slot = -1, EFortQuickBars Quickbar = EFortQuickBars::Primary) {
		if (Quickbar == EFortQuickBars::Primary && Slot == -1) {
			Slot = GetOpenSlot(PC);
		}
		auto WorldInventory = PC->WorldInventory;
		auto Quickbars = PC->QuickBars;
		bool Stack = false;
		for (int i = 0; i < WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			auto Item = WorldInventory->Inventory.ReplicatedEntries[i];
			if (Item.ItemDefinition == ItemDef && !Item.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass())) {
				Count += Item.Count;
				WorldInventory->Inventory.ReplicatedEntries.RemoveAt(i);
				Stack = true;
				break;
			}
		}
		if (Stack) {
			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
				auto Item = WorldInventory->Inventory.ItemInstances[i];
				if (Item->GetItemDefinitionBP() == ItemDef) {
					WorldInventory->Inventory.ItemInstances.RemoveAt(i);
					break;
				}
			}
		}

		UFortWorldItem* Item = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);
		Item->SetOwningControllerForTemporaryItem(PC);
		Item->ItemEntry.Count = Count;
		WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
		WorldInventory->Inventory.ItemInstances.Add(Item);
		Quickbars->ServerAddItemInternal(Item->GetItemGuid(), Quickbar, Slot);
		Update(PC);
		return Item;
	}

	std::vector<UFortWeaponRangedItemDefinition*> Loadout{};

	std::vector<UFortWeaponRangedItemDefinition*> LootPool;

	std::vector<UFortWeaponRangedItemDefinition*> Consumables;

	std::vector<UFortWeaponRangedItemDefinition*> Ammo;

	void SetupLoadout() {
		Wood = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
		Stone = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
		Metal = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");

		Loadout = {
			nullptr,//Slot 1
			nullptr,//Slot 2
			nullptr,//Slot 3
			nullptr,//Slot 4
			nullptr,//Slot 5
			nullptr,//Trap
		};

		std::vector<std::string> LootPoolStr
		{
			"FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02",
			"FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_C_Ore_T02.WID_Assault_SemiAuto_Athena_C_Ore_T02",
			"FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_C_Ore_T02.WID_Pistol_AutoHeavy_Athena_C_Ore_T02",
			"FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_C_Ore_T02.WID_Pistol_SemiAuto_Athena_C_Ore_T02",
			"FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_C_Ore_T02.WID_Pistol_SixShooter_Athena_C_Ore_T02",
			"FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_C_Ore_T03.WID_Shotgun_Standard_Athena_C_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_UC_Ore_T03.WID_Assault_SemiAuto_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_UC_Ore_T03.WID_Pistol_AutoHeavy_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_UC_Ore_T03.WID_Pistol_Scavenger_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_UC_Ore_T03.WID_Pistol_SemiAuto_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_UC_Ore_T03.WID_Pistol_SixShooter_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_R_Ore_T03.WID_Assault_SemiAuto_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_Surgical_Athena_R_Ore_T03.WID_Assault_Surgical_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_R_Ore_T03.WID_Pistol_AutoHeavy_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_R_Ore_T03.WID_Pistol_Scavenger_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_R_Ore_T03.WID_Pistol_SemiAuto_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_R_Ore_T03.WID_Pistol_SixShooter_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Shotgun_SemiAuto_Athena_R_Ore_T03.WID_Shotgun_SemiAuto_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_Surgical_Athena_VR_Ore_T03.WID_Assault_Surgical_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_VR_Ore_T03.WID_Pistol_Scavenger_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Shotgun_SemiAuto_Athena_VR_Ore_T03.WID_Shotgun_SemiAuto_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Sniper_Standard_Scope_Athena_VR_Ore_T03.WID_Sniper_Standard_Scope_Athena_VR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03",
			"FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03",
		};

		std::vector<std::string> ConsumablesStr{
			"FortWeaponRangedItemDefinition Athena_Shields.Athena_Shields",
			"FortWeaponRangedItemDefinition Athena_PurpleStuff.Athena_PurpleStuff",
			"FortWeaponRangedItemDefinition Athena_Medkit.Athena_Medkit",
			"FortWeaponRangedItemDefinition Athena_Bandage.Athena_Bandage"
		};

		std::vector<std::string> AmmoStr{
			"FortAmmoItemDefinition AmmoDataRockets.AmmoDataRockets",
			"FortAmmoItemDefinition AthenaAmmoDataShells.AthenaAmmoDataShells",
			"FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium",
			"FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight",
			"FortAmmoItemDefinition AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy"
		};

		for (std::string Item : LootPoolStr) {
			auto Weapon = UObject::FindObject<UFortWeaponRangedItemDefinition>(Item);
			if (Weapon) {
				LootPool.push_back(Weapon);
			}
		}

		for (std::string Item : ConsumablesStr) {
			auto Weapon = UObject::FindObject<UFortWeaponRangedItemDefinition>(Item);
			if (Weapon) {
				Consumables.push_back(Weapon);
			}
		}

		for (std::string Item : AmmoStr) {
			auto Weapon = UObject::FindObject<UFortWeaponRangedItemDefinition>(Item);
			if (Weapon) {
				Ammo.push_back(Weapon);
			}
		}
	}

	void SetupInventory(AFortPlayerControllerAthena* PC) {
		auto WorldInventory = PC->WorldInventory;
		auto Quickbars = PC->QuickBars;
		static auto EditTool = UObject::FindObject<UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
		static auto Wall = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
		static auto Floor = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
		static auto Stair = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
		static auto Roof = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");
		AddItem(PC, EditTool, 1, 0, EFortQuickBars::Primary);
		AddItem(PC, Wall, 1, 0, EFortQuickBars::Secondary);
		AddItem(PC, Floor, 1, 1, EFortQuickBars::Secondary);
		AddItem(PC, Stair, 1, 2, EFortQuickBars::Secondary);
		AddItem(PC, Roof, 1, 3, EFortQuickBars::Secondary);
	}

	AFortWeapon* EquipItem(AFortPlayerControllerAthena* PC, UFortWorldItem* ItemDef) {
		if (PC->Pawn && ItemDef) {
			AFortWeapon* Weapon = reinterpret_cast<AFortPlayerPawn*>(PC->Pawn)->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDef->GetItemDefinitionBP(), ItemDef->ItemEntry.ItemGuid);
			if (Weapon) {
				/*Weapon->WeaponData = (UFortWeaponItemDefinition*)ItemDef->GetItemDefinitionBP();
				Weapon->ItemEntryGuid = ItemDef->GetItemGuid();
				Weapon->SetOwner(PC->Pawn);
				Weapon->OnRep_ReplicatedWeaponData();
				Weapon->OnRep_AmmoCount();
				Weapon->ClientGivenTo(PC->Pawn);
				reinterpret_cast<AFortPlayerPawnAthena*>(PC->Pawn)->ClientInternalEquipWeapon(Weapon);*/
				return Weapon;
			}
		}
		return nullptr;
	}

	AFortWeapon* EquipInventoryItem(AFortPlayerControllerAthena* PC, FGuid ItemGuid) {
		auto WorldInventory = PC->WorldInventory;
		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
			auto Item = WorldInventory->Inventory.ItemInstances[i];
			if (Item && Item->ItemEntry.ItemGuid == ItemGuid) {
				return EquipItem(PC, Item);
			}
		}

		return nullptr;
	}
}
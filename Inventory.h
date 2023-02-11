#pragma once
#include "Includes.h"
namespace Inventory {
	struct QuickbarOffsetFix
	{
		unsigned char UnknownData00[0x1A88];
		AFortQuickBars* QuickBars;
	};
	
	struct WorldInventoryOffsetFix
	{
		unsigned char UnknownData00[0x1D28];
		AFortInventory* WorldInventory;
	};

	struct BuildPreviewMarkerOffsetFix
	{
		unsigned char UnknownData00[0x1788];
		ABuildingPlayerPrimitivePreview* BuildPreviewMarker;
	};
	
	struct BuildPreviewMarkerMIDOffsetFix
	{
		unsigned char UnknownData00[0x1928];
		UMaterialInstanceDynamic* BuildPreviewMarkerMID;
	};
	
	struct CurrentBuildableClassOffsetFix
	{
		unsigned char UnknownData00[0x1940];
		UClass* CurrentBuildableClass;
	};
	
	struct CurrentResourceTypeOffsetFix
	{
		unsigned char UnknownData00[0x1959];
		EFortResourceType CurrentResourceType;
	};

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
		auto WorldInventory = reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory;
		auto QuickBars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
		PC->HandleWorldInventoryLocalUpdate();
		WorldInventory->HandleInventoryLocalUpdate();
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
		auto Quickbars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
		for (int i = 0; i < 6; i++) {
			if (Quickbars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
				return i;
			}
		}
		return -1;
	}
	
	UFortWorldItem* GetItemInInv(AFortPlayerControllerAthena* PC, UFortItemDefinition* Def) {
		for (int i = 0; i < reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ItemInstances[i]->GetItemDefinitionBP() == Def) {
				return reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ItemInstances[i];
			}
		}
		return nullptr;
	}
	
	FFortItemEntry GetEntryInInv(AFortPlayerControllerAthena* PC, FGuid GUID) {
		for (int i = 0; i < reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			if (reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == GUID) {
				return reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return {};
	}
	
	std::pair<EFortQuickBars, int> GetItemSlot(AFortPlayerControllerAthena* PC, FGuid GUID) {
		auto Quickbars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
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
		//auto Slot = GetItemSlot(PC, GUID);
		/*if (Slot.first == EFortQuickBars::Secondary || Slot.second != -1)*/ {
			auto WorldInventory = reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory;
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

			Update(PC);
		}
	}

	UFortWorldItem* AddItem(AFortPlayerControllerAthena* PC, UFortItemDefinition* ItemDef, int Count = 1, int Slot = -1, EFortQuickBars Quickbar = EFortQuickBars::Primary) {
		if (Quickbar == EFortQuickBars::Primary && Slot == -1) {
			Slot = GetOpenSlot(PC);
		}
		auto WorldInventory = reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory;
		auto Quickbars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
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
			"FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03"
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
			"FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03"
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
		auto WorldInventory = reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory;
		auto Quickbars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
		AddItem(PC, UObject::FindObject<UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool"), 1, 0, EFortQuickBars::Primary);
		AddItem(PC, UObject::FindObject<UFortEditToolItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataShells.AthenaAmmoDataShells"), 8, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortEditToolItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium"), 30, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortEditToolItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight"), 60, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall"), 1, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor"), 1, 1, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W"), 1, 2, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS"), 1, 3, EFortQuickBars::Secondary);

		AddItem(PC, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData"), 999, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData"), 999, 0, EFortQuickBars::Secondary);
		AddItem(PC, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData"), 999, 0, EFortQuickBars::Secondary);
	}

	AFortWeapon* EquipItem(AFortPlayerControllerAthena* PC, UFortWorldItem* ItemDef) {
		if (PC->Pawn && ItemDef) {
			AFortWeapon* WeaponData = reinterpret_cast<AFortPlayerPawn*>(PC->Pawn)->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDef->GetItemDefinitionBP(), ItemDef->GetItemGuid());
			if (WeaponData) {
				WeaponData->ClientGivenTo(PC->Pawn);
				reinterpret_cast<AFortPlayerPawn*>(PC->Pawn)->ClientInternalEquipWeapon(WeaponData);
			}
			return WeaponData;
		}
		return nullptr;
	}

	UFortItemDefinition* EquipInventoryItem(AFortPlayerControllerAthena* PC, FGuid ItemGuid) {
		auto WorldInventory = reinterpret_cast<WorldInventoryOffsetFix*>(PC)->WorldInventory;
		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++) {
			auto Item = WorldInventory->Inventory.ItemInstances[i];
			if (Item->GetItemGuid() == ItemGuid) {
				EquipItem(PC, Item);
				return Item->GetItemDefinitionBP();
			}
		}

		return nullptr;
	}
}
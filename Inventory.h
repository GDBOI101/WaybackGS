#pragma once
#include "Includes.h"
namespace Inventory {
	struct QuickbarOffsetFix
	{
		unsigned char UnknownData00[0x1A88];
		class AFortQuickBars* QuickBars;
	};
	
	struct WorldInventoryOffsetFix
	{
		unsigned char UnknownData00[0x1D28];
		class SDK::AFortInventory* WorldInventory;
	};
	
	void Update(AFortPlayerControllerAthena* PC) {
		auto WorldInventory = /*reinterpret_cast<WorldInventoryOffsetFix*>*/(PC)->WorldInventory;
		auto Quickbars = reinterpret_cast<QuickbarOffsetFix*>(PC)->QuickBars;
		PC->HandleWorldInventoryLocalUpdate();

		PC->WorldInventory->HandleInventoryLocalUpdate();
		PC->WorldInventory->bRequiresLocalUpdate = true;
		PC->QuickBars->OnRep_PrimaryQuickBar();
		PC->QuickBars->OnRep_SecondaryQuickBar();
		PC->QuickBars->ForceNetUpdate();
		PC->WorldInventory->ForceNetUpdate();
		PC->ForceUpdateQuickbar(EFortQuickBars::Primary);
		PC->ForceUpdateQuickbar(EFortQuickBars::Secondary);
		PC->WorldInventory->Inventory.MarkArrayDirty();
	}

	std::vector<UFortItemDefinition*> Loadout{};
	void SetupLoadout() {
		Loadout = {
			nullptr,//Slot 1
			nullptr,//Slot 2
			nullptr,//Slot 3
			nullptr,//Slot 4
			nullptr,//Slot 5
			nullptr,//Trap
		};
	}

	void SetupInventory(AFortPlayerControllerAthena* PC) {
		if (Loadout.empty()) {
			SetupLoadout();
		}
		/*auto WorldInventory = SpawnActor<AFortInventory>();
		WorldInventory->InventoryType = EFortInventoryType::World;
		WorldInventory->bReplicates = true;
		WorldInventory->Inventory = FFortItemList();
		WorldInventory->Inventory.ReplicatedEntries = TArray<struct FFortItemEntry>(1);
		WorldInventory->Inventory.ItemInstances = TArray<class UFortWorldItem*>(1);
		WorldInventory->SetOwner(PC);
		PC->WorldInventory = WorldInventory;*/
		auto WorldInventory = /*reinterpret_cast<WorldInventoryOffsetFix*>*/(PC)->WorldInventory;
		auto Quickbars = /*reinterpret_cast<QuickbarOffsetFix*>*/(PC)->QuickBars;
		UFortWeaponMeleeItemDefinition* PickaxeDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		UFortWorldItem* Pickaxe = (UFortWorldItem*)PickaxeDef->CreateTemporaryItemInstanceBP(1, 0);
		Pickaxe->SetOwningControllerForTemporaryItem(PC);
		Pickaxe->ItemEntry.Count = 1;
		WorldInventory->Inventory.ReplicatedEntries.Add(Pickaxe->ItemEntry);
		WorldInventory->Inventory.ItemInstances.Add(Pickaxe);
		Quickbars->ServerAddItemInternal(Pickaxe->ItemEntry.ItemGuid, EFortQuickBars::Primary, 0);
		Update(PC);
	}
}
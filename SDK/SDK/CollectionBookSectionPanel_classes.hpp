#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5B0 - 0x530)
// WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C
class UCollectionBookSectionPanel_C : public UFortCollectionBookSectionPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainModeItemDetailsHostPanel_C*       MainModeItemDetailsHostPanel;                      // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SlotItemInputAction;                               // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectInputAction;                                // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                  ConfirmSlotItemTitle;                              // 0x570(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConfirmSlotItemMessage;                            // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   BackInputActionName;                               // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookSectionPanel_C");
		return Clss;
	}

	void OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnSlotItemConfirm(class UFortItem* ItemToSlot, bool CallFunc_TryCommitSelectedItem_ReturnValue);
	void ShowItemDetail(class UFortItem* SelectedItem);
	void Construct();
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnActivated();
	void ExecuteUbergraph_CollectionBookSectionPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortCollectionBookSection* K2Node_Event_Section);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

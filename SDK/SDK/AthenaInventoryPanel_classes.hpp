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

// 0x90 (0x500 - 0x470)
// WidgetBlueprintGeneratedClass AthenaInventoryPanel.AthenaInventoryPanel_C
class UAthenaInventoryPanel_C : public UAthenaInventoryPanelBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeMessage;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryDropSlot_C*            AthenaInventoryDropSlot;                           // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          BackpackHeader;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderEquipSlots;                            // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot1;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot2;                                        // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot3;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot4;                                        // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot5;                                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EquipSlots;                                        // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryLimitStatusIndicator_C* InventoryLimitStatusBackpack;                      // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* ItemDetails;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseRetire;                                        // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideCount;                                        // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideResources;                                    // 0x4EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideTitle;                                        // 0x4EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuantitySelector_C*                   MulchQuantitySelector;                             // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                   QuantitySelectorWidget;                            // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryPanel_C");
		return Clss;
	}

	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool HandlingInput_Local, const class FString& ConfigF_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HandleClose_PassThrough, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void HandleDropItemConfirmationCallback(int32 ChosenQuantity, class UFortItem* Item, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess);
	void DestroyQuantitySelectorWidget(bool CallFunc_IsValid_ReturnValue);
	void CreateQuantitySelectorWidget(class UFortWorldItem* Item, class FText ConfirmationText, int32 CallFunc_GetNumInStack_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue);
	void RefocusOnInventory(class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void DropItem(class UFortWorldItem* Item, int32 Quantity, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue);
	void HandleDrop(bool* PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RegisterDrop(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsValid_ReturnValue);
	void PerformEquip(class UFortItem* Item, bool CallFunc_HandleClose_PassThrough, bool CallFunc_IsSlotted_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_RemoveItemFromQuickBar_ReturnValue);
	void RegisterLeaveInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void TrySetupInputHandling();
	void HandleEquip(bool* PassThrough, class UFortItem* Item, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	void RegisterEquip(enum class EInputActionState Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_DoesMatchSearchString_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSlotted_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2);
	void RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleClose(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void GetSelectedEquipSlot(int32* Slot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, TArray<class UAthenaInventoryEquipSlot_C*>& K2Node_MakeArray_Array, class UAthenaInventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSelected_Selected, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ProcessSlotAction(int32 SelectedSlot, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, int32 CallFunc_GetSelectedEquipSlot_Slot, bool CallFunc_DropItemOnQuickBar_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void UpdateEquipSlots();
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void OnActivated();
	void OnDeactivated();
	void RequestEquip(class UFortItem* Item);
	void OnInventoryItemSelected(class UFortItem* Item);
	void BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature(int32 SlotIndex);
	void BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature(int32 SlotIndex);
	void BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature(int32 SlotIndex);
	void BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature(int32 SlotIndex);
	void BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature(int32 SlotIndex);
	void ExecuteUbergraph_AthenaInventoryPanel(int32 EntryPoint, enum class EFortQuickBars K2Node_Event_QuickBarType, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortItem* K2Node_Event_Item2, class UFortItem* K2Node_Event_Item, bool CallFunc_IsValid_ReturnValue, int32 K2Node_ComponentBoundEvent_SlotIndex5, int32 K2Node_ComponentBoundEvent_SlotIndex4, int32 K2Node_ComponentBoundEvent_SlotIndex3, int32 K2Node_ComponentBoundEvent_SlotIndex2, int32 K2Node_ComponentBoundEvent_SlotIndex, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

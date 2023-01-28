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

// 0x30 (0x750 - 0x720)
// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
class UItemManagementScreen_C : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_Inventory;                                 // 0x728(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Screen;                                    // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ItemDragEnabled;                                   // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemManagementItemTileButton*     SelectedTileButton;                                // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                   QuantitySelectorWidget;                            // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementScreen_C");
		return Clss;
	}

	void SizeScreen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsEquipAvailable(class UFortItem* Item, bool* EquipAvailable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsWritableWIFEAvailable(bool* bWritable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleMulchItemsCallback(int32 Quantity, class UFortItem* Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetMaxTransferCount(class UFortItem* Item, int32* Count, class UFortWorldItem* WorldItem, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetNumInStack_ReturnValue2, int32 CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetStorageOverflowFromAddingItem_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool CallFunc_ContainsItem_ReturnValue);
	void CompleteItemDrop(class UFortItem* Item, int32 Quantity, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandleDropItemsCallback(int32 Quantity, class UFortItem* Item);
	void HandleDrop(class UFortItem* Item, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CompleteItemTransfer(class UFortItem* Item, int32 Quantity, bool IsDeposit, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetItemGuid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess3);
	void HandleTransferItemsCallback(int32 Quantity, class UFortItem* Item);
	void DestroyQuantitySelector(bool CallFunc_IsValid_ReturnValue);
	void CreateQuantitySelector(class UFortItem* Item, class FText Title, class FText ConfirmText, int32 InitialQuantity, int32 MaxQuantity, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue);
	void HandleTransfer(class UFortItem* ItemToTransfer, class UFortItem* Item, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ShowCraftError(enum class EFortCraftFailCause FailCause);
	void CraftAndSlot(class UFortSchematicItem* SchematicItem, class UFortSchematicItem* Item, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, enum class EFortCraftFailCause CallFunc_CraftAndSlotSchematic_FailCause, bool CallFunc_CraftAndSlotSchematic_ReturnValue);
	void HandleEquip(class UFortItem* Item, bool CallFunc_IsEquipAvailable_EquipAvailable, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsSlotted_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_RemoveItemFromQuickBar_ReturnValue);
	void SizeInventoryPanel(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_RemoveItemFromQuickBar_ReturnValue);
	void GetDescriptionText(class FText* ItemDescription, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue);
	void HandleInspect(class UFortItem* ItemToInspect, bool AllowFavoriting, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue);
	void HandleClose(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedEquipSlot_Slot, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(enum class EFortDialogResult Result, class FName ResultName);
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void DefaultActionRefresh();
	void OnActivated();
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void ExecuteUbergraph_ItemManagementScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class FText CallFunc_GetDescriptionText_ItemDescription, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, class UFortItem* K2Node_Event_Item5, class UFortSchematicItem* K2Node_Event_SchematicItem, class UCommonUIContext* CallFunc_GetContext_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemManangementItemTileButton_C* K2Node_DynamicCast_AsItem_Manangement_Item_Tile_Button, bool K2Node_DynamicCast_bSuccess, class UBoostsRoot_C* CallFunc_Create_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue8, class UItemIconWidget_C* CallFunc_Create_ReturnValue2, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortConsumableAccountItem* K2Node_Event_ConsumableItem, class UFortItem* K2Node_Event_Item4, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_CanActivateOnSelf_ReturnValue, class UFortItem* K2Node_Event_Item3, class UFortItem* K2Node_Event_Item2, class UFortItem* K2Node_Event_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_GetNumInStack_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetSelectedEquipSlot_Slot, bool CallFunc_NotEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x20 (0x450 - 0x430)
// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
class UItemManagementDetailsModeBox_C : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  DetailPanelTabList;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemSelected;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NoSelectionDetailsBox;                             // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementDetailsModeBox_C");
		return Clss;
	}

	void HandleDestroy(bool* PassThrough);
	void HandleWithdrawAll(bool* PassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
	void IsWritableWIFEAvailable(bool* WritableWIFE, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RefreshSwitchPanelAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSwitchPanelAvailable_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleSwitchPanel(bool* PassThrough);
	void UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void RefreshTransferAction(class UFortWorldItem* Item, bool IsDeposit, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, enum class EInputActionState K2Node_Select_Default, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_Greater_IntInt_ReturnValue2, enum class EInputActionState K2Node_Select2_Default);
	void HandleTransfer(bool* PassThrough);
	void RegisterTransferActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void RegisterInspectUpgrade(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RegisterLeaveInventory(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RefreshMulchAction(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleCraftAndSlot(bool* PassThrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess2);
	void RegisterCraftAndSlot(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RefreshCraftActions(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess2, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, enum class EInputActionState K2Node_Select2_Default);
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void RegisterInventoryInspect(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortItemType CallFunc_GetType_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, enum class EInputActionState K2Node_Select_Default);
	void SetTabStyling(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void SetItemVisualization();
	void UpdateConsumeItemButtonState(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnSelf_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupDetailPanels(class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleEquip(bool* PassThrough);
	void RegisterEquip(enum class EInputActionState Temp_byte_Variable, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsEquipAvailable_EquipAvailable, enum class EInputActionState Temp_byte_Variable2, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EInputActionState K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsSlotted_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2);
	void HandleTrack(bool* PassThrough, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSchematicPinned_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue2, bool CallFunc_IsSchematicPinned_ReturnValue);
	void RegisterTrack(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterCompare(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterConsumeItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterSort(bool InGame, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_Select_Default);
	void RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterInspect(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterRetire(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterMulch(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterCraft(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterDropOrDestroy(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2);
	void HandleDrop(bool* PassThrough);
	void ShowSelection(bool CallFunc_IsValid_ReturnValue);
	void HandleCraft(bool* PassThrough, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess);
	void HandleConsumeItem(bool* PassThrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UBoostsRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_CanActivateOnSelf_ReturnValue);
	void TrySetupInputHandling(bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWritableWIFEAvailable_WritableWIFE, TArray<struct FCommonInputActionHandlerData>& CallFunc_GetInputActions_InputActionDataRows, bool CallFunc_GetInputActions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue);
	void HandleSort(bool* PassThrough);
	void HandleMulch(bool* PassThrough);
	void HandleCompare(bool* PassThrough, bool CallFunc_IsValid_ReturnValue);
	void HandleInspect(bool* PassThrough);
	void HandleBack(bool* PassThrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess);
	void DialogResult_475B18A9452A639A04116D83A8B1CC22(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandleDifferentItemToDetailSetBP();
	void OnActivated();
	void BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void Construct();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDestroyItem();
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int32 EntryPoint, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMulchConfirmationItem_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel2, bool K2Node_DynamicCast_bSuccess2, class FName K2Node_ComponentBoundEvent_TabId4, class UCommonButton* K2Node_ComponentBoundEvent_TabButton4, class FName K2Node_ComponentBoundEvent_TabId3, class UCommonButton* K2Node_ComponentBoundEvent_TabButton3, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton2, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

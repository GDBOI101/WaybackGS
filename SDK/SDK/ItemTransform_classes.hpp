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

// 0xB0 (0x490 - 0x3E0)
// WidgetBlueprintGeneratedClass ItemTransform.ItemTransform_C
class UItemTransform_C : public UFortItemTransform
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UItemTransformKeyScreen_C*             KeyScreen;                                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotScreen_C*            SlotScreen;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TransformScreenSwitcher;                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             SelectedKey;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SelectedSacrificeItems;                            // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        SacrificePoints;                                   // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTier;                                       // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SelectKeyInputAction;                              // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   TransformInputAction;                              // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SelectItemInputAction;                             // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectItemInputAction;                            // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsItemPickerOpen;                                  // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ClosePickerInputAction;                            // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransform_C");
		return Clss;
	}

	void HandleClosePicker(bool* PassThrough);
	void OnItemPickerOpened();
	void OnItemPickerClosed();
	void UpdateTransformAction(bool TransformActive);
	void Handle_Transform_Activated();
	void Handle_Select_Key_Activated(bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_Get_Selected_Item_SelectedKey);
	void DisableTransformAction();
	void HideTransformAction();
	void ShowTransformAction();
	void UpdateSelectKeyAction(bool CallFunc_IsValid_ReturnValue);
	void DisableSelectKeyAction();
	void HideSelectKeyAction();
	void ShowSelectKeyAction();
	void HandleSelectKeyAction(bool* PassThrough, bool CallFunc_HandleSelect_PassThrough);
	void HandleTransformAction(bool* PassThrough, TArray<class UFortItem*>& CallFunc_Get_Transform_Data_SacrificeItems, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier);
	void ResetItemTransform(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* Temp_object_Variable);
	void HandleTransformFailed(class FText& ErrorMessage);
	void HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>& RewardedItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificedItems);
	void HandleTransformContinue();
	void OpenResult(TArray<struct FFortItemInstanceQuantityPair>& RewardItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificeItems, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemTransformResultModal_C* K2Node_DynamicCast_AsItem_Transform_Result_Modal, bool K2Node_DynamicCast_bSuccess);
	void HandleTransformConfirm(class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void HandleTransformCancel();
	void OpenConfirmation(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UItemTransformConfirmationModal_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleSelect(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void OpenSlotScreen();
	void OpenKeyScreen();
	void OpenItemTransform(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key);
	void BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnActivated();
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature();
	void BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void Construct();
	void OnRequestCloseItemPicker();
	void ExecuteUbergraph_ItemTransform(int32 EntryPoint, bool CallFunc_HandleClosePicker_PassThrough, class UFortItem* K2Node_ComponentBoundEvent_Key, class UFortItem* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_Array_Add_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_HandleSelect_PassThrough, bool K2Node_ComponentBoundEvent_TransformActive, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 Temp_int_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

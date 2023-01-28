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

// 0x40 (0x290 - 0x250)
// WidgetBlueprintGeneratedClass ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C
class UItemManagementMulchDetailsPanel_C : public UFortItemManagementMulchDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     DoneButton;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MulchPromptText;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MulchResourceBox;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ResourceListWidgetSwitcher;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         RecyclingAnimateItems;                             // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  MulchListChanged;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementMulchDetailsPanel_C");
		return Clss;
	}

	void UpdateDoneButtonText(bool K2Node_SwitchEnum_CmpSuccess);
	void GetWarningText(TArray<enum class EItemRecyclingWarning>& Warnings, bool HasAnimateItems, class FText* WarningText, class FText TextGroup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetRecyclingWarningText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void DialogResult_58BF1F8B4DC97D1C2902828F65095294(enum class EFortDialogResult Result, class FName ResultName);
	void HandleSetOfItemsToMulchChangedBP();
	void BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemManagementMulchDetailsPanel(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, class UFortItem* CallFunc_Array_Get_Item, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, TArray<enum class EItemRecyclingWarning>& CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings, class UFortCharacter* K2Node_DynamicCast_AsFort_Character, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UItemManagementMulchConfirmationDialogContent_C* CallFunc_Create_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue3, bool CallFunc_AreAnyItemsAnimate_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UWidget* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetWarningText_WarningText, int32 Temp_int_Loop_Counter_Variable, class FText Temp_text_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable2, bool Temp_bool_Variable2, TArray<int32>& CallFunc_GetItemCountsToMulch_ReturnValue, class FText K2Node_Select2_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void MulchListChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

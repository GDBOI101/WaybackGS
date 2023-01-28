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

// 0x78 (0x310 - 0x298)
// WidgetBlueprintGeneratedClass SquadSlotDetailsPanel.SquadSlotDetailsPanel_C
class USquadSlotDetailsPanel_C : public UFortSquadSlotDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          LockedSlotDetailsPanel;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PreviewEmptySlotTextBlock;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectionHintTextBlock;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ShowInSkillTreeButton;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SlottedItemDetailsSwitcher;                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            SlottingRestrictionsBox;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SlottingRestrictionsTextBlock;                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SquadSlotLabelTextBlock;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ItemType;                                          // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadSlotDetailsPanel_C");
		return Clss;
	}

	void Set_Scroll_Box_to_Nav_Scroll_Widget();
	void GetRestrictionReasonsAsText(TArray<enum class EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text, class FText Result, class FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText Temp_text_Variable2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EFortSquadSlottingRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable4, bool CallFunc_TextIsEmpty_ReturnValue, enum class EFortSquadSlottingRestrictionReason Temp_byte_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateSkillTreeButtonVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool Temp_bool_Variable, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleDifferentSquadSlotSetBP();
	void HandleSquadSlotStateChangedBP();
	void BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot, bool CallFunc_TryGetItemToPreviewInSlot_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsSquadSlotLockedBP_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, bool CallFunc_IsInZone_ReturnValue, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class EFortItemType CallFunc_Array_Get_Item2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_ToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetRestrictionReasonsAsText_Text, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool Temp_bool_Variable3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class UWidget* K2Node_Select2_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, bool Temp_bool_Variable4, class FText CallFunc_Format_ReturnValue2, bool Temp_bool_Variable5, class UWidget* K2Node_Select3_Default, class UWidget* K2Node_Select4_Default, class UWidget* K2Node_Select5_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

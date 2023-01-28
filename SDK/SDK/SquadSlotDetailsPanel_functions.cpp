#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::Set_Scroll_Box_to_Nav_Scroll_Widget()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Set Scroll Box to Nav Scroll Widget");

	Params::USquadSlotDetailsPanel_C_Set_Scroll_Box_to_Nav_Scroll_Widget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>Reasons                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Result                                                           (Edit)
// class FText                        Temp_text_Variable                                               ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              ()
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSquadSlottingRestrictionReasonCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable3                                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSquadSlottingRestrictionReasonTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void USquadSlotDetailsPanel_C::GetRestrictionReasonsAsText(TArray<enum class EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text, class FText Result, class FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText Temp_text_Variable2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EFortSquadSlottingRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable4, bool CallFunc_TextIsEmpty_ReturnValue, enum class EFortSquadSlottingRestrictionReason Temp_byte_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "GetRestrictionReasonsAsText");

	Params::USquadSlotDetailsPanel_C_GetRestrictionReasonsAsText_Params Parms;
	Parms.Reasons = Reasons;
	Parms.Result = Result;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadSlotDetailsPanel_C::UpdateSkillTreeButtonVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool Temp_bool_Variable, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "UpdateSkillTreeButtonVisibility");

	Params::USquadSlotDetailsPanel_C_UpdateSkillTreeButtonVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue = CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleDifferentSquadSlotSetBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleDifferentSquadSlotSetBP");

	Params::USquadSlotDetailsPanel_C_HandleDifferentSquadSlotSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleSquadSlotStateChangedBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotStateChangedBP");

	Params::USquadSlotDetailsPanel_C_HandleSquadSlotStateChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::USquadSlotDetailsPanel_C_BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::Construct()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Construct");

	Params::USquadSlotDetailsPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotRestrictionFactorsChangedBP");

	Params::USquadSlotDetailsPanel_C_HandleSquadSlotRestrictionFactorsChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetItemToPreviewInSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSquadSlotLockedBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseSquadSlot          CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ToText_ReturnValue                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortSquadSlottingRestrictionReason>CallFunc_GetSlottingRestrictionReasons_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRestrictionReasonsAsText_Text                        ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot, bool CallFunc_TryGetItemToPreviewInSlot_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsSquadSlotLockedBP_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, bool CallFunc_IsInZone_ReturnValue, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class EFortItemType CallFunc_Array_Get_Item2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_ToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetRestrictionReasonsAsText_Text, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool Temp_bool_Variable3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class UWidget* K2Node_Select2_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, bool Temp_bool_Variable4, class FText CallFunc_Format_ReturnValue2, bool Temp_bool_Variable5, class UWidget* K2Node_Select3_Default, class UWidget* K2Node_Select4_Default, class UWidget* K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "ExecuteUbergraph_SquadSlotDetailsPanel");

	Params::USquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot = CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot;
	Parms.CallFunc_TryGetItemToPreviewInSlot_ReturnValue = CallFunc_TryGetItemToPreviewInSlot_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsSquadSlotLockedBP_ReturnValue = CallFunc_IsSquadSlotLockedBP_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ToText_ReturnValue = CallFunc_ToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue = CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetSlottingRestrictionReasons_ReturnValue = CallFunc_GetSlottingRestrictionReasons_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRestrictionReasonsAsText_Text = CallFunc_GetRestrictionReasonsAsText_Text;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

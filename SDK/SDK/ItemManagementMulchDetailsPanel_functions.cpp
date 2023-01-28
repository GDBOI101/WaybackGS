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


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.UpdateDoneButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchDetailsPanel_C::UpdateDoneButtonText(bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "UpdateDoneButtonText");

	Params::UItemManagementMulchDetailsPanel_C_UpdateDoneButtonText_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.GetWarningText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EItemRecyclingWarning>Warnings                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               HasAnimateItems                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        WarningText                                                      (Parm, OutParm)
// class FText                        TextGroup                                                        (Edit)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemRecyclingWarning   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRecyclingWarningText_ReturnValue                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemManagementMulchDetailsPanel_C::GetWarningText(TArray<enum class EItemRecyclingWarning>& Warnings, bool HasAnimateItems, class FText* WarningText, class FText TextGroup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetRecyclingWarningText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "GetWarningText");

	Params::UItemManagementMulchDetailsPanel_C_GetWarningText_Params Parms;
	Parms.Warnings = Warnings;
	Parms.HasAnimateItems = HasAnimateItems;
	Parms.TextGroup = TextGroup;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRecyclingWarningText_ReturnValue = CallFunc_GetRecyclingWarningText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WarningText != nullptr)
		*WarningText = Parms.WarningText;

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.DialogResult_58BF1F8B4DC97D1C2902828F65095294
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementMulchDetailsPanel_C::DialogResult_58BF1F8B4DC97D1C2902828F65095294(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "DialogResult_58BF1F8B4DC97D1C2902828F65095294");

	Params::UItemManagementMulchDetailsPanel_C_DialogResult_58BF1F8B4DC97D1C2902828F65095294_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.HandleSetOfItemsToMulchChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementMulchDetailsPanel_C::HandleSetOfItemsToMulchChangedBP()
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "HandleSetOfItemsToMulchChangedBP");

	Params::UItemManagementMulchDetailsPanel_C_HandleSetOfItemsToMulchChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementMulchDetailsPanel_C::BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementMulchDetailsPanel_C_BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.ExecuteUbergraph_ItemManagementMulchDetailsPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           CallFunc_GetItemsToMulch_ReturnValue                             (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsToMulch_ReturnValue2                            (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemRecyclingWarning>CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings          (ZeroConstructor, ReferenceParm)
// class UFortCharacter*              K2Node_DynamicCast_AsFort_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementMulchConfirmationDialogContent_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsToMulch_ReturnValue3                            (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_AreAnyItemsAnimate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetWarningText_WarningText                              ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetItemCountsToMulch_ReturnValue                        (ZeroConstructor, ReferenceParm)
// class FText                        K2Node_Select2_Default                                           ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchDetailsPanel_C::ExecuteUbergraph_ItemManagementMulchDetailsPanel(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, class UFortItem* CallFunc_Array_Get_Item, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, TArray<enum class EItemRecyclingWarning>& CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings, class UFortCharacter* K2Node_DynamicCast_AsFort_Character, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UItemManagementMulchConfirmationDialogContent_C* CallFunc_Create_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue3, bool CallFunc_AreAnyItemsAnimate_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UWidget* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetWarningText_WarningText, int32 Temp_int_Loop_Counter_Variable, class FText Temp_text_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable2, bool Temp_bool_Variable2, TArray<int32>& CallFunc_GetItemCountsToMulch_ReturnValue, class FText K2Node_Select2_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "ExecuteUbergraph_ItemManagementMulchDetailsPanel");

	Params::UItemManagementMulchDetailsPanel_C_ExecuteUbergraph_ItemManagementMulchDetailsPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemsToMulch_ReturnValue = CallFunc_GetItemsToMulch_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetItemsToMulch_ReturnValue2 = CallFunc_GetItemsToMulch_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings = CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings;
	Parms.K2Node_DynamicCast_AsFort_Character = K2Node_DynamicCast_AsFort_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetItemsToMulch_ReturnValue3 = CallFunc_GetItemsToMulch_ReturnValue3;
	Parms.CallFunc_AreAnyItemsAnimate_ReturnValue = CallFunc_AreAnyItemsAnimate_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWarningText_WarningText = CallFunc_GetWarningText_WarningText;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetItemCountsToMulch_ReturnValue = CallFunc_GetItemCountsToMulch_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.MulchListChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementMulchDetailsPanel_C::MulchListChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemManagementMulchDetailsPanel_C", "MulchListChanged__DelegateSignature");

	Params::UItemManagementMulchDetailsPanel_C_MulchListChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

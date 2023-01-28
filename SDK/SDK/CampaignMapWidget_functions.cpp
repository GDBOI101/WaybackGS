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


// Function CampaignMapWidget.CampaignMapWidget_C.SetTriggerIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 Temp_struct_Variable                                             (ConstParm)
// struct FSlateBrush                 Temp_struct_Variable2                                            (ConstParm)
// struct FSlateBrush                 Temp_struct_Variable3                                            (ConstParm)
// enum class ECommonInputType        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 Temp_struct_Variable4                                            (ConstParm)
// struct FSlateBrush                 Temp_struct_Variable5                                            (ConstParm)
// struct FSlateBrush                 Temp_struct_Variable6                                            (ConstParm)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush3                                    ()
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush4                                    ()
// struct FSlateBrush                 K2Node_Select2_Default                                           (ConstParm)

void UCampaignMapWidget_C::SetTriggerIcon(bool PassThrough, enum class ECommonInputType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable2, const struct FSlateBrush& Temp_struct_Variable3, enum class ECommonInputType Temp_byte_Variable2, const struct FSlateBrush& Temp_struct_Variable4, const struct FSlateBrush& Temp_struct_Variable5, const struct FSlateBrush& Temp_struct_Variable6, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush4, const struct FSlateBrush& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "SetTriggerIcon");

	Params::UCampaignMapWidget_C_SetTriggerIcon_Params Parms;
	Parms.PassThrough = PassThrough;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.K2Node_MakeStruct_SlateBrush3 = K2Node_MakeStruct_SlateBrush3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush4 = K2Node_MakeStruct_SlateBrush4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.Find Active Page
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumWidgets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProtoCampaignMapPage_C*     K2Node_DynamicCast_AsProto_Campaign_Map_Page                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForMainQuest_TargetQuestFound                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckForMainQuest_TargetQuestPageIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapWidget_C::Find_Active_Page(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UProtoCampaignMapPage_C* K2Node_DynamicCast_AsProto_Campaign_Map_Page, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_CheckForMainQuest_TargetQuestFound, int32 CallFunc_CheckForMainQuest_TargetQuestPageIndex, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "Find Active Page");

	Params::UCampaignMapWidget_C_Find_Active_Page_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.K2Node_DynamicCast_AsProto_Campaign_Map_Page = K2Node_DynamicCast_AsProto_Campaign_Map_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_CheckForMainQuest_TargetQuestFound = CallFunc_CheckForMainQuest_TargetQuestFound;
	Parms.CallFunc_CheckForMainQuest_TargetQuestPageIndex = CallFunc_CheckForMainQuest_TargetQuestPageIndex;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProtoCampaignMapPage_C*     K2Node_DynamicCast_AsProto_Campaign_Map_Page                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapWidget_C::Update(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UProtoCampaignMapPage_C* K2Node_DynamicCast_AsProto_Campaign_Map_Page, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "Update");

	Params::UCampaignMapWidget_C_Update_Params Parms;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsProto_Campaign_Map_Page = K2Node_DynamicCast_AsProto_Campaign_Map_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapWidget_C::BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature");

	Params::UCampaignMapWidget_C_BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapWidget_C::Construct()
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "Construct");

	Params::UCampaignMapWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.Handle OnQuestsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCampaignMapWidget_C::Handle_OnQuestsUpdated()
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "Handle OnQuestsUpdated");

	Params::UCampaignMapWidget_C_Handle_OnQuestsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapWidget_C::BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature");

	Params::UCampaignMapWidget_C_BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapWidget_C::BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature");

	Params::UCampaignMapWidget_C_BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.OnShowNextPage
// (Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapWidget_C::OnShowNextPage()
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "OnShowNextPage");

	Params::UCampaignMapWidget_C_OnShowNextPage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.OnShowPreviousPage
// (Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapWidget_C::OnShowPreviousPage()
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "OnShowPreviousPage");

	Params::UCampaignMapWidget_C_OnShowPreviousPage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapWidget.CampaignMapWidget_C.ExecuteUbergraph_CampaignMapWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetNumWidgets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapWidget_C::ExecuteUbergraph_CampaignMapWidget(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_Add_IntInt_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapWidget_C", "ExecuteUbergraph_CampaignMapWidget");

	Params::UCampaignMapWidget_C_ExecuteUbergraph_CampaignMapWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue2 = CallFunc_GetActiveWidgetIndex_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue3 = CallFunc_GetActiveWidgetIndex_ReturnValue3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue4 = CallFunc_GetActiveWidgetIndex_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

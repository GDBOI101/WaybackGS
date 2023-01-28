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


// Function MTXButton.MTXButton_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMTXButton_C::UpdateState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MTXButton_C", "UpdateState");

	Params::UMTXButton_C_UpdateState_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        K2Node_Select_Default                                            ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMTXButton_C::Get_Button_ToolTipWidget_0(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText K2Node_Select_Default, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("MTXButton_C", "Get_Button_ToolTipWidget_0");

	Params::UMTXButton_C_Get_Button_ToolTipWidget_0_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MTXButton.MTXButton_C.UpdateAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo     FortPrivateAccountInfo                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::UpdateAmount(struct FFortPrivateAccountInfo& FortPrivateAccountInfo, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("MTXButton_C", "UpdateAmount");

	Params::UMTXButton_C_UpdateAmount_Params Parms;
	Parms.FortPrivateAccountInfo = FortPrivateAccountInfo;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMTXButton_C::Construct()
{
	static auto Func = Class->GetFunction("MTXButton_C", "Construct");

	Params::UMTXButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo     NewInfo                                                          (Parm, NoDestructor)

void UMTXButton_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static auto Func = Class->GetFunction("MTXButton_C", "HandleLocalAccountInfoChanged");

	Params::UMTXButton_C_HandleLocalAccountInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MTXButton_C", "BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UMTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.HandleInputActionChnaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMTXButton_C::HandleInputActionChnaged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("MTXButton_C", "HandleInputActionChnaged");

	Params::UMTXButton_C_HandleInputActionChnaged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMTXButton_C::Destruct()
{
	static auto Func = Class->GetFunction("MTXButton_C", "Destruct");

	Params::UMTXButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFortPrivateAccountInfo     K2Node_CustomEvent_NewInfo                                       (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPrivateAccountInfo     CallFunc_GetLocalAccountInfo_Result                              (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::ExecuteUbergraph_MTXButton(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortPrivateAccountInfo& K2Node_CustomEvent_NewInfo, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFortUIFeatureState CallFunc_GetFeatureState_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("MTXButton_C", "ExecuteUbergraph_MTXButton");

	Params::UMTXButton_C_ExecuteUbergraph_MTXButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewInfo = K2Node_CustomEvent_NewInfo;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetFeatureState_ReturnValue = CallFunc_GetFeatureState_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetLocalAccountInfo_Result = CallFunc_GetLocalAccountInfo_Result;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

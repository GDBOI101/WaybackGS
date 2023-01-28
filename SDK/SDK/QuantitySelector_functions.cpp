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


// Function QuantitySelector.QuantitySelector_C.SetCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMaxPressed_PassThrough                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::SetCurrentValue(int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "SetCurrentValue");

	Params::UQuantitySelector_C_SetCurrentValue_Params Parms;
	Parms.NewValue = NewValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_HandleMaxPressed_PassThrough = CallFunc_HandleMaxPressed_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.GetCurrentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::GetCurrentValue(int32* CurrentValue)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "GetCurrentValue");

	Params::UQuantitySelector_C_GetCurrentValue_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentValue != nullptr)
		*CurrentValue = Parms.CurrentValue;

}


// Function QuantitySelector.QuantitySelector_C.SetupForInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingGamepad                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::SetupForInputMode(bool IsUsingGamepad, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "SetupForInputMode");

	Params::UQuantitySelector_C_SetupForInputMode_Params Parms;
	Parms.IsUsingGamepad = IsUsingGamepad;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.SliderValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::SliderValueChanged(float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "SliderValueChanged");

	Params::UQuantitySelector_C_SliderValueChanged_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.HandleCancelPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::HandleCancelPressed(bool* PassThrough)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "HandleCancelPressed");

	Params::UQuantitySelector_C_HandleCancelPressed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuantitySelector.QuantitySelector_C.HandleTransferPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::HandleTransferPressed(bool* PassThrough)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "HandleTransferPressed");

	Params::UQuantitySelector_C_HandleTransferPressed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuantitySelector.QuantitySelector_C.HandleMaxPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::HandleMaxPressed(bool* PassThrough)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "HandleMaxPressed");

	Params::UQuantitySelector_C_HandleMaxPressed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuantitySelector.QuantitySelector_C.CloseSelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::CloseSelector(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "CloseSelector");

	Params::UQuantitySelector_C_CloseSelector_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.SetAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AdditionalInfoText                                               (Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::SetAdditionalText(class FText AdditionalInfoText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "SetAdditionalText");

	Params::UQuantitySelector_C_SetAdditionalText_Params Parms;
	Parms.AdditionalInfoText = AdditionalInfoText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.SetSplitData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaximumCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TitleText                                                        (Parm)
// class FText                        ButtonText                                                       (Parm)
// class FText                        AdditionalInfoText                                               (Parm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::SetSplitData(int32 StartingCount, int32 MaximumCount, class UFortItem* Item, class FText TitleText, class FText ButtonText, class FText AdditionalInfoText, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "SetSplitData");

	Params::UQuantitySelector_C_SetSplitData_Params Parms;
	Parms.StartingCount = StartingCount;
	Parms.MaximumCount = MaximumCount;
	Parms.Item = Item;
	Parms.TitleText = TitleText;
	Parms.ButtonText = ButtonText;
	Parms.AdditionalInfoText = AdditionalInfoText;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature");

	Params::UQuantitySelector_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature");

	Params::UQuantitySelector_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature");

	Params::UQuantitySelector_C_BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature");

	Params::UQuantitySelector_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuantitySelector_C::OnActivated()
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "OnActivated");

	Params::UQuantitySelector_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuantitySelector_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "OnDeactivated");

	Params::UQuantitySelector_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuantitySelector_C::Construct()
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "Construct");

	Params::UQuantitySelector_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuantitySelector_C::HandleChangeInputMode(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "HandleChangeInputMode");

	Params::UQuantitySelector_C_HandleChangeInputMode_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleMaxPressed_PassThrough                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleTransferPressed_PassThrough                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleCancelPressed_PassThrough                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::ExecuteUbergraph_QuantitySelector(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, float K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough, bool CallFunc_HandleTransferPressed_PassThrough, bool CallFunc_HandleCancelPressed_PassThrough, bool K2Node_CustomEvent_bUsingGamepad, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_IntFloat_ReturnValue2, int32 CallFunc_Round_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "ExecuteUbergraph_QuantitySelector");

	Params::UQuantitySelector_C_ExecuteUbergraph_QuantitySelector_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HandleMaxPressed_PassThrough = CallFunc_HandleMaxPressed_PassThrough;
	Parms.CallFunc_HandleTransferPressed_PassThrough = CallFunc_HandleTransferPressed_PassThrough;
	Parms.CallFunc_HandleCancelPressed_PassThrough = CallFunc_HandleCancelPressed_PassThrough;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue2 = CallFunc_Multiply_IntFloat_ReturnValue2;
	Parms.CallFunc_Round_ReturnValue2 = CallFunc_Round_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   FortItem                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::OnStackValueChangedDispatcher__DelegateSignature(int32 NewValue, class UFortItem* FortItem)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "OnStackValueChangedDispatcher__DelegateSignature");

	Params::UQuantitySelector_C_OnStackValueChangedDispatcher__DelegateSignature_Params Parms;
	Parms.NewValue = NewValue;
	Parms.FortItem = FortItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChosenValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   FortItem                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuantitySelector_C::OnButtonClickedDispatcher__DelegateSignature(int32 ChosenValue, class UFortItem* FortItem)
{
	static auto Func = Class->GetFunction("QuantitySelector_C", "OnButtonClickedDispatcher__DelegateSignature");

	Params::UQuantitySelector_C_OnButtonClickedDispatcher__DelegateSignature_Params Parms;
	Parms.ChosenValue = ChosenValue;
	Parms.FortItem = FortItem;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCampaignMapIconTextButton_C::SetInitialMouseKeyboardStyle()
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "SetInitialMouseKeyboardStyle");

	Params::UCampaignMapIconTextButton_C_SetInitialMouseKeyboardStyle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapIconTextButton_C::UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "UpdateTextStyle");

	Params::UCampaignMapIconTextButton_C_UpdateTextStyle_Params Parms;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    ContentAlignment                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapIconTextButton_C::SetContentAlignment(enum class EHorizontalAlignment ContentAlignment)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "SetContentAlignment");

	Params::UCampaignMapIconTextButton_C_SetContentAlignment_Params Parms;
	Parms.ContentAlignment = ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*                  CallFunc_GetContentSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "UpdateContentAlignment");

	Params::UCampaignMapIconTextButton_C_UpdateContentAlignment_Params Parms;
	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ControllerInputStyle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "SetMouseKeyboardStyle");

	Params::UCampaignMapIconTextButton_C_SetMouseKeyboardStyle_Params Parms;
	Parms.ControllerInputStyle = ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "UpdateStyle");

	Params::UCampaignMapIconTextButton_C_UpdateStyle_Params Parms;
	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayText_ReturnValue                              ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UCampaignMapIconTextButton_C::UpdateText(bool Temp_bool_Variable, class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "UpdateText");

	Params::UCampaignMapIconTextButton_C_UpdateText_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisplayText_ReturnValue = CallFunc_GetDisplayText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ControllerInputStyle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "SetControllerStyle");

	Params::UCampaignMapIconTextButton_C_SetControllerStyle_Params Parms;
	Parms.ControllerInputStyle = ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "UpdateTextAndStyle");

	Params::UCampaignMapIconTextButton_C_UpdateTextAndStyle_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "InitializeButton");

	Params::UCampaignMapIconTextButton_C_InitializeButton_Params Parms;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (Parm)

void UCampaignMapIconTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "Set Icon");

	Params::UCampaignMapIconTextButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::Set_Text(class FText ButtonText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "Set Text");

	Params::UCampaignMapIconTextButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCampaignMapIconTextButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "OnCurrentTextStyleChanged");

	Params::UCampaignMapIconTextButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "PreConstruct");

	Params::UCampaignMapIconTextButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCampaignMapIconTextButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "SetTabLabelInfo");

	Params::UCampaignMapIconTextButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UCampaignMapIconTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UCampaignMapIconTextButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "OnTriggeredInputActionChanged");

	Params::UCampaignMapIconTextButton_C_OnTriggeredInputActionChanged_Params Parms;
	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapIconTextButton_C::OnActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "OnActionProgress");

	Params::UCampaignMapIconTextButton_C_OnActionProgress_Params Parms;
	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCampaignMapIconTextButton_C::OnActionComplete()
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "OnActionComplete");

	Params::UCampaignMapIconTextButton_C_OnActionComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapIconTextButton_C::Construct()
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "Construct");

	Params::UCampaignMapIconTextButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.ExecuteUbergraph_CampaignMapIconTextButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_Event_NewTriggeredAction                                  (ConstParm, NoDestructor)
// float                              K2Node_Event_HeldPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SlateBrush_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCampaignMapIconTextButton_C::ExecuteUbergraph_CampaignMapIconTextButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue2, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_ComponentBoundEvent_bUsingGamepad, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("CampaignMapIconTextButton_C", "ExecuteUbergraph_CampaignMapIconTextButton");

	Params::UCampaignMapIconTextButton_C_ExecuteUbergraph_CampaignMapIconTextButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.K2Node_Event_NewTriggeredAction = K2Node_Event_NewTriggeredAction;
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_EqualEqual_SlateBrush_ReturnValue = CallFunc_EqualEqual_SlateBrush_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInConsumePointerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static auto Func = Class->GetFunction("CommonUserWidget", "SetConsumePointerInput");

	Params::UCommonUserWidget_SetConsumePointerInput_Params Parms;
	Parms.bInConsumePointerInput = bInConsumePointerInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetTriggeredInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UCommonActivatablePanel*     OldPanel                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel)
{
	static auto Func = Class->GetFunction("CommonButton", "SetTriggeredInputAction");

	Params::UCommonButton_SetTriggeredInputAction_Params Parms;
	Parms.InputActionRow = InputActionRow;
	Parms.OldPanel = OldPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonButtonStyle>InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle)
{
	static auto Func = Class->GetFunction("CommonButton", "SetStyle");

	Params::UCommonButton_SetStyle_Params Parms;
	Parms.InStyle = InStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShouldSelectUponReceivingFocus                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static auto Func = Class->GetFunction("CommonButton", "SetShouldSelectUponReceivingFocus");

	Params::UCommonButton_SetShouldSelectUponReceivingFocus_Params Parms;
	Parms.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetSelectedInternal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static auto Func = Class->GetFunction("CommonButton", "SetSelectedInternal");

	Params::UCommonButton_SetSelectedInternal_Params Parms;
	Parms.bInSelected = bInSelected;
	Parms.bAllowSound = bAllowSound;
	Parms.bBroadcast = bBroadcast;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetMinDimensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMinWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMinHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetMinDimensions(int32 InMinWidth, int32 InMinHeight)
{
	static auto Func = Class->GetFunction("CommonButton", "SetMinDimensions");

	Params::UCommonButton_SetMinDimensions_Params Parms;
	Parms.InMinWidth = InMinWidth;
	Parms.InMinHeight = InMinHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetIsToggleable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsToggleable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetIsToggleable(bool bInIsToggleable)
{
	static auto Func = Class->GetFunction("CommonButton", "SetIsToggleable");

	Params::UCommonButton_SetIsToggleable_Params Parms;
	Parms.bInIsToggleable = bInIsToggleable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGiveClickFeedback                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static auto Func = Class->GetFunction("CommonButton", "SetIsSelected");

	Params::UCommonButton_SetIsSelected_Params Parms;
	Parms.InSelected = InSelected;
	Parms.bGiveClickFeedback = bGiveClickFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetIsSelectable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsSelectable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetIsSelectable(bool bInIsSelectable)
{
	static auto Func = Class->GetFunction("CommonButton", "SetIsSelectable");

	Params::UCommonButton_SetIsSelectable_Params Parms;
	Parms.bInIsSelectable = bInIsSelectable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetIsInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsInteractionEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static auto Func = Class->GetFunction("CommonButton", "SetIsInteractionEnabled");

	Params::UCommonButton_SetIsInteractionEnabled_Params Parms;
	Parms.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.SetInputActionProgressMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InProgressMaterialBrush                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        InProgressMaterialParam                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam)
{
	static auto Func = Class->GetFunction("CommonButton", "SetInputActionProgressMaterial");

	Params::UCommonButton_SetInputActionProgressMaterial_Params Parms;
	Parms.InProgressMaterialBrush = InProgressMaterialBrush;
	Parms.InProgressMaterialParam = InProgressMaterialParam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnUnhovered()
{
	static auto Func = Class->GetFunction("CommonButton", "OnUnhovered");

	Params::UCommonButton_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButton::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto Func = Class->GetFunction("CommonButton", "OnTriggeredInputActionChanged");

	Params::UCommonButton_OnTriggeredInputActionChanged_Params Parms;
	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnSelected()
{
	static auto Func = Class->GetFunction("CommonButton", "OnSelected");

	Params::UCommonButton_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnInputMethodChanged
// (Native, Protected)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::OnInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CommonButton", "OnInputMethodChanged");

	Params::UCommonButton_OnInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnHovered()
{
	static auto Func = Class->GetFunction("CommonButton", "OnHovered");

	Params::UCommonButton_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnEnabled()
{
	static auto Func = Class->GetFunction("CommonButton", "OnEnabled");

	Params::UCommonButton_OnEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnDoubleClicked()
{
	static auto Func = Class->GetFunction("CommonButton", "OnDoubleClicked");

	Params::UCommonButton_OnDoubleClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnDisabled()
{
	static auto Func = Class->GetFunction("CommonButton", "OnDisabled");

	Params::UCommonButton_OnDisabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnDeselected()
{
	static auto Func = Class->GetFunction("CommonButton", "OnDeselected");

	Params::UCommonButton_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("CommonButton", "OnCurrentTextStyleChanged");

	Params::UCommonButton_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnClicked()
{
	static auto Func = Class->GetFunction("CommonButton", "OnClicked");

	Params::UCommonButton_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::OnActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("CommonButton", "OnActionProgress");

	Params::UCommonButton_OnActionProgress_Params Parms;
	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton::OnActionComplete()
{
	static auto Func = Class->GetFunction("CommonButton", "OnActionComplete");

	Params::UCommonButton_OnActionComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButton.NativeOnActionProgress
// (Final, Native, Protected)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::NativeOnActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("CommonButton", "NativeOnActionProgress");

	Params::UCommonButton_NativeOnActionProgress_Params Parms;
	Parms.HeldPercent = HeldPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.NativeOnActionComplete
// (Final, Native, Protected)
// Parameters:

void UCommonButton::NativeOnActionComplete()
{
	static auto Func = Class->GetFunction("CommonButton", "NativeOnActionComplete");

	Params::UCommonButton_NativeOnActionComplete_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::IsPressed()
{
	static auto Func = Class->GetFunction("CommonButton", "IsPressed");

	Params::UCommonButton_IsPressed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::IsInteractionEnabled()
{
	static auto Func = Class->GetFunction("CommonButton", "IsInteractionEnabled");

	Params::UCommonButton_IsInteractionEnabled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::IsHovered()
{
	static auto Func = Class->GetFunction("CommonButton", "IsHovered");

	Params::UCommonButton_IsHovered_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.HandleTriggeringActionCommited
// (Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButton::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("CommonButton", "HandleTriggeringActionCommited");

	Params::UCommonButton_HandleTriggeringActionCommited_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonButton.HandleFocusReceived
// (Final, Native, Protected)
// Parameters:

void UCommonButton::HandleFocusReceived()
{
	static auto Func = Class->GetFunction("CommonButton", "HandleFocusReceived");

	Params::UCommonButton_HandleFocusReceived_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.HandleButtonReleased
// (Final, Native, Protected)
// Parameters:

void UCommonButton::HandleButtonReleased()
{
	static auto Func = Class->GetFunction("CommonButton", "HandleButtonReleased");

	Params::UCommonButton_HandleButtonReleased_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.HandleButtonPressed
// (Final, Native, Protected)
// Parameters:

void UCommonButton::HandleButtonPressed()
{
	static auto Func = Class->GetFunction("CommonButton", "HandleButtonPressed");

	Params::UCommonButton_HandleButtonPressed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.HandleButtonDoubleClicked
// (Final, Native, Protected)
// Parameters:

void UCommonButton::HandleButtonDoubleClicked()
{
	static auto Func = Class->GetFunction("CommonButton", "HandleButtonDoubleClicked");

	Params::UCommonButton_HandleButtonDoubleClicked_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:

void UCommonButton::HandleButtonClicked()
{
	static auto Func = Class->GetFunction("CommonButton", "HandleButtonClicked");

	Params::UCommonButton_HandleButtonClicked_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonStyle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonStyle* UCommonButton::GetStyle()
{
	static auto Func = Class->GetFunction("CommonButton", "GetStyle");

	Params::UCommonButton_GetStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UCommonButton::GetSingleMaterialStyleMID()
{
	static auto Func = Class->GetFunction("CommonButton", "GetSingleMaterialStyleMID");

	Params::UCommonButton_GetSingleMaterialStyleMID_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::GetShouldSelectUponReceivingFocus()
{
	static auto Func = Class->GetFunction("CommonButton", "GetShouldSelectUponReceivingFocus");

	Params::UCommonButton_GetShouldSelectUponReceivingFocus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::GetSelected()
{
	static auto Func = Class->GetFunction("CommonButton", "GetSelected");

	Params::UCommonButton_GetSelected_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButton::GetInputAction(struct FDataTableRowHandle* InputActionRow)
{
	static auto Func = Class->GetFunction("CommonButton", "GetInputAction");

	Params::UCommonButton_GetInputAction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (InputActionRow != nullptr)
		*InputActionRow = Parms.InputActionRow;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetCurrentTextStyleClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UCommonTextStyle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCommonTextStyle> UCommonButton::GetCurrentTextStyleClass()
{
	static auto Func = Class->GetFunction("CommonButton", "GetCurrentTextStyleClass");

	Params::UCommonButton_GetCurrentTextStyleClass_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetCurrentTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButton::GetCurrentTextStyle()
{
	static auto Func = Class->GetFunction("CommonButton", "GetCurrentTextStyle");

	Params::UCommonButton_GetCurrentTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButton.GetCurrentCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButton::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
{
	static auto Func = Class->GetFunction("CommonButton", "GetCurrentCustomPadding");

	Params::UCommonButton_GetCurrentCustomPadding_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = Parms.OutCustomPadding;

}


// Function CommonUI.CommonButton.GetCurrentButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButton::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
{
	static auto Func = Class->GetFunction("CommonButton", "GetCurrentButtonPadding");

	Params::UCommonButton_GetCurrentButtonPadding_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = Parms.OutButtonPadding;

}


// Function CommonUI.CommonButton.EnableButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButton::EnableButton()
{
	static auto Func = Class->GetFunction("CommonButton", "EnableButton");

	Params::UCommonButton_EnableButton_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.DisableButtonWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        DisabledReason                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonButton::DisableButtonWithReason(class FText& DisabledReason)
{
	static auto Func = Class->GetFunction("CommonButton", "DisableButtonWithReason");

	Params::UCommonButton_DisableButtonWithReason_Params Parms;
	Parms.DisabledReason = DisabledReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.DisableButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButton::DisableButton()
{
	static auto Func = Class->GetFunction("CommonButton", "DisableButton");

	Params::UCommonButton_DisableButton_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButton.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButton::ClearSelection()
{
	static auto Func = Class->GetFunction("CommonButton", "ClearSelection");

	Params::UCommonButton_ClearSelection_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetInputActionHandlerWithProgress");

	Params::UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params Parms;
	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetInputActionHandler");

	Params::UCommonActivatablePanel_SetInputActionHandler_Params Parms;
	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 DisabledCommitEvent                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetActionHandlerStateWithDisabledCommitEvent");

	Params::UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params Parms;
	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 DisabledCommitEvent                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	Params::UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params Parms;
	Parms.InputActionRow = InputActionRow;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetActionHandlerStateFromHandle");

	Params::UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params Parms;
	Parms.InputActionRow = InputActionRow;
	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "SetActionHandlerState");

	Params::UCommonActivatablePanel_SetActionHandlerState_Params Parms;
	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "RemoveInputActionHandler");

	Params::UCommonActivatablePanel_RemoveInputActionHandler_Params Parms;
	Parms.InputActionRow = InputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::RemoveAllInputActionHandlers()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "RemoveAllInputActionHandlers");

	Params::UCommonActivatablePanel_RemoveAllInputActionHandlers_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.PopPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::PopPanel()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "PopPanel");

	Params::UCommonActivatablePanel_PopPanel_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "OnInputModeChanged");

	Params::UCommonActivatablePanel_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatablePanel.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanel::OnDeactivated()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "OnDeactivated");

	Params::UCommonActivatablePanel_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatablePanel.OnBeginOutro
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UCommonActivatablePanel::OnBeginOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "OnBeginOutro");

	Params::UCommonActivatablePanel_OnBeginOutro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.OnBeginIntro
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UCommonActivatablePanel::OnBeginIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "OnBeginIntro");

	Params::UCommonActivatablePanel_OnBeginIntro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanel::OnActivated()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "OnActivated");

	Params::UCommonActivatablePanel_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatablePanel.IsIntroed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanel::IsIntroed()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "IsIntroed");

	Params::UCommonActivatablePanel_IsIntroed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatablePanel.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanel::IsActivated()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "IsActivated");

	Params::UCommonActivatablePanel_IsActivated_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanel::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "HasInputActionHandler");

	Params::UCommonActivatablePanel_HasInputActionHandler_Params Parms;
	Parms.InputActionRow = InputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatablePanel.GetInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>InputActionDataRows                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanel::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "GetInputActions");

	Params::UCommonActivatablePanel_GetInputActions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = Parms.InputActionDataRows;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatablePanel.EndOutro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::EndOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "EndOutro");

	Params::UCommonActivatablePanel_EndOutro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.EndIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::EndIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "EndIntro");

	Params::UCommonActivatablePanel_EndIntro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.BeginOutro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::BeginOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "BeginOutro");

	Params::UCommonActivatablePanel_BeginOutro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.BeginIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanel::BeginIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "BeginIntro");

	Params::UCommonActivatablePanel_BeginIntro_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "AddInputActionNoHandler");

	Params::UCommonActivatablePanel_AddInputActionNoHandler_Params Parms;
	Parms.DataTable = DataTable;
	Parms.RowName = RowName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "AddInputActionHandlerWithProgress");

	Params::UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params Parms;
	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanel::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanel", "AddInputActionHandler");

	Params::UCommonActivatablePanel_AddInputActionHandler_Params Parms;
	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSimulateDoubleClick                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick)
{
	static auto Func = Class->GetFunction("CommonListView", "SetSimulateDoubleClickOnSelectedItemClick");

	Params::UCommonListView_SetSimulateDoubleClickOnSelectedItemClick_Params Parms;
	Parms.bInSimulateDoubleClick = bInSimulateDoubleClick;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESelectionMode          SelectionMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetSelectionMode(enum class ESelectionMode SelectionMode)
{
	static auto Func = Class->GetFunction("CommonListView", "SetSelectionMode");

	Params::UCommonListView_SetSelectionMode_Params Parms;
	Parms.SelectionMode = SelectionMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetSelectedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWaitIfPendingRefresh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListView::SetSelectedItem(class UObject* Item, bool bWaitIfPendingRefresh)
{
	static auto Func = Class->GetFunction("CommonListView", "SetSelectedItem");

	Params::UCommonListView_SetSelectedItem_Params Parms;
	Parms.Item = Item;
	Parms.bWaitIfPendingRefresh = bWaitIfPendingRefresh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListView::SetSelectedIndex(int32 Index)
{
	static auto Func = Class->GetFunction("CommonListView", "SetSelectedIndex");

	Params::UCommonListView_SetSelectedIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.SetItemSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetItemSelection(class UObject* Item, bool bSelected)
{
	static auto Func = Class->GetFunction("CommonListView", "SetItemSelection");

	Params::UCommonListView_SetItemSelection_Params Parms;
	Parms.Item = Item;
	Parms.bSelected = bSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetItemHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetItemHeight(float NewHeight)
{
	static auto Func = Class->GetFunction("CommonListView", "SetItemHeight");

	Params::UCommonListView_SetItemHeight_Params Parms;
	Parms.NewHeight = NewHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetDesiredItemPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     DesiredPadding                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonListView::SetDesiredItemPadding(struct FMargin& DesiredPadding)
{
	static auto Func = Class->GetFunction("CommonListView", "SetDesiredItemPadding");

	Params::UCommonListView_SetDesiredItemPadding_Params Parms;
	Parms.DesiredPadding = DesiredPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.SetDataProvider
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             InDataProvider                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonListView::SetDataProvider(TArray<class UObject*>& InDataProvider)
{
	static auto Func = Class->GetFunction("CommonListView", "SetDataProvider");

	Params::UCommonListView_SetDataProvider_Params Parms;
	Parms.InDataProvider = InDataProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.ScrollIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NavigateOnScrollIntoView                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::ScrollIntoView(class UObject* Item, bool NavigateOnScrollIntoView)
{
	static auto Func = Class->GetFunction("CommonListView", "ScrollIntoView");

	Params::UCommonListView_ScrollIntoView_Params Parms;
	Parms.Item = Item;
	Parms.NavigateOnScrollIntoView = NavigateOnScrollIntoView;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListView::IsRefreshPending()
{
	static auto Func = Class->GetFunction("CommonListView", "IsRefreshPending");

	Params::UCommonListView_IsRefreshPending_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.IsItemVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListView::IsItemVisible(class UObject* Item)
{
	static auto Func = Class->GetFunction("CommonListView", "IsItemVisible");

	Params::UCommonListView_IsItemVisible_Params Parms;
	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetSelectionModeBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESelectionMode          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESelectionMode UCommonListView::GetSelectionModeBP()
{
	static auto Func = Class->GetFunction("CommonListView", "GetSelectionModeBP");

	Params::UCommonListView_GetSelectionModeBP_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetSelectedItems
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>             Items                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListView::GetSelectedItems(TArray<class UObject*>* Items)
{
	static auto Func = Class->GetFunction("CommonListView", "GetSelectedItems");

	Params::UCommonListView_GetSelectedItems_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Items != nullptr)
		*Items = Parms.Items;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetSelectedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UCommonListView::GetSelectedItem()
{
	static auto Func = Class->GetFunction("CommonListView", "GetSelectedItem");

	Params::UCommonListView_GetSelectedItem_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetNumItemsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonListView::GetNumItemsSelected()
{
	static auto Func = Class->GetFunction("CommonListView", "GetNumItemsSelected");

	Params::UCommonListView_GetNumItemsSelected_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonListView::GetNumItems()
{
	static auto Func = Class->GetFunction("CommonListView", "GetNumItems");

	Params::UCommonListView_GetNumItems_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UCommonListView::GetItemAt(int32 Index)
{
	static auto Func = Class->GetFunction("CommonListView", "GetItemAt");

	Params::UCommonListView_GetItemAt_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonListView::GetIndexForItem(class UObject* Item)
{
	static auto Func = Class->GetFunction("CommonListView", "GetIndexForItem");

	Params::UCommonListView_GetIndexForItem_Params Parms;
	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::DynamicHandleItemUnhoveredCommonButton(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonListView", "DynamicHandleItemUnhoveredCommonButton");

	Params::UCommonListView_DynamicHandleItemUnhoveredCommonButton_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::DynamicHandleItemHoveredCommonButton(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonListView", "DynamicHandleItemHoveredCommonButton");

	Params::UCommonListView_DynamicHandleItemHoveredCommonButton_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::DynamicHandleItemDoubleClickedCommonButton(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonListView", "DynamicHandleItemDoubleClickedCommonButton");

	Params::UCommonListView_DynamicHandleItemDoubleClickedCommonButton_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.DynamicHandleItemClickedUserWidget
// (Final, Native, Protected)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::DynamicHandleItemClickedUserWidget(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("CommonListView", "DynamicHandleItemClickedUserWidget");

	Params::UCommonListView_DynamicHandleItemClickedUserWidget_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.DynamicHandleItemClickedCommonButton
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::DynamicHandleItemClickedCommonButton(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonListView", "DynamicHandleItemClickedCommonButton");

	Params::UCommonListView_DynamicHandleItemClickedCommonButton_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonListView::ClearSelection()
{
	static auto Func = Class->GetFunction("CommonListView", "ClearSelection");

	Params::UCommonListView_ClearSelection_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonListView::Clear()
{
	static auto Func = Class->GetFunction("CommonListView", "Clear");

	Params::UCommonListView_Clear_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.CancelScrollIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonListView::CancelScrollIntoView()
{
	static auto Func = Class->GetFunction("CommonListView", "CancelScrollIntoView");

	Params::UCommonListView_CancelScrollIntoView_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListView.AddItem
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::AddItem(class UObject* Item)
{
	static auto Func = Class->GetFunction("CommonListView", "AddItem");

	Params::UCommonListView_AddItem_Params Parms;
	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTileView.SetItemWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTileView::SetItemWidth(float NewWidth)
{
	static auto Func = Class->GetFunction("CommonTileView", "SetItemWidth");

	Params::UCommonTileView_SetItemWidth_Params Parms;
	Parms.NewWidth = NewWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.SetTabVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        NewVisibility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "SetTabVisibility");

	Params::UCommonTabListWidget_SetTabVisibility_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.NewVisibility = NewVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.SetTabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::SetTabEnabled(class FName TabNameID, bool bEnable)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "SetTabEnabled");

	Params::UCommonTabListWidget_SetTabEnabled_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.SetListeningForInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldListen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::SetListeningForInput(bool bShouldListen)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "SetListeningForInput");

	Params::UCommonTabListWidget_SetListeningForInput_Params Parms;
	Parms.bShouldListen = bShouldListen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonWidgetSwitcher*       CommonSwitcher                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "SetLinkedSwitcher");

	Params::UCommonTabListWidget_SetLinkedSwitcher_Params Parms;
	Parms.CommonSwitcher = CommonSwitcher;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.SelectTabByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuppressClickFeedback                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidget::SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "SelectTabByID");

	Params::UCommonTabListWidget_SelectTabByID_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.bSuppressClickFeedback = bSuppressClickFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.RemoveTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidget::RemoveTab(class FName TabNameID)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "RemoveTab");

	Params::UCommonTabListWidget_RemoveTab_Params Parms;
	Parms.TabNameID = TabNameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.RemoveAllTabs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTabListWidget::RemoveAllTabs()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "RemoveAllTabs");

	Params::UCommonTabListWidget_RemoveAllTabs_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.RegisterTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonButton>   ButtonWidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ContentWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidget::RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButton> ButtonWidgetType, class UWidget* ContentWidget)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "RegisterTab");

	Params::UCommonTabListWidget_RegisterTab_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.ButtonWidgetType = ButtonWidgetType;
	Parms.ContentWidget = ContentWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "OnTabSelected__DelegateSignature");

	Params::UCommonTabListWidget_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "OnTabButtonRemoved__DelegateSignature");

	Params::UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "OnTabButtonCreated__DelegateSignature");

	Params::UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidget.HandleTabRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::HandleTabRemoved(class FName TabNameID, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandleTabRemoved");

	Params::UCommonTabListWidget_HandleTabRemoved_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.HandleTabCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandleTabCreated");

	Params::UCommonTabListWidget_HandleTabCreated_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               SelectedTabButton                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandleTabButtonSelected");

	Params::UCommonTabListWidget_HandleTabButtonSelected_Params Parms;
	Parms.SelectedTabButton = SelectedTabButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandlePreviousTabInputAction");

	Params::UCommonTabListWidget_HandlePreviousTabInputAction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidget::HandlePreLinkedSwitcherChanged_BP()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandlePreLinkedSwitcherChanged_BP");

	Params::UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidget::HandlePostLinkedSwitcherChanged_BP()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandlePostLinkedSwitcherChanged_BP");

	Params::UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidget::HandleNextTabInputAction(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "HandleNextTabInputAction");

	Params::UCommonTabListWidget_HandleNextTabInputAction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidget.GetTabCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonTabListWidget::GetTabCount()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "GetTabCount");

	Params::UCommonTabListWidget_GetTabCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.GetTabButtonByID
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButton* UCommonTabListWidget::GetTabButtonByID(class FName TabNameID)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "GetTabButtonByID");

	Params::UCommonTabListWidget_GetTabButtonByID_Params Parms;
	Parms.TabNameID = TabNameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonWidgetSwitcher*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonWidgetSwitcher* UCommonTabListWidget::GetLinkedSwitcher()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "GetLinkedSwitcher");

	Params::UCommonTabListWidget_GetLinkedSwitcher_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.GetActiveTab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidget::GetActiveTab()
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "GetActiveTab");

	Params::UCommonTabListWidget_GetActiveTab_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidget.DisableTabWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonTabListWidget::DisableTabWithReason(class FName TabNameID, class FText& Reason)
{
	static auto Func = Class->GetFunction("CommonTabListWidget", "DisableTabWithReason");

	Params::UCommonTabListWidget_DisableTabWithReason_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static auto Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveWidget");

	Params::UCommonWidgetGroupBase_RemoveWidget_Params Parms;
	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetGroupBase::RemoveAll()
{
	static auto Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveAll");

	Params::UCommonWidgetGroupBase_RemoveAll_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static auto Func = Class->GetFunction("CommonWidgetGroupBase", "AddWidget");

	Params::UCommonWidgetGroupBase_AddWidget_Params Parms;
	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.SetSelectionRequired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRequireSelection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::SetSelectionRequired(bool bRequireSelection)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "SetSelectionRequired");

	Params::UCommonButtonGroup_SetSelectionRequired_Params Parms;
	Parms.bRequireSelection = bRequireSelection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.SelectPreviousButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::SelectPreviousButton(bool bAllowWrap)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "SelectPreviousButton");

	Params::UCommonButtonGroup_SelectPreviousButton_Params Parms;
	Parms.bAllowWrap = bAllowWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.SelectNextButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::SelectNextButton(bool bAllowWrap)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "SelectNextButton");

	Params::UCommonButtonGroup_SelectNextButton_Params Parms;
	Parms.bAllowWrap = bAllowWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::SelectButtonAtIndex(int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "SelectButtonAtIndex");

	Params::UCommonButtonGroup_SelectButtonAtIndex_Params Parms;
	Parms.ButtonIndex = ButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
// (Native, Protected)
// Parameters:
// class UCommonButton*               BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "OnSelectionStateChanged");

	Params::UCommonButtonGroup_OnSelectionStateChanged_Params Parms;
	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButton*               BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::OnHandleButtonDoubleClicked(class UCommonButton* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "OnHandleButtonDoubleClicked");

	Params::UCommonButtonGroup_OnHandleButtonDoubleClicked_Params Parms;
	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
// (Native, Protected)
// Parameters:
// class UCommonButton*               BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::OnHandleButtonClicked(class UCommonButton* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "OnHandleButtonClicked");

	Params::UCommonButtonGroup_OnHandleButtonClicked_Params Parms;
	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButton*               BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::OnButtonUnhovered(class UCommonButton* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "OnButtonUnhovered");

	Params::UCommonButtonGroup_OnButtonUnhovered_Params Parms;
	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.OnButtonHovered
// (Native, Protected)
// Parameters:
// class UCommonButton*               BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroup::OnButtonHovered(class UCommonButton* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "OnButtonHovered");

	Params::UCommonButtonGroup_OnButtonHovered_Params Parms;
	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroup.HasAnyButtons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonGroup::HasAnyButtons()
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "HasAnyButtons");

	Params::UCommonButtonGroup_HasAnyButtons_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroup::GetSelectedButtonIndex()
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "GetSelectedButtonIndex");

	Params::UCommonButtonGroup_GetSelectedButtonIndex_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButton*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButton* UCommonButtonGroup::GetButtonAtIndex(int32 Index)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "GetButtonAtIndex");

	Params::UCommonButtonGroup_GetButtonAtIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroup.FindButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButton*               ButtonToFind                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroup::FindButtonIndex(class UCommonButton* ButtonToFind)
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "FindButtonIndex");

	Params::UCommonButtonGroup_FindButtonIndex_Params Parms;
	Parms.ButtonToFind = ButtonToFind;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroup.DeselectAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButtonGroup::DeselectAll()
{
	static auto Func = Class->GetFunction("CommonButtonGroup", "DeselectAll");

	Params::UCommonButtonGroup_DeselectAll_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InWrapTextAt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt)
{
	static auto Func = Class->GetFunction("CommonTextBlock", "SetWrapTextWidth");

	Params::UCommonTextBlock_SetWrapTextWidth_Params Parms;
	Parms.InWrapTextAt = InWrapTextAt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonTextStyle>InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetStyle(TSubclassOf<class UCommonTextStyle> InStyle)
{
	static auto Func = Class->GetFunction("CommonTextBlock", "SetStyle");

	Params::UCommonTextBlock_SetStyle_Params Parms;
	Parms.InStyle = InStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetScrollStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonTextScrollStyle>InScrollStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetScrollStyle(TSubclassOf<class UCommonTextScrollStyle> InScrollStyle)
{
	static auto Func = Class->GetFunction("CommonTextBlock", "SetScrollStyle");

	Params::UCommonTextBlock_SetScrollStyle_Params Parms;
	Parms.InScrollStyle = InScrollStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonTextStyle>InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonTextScrollStyle>InScrollStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetProperties(TSubclassOf<class UCommonTextStyle> InStyle, TSubclassOf<class UCommonTextScrollStyle> InScrollStyle)
{
	static auto Func = Class->GetFunction("CommonTextBlock", "SetProperties");

	Params::UCommonTextBlock_SetProperties_Params Parms;
	Parms.InStyle = InStyle;
	Parms.InScrollStyle = InScrollStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTextBlock::ResetScrollState()
{
	static auto Func = Class->GetFunction("CommonTextBlock", "ResetScrollState");

	Params::UCommonTextBlock_ResetScrollState_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "SetCurrentValue");

	Params::UCommonNumericTextBlock_SetCurrentValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "OnOutro__DelegateSignature");

	Params::UCommonNumericTextBlock_OnOutro__DelegateSignature_Params Parms;
	Parms.NumericTextBlock = NumericTextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HadCompleted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationEnded__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params Parms;
	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "IsInterpolatingNumericValue");

	Params::UCommonNumericTextBlock_IsInterpolatingNumericValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TargetValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumInterpolationDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumChangeRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutroOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "InterpolateToValue");

	Params::UCommonNumericTextBlock_InterpolateToValue_Params Parms;
	Parms.TargetValue = TargetValue;
	Parms.MaximumInterpolationDuration = MaximumInterpolationDuration;
	Parms.MinimumChangeRate = MinimumChangeRate;
	Parms.OutroOffset = OutroOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonNumericTextBlock::GetTargetValue()
{
	static auto Func = Class->GetFunction("CommonNumericTextBlock", "GetTargetValue");

	Params::UCommonNumericTextBlock_GetTargetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyImage.ShowDefaultImage
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonLazyImage::ShowDefaultImage()
{
	static auto Func = Class->GetFunction("CommonLazyImage", "ShowDefaultImage");

	Params::UCommonLazyImage_ShowDefaultImage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   LazyTexture                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize)
{
	static auto Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyTexture");

	Params::UCommonLazyImage_SetBrushFromLazyTexture_Params Parms;
	Parms.LazyTexture = LazyTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>LazyMaterial                                                     (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial)
{
	static auto Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyMaterial");

	Params::UCommonLazyImage_SetBrushFromLazyMaterial_Params Parms;
	Parms.LazyMaterial = LazyMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      LazyObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchTextureSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize)
{
	static auto Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyDisplayAsset");

	Params::UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params Parms;
	Parms.LazyObject = LazyObject;
	Parms.bMatchTextureSize = bMatchTextureSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLazyImage::IsLoading()
{
	static auto Func = Class->GetFunction("CommonLazyImage", "IsLoading");

	Params::UCommonLazyImage_IsLoading_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyImage.ForwardLoadingStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsLoading                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::ForwardLoadingStateChanged(bool bIsLoading)
{
	static auto Func = Class->GetFunction("CommonLazyImage", "ForwardLoadingStateChanged");

	Params::UCommonLazyImage_ForwardLoadingStateChanged_Params Parms;
	Parms.bIsLoading = bIsLoading;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActionWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("CommonActionWidget", "SetInputAction");

	Params::UCommonActionWidget_SetInputAction_Params Parms;
	Parms.InputActionRow = InputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CommonActionWidget", "OnInputMethodChanged__DelegateSignature");

	Params::UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActionWidget::IsHeldAction()
{
	static auto Func = Class->GetFunction("CommonActionWidget", "IsHeldAction");

	Params::UCommonActionWidget_IsHeldAction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static auto Func = Class->GetFunction("CommonActionWidget", "GetIcon");

	Params::UCommonActionWidget_GetIcon_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonActionWidget::GetDisplayText()
{
	static auto Func = Class->GetFunction("CommonActionWidget", "GetDisplayText");

	Params::UCommonActionWidget_GetDisplayText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonBorderStyle", "GetBackgroundBrush");

	Params::UCommonBorderStyle_GetBackgroundBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonBorder.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonBorder::SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle)
{
	static auto Func = Class->GetFunction("CommonBorder", "SetStyle");

	Params::UCommonBorder_SetStyle_Params Parms;
	Parms.InStyle = InStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetSelectedTextStyle");

	Params::UCommonButtonStyle_GetSelectedTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetSelectedPressedBrush");

	Params::UCommonButtonStyle_GetSelectedPressedBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredTextStyle");

	Params::UCommonButtonStyle_GetSelectedHoveredTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredBrush");

	Params::UCommonButtonStyle_GetSelectedHoveredBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetSelectedBaseBrush");

	Params::UCommonButtonStyle_GetSelectedBaseBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetNormalTextStyle");

	Params::UCommonButtonStyle_GetNormalTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetNormalPressedBrush");

	Params::UCommonButtonStyle_GetNormalPressedBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredTextStyle");

	Params::UCommonButtonStyle_GetNormalHoveredTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredBrush");

	Params::UCommonButtonStyle_GetNormalHoveredBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetNormalBaseBrush");

	Params::UCommonButtonStyle_GetNormalBaseBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetMaterialBrush");

	Params::UCommonButtonStyle_GetMaterialBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetDisabledTextStyle");

	Params::UCommonButtonStyle_GetDisabledTextStyle_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetDisabledBrush");

	Params::UCommonButtonStyle_GetDisabledBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetCustomPadding");

	Params::UCommonButtonStyle_GetCustomPadding_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = Parms.OutCustomPadding;

}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
{
	static auto Func = Class->GetFunction("CommonButtonStyle", "GetButtonPadding");

	Params::UCommonButtonStyle_GetButtonPadding_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = Parms.OutButtonPadding;

}


// DelegateFunction CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EUINavigation           NavigationType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonCustomNavigation::OnCustomNavigationEvent__DelegateSignature(enum class EUINavigation NavigationType)
{
	static auto Func = Class->GetFunction("CommonCustomNavigation", "OnCustomNavigationEvent__DelegateSignature");

	Params::UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Params Parms;
	Parms.NavigationType = NavigationType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManager::SuspendStartingOperationProcessing()
{
	static auto Func = Class->GetFunction("CommonInputManager", "SuspendStartingOperationProcessing");

	Params::UCommonInputManager_SuspendStartingOperationProcessing_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionDataRow                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CompleteEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ProgressEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManager::StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonInputManager", "StopListeningForExistingHeldAction");

	Params::UCommonInputManager_StopListeningForExistingHeldAction_Params Parms;
	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionDataRow                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 CompleteEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ProgressEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManager::StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonInputManager", "StartListeningForExistingHeldAction");

	Params::UCommonInputManager_StartListeningForExistingHeldAction_Params Parms;
	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InFilterPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManager::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority)
{
	static auto Func = Class->GetFunction("CommonInputManager", "SetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params Parms;
	Parms.InFilterPriority = InFilterPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManager::ResumeStartingOperationProcessing()
{
	static auto Func = Class->GetFunction("CommonInputManager", "ResumeStartingOperationProcessing");

	Params::UCommonInputManager_ResumeStartingOperationProcessing_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonInputManager.PushActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel*     ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIntroPanel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutroPanelBelow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManager::PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static auto Func = Class->GetFunction("CommonInputManager", "PushActivatablePanel");

	Params::UCommonInputManager_PushActivatablePanel_Params Parms;
	Parms.ActivatablePanel = ActivatablePanel;
	Parms.bIntroPanel = bIntroPanel;
	Parms.bOutroPanelBelow = bOutroPanelBelow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonInputManager.PopActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel*     ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManager::PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto Func = Class->GetFunction("CommonInputManager", "PopActivatablePanel");

	Params::UCommonInputManager_PopActivatablePanel_Params Parms;
	Parms.ActivatablePanel = ActivatablePanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonInputManager.IsPanelOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanel*     InPanel                                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManager::IsPanelOnStack(class UCommonActivatablePanel* InPanel)
{
	static auto Func = Class->GetFunction("CommonInputManager", "IsPanelOnStack");

	Params::UCommonInputManager_IsPanelOnStack_Params Parms;
	Parms.InPanel = InPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.IsInputSuspended
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManager::IsInputSuspended()
{
	static auto Func = Class->GetFunction("CommonInputManager", "IsInputSuspended");

	Params::UCommonInputManager_IsInputSuspended_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonInputManager::GetGlobalInputHandlerPriorityFilter()
{
	static auto Func = Class->GetFunction("CommonInputManager", "GetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputManager.GetAvailableInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>AvailableInputActions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManager::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static auto Func = Class->GetFunction("CommonInputManager", "GetAvailableInputActions");

	Params::UCommonInputManager_GetAvailableInputActions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = Parms.AvailableInputActions;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InLoadingText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetLoadingText(class FText& InLoadingText)
{
	static auto Func = Class->GetFunction("CommonLoadGuard", "SetLoadingText");

	Params::UCommonLoadGuard_SetLoadingText_Params Parms;
	Parms.InLoadingText = InLoadingText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLoading                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static auto Func = Class->GetFunction("CommonLoadGuard", "SetIsLoading");

	Params::UCommonLoadGuard_SetIsLoading_Params Parms;
	Parms.bInIsLoading = bInIsLoading;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
{
	static auto Func = Class->GetFunction("CommonLoadGuard", "OnAssetLoaded__DelegateSignature");

	Params::UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params Parms;
	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonLoadGuard.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLoadGuard::IsLoading()
{
	static auto Func = Class->GetFunction("CommonLoadGuard", "IsLoading");

	Params::UCommonLoadGuard_IsLoading_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      InLazyAsset                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 OnAssetLoaded                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonLoadGuard::BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, UDelegateProperty_& OnAssetLoaded)
{
	static auto Func = Class->GetFunction("CommonLoadGuard", "BP_GuardAndLoadAsset");

	Params::UCommonLoadGuard_BP_GuardAndLoadAsset_Params Parms;
	Parms.InLazyAsset = InLazyAsset;
	Parms.OnAssetLoaded = OnAssetLoaded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTreeView.SetSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTreeView::SetSelection(class UObject* InItem)
{
	static auto Func = Class->GetFunction("CommonTreeView", "SetSelection");

	Params::UCommonTreeView_SetSelection_Params Parms;
	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTreeView.SetItemExpansion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InShouldExpandItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTreeView::SetItemExpansion(class UObject* Item, bool InShouldExpandItem)
{
	static auto Func = Class->GetFunction("CommonTreeView", "SetItemExpansion");

	Params::UCommonTreeView_SetItemExpansion_Params Parms;
	Parms.Item = Item;
	Parms.InShouldExpandItem = InShouldExpandItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTreeView.RequestRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTreeView::RequestRefresh()
{
	static auto Func = Class->GetFunction("CommonTreeView", "RequestRefresh");

	Params::UCommonTreeView_RequestRefresh_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton
// (Final, Native, Private)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTreeView::DynamicHandleItemClickedCommonButton(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonTreeView", "DynamicHandleItemClickedCommonButton");

	Params::UCommonTreeView_DynamicHandleItemClickedCommonButton_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPoolableWidgetInterface::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnReleaseToPool");

	Params::UCommonPoolableWidgetInterface_OnReleaseToPool_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnAcquireFromPool");

	Params::UCommonPoolableWidgetInterface_OnAcquireFromPool_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.ToggleExpansion
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonListItem::ToggleExpansion()
{
	static auto Func = Class->GetFunction("CommonListItem", "ToggleExpansion");

	Params::UCommonListItem_ToggleExpansion_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.SetSelected
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListItem::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("CommonListItem", "SetSelected");

	Params::UCommonListItem_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.SetIndexInList
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListItem::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("CommonListItem", "SetIndexInList");

	Params::UCommonListItem_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.SetExpanded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListItem::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("CommonListItem", "SetExpanded");

	Params::UCommonListItem_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.RegisterOnClicked
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonListItem::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("CommonListItem", "RegisterOnClicked");

	Params::UCommonListItem_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonListItem::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("CommonListItem", "Private_OnExpanderArrowShiftClicked");

	Params::UCommonListItem_Private_OnExpanderArrowShiftClicked_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonListItem.IsItemExpanded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonListItem::IsItemExpanded()
{
	static auto Func = Class->GetFunction("CommonListItem", "IsItemExpanded");

	Params::UCommonListItem_IsItemExpanded_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListItem.GetIndentLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonListItem::GetIndentLevel()
{
	static auto Func = Class->GetFunction("CommonListItem", "GetIndentLevel");

	Params::UCommonListItem_GetIndentLevel_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListItem.DoesItemHaveChildren
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonListItem::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("CommonListItem", "DoesItemHaveChildren");

	Params::UCommonListItem_DoesItemHaveChildren_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonObjectListItem.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonObjectListItem::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("CommonObjectListItem", "SetData");

	Params::UCommonObjectListItem_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonObjectListItem.Reset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonObjectListItem::Reset()
{
	static auto Func = Class->GetFunction("CommonObjectListItem", "Reset");

	Params::UCommonObjectListItem_Reset_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonObjectListItem.GetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UCommonObjectListItem::GetData()
{
	static auto Func = Class->GetFunction("CommonObjectListItem", "GetData");

	Params::UCommonObjectListItem_GetData_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   OutShadowOffset                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetShadowOffset");

	Params::UCommonTextStyle_GetShadowOffset_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = Parms.OutShadowOffset;

}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetShadowColor");

	Params::UCommonTextStyle_GetShadowColor_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutColor != nullptr)
		*OutColor = Parms.OutColor;

}


// Function CommonUI.CommonTextStyle.GetMargin
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutMargin                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetMargin");

	Params::UCommonTextStyle_GetMargin_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutMargin != nullptr)
		*OutMargin = Parms.OutMargin;

}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetLineHeightPercentage");

	Params::UCommonTextStyle_GetLineHeightPercentage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTextStyle.GetFont
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              OutFont                                                          (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetFont");

	Params::UCommonTextStyle_GetFont_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutFont != nullptr)
		*OutFont = Parms.OutFont;

}


// Function CommonUI.CommonTextStyle.GetColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
{
	static auto Func = Class->GetFunction("CommonTextStyle", "GetColor");

	Params::UCommonTextStyle_GetColor_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutColor != nullptr)
		*OutColor = Parms.OutColor;

}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   InTimespan                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
{
	static auto Func = Class->GetFunction("CommonDateTimeTextBlock", "SetTimespanValue");

	Params::UCommonDateTimeTextBlock_SetTimespanValue_Params Parms;
	Parms.InTimespan = InTimespan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowAsCountdown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown)
{
	static auto Func = Class->GetFunction("CommonDateTimeTextBlock", "SetDateTimeValue");

	Params::UCommonDateTimeTextBlock_SetDateTimeValue_Params Parms;
	Parms.InDateTime = InDateTime;
	Parms.bShowAsCountdown = bShowAsCountdown;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
{
	static auto Func = Class->GetFunction("CommonDateTimeTextBlock", "GetDateTime");

	Params::UCommonDateTimeTextBlock_GetDateTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUIContext.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType        InGamepadInputType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIContext::SetGamepadInputType(enum class ECommonInputType InGamepadInputType)
{
	static auto Func = Class->GetFunction("CommonUIContext", "SetGamepadInputType");

	Params::UCommonUIContext_SetGamepadInputType_Params Parms;
	Parms.InGamepadInputType = InGamepadInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonUIContext.IsUsingTouch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIContext::IsUsingTouch()
{
	static auto Func = Class->GetFunction("CommonUIContext", "IsUsingTouch");

	Params::UCommonUIContext_IsUsingTouch_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUIContext.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIContext::IsUsingPointerInput()
{
	static auto Func = Class->GetFunction("CommonUIContext", "IsUsingPointerInput");

	Params::UCommonUIContext_IsUsingPointerInput_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUIContext.IsUsingGamepad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIContext::IsUsingGamepad()
{
	static auto Func = Class->GetFunction("CommonUIContext", "IsUsingGamepad");

	Params::UCommonUIContext_IsUsingGamepad_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bInputSuspended                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIContext::InputSuspensionChanged__DelegateSignature(bool bInputSuspended)
{
	static auto Func = Class->GetFunction("CommonUIContext", "InputSuspensionChanged__DelegateSignature");

	Params::UCommonUIContext_InputSuspensionChanged__DelegateSignature_Params Parms;
	Parms.bInputSuspended = bInputSuspended;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIContext::InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CommonUIContext", "InputMethodChangedDelegate__DelegateSignature");

	Params::UCommonUIContext_InputMethodChangedDelegate__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonUIContext.GetInputManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonInputManager*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonInputManager* UCommonUIContext::GetInputManager()
{
	static auto Func = Class->GetFunction("CommonUIContext", "GetInputManager");

	Params::UCommonUIContext_GetInputManager_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUIContext.GetInputActionButtonIcon
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRowHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonUIContext::GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType)
{
	static auto Func = Class->GetFunction("CommonUIContext", "GetInputActionButtonIcon");

	Params::UCommonUIContext_GetInputActionButtonIcon_Params Parms;
	Parms.InputActionRowHandle = InputActionRowHandle;
	Parms.InputType = InputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUIContext.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonUIContext::GetCurrentInputType()
{
	static auto Func = Class->GetFunction("CommonUIContext", "GetCurrentInputType");

	Params::UCommonUIContext_GetCurrentInputType_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     StartingWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UWidget>         Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonUILibrary::FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type)
{
	static auto Func = Class->GetFunction("CommonUILibrary", "FindParentWidgetOfType");

	Params::UCommonUILibrary_FindParentWidgetOfType_Params Parms;
	Parms.StartingWidget = StartingWidget;
	Parms.Type = Type;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.ShiftTextRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::ShiftTextRight(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonRotator", "ShiftTextRight");

	Params::UCommonRotator_ShiftTextRight_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::ShiftTextLeft(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CommonRotator", "ShiftTextLeft");

	Params::UCommonRotator_ShiftTextLeft_Params Parms;
	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.SetSelectedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::SetSelectedItem(int32 InValue)
{
	static auto Func = Class->GetFunction("CommonRotator", "SetSelectedItem");

	Params::UCommonRotator_SetSelectedItem_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                Labels                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCommonRotator::PopulateTextLabels(const TArray<class FText>& Labels)
{
	static auto Func = Class->GetFunction("CommonRotator", "PopulateTextLabels");

	Params::UCommonRotator_PopulateTextLabels_Params Parms;
	Parms.Labels = Labels;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonRotator::GetSelectedText()
{
	static auto Func = Class->GetFunction("CommonRotator", "GetSelectedText");

	Params::UCommonRotator_GetSelectedText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonRotator::GetSelectedIndex()
{
	static auto Func = Class->GetFunction("CommonRotator", "GetSelectedIndex");

	Params::UCommonRotator_GetSelectedIndex_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonInputReflector.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonInputReflector::OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static auto Func = Class->GetFunction("CommonInputReflector", "OnButtonAdded");

	Params::UCommonInputReflector_OnButtonAdded_Params Parms;
	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonInputReflector.ClearButtons
// (Event, Public, BlueprintEvent)
// Parameters:

void UCommonInputReflector::ClearButtons()
{
	static auto Func = Class->GetFunction("CommonInputReflector", "ClearButtons");

	Params::UCommonInputReflector_ClearButtons_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcher::SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "SetActiveWidgetIndex_Advanced");

	Params::UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params Parms;
	Parms.Index = Index;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcher::SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "SetActiveWidget_Advanced");

	Params::UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params Parms;
	Parms.Widget = Widget;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.HasWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonWidgetSwitcher::HasWidgets()
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "HasWidgets");

	Params::UCommonWidgetSwitcher_HasWidgets_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanel*     DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcher::HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "HandleActiveWidgetDeactivated");

	Params::UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params Parms;
	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcher::DeactivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "DeactivateWidget");

	Params::UCommonWidgetSwitcher_DeactivateWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcher::ActivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "ActivateWidget");

	Params::UCommonWidgetSwitcher_ActivateWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "ActivatePreviousWidget");

	Params::UCommonWidgetSwitcher_ActivatePreviousWidget_Params Parms;
	Parms.bCanWrap = bCanWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcher", "ActivateNextWidget");

	Params::UCommonWidgetSwitcher_ActivateNextWidget_Params Parms;
	Parms.bCanWrap = bCanWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32 Index)
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_SetActiveWidgetIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidget");

	Params::UCommonWidgetCarousel_SetActiveWidget_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::PreviousPage()
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "PreviousPage");

	Params::UCommonWidgetCarousel_PreviousPage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::NextPage()
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "NextPage");

	Params::UCommonWidgetCarousel_NextPage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32 Index)
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "GetWidgetAtIndex");

	Params::UCommonWidgetCarousel_GetWidgetAtIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "GetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_GetActiveWidgetIndex_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "EndAutoScrolling");

	Params::UCommonWidgetCarousel_EndAutoScrolling_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollInterval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static auto Func = Class->GetFunction("CommonWidgetCarousel", "BeginAutoScrolling");

	Params::UCommonWidgetCarousel_BeginAutoScrolling_Params Parms;
	Parms.ScrollInterval = ScrollInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetStack.PushWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetStack::PushWidget(class UWidget* InWidget)
{
	static auto Func = Class->GetFunction("CommonWidgetStack", "PushWidget");

	Params::UCommonWidgetStack_PushWidget_Params Parms;
	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetStack.PopWigdet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetStack::PopWigdet()
{
	static auto Func = Class->GetFunction("CommonWidgetStack", "PopWigdet");

	Params::UCommonWidgetStack_PopWigdet_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetStack.DeactivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetStack::DeactivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetStack", "DeactivateWidget");

	Params::UCommonWidgetStack_DeactivateWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetStack.ActivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetStack::ActivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetStack", "ActivateWidget");

	Params::UCommonWidgetStack_ActivateWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

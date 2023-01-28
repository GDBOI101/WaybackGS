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


// Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UToastWidget_C::GetOpenButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "GetOpenButtonVisibility");

	Params::UToastWidget_C_GetOpenButtonVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ToastWidget.ToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_C::StartIntro()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "StartIntro");

	Params::UToastWidget_C_StartIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// class UCommonTextBlock*            TextBlock                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastWidget_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "ShowText");

	Params::UToastWidget_C_ShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.SetToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Toast                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTwitchNotification_C*       K2Node_DynamicCast_AsTwitch_Notification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetOpenButtonVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageOverride_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastWidget_C::SetToast(class UFortUINotification* Toast, class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetOpenButtonVisibility_ReturnValue, class UTexture2D* CallFunc_GetImageOverride_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "SetToast");

	Params::UToastWidget_C_SetToast_Params Parms;
	Parms.Toast = Toast;
	Parms.K2Node_DynamicCast_AsTwitch_Notification = K2Node_DynamicCast_AsTwitch_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOpenButtonVisibility_ReturnValue = CallFunc_GetOpenButtonVisibility_ReturnValue;
	Parms.CallFunc_GetImageOverride_ReturnValue = CallFunc_GetImageOverride_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "Construct");

	Params::UToastWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "HandleIntroFinished");

	Params::UToastWidget_C_HandleIntroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "HandleOutroFinished");

	Params::UToastWidget_C_HandleOutroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_C::HandleAnimationDelay()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "HandleAnimationDelay");

	Params::UToastWidget_C_HandleAnimationDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "OnMouseEnter");

	Params::UToastWidget_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UToastWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "OnMouseLeave");

	Params::UToastWidget_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_C::ExecuteUbergraph_ToastWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ToastWidget_C", "ExecuteUbergraph_ToastWidget");

	Params::UToastWidget_C_ExecuteUbergraph_ToastWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("ToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

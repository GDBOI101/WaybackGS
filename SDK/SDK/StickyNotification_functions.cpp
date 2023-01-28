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


// Function StickyNotification.StickyNotification_C.CloseSticky
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStickyNotification_C::CloseSticky(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "CloseSticky");

	Params::UStickyNotification_C_CloseSticky_Params Parms;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortDialogNotificationHandler*K2Node_DynamicCast_AsFort_Dialog_Notification_Handler            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)

void UStickyNotification_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortDialogNotificationHandler* K2Node_DynamicCast_AsFort_Dialog_Notification_Handler, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "BindDelegates");

	Params::UStickyNotification_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsFort_Dialog_Notification_Handler = K2Node_DynamicCast_AsFort_Dialog_Notification_Handler;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.InitializeNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::InitializeNotification()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "InitializeNotification");

	Params::UStickyNotification_C_InitializeNotification_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_OutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_OutroFinished()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_OutroFinished");

	Params::UStickyNotification_C_Handle_OutroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_ShowContentsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_ShowContentsFinished()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_ShowContentsFinished");

	Params::UStickyNotification_C_Handle_ShowContentsFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_HideFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_HideFinished()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_HideFinished");

	Params::UStickyNotification_C_Handle_HideFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_IntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_IntroFinished()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_IntroFinished");

	Params::UStickyNotification_C_Handle_IntroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*             Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStickyNotification_C::BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature");

	Params::UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_IntroStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_IntroStarted()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_IntroStarted");

	Params::UStickyNotification_C_Handle_IntroStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UStickyNotification_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "OnMouseLeave");

	Params::UStickyNotification_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UStickyNotification_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "OnMouseEnter");

	Params::UStickyNotification_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Is_Hovered                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStickyNotification_C::BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature");

	Params::UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature_Params Parms;
	Parms.Is_Hovered = Is_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*             Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStickyNotification_C::BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature");

	Params::UStickyNotification_C_BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Handle_OpenFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Handle_OpenFinished()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Handle_OpenFinished");

	Params::UStickyNotification_C_Handle_OpenFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.HandleAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStickyNotification_C::HandleAccepted()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "HandleAccepted");

	Params::UStickyNotification_C_HandleAccepted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStickyNotification_C::Construct()
{
	static auto Func = Class->GetFunction("StickyNotification_C", "Construct");

	Params::UStickyNotification_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StickyNotification.StickyNotification_C.ExecuteUbergraph_StickyNotification
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBaseButton*             K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_ComponentBoundEvent_Is_Hovered                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortBaseButton*             K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStickyNotification_C::ExecuteUbergraph_StickyNotification(int32 EntryPoint, class UFortBaseButton* K2Node_ComponentBoundEvent_Button2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_ComponentBoundEvent_Is_Hovered, bool CallFunc_IsAnimationPlaying_ReturnValue, class UFortBaseButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("StickyNotification_C", "ExecuteUbergraph_StickyNotification");

	Params::UStickyNotification_C_ExecuteUbergraph_StickyNotification_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Is_Hovered = K2Node_ComponentBoundEvent_Is_Hovered;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

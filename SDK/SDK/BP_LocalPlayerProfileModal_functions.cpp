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


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::Handle_Leaving_Banner_Editor()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "Handle Leaving Banner Editor");

	Params::UBP_LocalPlayerProfileModal_C_Handle_Leaving_Banner_Editor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileModal_C::HandleNextAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "HandleNextAction");

	Params::UBP_LocalPlayerProfileModal_C_HandleNextAction_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileModal_C::HandlePreviousAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "HandlePreviousAction");

	Params::UBP_LocalPlayerProfileModal_C_HandlePreviousAction_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UBP_LocalPlayerProfileModal_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "Setup Input Action Handlers");

	Params::UBP_LocalPlayerProfileModal_C_Setup_Input_Action_Handlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Attempt_Leave_Picker_Left                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileModal_C::HandleCloseAction(bool* PassThrough, bool CallFunc_Attempt_Leave_Picker_Left, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "HandleCloseAction");

	Params::UBP_LocalPlayerProfileModal_C_HandleCloseAction_Params Parms;
	Parms.CallFunc_Attempt_Leave_Picker_Left = CallFunc_Attempt_Leave_Picker_Left;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileModal_C::Activate_Widget(int32 Selection, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "Activate Widget");

	Params::UBP_LocalPlayerProfileModal_C_Activate_Widget_Params Parms;
	Parms.Selection = Selection;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileModal_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "PreConstruct");

	Params::UBP_LocalPlayerProfileModal_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature");

	Params::UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileModal_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature");

	Params::UBP_LocalPlayerProfileModal_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::OnActivated()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "OnActivated");

	Params::UBP_LocalPlayerProfileModal_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::Construct()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "Construct");

	Params::UBP_LocalPlayerProfileModal_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature");

	Params::UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");

	Params::UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params Parms;
	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileModal_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "OnDeactivated");

	Params::UBP_LocalPlayerProfileModal_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_IconId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ColorId                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleCloseAction_PassThrough                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleCloseAction_PassThrough2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileModal_C::ExecuteUbergraph_BP_LocalPlayerProfileModal(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough2)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileModal_C", "ExecuteUbergraph_BP_LocalPlayerProfileModal");

	Params::UBP_LocalPlayerProfileModal_C_ExecuteUbergraph_BP_LocalPlayerProfileModal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_IconId = K2Node_ComponentBoundEvent_IconId;
	Parms.K2Node_ComponentBoundEvent_ColorId = K2Node_ComponentBoundEvent_ColorId;
	Parms.CallFunc_HandleCloseAction_PassThrough = CallFunc_HandleCloseAction_PassThrough;
	Parms.CallFunc_HandleCloseAction_PassThrough2 = CallFunc_HandleCloseAction_PassThrough2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

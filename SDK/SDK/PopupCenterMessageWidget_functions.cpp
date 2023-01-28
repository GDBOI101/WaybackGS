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


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECenterPopupMessageStateEnumNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatablePanel*     ModalPopup                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageWidget_C::OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup)
{
	static auto Func = Class->GetFunction("PopupCenterMessageWidget_C", "OnModalDisplayed");

	Params::UPopupCenterMessageWidget_C_OnModalDisplayed_Params Parms;
	Parms.NewState = NewState;
	Parms.ModalPopup = ModalPopup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PopupCenterMessageWidget_C", "Construct");

	Params::UPopupCenterMessageWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::UpdateStateEvent()
{
	static auto Func = Class->GetFunction("PopupCenterMessageWidget_C", "UpdateStateEvent");

	Params::UPopupCenterMessageWidget_C_UpdateStateEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("PopupCenterMessageWidget_C", "Destruct");

	Params::UPopupCenterMessageWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECenterPopupMessageStateEnumK2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatablePanel*     K2Node_Event_ModalPopup                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupCenterMessageModalPanel_C*K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UPopupCenterMessageWidget_C::ExecuteUbergraph_PopupCenterMessageWidget(int32 EntryPoint, enum class ECenterPopupMessageStateEnum K2Node_Event_NewState, class UCommonActivatablePanel* K2Node_Event_ModalPopup, class UPopupCenterMessageModalPanel_C* K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("PopupCenterMessageWidget_C", "ExecuteUbergraph_PopupCenterMessageWidget");

	Params::UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_ModalPopup = K2Node_Event_ModalPopup;
	Parms.K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel = K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIManager_C::IsShowingModalsConfirmationsErrors(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue3, int32 CallFunc_GetChildrenCount_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3)
{
	static auto Func = Class->GetFunction("UIManager_C", "IsShowingModalsConfirmationsErrors");

	Params::UUIManager_C_IsShowingModalsConfirmationsErrors_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_GetChildrenCount_ReturnValue3 = CallFunc_GetChildrenCount_ReturnValue3;
	Parms.CallFunc_GetChildrenCount_ReturnValue4 = CallFunc_GetChildrenCount_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue4 = CallFunc_Greater_IntInt_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManager.UIManager_C.SafeTriggerCursorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCursorMode_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::SafeTriggerCursorMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "SafeTriggerCursorMode");

	Params::UUIManager_C_SafeTriggerCursorMode_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsInCursorMode_ReturnValue = CallFunc_IsInCursorMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.SafeTriggerCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::SafeTriggerCameraMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "SafeTriggerCameraMode");

	Params::UUIManager_C_SafeTriggerCameraMode_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ClearConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::ClearConfirmationLayer(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ClearConfirmationLayer");

	Params::UUIManager_C_ClearConfirmationLayer_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.RemoveModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     Panel                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::RemoveModalPanel(class UCommonActivatablePanel* Panel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "RemoveModalPanel");

	Params::UUIManager_C_RemoveModalPanel_Params Parms;
	Parms.Panel = Panel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.PopModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     ActivatablePanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::PopModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "PopModalPanel");

	Params::UUIManager_C_PopModalPanel_Params Parms;
	Parms.ActivatablePanel = ActivatablePanel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleStateContentUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*      NewStateWidget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleStateContentUpdated");

	Params::UUIManager_C_HandleStateContentUpdated_Params Parms;
	Parms.NewStateWidget = NewStateWidget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleControllerConnectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bConnected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::HandleControllerConnectionChanged(bool bConnected, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleControllerConnectionChanged");

	Params::UUIManager_C_HandleControllerConnectionChanged_Params Parms;
	Parms.bConnected = bConnected;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                              (Parm, OutParm, ReferenceParm, NoDestructor)
// struct FFortDialogExternalLatentActionHandleCallFunc_GetLatentActionWaitHandle_LatentActionHandle            (NoDestructor)
// bool                               CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLatentActionHandleValid_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle, const struct FFortDialogExternalLatentActionHandle& CallFunc_GetLatentActionWaitHandle_LatentActionHandle, bool CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue, bool CallFunc_IsLatentActionHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("UIManager_C", "OnEndLatentWaitForConfirmationDialog");

	Params::UUIManager_C_OnEndLatentWaitForConfirmationDialog_Params Parms;
	Parms.WaitingDialogHandle = WaitingDialogHandle;
	Parms.CallFunc_GetLatentActionWaitHandle_LatentActionHandle = CallFunc_GetLatentActionWaitHandle_LatentActionHandle;
	Parms.CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue = CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue;
	Parms.CallFunc_IsLatentActionHandleValid_ReturnValue = CallFunc_IsLatentActionHandleValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.IsConsole
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIManager_C::IsConsole(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "IsConsole");

	Params::UUIManager_C_IsConsole_Params Parms;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManager.UIManager_C.DismissWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::DismissWebPurchase()
{
	static auto Func = Class->GetFunction("UIManager_C", "DismissWebPurchase");

	Params::UUIManager_C_DismissWebPurchase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.DisplayWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WebWidget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::DisplayWebPurchase(class UWidget* WebWidget, const class FString& OfferId, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "DisplayWebPurchase");

	Params::UUIManager_C_DisplayWebPurchase_Params Parms;
	Parms.WebWidget = WebWidget;
	Parms.OfferId = OfferId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     DeactivatedPanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateContentChildShowing_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUIManager_C::HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleDeactivatedErrorWindow");

	Params::UUIManager_C_HandleDeactivatedErrorWindow_Params Parms;
	Parms.DeactivatedPanel = DeactivatedPanel;
	Parms.CallFunc_IsStateContentChildShowing_ReturnValue = CallFunc_IsStateContentChildShowing_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ShowErrorInErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo              ErrorInfo                                                        (Parm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasChild_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ShowErrorInErrorWindow");

	Params::UUIManager_C_ShowErrorInErrorWindow_Params Parms;
	Parms.ErrorInfo = ErrorInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_HasChild_ReturnValue = CallFunc_HasChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     DeactivatedPanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleDeactivatedPanelModalLayer");

	Params::UUIManager_C_HandleDeactivatedPanelModalLayer_Params Parms;
	Parms.DeactivatedPanel = DeactivatedPanel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     ActivatablePanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "AddActivatablePanelToModalLayer");

	Params::UUIManager_C_AddActivatablePanelToModalLayer_Params Parms;
	Parms.ActivatablePanel = ActivatablePanel;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              ()
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWebPurchase_C*              CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UErrorWindow_C*              CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConfirmationWindow_C*       CallFunc_Create_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::Initialize(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, const class FString& CallFunc_GetPlatformName_ReturnValue, class FText Temp_text_Variable4, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UWebPurchase_C* CallFunc_Create_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, bool Temp_bool_Variable2, class UErrorWindow_C* CallFunc_Create_ReturnValue3, class FText K2Node_Select2_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class UConfirmationWindow_C* CallFunc_Create_ReturnValue4, bool CallFunc_HasAnyChildren_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "Initialize");

	Params::UUIManager_C_Initialize_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue4 = CallFunc_GetOwningPlayer_ReturnValue4;
	Parms.CallFunc_Create_ReturnValue4 = CallFunc_Create_ReturnValue4;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.QueueConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI  ConfirmationDescription                                          (Parm, ContainsInstancedReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateContentChildShowing_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsStateContentChildShowing_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("UIManager_C", "QueueConfirmation");

	Params::UUIManager_C_QueueConfirmation_Params Parms;
	Parms.ConfirmationDescription = ConfirmationDescription;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsStateContentChildShowing_ReturnValue = CallFunc_IsStateContentChildShowing_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ShowNextConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDialogDescription_NUI  CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::ShowNextConfirmation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, const struct FFortDialogDescription_NUI& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ShowNextConfirmation");

	Params::UUIManager_C_ShowNextConfirmation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     DeactivatedPanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleDeactivatedPanelConfirmationLayer");

	Params::UUIManager_C_HandleDeactivatedPanelConfirmationLayer_Params Parms;
	Parms.DeactivatedPanel = DeactivatedPanel;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.HandleModalContentCleared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::HandleModalContentCleared()
{
	static auto Func = Class->GetFunction("UIManager_C", "HandleModalContentCleared");

	Params::UUIManager_C_HandleModalContentCleared_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIManager_C::IsStateContentChildShowing(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "IsStateContentChildShowing");

	Params::UUIManager_C_IsStateContentChildShowing_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManager.UIManager_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UUIManager_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("UIManager_C", "BindDelegates");

	Params::UUIManager_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::ShowNextModalWidget(class UCommonActivatablePanel* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ShowNextModalWidget");

	Params::UUIManager_C_ShowNextModalWidget_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.QueueModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     ActivatablePanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateContentChildShowing_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "QueueModalPanel");

	Params::UUIManager_C_QueueModalPanel_Params Parms;
	Parms.ActivatablePanel = ActivatablePanel;
	Parms.CallFunc_IsStateContentChildShowing_ReturnValue = CallFunc_IsStateContentChildShowing_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.PopCurrentModal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::PopCurrentModal()
{
	static auto Func = Class->GetFunction("UIManager_C", "PopCurrentModal");

	Params::UUIManager_C_PopCurrentModal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ClearLayers
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::ClearLayers(class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ClearLayers");

	Params::UUIManager_C_ClearLayers_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.DisplayStateContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDisplay                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::DisplayStateContent(bool bDisplay)
{
	static auto Func = Class->GetFunction("UIManager_C", "DisplayStateContent");

	Params::UUIManager_C_DisplayStateContent_Params Parms;
	Parms.bDisplay = bDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.OnStateStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UUIManager_C::OnStateStarted()
{
	static auto Func = Class->GetFunction("UIManager_C", "OnStateStarted");

	Params::UUIManager_C_OnStateStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIManager_C::Destruct()
{
	static auto Func = Class->GetFunction("UIManager_C", "Destruct");

	Params::UUIManager_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.KillConfirmation
// (Event, Public, BlueprintEvent)
// Parameters:

void UUIManager_C::KillConfirmation()
{
	static auto Func = Class->GetFunction("UIManager_C", "KillConfirmation");

	Params::UUIManager_C_KillConfirmation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo              Info                                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UUIManager_C::DisplayErrorDialog(struct FFortErrorInfo& Info)
{
	static auto Func = Class->GetFunction("UIManager_C", "DisplayErrorDialog");

	Params::UUIManager_C_DisplayErrorDialog_Params Parms;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.DebugToggleInvalidationPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::DebugToggleInvalidationPanel()
{
	static auto Func = Class->GetFunction("UIManager_C", "DebugToggleInvalidationPanel");

	Params::UUIManager_C_DebugToggleInvalidationPanel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIManager_C::Construct()
{
	static auto Func = Class->GetFunction("UIManager_C", "Construct");

	Params::UUIManager_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.OnShowConfirmation_NUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI  Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUIManager_C::OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description)
{
	static auto Func = Class->GetFunction("UIManager_C", "OnShowConfirmation_NUI");

	Params::UUIManager_C_OnShowConfirmation_NUI_Params Parms;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*      StateWidget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget)
{
	static auto Func = Class->GetFunction("UIManager_C", "UpdateStateWidgetContent");

	Params::UUIManager_C_UpdateStateWidgetContent_Params Parms;
	Parms.StateWidget = StateWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     Panel                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel)
{
	static auto Func = Class->GetFunction("UIManager_C", "QueueActivatablePanelIntoModalLayer");

	Params::UUIManager_C_QueueActivatablePanelIntoModalLayer_Params Parms;
	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.OnStateEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UUIManager_C::OnStateEnded()
{
	static auto Func = Class->GetFunction("UIManager_C", "OnStateEnded");

	Params::UUIManager_C_OnStateEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     Panel                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel)
{
	static auto Func = Class->GetFunction("UIManager_C", "PopActivatablePanelInModalLayer");

	Params::UUIManager_C_PopActivatablePanelInModalLayer_Params Parms;
	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.CloseConfirmationWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::CloseConfirmationWindow()
{
	static auto Func = Class->GetFunction("UIManager_C", "CloseConfirmationWindow");

	Params::UUIManager_C_CloseConfirmationWindow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.CloseErrorWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIManager_C::CloseErrorWindow()
{
	static auto Func = Class->GetFunction("UIManager_C", "CloseErrorWindow");

	Params::UUIManager_C_CloseErrorWindow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamepadAttached_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bDisplay                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortErrorInfo              K2Node_Event_Info                                                (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanCache_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogDescription_NUI  K2Node_Event_Description                                         (ConstParm, ContainsInstancedReference)
// class UFortUIStateWidget_NUI*      K2Node_Event_StateWidget                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_Event_Panel2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatablePanel*     K2Node_Event_Panel                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::ExecuteUbergraph_UIManager(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsGamepadAttached_ReturnValue, bool K2Node_Event_bDisplay, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, const struct FFortErrorInfo& K2Node_Event_Info, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCanCache_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFortDialogDescription_NUI& K2Node_Event_Description, class UFortUIStateWidget_NUI* K2Node_Event_StateWidget, class UCommonActivatablePanel* K2Node_Event_Panel2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UCommonActivatablePanel* K2Node_Event_Panel, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UIManager_C", "ExecuteUbergraph_UIManager");

	Params::UUIManager_C_ExecuteUbergraph_UIManager_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsGamepadAttached_ReturnValue = CallFunc_IsGamepadAttached_ReturnValue;
	Parms.K2Node_Event_bDisplay = K2Node_Event_bDisplay;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue = CallFunc__BPGetCurrentUIState_ReturnValue;
	Parms.K2Node_Event_Info = K2Node_Event_Info;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCanCache_ReturnValue = CallFunc_GetCanCache_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_Description = K2Node_Event_Description;
	Parms.K2Node_Event_StateWidget = K2Node_Event_StateWidget;
	Parms.K2Node_Event_Panel2 = K2Node_Event_Panel2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_Panel = K2Node_Event_Panel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

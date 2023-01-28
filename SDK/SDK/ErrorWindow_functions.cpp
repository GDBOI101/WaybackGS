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


// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::CloseErrorWindow(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "CloseErrorWindow");

	Params::UErrorWindow_C_CloseErrorWindow_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorWindow_C::GetShouldLogout(bool* Return_Value)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "GetShouldLogout");

	Params::UErrorWindow_C_GetShouldLogout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ErrorWindow.ErrorWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInputPriority_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::Initialize(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetInputPriority_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Initialize");

	Params::UErrorWindow_C_Initialize_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputPriority_ReturnValue = CallFunc_GetInputPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.AddError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo              ErrorInfo                                                        (Parm, OutParm, ReferenceParm)
// bool                               First_Error                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UErrorEntry_C*               ErrorEntry                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Center_on_Widget_Did_Center                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_GetErrorEntry_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UErrorEntry_C*               K2Node_DynamicCast_AsError_Entry                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorWindow_C::AddError(struct FFortErrorInfo& ErrorInfo, bool First_Error, class UErrorEntry_C* ErrorEntry, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Center_on_Widget_Did_Center, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, class UCommonUserWidget* CallFunc_GetErrorEntry_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UErrorEntry_C* K2Node_DynamicCast_AsError_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "AddError");

	Params::UErrorWindow_C_AddError_Params Parms;
	Parms.ErrorInfo = ErrorInfo;
	Parms.First_Error = First_Error;
	Parms.ErrorEntry = ErrorEntry;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Center_on_Widget_Did_Center = CallFunc_Center_on_Widget_Did_Center;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_GetErrorEntry_ReturnValue = CallFunc_GetErrorEntry_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsError_Entry = K2Node_DynamicCast_AsError_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	Params::UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature");

	Params::UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::Construct()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Construct");

	Params::UErrorWindow_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::Destruct()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Destruct");

	Params::UErrorWindow_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnBeginOutro");

	Params::UErrorWindow_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnBeginIntro");

	Params::UErrorWindow_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.IntroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::IntroEnded()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "IntroEnded");

	Params::UErrorWindow_C_IntroEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OutroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::OutroEnded()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OutroEnded");

	Params::UErrorWindow_C_OutroEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "ExecuteUbergraph_ErrorWindow");

	Params::UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

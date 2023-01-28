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


// Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Description                                                      (Parm)

void ULoginResultWIdget_C::SetResultsData(class FText Title, bool bShowError, class FText Description)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "SetResultsData");

	Params::ULoginResultWIdget_C_SetResultsData_Params Parms;
	Parms.Title = Title;
	Parms.bShowError = bShowError;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.SetDescription
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (Parm)

void ULoginResultWIdget_C::SetDescription(class FText Description)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "SetDescription");

	Params::ULoginResultWIdget_C_SetDescription_Params Parms;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginResultWIdget_C::SetTitle(class FText Title, bool bShowError, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "SetTitle");

	Params::ULoginResultWIdget_C_SetTitle_Params Parms;
	Parms.Title = Title;
	Parms.bShowError = bShowError;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginResultWIdget_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ULoginResultWIdget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginResultWIdget_C::Construct()
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "Construct");

	Params::ULoginResultWIdget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "ExecuteUbergraph_LoginResultWIdget");

	Params::ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginResultWIdget_C::OnResultConfirmed__DelegateSignature()
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "OnResultConfirmed__DelegateSignature");

	Params::ULoginResultWIdget_C_OnResultConfirmed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

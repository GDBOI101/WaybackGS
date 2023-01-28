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


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__EpicLoginButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__PlayStationLoginButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginAccountSelect_C", "BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ULoginAccountSelect_C_BndEvt__XBoxLoginButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoginAccountSelect_C::OnActivated()
{
	static auto Func = Class->GetFunction("LoginAccountSelect_C", "OnActivated");

	Params::ULoginAccountSelect_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginAccountSelect.LoginAccountSelect_C.ExecuteUbergraph_LoginAccountSelect
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginAccountSelect_C::ExecuteUbergraph_LoginAccountSelect(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("LoginAccountSelect_C", "ExecuteUbergraph_LoginAccountSelect");

	Params::ULoginAccountSelect_C_ExecuteUbergraph_LoginAccountSelect_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

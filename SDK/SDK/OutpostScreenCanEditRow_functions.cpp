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


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditRow_C", "CenterWidget");

	Params::UOutpostScreenCanEditRow_C_CenterWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateOutpost*     InPlayer                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateOutpost*     InOutpostOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEditOutpost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UOutpostScreenCanEditRow_C::Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner, bool CallFunc_CanEditOutpost_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditRow_C", "Init");

	Params::UOutpostScreenCanEditRow_C_Init_Params Parms;
	Parms.InPlayer = InPlayer;
	Parms.InOutpostOwner = InOutpostOwner;
	Parms.CallFunc_CanEditOutpost_ReturnValue = CallFunc_CanEditOutpost_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditRow_C", "BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	Params::UOutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditRow_C::ExecuteUbergraph_OutpostScreenCanEditRow(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditRow_C", "ExecuteUbergraph_OutpostScreenCanEditRow");

	Params::UOutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

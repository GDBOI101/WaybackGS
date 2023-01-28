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


// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReticleStatusWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ReticleStatusWidget_C", "Construct");

	Params::UReticleStatusWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (Parm)
// class FText                        FailureText                                                      (Parm)

void UReticleStatusWidget_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText)
{
	static auto Func = Class->GetFunction("ReticleStatusWidget_C", "OnUnableToPerformAction");

	Params::UReticleStatusWidget_C_OnUnableToPerformAction_Params Parms;
	Parms.FailedReason = FailedReason;
	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_FailedReason                                  ()
// class FText                        K2Node_CustomEvent_FailureText                                   ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReticleStatusWidget_C::ExecuteUbergraph_ReticleStatusWidget(int32 EntryPoint, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ReticleStatusWidget_C", "ExecuteUbergraph_ReticleStatusWidget");

	Params::UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FailedReason = K2Node_CustomEvent_FailedReason;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

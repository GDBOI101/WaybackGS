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


// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionAlertIndicator_C::Update()
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Update");

	Params::UMissionAlertIndicator_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "ToggleTimer");

	Params::UMissionAlertIndicator_C_ToggleTimer_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionAlertIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Construct");

	Params::UMissionAlertIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionAlertIndicator_C::ExecuteUbergraph_MissionAlertIndicator(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "ExecuteUbergraph_MissionAlertIndicator");

	Params::UMissionAlertIndicator_C_ExecuteUbergraph_MissionAlertIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

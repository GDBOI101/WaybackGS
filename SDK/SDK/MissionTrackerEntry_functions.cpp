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


// Function MissionTrackerEntry.MissionTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionTrackerEntry_C::Construct()
{
	static auto Func = Class->GetFunction("MissionTrackerEntry_C", "Construct");

	Params::UMissionTrackerEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerEntry_C::ExecuteUbergraph_MissionTrackerEntry(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MissionTrackerEntry_C", "ExecuteUbergraph_MissionTrackerEntry");

	Params::UMissionTrackerEntry_C_ExecuteUbergraph_MissionTrackerEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTrackerEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("MissionTrackerEntry_C", "WidgetVisibilityChanged__DelegateSignature");

	Params::UMissionTrackerEntry_C_WidgetVisibilityChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

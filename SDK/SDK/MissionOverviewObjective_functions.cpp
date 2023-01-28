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


// Function MissionOverviewObjective.MissionOverviewObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionOverviewObjective_C::Construct()
{
	static auto Func = Class->GetFunction("MissionOverviewObjective_C", "Construct");

	Params::UMissionOverviewObjective_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionOverviewObjective.MissionOverviewObjective_C.ExecuteUbergraph_MissionOverviewObjective
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UMissionOverviewObjective_C::ExecuteUbergraph_MissionOverviewObjective(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionOverviewObjective_C", "ExecuteUbergraph_MissionOverviewObjective");

	Params::UMissionOverviewObjective_C_ExecuteUbergraph_MissionOverviewObjective_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

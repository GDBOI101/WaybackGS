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


// Function LeaderboardThrobber.LeaderboardThrobber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardThrobber_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LeaderboardThrobber_C", "PreConstruct");

	Params::ULeaderboardThrobber_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardThrobber.LeaderboardThrobber_C.ExecuteUbergraph_LeaderboardThrobber
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardThrobber_C::ExecuteUbergraph_LeaderboardThrobber(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("LeaderboardThrobber_C", "ExecuteUbergraph_LeaderboardThrobber");

	Params::ULeaderboardThrobber_C_ExecuteUbergraph_LeaderboardThrobber_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

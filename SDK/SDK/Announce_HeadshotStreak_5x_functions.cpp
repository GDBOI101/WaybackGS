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


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_HeadshotStreak_5x_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Announce_HeadshotStreak_5x_C", "UserConstructionScript");

	Params::AAnnounce_HeadshotStreak_5x_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_HeadshotStreak_5x_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_HeadshotStreak_5x_C", "OnClientAnnouncementStart");

	Params::AAnnounce_HeadshotStreak_5x_C_OnClientAnnouncementStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.ExecuteUbergraph_Announce_HeadshotStreak_5x
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_HeadshotStreak_5x_C::ExecuteUbergraph_Announce_HeadshotStreak_5x(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Announce_HeadshotStreak_5x_C", "ExecuteUbergraph_Announce_HeadshotStreak_5x");

	Params::AAnnounce_HeadshotStreak_5x_C_ExecuteUbergraph_Announce_HeadshotStreak_5x_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

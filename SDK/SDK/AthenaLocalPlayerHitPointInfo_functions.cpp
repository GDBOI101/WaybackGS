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


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLocalPlayerHitPointInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "Construct");

	Params::UAthenaLocalPlayerHitPointInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocalPlayerHitPointInfo_C::ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");

	Params::UAthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

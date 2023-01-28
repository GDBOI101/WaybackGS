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


// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaViewTargetHitPointInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointInfo_C", "Construct");

	Params::UAthenaViewTargetHitPointInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.ExecuteUbergraph_AthenaViewTargetHitPointInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointInfo_C::ExecuteUbergraph_AthenaViewTargetHitPointInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointInfo_C", "ExecuteUbergraph_AthenaViewTargetHitPointInfo");

	Params::UAthenaViewTargetHitPointInfo_C_ExecuteUbergraph_AthenaViewTargetHitPointInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

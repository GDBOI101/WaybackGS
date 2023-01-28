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


// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULocalPlayerHitPointInfo_C::Construct()
{
	static auto Func = Class->GetFunction("LocalPlayerHitPointInfo_C", "Construct");

	Params::ULocalPlayerHitPointInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.ExecuteUbergraph_LocalPlayerHitPointInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalPlayerHitPointInfo_C::ExecuteUbergraph_LocalPlayerHitPointInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("LocalPlayerHitPointInfo_C", "ExecuteUbergraph_LocalPlayerHitPointInfo");

	Params::ULocalPlayerHitPointInfo_C_ExecuteUbergraph_LocalPlayerHitPointInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

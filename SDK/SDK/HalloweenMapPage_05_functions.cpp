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


// Function HalloweenMapPage_05.HalloweenMapPage_05_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHalloweenMapPage_05_C::Construct()
{
	static auto Func = Class->GetFunction("HalloweenMapPage_05_C", "Construct");

	Params::UHalloweenMapPage_05_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HalloweenMapPage_05.HalloweenMapPage_05_C.ExecuteUbergraph_HalloweenMapPage_05
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHalloweenMapPage_05_C::ExecuteUbergraph_HalloweenMapPage_05(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HalloweenMapPage_05_C", "ExecuteUbergraph_HalloweenMapPage_05");

	Params::UHalloweenMapPage_05_C_ExecuteUbergraph_HalloweenMapPage_05_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function DONOTUSE.DONOTUSE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDONOTUSE_C::Refresh()
{
	static auto Func = Class->GetFunction("DONOTUSE_C", "Refresh");

	Params::UDONOTUSE_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DONOTUSE.DONOTUSE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDONOTUSE_C::Construct()
{
	static auto Func = Class->GetFunction("DONOTUSE_C", "Construct");

	Params::UDONOTUSE_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DONOTUSE.DONOTUSE_C.ExecuteUbergraph_DONOTUSE
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDONOTUSE_C::ExecuteUbergraph_DONOTUSE(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("DONOTUSE_C", "ExecuteUbergraph_DONOTUSE");

	Params::UDONOTUSE_C_ExecuteUbergraph_DONOTUSE_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

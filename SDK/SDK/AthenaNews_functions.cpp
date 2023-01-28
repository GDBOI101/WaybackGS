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


// Function AthenaNews.AthenaNews_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "Construct");

	Params::UAthenaNews_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

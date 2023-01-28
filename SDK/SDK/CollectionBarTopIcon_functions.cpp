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


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBarTopIcon_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBarTopIcon_C", "Construct");

	Params::UCollectionBarTopIcon_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.ExecuteUbergraph_CollectionBarTopIcon
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBarTopIcon_C::ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CollectionBarTopIcon_C", "ExecuteUbergraph_CollectionBarTopIcon");

	Params::UCollectionBarTopIcon_C_ExecuteUbergraph_CollectionBarTopIcon_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

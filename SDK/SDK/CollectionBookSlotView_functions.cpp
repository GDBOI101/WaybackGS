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


// Function CollectionBookSlotView.CollectionBookSlotView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookSlotView_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBookSlotView_C", "Construct");

	Params::UCollectionBookSlotView_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSlotView.CollectionBookSlotView_C.ExecuteUbergraph_CollectionBookSlotView
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSlotView_C::ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CollectionBookSlotView_C", "ExecuteUbergraph_CollectionBookSlotView");

	Params::UCollectionBookSlotView_C_ExecuteUbergraph_CollectionBookSlotView_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

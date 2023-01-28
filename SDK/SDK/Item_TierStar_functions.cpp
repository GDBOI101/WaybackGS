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


// Function Item_TierStar.Item_TierStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItem_TierStar_C::Construct()
{
	static auto Func = Class->GetFunction("Item_TierStar_C", "Construct");

	Params::UItem_TierStar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Item_TierStar.Item_TierStar_C.ExecuteUbergraph_Item_TierStar
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_TierStar_C::ExecuteUbergraph_Item_TierStar(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Item_TierStar_C", "ExecuteUbergraph_Item_TierStar");

	Params::UItem_TierStar_C_ExecuteUbergraph_Item_TierStar_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

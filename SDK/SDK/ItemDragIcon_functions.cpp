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


// Function ItemDragIcon.ItemDragIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDragIcon_C::Construct()
{
	static auto Func = Class->GetFunction("ItemDragIcon_C", "Construct");

	Params::UItemDragIcon_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDragIcon.ItemDragIcon_C.ExecuteUbergraph_ItemDragIcon
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDragIcon_C::ExecuteUbergraph_ItemDragIcon(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemDragIcon_C", "ExecuteUbergraph_ItemDragIcon");

	Params::UItemDragIcon_C_ExecuteUbergraph_ItemDragIcon_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

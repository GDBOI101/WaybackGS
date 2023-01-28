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


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryDragVisual_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaInventoryDragVisual_C", "Construct");

	Params::UAthenaInventoryDragVisual_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDragVisual_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaInventoryDragVisual_C", "PreConstruct");

	Params::UAthenaInventoryDragVisual_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDragVisual_C::ExecuteUbergraph_AthenaInventoryDragVisual(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaInventoryDragVisual_C", "ExecuteUbergraph_AthenaInventoryDragVisual");

	Params::UAthenaInventoryDragVisual_C_ExecuteUbergraph_AthenaInventoryDragVisual_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

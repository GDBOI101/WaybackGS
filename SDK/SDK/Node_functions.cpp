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


// Function Node.Node_C.SetHighContrastMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActivateHighContrast                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_C::SetHighContrastMode(bool ActivateHighContrast)
{
	static auto Func = Class->GetFunction("Node_C", "SetHighContrastMode");

	Params::UNode_C_SetHighContrastMode_Params Parms;
	Parms.ActivateHighContrast = ActivateHighContrast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node.Node_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Node_C", "PreConstruct");

	Params::UNode_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node.Node_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNode_C::Construct()
{
	static auto Func = Class->GetFunction("Node_C", "Construct");

	Params::UNode_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node.Node_C.ExecuteUbergraph_Node
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_C::ExecuteUbergraph_Node(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Node_C", "ExecuteUbergraph_Node");

	Params::UNode_C_ExecuteUbergraph_Node_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

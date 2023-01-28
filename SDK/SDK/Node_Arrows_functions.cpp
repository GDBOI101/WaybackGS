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


// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      InBrush                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UNode_Arrows_C::OverideColorOnBrush(class UImage* InBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("Node_Arrows_C", "OverideColorOnBrush");

	Params::UNode_Arrows_C_OverideColorOnBrush_Params Parms;
	Parms.InBrush = InBrush;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNode_Arrows_C::ApplyOverideColor()
{
	static auto Func = Class->GetFunction("Node_Arrows_C", "ApplyOverideColor");

	Params::UNode_Arrows_C_ApplyOverideColor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_Arrows_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Node_Arrows_C", "PreConstruct");

	Params::UNode_Arrows_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNode_Arrows_C::Construct()
{
	static auto Func = Class->GetFunction("Node_Arrows_C", "Construct");

	Params::UNode_Arrows_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_Arrows_C::ExecuteUbergraph_Node_Arrows(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Node_Arrows_C", "ExecuteUbergraph_Node_Arrows");

	Params::UNode_Arrows_C_ExecuteUbergraph_Node_Arrows_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

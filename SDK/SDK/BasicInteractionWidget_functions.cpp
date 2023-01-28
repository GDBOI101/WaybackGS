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


// Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (Parm)

void UBasicInteractionWidget_C::UpdateDescription(class FText Description)
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "UpdateDescription");

	Params::UBasicInteractionWidget_C_UpdateDescription_Params Parms;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::InitBasicInteraction()
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "InitBasicInteraction");

	Params::UBasicInteractionWidget_C_InitBasicInteraction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "Construct");

	Params::UBasicInteractionWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicInteractionWidget_C::ExecuteUbergraph_BasicInteractionWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "ExecuteUbergraph_BasicInteractionWidget");

	Params::UBasicInteractionWidget_C_ExecuteUbergraph_BasicInteractionWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

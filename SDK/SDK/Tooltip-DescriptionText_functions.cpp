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


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_DescriptionText_C::Construct()
{
	static auto Func = Class->GetFunction("Tooltip-DescriptionText_C", "Construct");

	Params::UTooltip_DescriptionText_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.ExecuteUbergraph_Tooltip-DescriptionText
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DescriptionText_C::ExecuteUbergraph_Tooltip_DescriptionText(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Tooltip-DescriptionText_C", "ExecuteUbergraph_Tooltip-DescriptionText");

	Params::UTooltip_DescriptionText_C_ExecuteUbergraph_Tooltip_DescriptionText_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

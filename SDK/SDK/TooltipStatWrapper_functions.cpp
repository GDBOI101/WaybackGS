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


// Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipStatWrapper_C::ShowUpgradeArrow(enum class ESlateVisibility InVisibility)
{
	static auto Func = Class->GetFunction("TooltipStatWrapper_C", "ShowUpgradeArrow");

	Params::UTooltipStatWrapper_C_ShowUpgradeArrow_Params Parms;
	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipStatWrapper.TooltipStatWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipStatWrapper_C::Construct()
{
	static auto Func = Class->GetFunction("TooltipStatWrapper_C", "Construct");

	Params::UTooltipStatWrapper_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipStatWrapper_C::ExecuteUbergraph_TooltipStatWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TooltipStatWrapper_C", "ExecuteUbergraph_TooltipStatWrapper");

	Params::UTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

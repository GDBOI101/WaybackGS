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


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Normalized                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       Display_Attribute                                                (Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipDurabilityMeter_C::Draw(float Normalized, const struct FFortDisplayAttribute& Display_Attribute, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Less_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TooltipDurabilityMeter_C", "Draw");

	Params::UTooltipDurabilityMeter_C_Draw_Params Parms;
	Parms.Normalized = Normalized;
	Parms.Display_Attribute = Display_Attribute;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipDurabilityMeter_C::Construct()
{
	static auto Func = Class->GetFunction("TooltipDurabilityMeter_C", "Construct");

	Params::UTooltipDurabilityMeter_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipDurabilityMeter_C::ExecuteUbergraph_TooltipDurabilityMeter(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TooltipDurabilityMeter_C", "ExecuteUbergraph_TooltipDurabilityMeter");

	Params::UTooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

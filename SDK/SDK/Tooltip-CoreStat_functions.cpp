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


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHeroCoreStat               Data                                                             (Parm, HasGetValueTypeHash)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UTooltip_CoreStat_C::Update(const struct FHeroCoreStat& Data, float Value, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("Tooltip-CoreStat_C", "Update");

	Params::UTooltip_CoreStat_C_Update_Params Parms;
	Parms.Data = Data;
	Parms.Value = Value;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_CoreStat_C::Construct()
{
	static auto Func = Class->GetFunction("Tooltip-CoreStat_C", "Construct");

	Params::UTooltip_CoreStat_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_CoreStat_C::ExecuteUbergraph_Tooltip_CoreStat(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Tooltip-CoreStat_C", "ExecuteUbergraph_Tooltip-CoreStat");

	Params::UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

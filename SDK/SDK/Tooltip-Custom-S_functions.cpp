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


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromAsset_ReturnValue                          ()

struct FSlateBrush UTooltip_Custom_S_C::Get_Icon_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromAsset_ReturnValue)
{
	static auto Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Icon Brush");

	Params::UTooltip_Custom_S_C_Get_Icon_Brush_Params Parms;
	Parms.CallFunc_MakeBrushFromAsset_ReturnValue = CallFunc_MakeBrushFromAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UTooltip_Custom_S_C::Get_Header_Text()
{
	static auto Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Header Text");

	Params::UTooltip_Custom_S_C_Get_Header_Text_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UTooltip_Custom_S_C::Get_Body_Text()
{
	static auto Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Body Text");

	Params::UTooltip_Custom_S_C_Get_Body_Text_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_Custom_S_C::Construct()
{
	static auto Func = Class->GetFunction("Tooltip-Custom-S_C", "Construct");

	Params::UTooltip_Custom_S_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltip_Custom_S_C::ExecuteUbergraph_Tooltip_Custom_S(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_IsValid_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("Tooltip-Custom-S_C", "ExecuteUbergraph_Tooltip-Custom-S");

	Params::UTooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

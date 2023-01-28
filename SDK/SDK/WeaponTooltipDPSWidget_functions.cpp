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


// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWeaponTooltipDPSWidget_C::Construct()
{
	static auto Func = Class->GetFunction("WeaponTooltipDPSWidget_C", "Construct");

	Params::UWeaponTooltipDPSWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Base                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Buff                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UWeaponTooltipDPSWidget_C::ExecuteUbergraph_WeaponTooltipDPSWidget(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("WeaponTooltipDPSWidget_C", "ExecuteUbergraph_WeaponTooltipDPSWidget");

	Params::UWeaponTooltipDPSWidget_C_ExecuteUbergraph_WeaponTooltipDPSWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Get_Base___Buff_Colors_Base = CallFunc_Get_Base___Buff_Colors_Base;
	Parms.CallFunc_Get_Base___Buff_Colors_Buff = CallFunc_Get_Base___Buff_Colors_Buff;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBuffState          Buff_State                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatNumericTextBlock_C::SetComparisonState(enum class EFortBuffState Buff_State)
{
	static auto Func = Class->GetFunction("StatNumericTextBlock_C", "SetComparisonState");

	Params::UStatNumericTextBlock_C_SetComparisonState_Params Parms;
	Parms.Buff_State = Buff_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Base                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Buff                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UStatNumericTextBlock_C::UpdateComparison(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortBuffState Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortBuffState Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, enum class EFortBuffState Temp_byte_Variable6, float K2Node_Select2_Default, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FLinearColor& K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("StatNumericTextBlock_C", "UpdateComparison");

	Params::UStatNumericTextBlock_C_UpdateComparison_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Get_Base___Buff_Colors_Base = CallFunc_Get_Base___Buff_Colors_Base;
	Parms.CallFunc_Get_Base___Buff_Colors_Buff = CallFunc_Get_Base___Buff_Colors_Buff;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatNumericTextBlock.StatNumericTextBlock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatNumericTextBlock_C::Construct()
{
	static auto Func = Class->GetFunction("StatNumericTextBlock_C", "Construct");

	Params::UStatNumericTextBlock_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatNumericTextBlock_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("StatNumericTextBlock_C", "PreConstruct");

	Params::UStatNumericTextBlock_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatNumericTextBlock_C::ExecuteUbergraph_StatNumericTextBlock(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("StatNumericTextBlock_C", "ExecuteUbergraph_StatNumericTextBlock");

	Params::UStatNumericTextBlock_C_ExecuteUbergraph_StatNumericTextBlock_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

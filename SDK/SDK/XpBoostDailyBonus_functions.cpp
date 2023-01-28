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


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Boost_Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRestXpBonusPercent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostDailyBonus_C::Get_Current_Boost(int32* Boost_Amount, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetRestXpBonusPercent_ReturnValue)
{
	static auto Func = Class->GetFunction("XpBoostDailyBonus_C", "Get Current Boost");

	Params::UXpBoostDailyBonus_C_Get_Current_Boost_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetRestXpBonusPercent_ReturnValue = CallFunc_GetRestXpBonusPercent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Boost_Amount != nullptr)
		*Boost_Amount = Parms.Boost_Amount;

}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Current_Boost_Boost_Amount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpBoostDailyBonus_C::Update_Daily_Bonus(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetRestXpBalance_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_Get_Current_Boost_Boost_Amount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("XpBoostDailyBonus_C", "Update Daily Bonus");

	Params::UXpBoostDailyBonus_C_Update_Daily_Bonus_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Get_Current_Boost_Boost_Amount = CallFunc_Get_Current_Boost_Boost_Amount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpBoostDailyBonus_C::Construct()
{
	static auto Func = Class->GetFunction("XpBoostDailyBonus_C", "Construct");

	Params::UXpBoostDailyBonus_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostDailyBonus_C::ExecuteUbergraph_XpBoostDailyBonus(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("XpBoostDailyBonus_C", "ExecuteUbergraph_XpBoostDailyBonus");

	Params::UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

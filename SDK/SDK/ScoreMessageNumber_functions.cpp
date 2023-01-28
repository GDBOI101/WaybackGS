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


// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InScore                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreMessageNumber_C::SetScore(int32 InScore, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreMessageNumber_C", "SetScore");

	Params::UScoreMessageNumber_C_SetScore_Params Parms;
	Parms.InScore = InScore;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UScoreMessageNumber_C::UpdateScoreText(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreMessageNumber_C", "UpdateScoreText");

	Params::UScoreMessageNumber_C_UpdateScoreText_Params Parms;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScoreMessageNumber_C::Construct()
{
	static auto Func = Class->GetFunction("ScoreMessageNumber_C", "Construct");

	Params::UScoreMessageNumber_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreMessageNumber_C::ExecuteUbergraph_ScoreMessageNumber(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ScoreMessageNumber_C", "ExecuteUbergraph_ScoreMessageNumber");

	Params::UScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ChangedScoreCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreMessageNumber_C::OnScoreValueSet__DelegateSignature(enum class EStatCategory ChangedScoreCategory)
{
	static auto Func = Class->GetFunction("ScoreMessageNumber_C", "OnScoreValueSet__DelegateSignature");

	Params::UScoreMessageNumber_C_OnScoreValueSet__DelegateSignature_Params Parms;
	Parms.ChangedScoreCategory = ChangedScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

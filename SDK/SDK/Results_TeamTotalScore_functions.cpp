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


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::InitializeConvertScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "InitializeConvertScorePlayRate");

	Params::UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params Parms;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::InitializeCountScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "InitializeCountScorePlayRate");

	Params::UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params Parms;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::SetSkippingToConvertScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "SetSkippingToConvertScoreEnd");

	Params::UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params Parms;
	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::SkipToConvertScoreFinalState()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "SkipToConvertScoreFinalState");

	Params::UResults_TeamTotalScore_C_SkipToConvertScoreFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::SetSkippingToCountScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "SetSkippingToCountScoreEnd");

	Params::UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params Parms;
	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::SkipToCountScoreFinalState(float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "SkipToCountScoreFinalState");

	Params::UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          Score_Report                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::Initialize(class UFortUIScoreReport* Score_Report, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue2, int32 CallFunc_GetTeamScore_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Initialize");

	Params::UResults_TeamTotalScore_C_Initialize_Params Parms;
	Parms.Score_Report = Score_Report;
	Parms.CallFunc_GetTeamScore_ReturnValue = CallFunc_GetTeamScore_ReturnValue;
	Parms.CallFunc_GetTeamScore_ReturnValue2 = CallFunc_GetTeamScore_ReturnValue2;
	Parms.CallFunc_GetTeamScore_ReturnValue3 = CallFunc_GetTeamScore_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTeamScore_ReturnValue4 = CallFunc_GetTeamScore_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Sequence");

	Params::UResults_TeamTotalScore_C_Count_Score_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Intro Sequence");

	Params::UResults_TeamTotalScore_C_Count_Score_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "PreConstruct");

	Params::UResults_TeamTotalScore_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Intro Sequence");

	Params::UResults_TeamTotalScore_C_Convert_Score_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Sequence");

	Params::UResults_TeamTotalScore_C_Convert_Score_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Interpolation_Finished()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Interpolation Finished");

	Params::UResults_TeamTotalScore_C_Count_Score_Interpolation_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Interpolation_Finished()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Interpolation Finished");

	Params::UResults_TeamTotalScore_C_Convert_Score_Interpolation_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Teleport_Pad_Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Teleport Pad Intro Sequence");

	Params::UResults_TeamTotalScore_C_Teleport_Pad_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadCompleted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	Params::UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params Parms;
	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     K2Node_ComponentBoundEvent_NumericTextBlock                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_HadCompleted                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::ExecuteUbergraph_Results_TeamTotalScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_NotEqual_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "ExecuteUbergraph_Results_TeamTotalScore");

	Params::UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NumericTextBlock = K2Node_ComponentBoundEvent_NumericTextBlock;
	Parms.K2Node_ComponentBoundEvent_HadCompleted = K2Node_ComponentBoundEvent_HadCompleted;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue2 = CallFunc_NotEqual_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Finished__DelegateSignature");

	Params::UResults_TeamTotalScore_C_Count_Score_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

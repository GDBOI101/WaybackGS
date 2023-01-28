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


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ShowValidResidualScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::ShowValidResidualScores(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item2, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "ShowValidResidualScores");

	Params::UResults_TeamScoreRow_C_ShowValidResidualScores_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "SkipToFinalState");

	Params::UResults_TeamScoreRow_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "SetSkippingToEnd");

	Params::UResults_TeamScoreRow_C_SetSkippingToEnd_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CurrentResidualScoreText                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentScoreReportIndex                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CurrentScoreBox                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BestScore                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   ScoreBoxBest                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonNumericTextBlock*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices(ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UResults_PlayerScoreBox_C*>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerScore_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScoreRow_C::Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate, class UCommonNumericTextBlock* CurrentResidualScoreText, int32 CurrentScoreReportIndex, class UResults_PlayerScoreBox_C* CurrentScoreBox, class UFortUIScoreReport* ScoreReport, int32 BestScore, class UResults_PlayerScoreBox_C* ScoreBoxBest, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<int32>& CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item2, class UCommonNumericTextBlock* CallFunc_Array_Get_Item3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UResults_PlayerScoreBox_C*>& K2Node_MakeArray_Array2, class UCommonNumericTextBlock* CallFunc_Array_Get_Item4, int32 CallFunc_GetTeamScore_ReturnValue, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetPlayerScore_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Initialize");

	Params::UResults_TeamScoreRow_C_Initialize_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.PlayRate = PlayRate;
	Parms.CurrentResidualScoreText = CurrentResidualScoreText;
	Parms.CurrentScoreReportIndex = CurrentScoreReportIndex;
	Parms.CurrentScoreBox = CurrentScoreBox;
	Parms.ScoreReport = ScoreReport;
	Parms.BestScore = BestScore;
	Parms.ScoreBoxBest = ScoreBoxBest;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices = CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_GetTeamScore_ReturnValue = CallFunc_GetTeamScore_ReturnValue;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayerScore_ReturnValue = CallFunc_GetPlayerScore_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Intro Sequence");

	Params::UResults_TeamScoreRow_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Up Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Count_Up_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Count Up Sequence");

	Params::UResults_TeamScoreRow_C_Count_Up_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Down Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Count_Down_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Count Down Sequence");

	Params::UResults_TeamScoreRow_C_Count_Down_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Stop Count Down Absorption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Stop_Count_Down_Absorption()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Stop Count Down Absorption");

	Params::UResults_TeamScoreRow_C_Stop_Count_Down_Absorption_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ExecuteUbergraph_Results_TeamScoreRow
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::ExecuteUbergraph_Results_TeamScoreRow(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, bool CallFunc_BooleanOR_ReturnValue7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue8)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "ExecuteUbergraph_Results_TeamScoreRow");

	Params::UResults_TeamScoreRow_C_ExecuteUbergraph_Results_TeamScoreRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.CallFunc_BooleanOR_ReturnValue7 = CallFunc_BooleanOR_ReturnValue7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue8 = CallFunc_BooleanOR_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountDownFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::CountDownFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "CountDownFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_CountDownFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountUpFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::CountUpFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "CountUpFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_CountUpFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

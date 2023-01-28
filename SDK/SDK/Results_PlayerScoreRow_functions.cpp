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


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            PlayerID                                                         (Parm, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeHomeBasePower");

	Params::UResults_PlayerScoreRow_C_InitializeHomeBasePower_Params Parms;
	Parms.PlayerID = PlayerID;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreReportReferece                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               ()

void UResults_PlayerScoreRow_C::InitializePlayerName(class UFortUIScoreReport* ScoreReport, int32 ScoreReportReferece, class FText CallFunc_GetPlayerName_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializePlayerName");

	Params::UResults_PlayerScoreRow_C_InitializePlayerName_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportReferece = ScoreReportReferece;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InScoreReportIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonNumericTextBlock*>TextScoresOrdered                                                (Edit, ZeroConstructor)
// TArray<enum class EFortUIScoreType>ScoreTypesOrdered                                                (Edit, ZeroConstructor)
// int32                              ScoreReportIndex                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonNumericTextBlock*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIScoreType        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerScore_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortUIScoreType>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)

void UResults_PlayerScoreRow_C::InitializeScores(class UFortUIScoreReport* InScoreReport, int32 InScoreReportIndex, const TArray<class UCommonNumericTextBlock*>& TextScoresOrdered, const TArray<enum class EFortUIScoreType>& ScoreTypesOrdered, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, enum class EFortUIScoreType CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<enum class EFortUIScoreType>& K2Node_MakeArray_Array2)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeScores");

	Params::UResults_PlayerScoreRow_C_InitializeScores_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.InScoreReportIndex = InScoreReportIndex;
	Parms.TextScoresOrdered = TextScoresOrdered;
	Parms.ScoreTypesOrdered = ScoreTypesOrdered;
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.ScoreReport = ScoreReport;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerScore_ReturnValue = CallFunc_GetPlayerScore_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::InitializeBackground(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeBackground");

	Params::UResults_PlayerScoreRow_C_InitializeBackground_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreReportIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl      (HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::Initialize(class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl, bool CallFunc_IsLocalPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "Initialize");

	Params::UResults_PlayerScoreRow_C_Initialize_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl = CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl;
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDesignTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::Manual_Pre_Construct(bool bIsDesignTime)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "Manual Pre Construct");

	Params::UResults_PlayerScoreRow_C_Manual_Pre_Construct_Params Parms;
	Parms.bIsDesignTime = bIsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "PreConstruct");

	Params::UResults_PlayerScoreRow_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable4                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               K2Node_CustomEvent_bIsDesignTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UCommonNumericTextBlock*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::ExecuteUbergraph_Results_PlayerScoreRow(int32 EntryPoint, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, int32 CallFunc_RandomInteger_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue2, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_bIsDesignTime, bool CallFunc_RandomBool_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_PlayerScoreRow_C", "ExecuteUbergraph_Results_PlayerScoreRow");

	Params::UResults_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.Temp_string_Variable4 = Temp_string_Variable4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue2 = CallFunc_RandomInteger_ReturnValue2;
	Parms.CallFunc_RandomInteger_ReturnValue3 = CallFunc_RandomInteger_ReturnValue3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_bIsDesignTime = K2Node_CustomEvent_bIsDesignTime;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

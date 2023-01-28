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


// Function ZoneScoreWidget.ZoneScoreWidget_C.BindEndOfDayHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UZoneScoreWidget_C::BindEndOfDayHeaderText(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "BindEndOfDayHeaderText");

	Params::UZoneScoreWidget_C_BindEndOfDayHeaderText_Params Parms;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerScoreReport      CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerZoneTeamScoreContributionWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneScoreWidget_C::ShowTeamScoreContributions(int32 Temp_int_Array_Index_Variable, const struct FFortPlayerScoreReport& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "ShowTeamScoreContributions");

	Params::UZoneScoreWidget_C_ShowTeamScoreContributions_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_GetScoreReportIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIXpInfo               CallFunc_GetXpInfo_OutXpInfo                                     (NoDestructor)
// bool                               CallFunc_GetXpInfo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UZoneScoreWidget_C::ShowXPReward(class UFortUIScoreReport* ScoreReport, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "ShowXPReward");

	Params::UZoneScoreWidget_C_ShowXPReward_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetScoreReportIndex_ReturnValue = CallFunc_GetScoreReportIndex_ReturnValue;
	Parms.CallFunc_GetXpInfo_OutXpInfo = CallFunc_GetXpInfo_OutXpInfo;
	Parms.CallFunc_GetXpInfo_ReturnValue = CallFunc_GetXpInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LERP_Factor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneScoreWidget_C::UpdateXPLERP(float LERP_Factor)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "UpdateXPLERP");

	Params::UZoneScoreWidget_C_UpdateXPLERP_Params Parms;
	Parms.LERP_Factor = LERP_Factor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneScoreWidget_C::BeginTweeningXP(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "BeginTweeningXP");

	Params::UZoneScoreWidget_C_BeginTweeningXP_Params Parms;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LERP_Factor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerZoneTeamScoreContributionWidget_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UZoneScoreWidget_C::UpdateScoresLERP(float LERP_Factor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "UpdateScoresLERP");

	Params::UZoneScoreWidget_C_UpdateScoresLERP_Params Parms;
	Parms.LERP_Factor = LERP_Factor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneScoreWidget_C::BeginTweeningScores(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "BeginTweeningScores");

	Params::UZoneScoreWidget_C_BeginTweeningScores_Params Parms;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UZoneScoreWidget_C::StartEndOfDayRecapAfterAnimation()
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "StartEndOfDayRecapAfterAnimation");

	Params::UZoneScoreWidget_C_StartEndOfDayRecapAfterAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UZoneScoreWidget_C::OnXPTweenEndEvent()
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "OnXPTweenEndEvent");

	Params::UZoneScoreWidget_C_OnXPTweenEndEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UZoneScoreWidget_C::OnScoreTweenEndEvent()
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "OnScoreTweenEndEvent");

	Params::UZoneScoreWidget_C_OnScoreTweenEndEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneScoreWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "Tick");

	Params::UZoneScoreWidget_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UZoneScoreWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "Construct");

	Params::UZoneScoreWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap              EndOfDayRecap                                                    (ConstParm, Parm, OutParm, ReferenceParm)

void UZoneScoreWidget_C::OnEndOfDayRecap(struct FEndOfDayRecap& EndOfDayRecap)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "OnEndOfDayRecap");

	Params::UZoneScoreWidget_C_OnEndOfDayRecap_Params Parms;
	Parms.EndOfDayRecap = EndOfDayRecap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FEndOfDayRecap              K2Node_CustomEvent_EndOfDayRecap                                 (ConstParm)

void UZoneScoreWidget_C::ExecuteUbergraph_ZoneScoreWidget(int32 EntryPoint, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FEndOfDayRecap& K2Node_CustomEvent_EndOfDayRecap)
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "ExecuteUbergraph_ZoneScoreWidget");

	Params::UZoneScoreWidget_C_ExecuteUbergraph_ZoneScoreWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_EndOfDayRecap = K2Node_CustomEvent_EndOfDayRecap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UZoneScoreWidget_C::OnEndOfDayRecapEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("ZoneScoreWidget_C", "OnEndOfDayRecapEnded__DelegateSignature");

	Params::UZoneScoreWidget_C_OnEndOfDayRecapEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

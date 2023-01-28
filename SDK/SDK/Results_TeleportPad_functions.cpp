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


// Function Results_TeleportPad.Results_TeleportPad_C.Should Hide Exit Timer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHideExitTimer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPad_C::Should_Hide_Exit_Timer(bool* bHideExitTimer, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Should Hide Exit Timer");

	Params::UResults_TeleportPad_C_Should_Hide_Exit_Timer_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHideExitTimer != nullptr)
		*bHideExitTimer = Parms.bHideExitTimer;

}


// Function Results_TeleportPad.Results_TeleportPad_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::Enable()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Enable");

	Params::UResults_TeleportPad_C_Enable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::Disable()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Disable");

	Params::UResults_TeleportPad_C_Disable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidPad_bIsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPad_C::Focus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad, bool CallFunc_IsValidPad_bIsValid, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Focus");

	Params::UResults_TeleportPad_C_Focus_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad;
	Parms.CallFunc_IsValidPad_bIsValid = CallFunc_IsValidPad_bIsValid;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCompletionResult   CompletionResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_TeleportPadPlayer_C*CurrentTeleportPad                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentScoreReportIndex                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices(ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UResults_TeleportPadPlayer_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             CallFunc_GetCurrentPlayerPawn_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetPlatformUniqueNetId_ReturnValue                      (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPad_C::Initialize(class UFortUIScoreReport* InScoreReport, enum class EFortCompletionResult CompletionResult, class UResults_TeleportPadPlayer_C* CurrentTeleportPad, int32 CurrentScoreReportIndex, class UFortUIScoreReport* ScoreReport, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, TArray<int32>& CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Array_Get_Item, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UResults_TeleportPadPlayer_C*>& K2Node_MakeArray_Array, class AFortPlayerPawn* CallFunc_GetCurrentPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Initialize");

	Params::UResults_TeleportPad_C_Initialize_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.CompletionResult = CompletionResult;
	Parms.CurrentTeleportPad = CurrentTeleportPad;
	Parms.CurrentScoreReportIndex = CurrentScoreReportIndex;
	Parms.ScoreReport = ScoreReport;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices = CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerCount_ReturnValue2 = CallFunc_GetPlayerCount_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentPlayerPawn_ReturnValue = CallFunc_GetCurrentPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlatformUniqueNetId_ReturnValue = CallFunc_GetPlatformUniqueNetId_ReturnValue;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::Team_Score_Screen_Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Team Score Screen Intro");

	Params::UResults_TeleportPad_C_Team_Score_Screen_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::Team_Score_Screen_Outro()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Team Score Screen Outro");

	Params::UResults_TeleportPad_C_Team_Score_Screen_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.Teleport Pad Screen Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::Teleport_Pad_Screen_Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "Teleport Pad Screen Intro");

	Params::UResults_TeleportPad_C_Teleport_Pad_Screen_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.ExitButtonShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::ExitButtonShown()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "ExitButtonShown");

	Params::UResults_TeleportPad_C_ExitButtonShown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimerFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::OnExitTimerFinished()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnExitTimerFinished");

	Params::UResults_TeleportPad_C_OnExitTimerFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimeRemainingUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              TimeRemainingSeconds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnExitTimeRemainingUpdated");

	Params::UResults_TeleportPad_C_OnExitTimeRemainingUpdated_Params Parms;
	Parms.TimeRemainingSeconds = TimeRemainingSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimePercentagePassedUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::OnExitTimePercentagePassedUpdated(float Percent)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnExitTimePercentagePassedUpdated");

	Params::UResults_TeleportPad_C_OnExitTimePercentagePassedUpdated_Params Parms;
	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*TeleportPadPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature_Params Parms;
	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*TeleportPadPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature_Params Parms;
	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*TeleportPadPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature_Params Parms;
	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*TeleportPadPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature");

	Params::UResults_TeleportPad_C_BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature_Params Parms;
	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.ExecuteUbergraph_Results_TeleportPad
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Hide_Exit_Timer_bHideExitTimer                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPad_bIsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPad_bIsValid2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPad_bIsValid3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_TimeRemainingSeconds                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId8                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName8                           (ZeroConstructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPad_bIsValid4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId7                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName7                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId6                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName6                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId5                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName5                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId4                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName4                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId3                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName3                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId2                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName2                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId                              (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName                            (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*K2Node_ComponentBoundEvent_TeleportPadPlayer4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*K2Node_ComponentBoundEvent_TeleportPadPlayer3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_TeleportPadPlayer_C*K2Node_ComponentBoundEvent_TeleportPadPlayer2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeleportPadPlayer_C*K2Node_ComponentBoundEvent_TeleportPadPlayer                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Hide_Exit_Timer_bHideExitTimer2                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPad_C::ExecuteUbergraph_Results_TeleportPad(int32 EntryPoint, bool CallFunc_Should_Hide_Exit_Timer_bHideExitTimer, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Array_Index_Variable3, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_IsValidPad_bIsValid, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_IsValidPad_bIsValid2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable4, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item3, bool CallFunc_IsValidPad_bIsValid3, int32 K2Node_Event_TimeRemainingSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Event_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId8, const class FString& K2Node_ComponentBoundEvent_TargetName8, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item4, bool CallFunc_IsValidPad_bIsValid4, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue3, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId7, const class FString& K2Node_ComponentBoundEvent_TargetName7, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId6, const class FString& K2Node_ComponentBoundEvent_TargetName6, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId5, const class FString& K2Node_ComponentBoundEvent_TargetName5, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId4, const class FString& K2Node_ComponentBoundEvent_TargetName4, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId3, const class FString& K2Node_ComponentBoundEvent_TargetName3, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId2, const class FString& K2Node_ComponentBoundEvent_TargetName2, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId, const class FString& K2Node_ComponentBoundEvent_TargetName, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer4, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer3, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad2, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer2, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad3, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad4, int32 Temp_int_Loop_Counter_Variable4, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Should_Hide_Exit_Timer_bHideExitTimer2)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "ExecuteUbergraph_Results_TeleportPad");

	Params::UResults_TeleportPad_C_ExecuteUbergraph_Results_TeleportPad_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Should_Hide_Exit_Timer_bHideExitTimer = CallFunc_Should_Hide_Exit_Timer_bHideExitTimer;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidPad_bIsValid = CallFunc_IsValidPad_bIsValid;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_IsValidPad_bIsValid2 = CallFunc_IsValidPad_bIsValid2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_IsValidPad_bIsValid3 = CallFunc_IsValidPad_bIsValid3;
	Parms.K2Node_Event_TimeRemainingSeconds = K2Node_Event_TimeRemainingSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_Percent = K2Node_Event_Percent;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TargetId8 = K2Node_ComponentBoundEvent_TargetId8;
	Parms.K2Node_ComponentBoundEvent_TargetName8 = K2Node_ComponentBoundEvent_TargetName8;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValidPad_bIsValid4 = CallFunc_IsValidPad_bIsValid4;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_TargetId7 = K2Node_ComponentBoundEvent_TargetId7;
	Parms.K2Node_ComponentBoundEvent_TargetName7 = K2Node_ComponentBoundEvent_TargetName7;
	Parms.K2Node_ComponentBoundEvent_TargetId6 = K2Node_ComponentBoundEvent_TargetId6;
	Parms.K2Node_ComponentBoundEvent_TargetName6 = K2Node_ComponentBoundEvent_TargetName6;
	Parms.K2Node_ComponentBoundEvent_TargetId5 = K2Node_ComponentBoundEvent_TargetId5;
	Parms.K2Node_ComponentBoundEvent_TargetName5 = K2Node_ComponentBoundEvent_TargetName5;
	Parms.K2Node_ComponentBoundEvent_TargetId4 = K2Node_ComponentBoundEvent_TargetId4;
	Parms.K2Node_ComponentBoundEvent_TargetName4 = K2Node_ComponentBoundEvent_TargetName4;
	Parms.K2Node_ComponentBoundEvent_TargetId3 = K2Node_ComponentBoundEvent_TargetId3;
	Parms.K2Node_ComponentBoundEvent_TargetName3 = K2Node_ComponentBoundEvent_TargetName3;
	Parms.K2Node_ComponentBoundEvent_TargetId2 = K2Node_ComponentBoundEvent_TargetId2;
	Parms.K2Node_ComponentBoundEvent_TargetName2 = K2Node_ComponentBoundEvent_TargetName2;
	Parms.K2Node_ComponentBoundEvent_TargetId = K2Node_ComponentBoundEvent_TargetId;
	Parms.K2Node_ComponentBoundEvent_TargetName = K2Node_ComponentBoundEvent_TargetName;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_TeleportPadPlayer4 = K2Node_ComponentBoundEvent_TeleportPadPlayer4;
	Parms.K2Node_ComponentBoundEvent_TeleportPadPlayer3 = K2Node_ComponentBoundEvent_TeleportPadPlayer3;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad2 = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad2;
	Parms.K2Node_ComponentBoundEvent_TeleportPadPlayer2 = K2Node_ComponentBoundEvent_TeleportPadPlayer2;
	Parms.K2Node_ComponentBoundEvent_TeleportPadPlayer = K2Node_ComponentBoundEvent_TeleportPadPlayer;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad3 = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad3;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad4 = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad4;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Should_Hide_Exit_Timer_bHideExitTimer2 = CallFunc_Should_Hide_Exit_Timer_bHideExitTimer2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnUpVoteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnAddFriendClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPad_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::OnExitClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnExitClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_OnExitClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPad.Results_TeleportPad_C.OnMissionStatsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPad_C::OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPad_C", "OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPad_C_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function Results_Widget.Results_Widget_C.UseVideos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bVideos                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowMissionResultsMovies_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::UseVideos(bool* bVideos, bool CallFunc_ShouldShowMissionResultsMovies_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "UseVideos");

	Params::UResults_Widget_C_UseVideos_Params Parms;
	Parms.CallFunc_ShouldShowMissionResultsMovies_ReturnValue = CallFunc_ShouldShowMissionResultsMovies_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bVideos != nullptr)
		*bVideos = Parms.bVideos;

}


// Function Results_Widget.Results_Widget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Focus(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsVisible_ReturnValue3)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Focus");

	Params::UResults_Widget_C_Focus_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue2 = CallFunc_IsVisible_ReturnValue2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsVisible_ReturnValue3 = CallFunc_IsVisible_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UResults_Widget_C::InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "InitializeInput");

	Params::UResults_Widget_C_InitializeInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.OnInputSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::OnInputSkip(bool* bCommited)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnInputSkip");

	Params::UResults_Widget_C_OnInputSkip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}


// Function Results_Widget.Results_Widget_C.LogAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ScreenName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bSkipped                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::LogAnalytics(const class FString& ScreenName, bool bSkipped, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "LogAnalytics");

	Params::UResults_Widget_C_LogAnalytics_Params Parms;
	Parms.ScreenName = ScreenName;
	Parms.bSkipped = bSkipped;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::PlayMissionResultSound(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "PlayMissionResultSound");

	Params::UResults_Widget_C_PlayMissionResultSound_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_C*                      K2Node_DynamicCast_AsHUD                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Top_Level_Tab_Controls(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Toggle Top Level Tab Controls");

	Params::UResults_Widget_C_Toggle_Top_Level_Tab_Controls_Params Parms;
	Parms.Show = Show;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD = K2Node_DynamicCast_AsHUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::SpawnResultsMusic(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "SpawnResultsMusic");

	Params::UResults_Widget_C_SpawnResultsMusic_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Toggle Chat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_C*                      K2Node_DynamicCast_AsHUD                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Chat(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Toggle Chat");

	Params::UResults_Widget_C_Toggle_Chat_Params Parms;
	Parms.Show = Show;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD = K2Node_DynamicCast_AsHUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Initialize Video
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseVideos_bVideos                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaSource*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::Initialize_Video(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_UseVideos_bVideos, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, class UMediaSource* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Initialize Video");

	Params::UResults_Widget_C_Initialize_Video_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_UseVideos_bVideos = CallFunc_UseVideos_bVideos;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           RewardData                                                       (Edit, ZeroConstructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// int32                              CallFunc_GetTotalMissionPointsEarned_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// enum class EFortCompletionResult   CallFunc_GetZoneCompletionResult_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           CallFunc_GetRewardsByType_OutRewards                             (ZeroConstructor, ReferenceParm)

void UResults_Widget_C::Initialize(class UFortUIScoreReport* ScoreReport, const TArray<class UFortItem*>& RewardData, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, enum class EFortCompletionResult Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, class FText K2Node_Select_Default, enum class EFortCompletionResult CallFunc_GetZoneCompletionResult_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardsByType_OutRewards)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Initialize");

	Params::UResults_Widget_C_Initialize_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.RewardData = RewardData;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_GetTotalMissionPointsEarned_ReturnValue = CallFunc_GetTotalMissionPointsEarned_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetZoneCompletionResult_ReturnValue = CallFunc_GetZoneCompletionResult_ReturnValue;
	Parms.CallFunc_GetRewardsByType_OutRewards = CallFunc_GetRewardsByType_OutRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Teleport_Scene_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Teleport Scene Sequence");

	Params::UResults_Widget_C_Teleport_Scene_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Badge_Loot_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Badge Loot Sequence");

	Params::UResults_Widget_C_Badge_Loot_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Commander XP Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Commander_XP_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Commander XP Sequence");

	Params::UResults_Widget_C_Commander_XP_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Team Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Team_Score_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Team Score Sequence");

	Params::UResults_Widget_C_Team_Score_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.PreResults Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::PreResults_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "PreResults Sequence");

	Params::UResults_Widget_C_PreResults_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.VideoSequenceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::VideoSequenceStart()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "VideoSequenceStart");

	Params::UResults_Widget_C_VideoSequenceStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.OnVideoEndReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnVideoEndReached()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnVideoEndReached");

	Params::UResults_Widget_C_OnVideoEndReached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.SkipVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::SkipVideo()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "SkipVideo");

	Params::UResults_Widget_C_SkipVideo_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.OnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnMediaOpened()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnMediaOpened");

	Params::UResults_Widget_C_OnMediaOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Construct()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Construct");

	Params::UResults_Widget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_Widget_C::HandleClientEvent_PlayerLeftEvent(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "HandleClientEvent_PlayerLeftEvent");

	Params::UResults_Widget_C_HandleClientEvent_PlayerLeftEvent_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Wait for Replication
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Wait_for_Replication()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Wait for Replication");

	Params::UResults_Widget_C_Wait_for_Replication_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Destruct()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Destruct");

	Params::UResults_Widget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnActivated()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnActivated");

	Params::UResults_Widget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId2                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName2                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId                              (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalMissionPointsEarned_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseVideos_bVideos                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDataFinalized_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::ExecuteUbergraph_Results_Widget(int32 EntryPoint, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId2, const class FString& K2Node_ComponentBoundEvent_TargetName2, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId, const class FString& K2Node_ComponentBoundEvent_TargetName, float CallFunc_GetRealTimeSeconds_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue3, float CallFunc_GetRealTimeSeconds_ReturnValue4, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue5, float CallFunc_GetRealTimeSeconds_ReturnValue6, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_Play_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_UseVideos_bVideos, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue7, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_IsClosed_Variable, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDataFinalized_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "ExecuteUbergraph_Results_Widget");

	Params::UResults_Widget_C_ExecuteUbergraph_Results_Widget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TargetId2 = K2Node_ComponentBoundEvent_TargetId2;
	Parms.K2Node_ComponentBoundEvent_TargetName2 = K2Node_ComponentBoundEvent_TargetName2;
	Parms.K2Node_ComponentBoundEvent_TargetId = K2Node_ComponentBoundEvent_TargetId;
	Parms.K2Node_ComponentBoundEvent_TargetName = K2Node_ComponentBoundEvent_TargetName;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue2 = CallFunc_GetRealTimeSeconds_ReturnValue2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue3 = CallFunc_GetRealTimeSeconds_ReturnValue3;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue4 = CallFunc_GetRealTimeSeconds_ReturnValue4;
	Parms.CallFunc_GetTotalMissionPointsEarned_ReturnValue = CallFunc_GetTotalMissionPointsEarned_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue5 = CallFunc_GetRealTimeSeconds_ReturnValue5;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue6 = CallFunc_GetRealTimeSeconds_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_UseVideos_bVideos = CallFunc_UseVideos_bVideos;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue7 = CallFunc_GetRealTimeSeconds_ReturnValue7;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDataFinalized_ReturnValue = CallFunc_IsDataFinalized_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

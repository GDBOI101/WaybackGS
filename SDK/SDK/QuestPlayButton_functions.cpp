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


// Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestPlayButton_C::OnLobbyDisconnected()
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "OnLobbyDisconnected");

	Params::UQuestPlayButton_C_OnLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInCanPlayQuest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanNavigateToQuestObjective_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::UpdateQuestStatus(bool bInCanPlayQuest, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "UpdateQuestStatus");

	Params::UQuestPlayButton_C_UpdateQuestStatus_Params Parms;
	Parms.bInCanPlayQuest = bInCanPlayQuest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanNavigateToQuestObjective_ReturnValue = CallFunc_CanNavigateToQuestObjective_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortTheaterMapTileType TileType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMissionDetails         CallFunc_GetActiveTileMissionDetails_MissionDetails              ()
// bool                               CallFunc_GetActiveTileMissionDetails_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::GetActiveTileType(enum class EFortTheaterMapTileType* TileType, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortMissionDetails& CallFunc_GetActiveTileMissionDetails_MissionDetails, bool CallFunc_GetActiveTileMissionDetails_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "GetActiveTileType");

	Params::UQuestPlayButton_C_GetActiveTileType_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetActiveTileMissionDetails_MissionDetails = CallFunc_GetActiveTileMissionDetails_MissionDetails;
	Parms.CallFunc_GetActiveTileMissionDetails_ReturnValue = CallFunc_GetActiveTileMissionDetails_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TileType != nullptr)
		*TileType = Parms.TileType;

}


// Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OverrideMin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OverrideMax                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDifficultyMin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDifficultyMax                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameDifficultyInfo> CallFunc_GetAvailableDifficulties_ReturnValue                    (ZeroConstructor, ReferenceParm)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameDifficultyInfo         CallFunc_Array_Get_Item                                          ()
// float                              CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMinDifficulty(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMaxDifficulty(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestPlayButton_C::CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax, float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<struct FGameDifficultyInfo>& CallFunc_GetAvailableDifficulties_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FGameDifficultyInfo& CallFunc_Array_Get_Item, float CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMinDifficulty, float CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMaxDifficulty, float K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "CalculateCritMissionDifficulty");

	Params::UQuestPlayButton_C_CalculateCritMissionDifficulty_Params Parms;
	Parms.OverrideMin = OverrideMin;
	Parms.OverrideMax = OverrideMax;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAvailableDifficulties_ReturnValue = CallFunc_GetAvailableDifficulties_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMinDifficulty = CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMinDifficulty;
	Parms.CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMaxDifficulty = CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMaxDifficulty;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDifficultyMin != nullptr)
		*OutDifficultyMin = Parms.OutDifficultyMin;

	if (OutDifficultyMax != nullptr)
		*OutDifficultyMax = Parms.OutDifficultyMax;

}


// Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCanPlayQuest                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanNavigateToQuestObjective_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPlayQuest_CanPlay                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::SetPlayButtonEnable(bool Enable, bool bCanPlayQuest, bool CallFunc_CanNavigateToQuestObjective_ReturnValue, bool CallFunc_CanPlayQuest_CanPlay, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "SetPlayButtonEnable");

	Params::UQuestPlayButton_C_SetPlayButtonEnable_Params Parms;
	Parms.Enable = Enable;
	Parms.bCanPlayQuest = bCanPlayQuest;
	Parms.CallFunc_CanNavigateToQuestObjective_ReturnValue = CallFunc_CanNavigateToQuestObjective_ReturnValue;
	Parms.CallFunc_CanPlayQuest_CanPlay = CallFunc_CanPlayQuest_CanPlay;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanPlay                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bQuestAllowsTileMatching                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsEntirePartyInFrontend                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsPartyLeader                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsInFrontEnd                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsQuestActive                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCanFindTileForQuest                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowsTileMatching_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEntirePartyInFrontEnd_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestInProgress_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFindTileForQuest_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::CanPlayQuest(bool* CanPlay, bool bQuestAllowsTileMatching, bool bIsEntirePartyInFrontend, bool bIsPartyLeader, bool bIsInFrontEnd, bool bIsQuestActive, bool bCanFindTileForQuest, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_AllowsTileMatching_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsEntirePartyInFrontEnd_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_CanFindTileForQuest_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, const class FString& CallFunc_Conv_BoolToString_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_IsMobileApp_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "CanPlayQuest");

	Params::UQuestPlayButton_C_CanPlayQuest_Params Parms;
	Parms.bQuestAllowsTileMatching = bQuestAllowsTileMatching;
	Parms.bIsEntirePartyInFrontend = bIsEntirePartyInFrontend;
	Parms.bIsPartyLeader = bIsPartyLeader;
	Parms.bIsInFrontEnd = bIsInFrontEnd;
	Parms.bIsQuestActive = bIsQuestActive;
	Parms.bCanFindTileForQuest = bCanFindTileForQuest;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_AllowsTileMatching_ReturnValue = CallFunc_AllowsTileMatching_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsEntirePartyInFrontEnd_ReturnValue = CallFunc_IsEntirePartyInFrontEnd_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue2 = CallFunc_Conv_BoolToString_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue3 = CallFunc_Conv_BoolToString_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue4 = CallFunc_Conv_BoolToString_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue5 = CallFunc_Conv_BoolToString_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsQuestInProgress_ReturnValue = CallFunc_IsQuestInProgress_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_CanFindTileForQuest_ReturnValue = CallFunc_CanFindTileForQuest_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_Conv_BoolToString_ReturnValue6 = CallFunc_Conv_BoolToString_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanPlay != nullptr)
		*CanPlay = Parms.CanPlay;

}


// Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanNavigateToQuestObjective_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UQuestPlayButton_C::CanNavigateToQuestObjective(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "CanNavigateToQuestObjective");

	Params::UQuestPlayButton_C_CanNavigateToQuestObjective_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanNavigateToQuestObjective_ReturnValue = CallFunc_CanNavigateToQuestObjective_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CritMissionDifficultyOverrideMax                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CritMissionDifficultyOverrideMin                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTheaterMapTileType CallFunc_GetActiveTileType_TileType                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateCritMissionDifficulty_OutDifficultyMin         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateCritMissionDifficulty_OutDifficultyMax         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMin(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMax(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTileForQuest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::AttemptPlayQuest(float CritMissionDifficultyOverrideMax, float CritMissionDifficultyOverrideMin, enum class EFortTheaterMapTileType CallFunc_GetActiveTileType_TileType, bool K2Node_SwitchEnum_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, float CallFunc_CalculateCritMissionDifficulty_OutDifficultyMin, float CallFunc_CalculateCritMissionDifficulty_OutDifficultyMax, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue5, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue6, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue7, float CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMin, float CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMax, bool CallFunc_SelectTileForQuest_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "AttemptPlayQuest");

	Params::UQuestPlayButton_C_AttemptPlayQuest_Params Parms;
	Parms.CritMissionDifficultyOverrideMax = CritMissionDifficultyOverrideMax;
	Parms.CritMissionDifficultyOverrideMin = CritMissionDifficultyOverrideMin;
	Parms.CallFunc_GetActiveTileType_TileType = CallFunc_GetActiveTileType_TileType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_CalculateCritMissionDifficulty_OutDifficultyMin = CallFunc_CalculateCritMissionDifficulty_OutDifficultyMin;
	Parms.CallFunc_CalculateCritMissionDifficulty_OutDifficultyMax = CallFunc_CalculateCritMissionDifficulty_OutDifficultyMax;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMin = CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMin;
	Parms.CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMax = CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMax;
	Parms.CallFunc_SelectTileForQuest_ReturnValue = CallFunc_SelectTileForQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestPlayButton_C::AttemptNavigationToQuestObjective(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "AttemptNavigationToQuestObjective");

	Params::UQuestPlayButton_C_AttemptNavigationToQuestObjective_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.SetQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         CallFunc_GetLocalPartyProgression_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::SetQuest(class UFortQuestItem* Quest, enum class EFortPartyState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState CallFunc_GetLocalPartyProgression_ReturnValue, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "SetQuest");

	Params::UQuestPlayButton_C_SetQuest_Params Parms;
	Parms.Quest = Quest;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPartyProgression_ReturnValue = CallFunc_GetLocalPartyProgression_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestPlayButton_C::Construct()
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "Construct");

	Params::UQuestPlayButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestPlayButton_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	Params::UQuestPlayButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestPlayButton_C::ForceClick()
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "ForceClick");

	Params::UQuestPlayButton_C_ForceClick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestPlayButton_C::OnMatchmakingStarted()
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "OnMatchmakingStarted");

	Params::UQuestPlayButton_C_OnMatchmakingStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::OnMatchmakingCompleted(enum class EMatchmakingCompleteResult Result)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "OnMatchmakingCompleted");

	Params::UQuestPlayButton_C_OnMatchmakingCompleted_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UQuestPlayButton_C::OnPlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "OnPlayerStateChanged");

	Params::UQuestPlayButton_C_OnPlayerStateChanged_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestPlayButton_C::Destruct()
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "Destruct");

	Params::UQuestPlayButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestPlayButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "Tick");

	Params::UQuestPlayButton_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         CallFunc_GetLocalPartyProgression_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMatchmakingCompleteResultK2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestPlayButton_C::ExecuteUbergraph_QuestPlayButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState CallFunc_GetLocalPartyProgression_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFortPartyState Temp_byte_Variable, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool K2Node_Select_Default, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestPlayButton_C", "ExecuteUbergraph_QuestPlayButton");

	Params::UQuestPlayButton_C_ExecuteUbergraph_QuestPlayButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPartyProgression_ReturnValue = CallFunc_GetLocalPartyProgression_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x254 - 0x238)
// WidgetBlueprintGeneratedClass QuestPlayButton.QuestPlayButton_C
class UQuestPlayButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     PlayButton;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        QuestItem;                                         // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HACK_PlayerStateDirtyCounter;                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestPlayButton_C");
		return Clss;
	}

	void OnLobbyDisconnected();
	void UpdateQuestStatus(bool bInCanPlayQuest, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue);
	void GetActiveTileType(enum class EFortTheaterMapTileType* TileType, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortMissionDetails& CallFunc_GetActiveTileMissionDetails_MissionDetails, bool CallFunc_GetActiveTileMissionDetails_ReturnValue);
	void CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax, float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<struct FGameDifficultyInfo>& CallFunc_GetAvailableDifficulties_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FGameDifficultyInfo& CallFunc_Array_Get_Item, float CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMinDifficulty, float CallFunc_GetMatchmakingDifficultyRangeFromDifficultyInfo_OutMaxDifficulty, float K2Node_Select2_Default);
	void SetPlayButtonEnable(bool Enable, bool bCanPlayQuest, bool CallFunc_CanNavigateToQuestObjective_ReturnValue, bool CallFunc_CanPlayQuest_CanPlay, bool CallFunc_BooleanOR_ReturnValue);
	void CanPlayQuest(bool* CanPlay, bool bQuestAllowsTileMatching, bool bIsEntirePartyInFrontend, bool bIsPartyLeader, bool bIsInFrontEnd, bool bIsQuestActive, bool bCanFindTileForQuest, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_AllowsTileMatching_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsEntirePartyInFrontEnd_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_CanFindTileForQuest_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, const class FString& CallFunc_Conv_BoolToString_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_IsMobileApp_ReturnValue);
	bool CanNavigateToQuestObjective(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue);
	void AttemptPlayQuest(float CritMissionDifficultyOverrideMax, float CritMissionDifficultyOverrideMin, enum class EFortTheaterMapTileType CallFunc_GetActiveTileType_TileType, bool K2Node_SwitchEnum_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, float CallFunc_CalculateCritMissionDifficulty_OutDifficultyMin, float CallFunc_CalculateCritMissionDifficulty_OutDifficultyMax, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue5, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue6, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue7, float CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMin, float CallFunc_SelectTileForQuest_OutCriticalMissionDifficultyOverrideMax, bool CallFunc_SelectTileForQuest_ReturnValue);
	void AttemptNavigationToQuestObjective(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetQuest(class UFortQuestItem* Quest, enum class EFortPartyState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState CallFunc_GetLocalPartyProgression_ReturnValue, bool K2Node_Select_Default);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ForceClick();
	void OnMatchmakingStarted();
	void OnMatchmakingCompleted(enum class EMatchmakingCompleteResult Result);
	void OnPlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_QuestPlayButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState CallFunc_GetLocalPartyProgression_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFortPartyState Temp_byte_Variable, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool K2Node_Select_Default, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x140 (0x5E0 - 0x4A0)
// WidgetBlueprintGeneratedClass Results_Widget.Results_Widget_C
class UResults_Widget_C : public UFortResultsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_TeleportPadIntro;                             // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CommanderXPOutro;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CommanderXPIntro;                             // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_GradientOutro;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_GradientIntro;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_VideoOutro;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_VideoIntro;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_BadgeLoot_C*                  BadgeLoot;                                         // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderVideo;                                       // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_CommanderXP_C*                CommanderXP;                                       // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovieWidget_C*                        MovieWidgetVideo;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_3;                                        // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_Summary_C*                    Summary;                                           // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMicStack_C*                       TeamMicStack;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScore_C*                  TeamScore;                                         // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*             TeamTotalScore;                                    // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPad_C*                TeleportPad;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextZoneCompletion;                                // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TopPanel_C*                   TopPanel;                                          // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherMain;                                // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        AnalyticsTimeStart;                                // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          MediaPlayer;                                       // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ResultsStartVictory;                               // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ResultsStartDefeat;                                // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ACResultsStart;                                    // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ResultsFinished;                                   // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ACResultsFinished;                                 // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictoryIntro;                                      // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DefeatIntro;                                       // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          DefeatVideo;                                       // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCompletionResult             ZoneCompletionResult;                              // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayBetweenVideoAndIntro;                         // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanSkipVideo;                                     // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            VictoryStart;                                      // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TeamScoreWhoosh;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CommanderXPWhoosh;                                 // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputSkip;                                         // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bVideoSkipped;                                     // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TPAnalyticsTimeStart;                              // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_Widget_C");
		return Clss;
	}

	void UseVideos(bool* bVideos, bool CallFunc_ShouldShowMissionResultsMovies_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Focus(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsVisible_ReturnValue3);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnInputSkip(bool* bCommited);
	void LogAnalytics(const class FString& ScreenName, bool bSkipped, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void PlayMissionResultSound(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void Toggle_Top_Level_Tab_Controls(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess);
	void SpawnResultsMusic(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void Toggle_Chat(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess);
	void Initialize_Video(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_UseVideos_bVideos, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, class UMediaSource* K2Node_Select_Default);
	void Initialize(class UFortUIScoreReport* ScoreReport, const TArray<class UFortItem*>& RewardData, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, enum class EFortCompletionResult Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, class FText K2Node_Select_Default, enum class EFortCompletionResult CallFunc_GetZoneCompletionResult_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardsByType_OutRewards);
	void BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature();
	void Teleport_Scene_Sequence();
	void BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature();
	void BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature();
	void Badge_Loot_Sequence();
	void BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature();
	void Commander_XP_Sequence();
	void BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature();
	void BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature();
	void Team_Score_Sequence();
	void BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature();
	void PreResults_Sequence();
	void BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void VideoSequenceStart();
	void OnVideoEndReached();
	void BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void SkipVideo();
	void OnMediaOpened();
	void Construct();
	void HandleClientEvent_PlayerLeftEvent(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Wait_for_Replication();
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_Results_Widget(int32 EntryPoint, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId2, const class FString& K2Node_ComponentBoundEvent_TargetName2, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId, const class FString& K2Node_ComponentBoundEvent_TargetName, float CallFunc_GetRealTimeSeconds_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue3, float CallFunc_GetRealTimeSeconds_ReturnValue4, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue5, float CallFunc_GetRealTimeSeconds_ReturnValue6, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_Play_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_UseVideos_bVideos, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue7, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_IsClosed_Variable, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDataFinalized_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

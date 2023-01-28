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

// 0x73 (0x473 - 0x400)
// WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
class UFrontEnd_C : public UFortUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UBottomBarWidget_C*                    BottomBar;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BottomBarSizedSpacer;                              // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWidget_C*                         ChatWidget;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainAreaDarken;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                          Subtitles;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TopBarSizedSpacer;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CheckFrontEndRewardsAction;                        // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Daily_Rewards_Action;                        // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Expedition_Rewards_Action;                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CheckRateExperienceAction;                         // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CurrentSubGame;                                    // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayedCurrentEventMovie;                           // 0x471(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      PreviousUIState;                                   // 0x472(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void PlayEventMovieIfNecessary(bool* PlayingEventMovie, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie);
	void NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3);
	void SetChatWidgetVisibility(bool Visible);
	void InitForSubGame(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UMainTabsScreen_C* CallFunc_Create_ReturnValue2, bool CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue2);
	void GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, bool CallFunc_HasPendingNavigationOp_ReturnValue);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7);
	void HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7);
	void HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5);
	void SetFooterVisibility(bool Visible);
	void PopContentWidget_Internal();
	void SetHeaderVisibility(bool Visible);
	void PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter);
	void RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3);
	void HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select2_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FEventReply On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests);
	void HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void HandleLobbyDisconnected();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnExitState(enum class EFortUIState NextUIState);
	void Destruct();
	void DailyRewardsTokenGranted();
	void HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Construct();
	void HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xE0 (0x4C0 - 0x3E0)
// WidgetBlueprintGeneratedClass QuestScreen.QuestScreen_C
class UQuestScreen_C : public UFortQuestScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UJournalQuestDetails_C*                JournalQuestDetails;                               // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJournalQuestRewardDetails_C*          JournalQuestRewardDetails;                         // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            QuestDetailsScrollbox;                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       QuestsTreeView;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_2;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        ActiveQuestItem;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNamePlay;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameAbandon;                                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameCollect;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameReplayIntro;                                // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameReplayOutro;                                // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNamePinQuest;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameStopConversation;                           // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         PreviousEntry;                                     // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFrontEnd_;                                       // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CloseJournal;                                      // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  RowNameUnpinQuest;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJournalQuestDetails_C*                QuestDetailsWidgetReference;                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJournalQuestRewardDetails_C*          RewardDetailsWidgetReference;                      // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        InitialQuestToSelect;                              // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdatePendingSeenItemTimerHandle;                  // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UQuestTreeEntry_C*>             QuestButtons;                                      // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bDisableClaimRewardButton;                         // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  AbandonQuest;                                      // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestScreen_C");
		return Clss;
	}

	void HandleAbandonQuest(bool* PassThrough);
	void ShouldShowPlayQuest(class UFortQuestItem* Quest, bool* ShouldShowPlay, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_AllowsTileMatching_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanFindTileForQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue4);
	void Toggle_Disable_Claim_Reward_Button(bool ToDisable);
	void HandleInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Update_Category_Buttons_Bang_State(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuestTreeEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Pending_Seen_Quest_Items();
	void RefreshQuestCategories(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories);
	void HandleOnEndSpokenDialog();
	void StopConversation(bool* PassThrough);
	void ReplayOutroAudio(bool* PassThrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue);
	void HandlePendingNavigationOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, const struct FFortUINavigationOperation& CallFunc_TryGetPendingNavigationOp_NavigationOp, bool CallFunc_TryGetPendingNavigationOp_ReturnValue, bool CallFunc_HasPendingNavigationOp_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess);
	void SelectQuest(class UFortQuestItem* Quest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestCategory* CallFunc_GetQuestCategory_ReturnValue);
	void HandleQuestOp(class UFortQuestItem* Quest, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void PinQuest(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SetQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue3);
	void UpdateInputHandlers(class UFortQuestItem* Active_Quest, bool IsVOEnabled_, bool IsQuestAudioPlaying_, class UFortQuestItem* LocalQuestReference, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_GetRemainingDailyQuestRerolls_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ShouldShowPlayQuest_ShouldShowPlay, enum class EInputActionState Temp_byte_Variable5, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, enum class EInputActionState Temp_byte_Variable6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying, bool CallFunc_BooleanAND_ReturnValue2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue2, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue4, enum class EInputActionState K2Node_Select2_Default, bool CallFunc_IsQuestPinned_ReturnValue, bool Temp_bool_Variable3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class EInputActionState K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsQuestVOEnabled_ReturnValue);
	void ClaimReward(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void SelectInitialQuest(class UObject* NewLocalVar_0);
	void OnAbandonQuestConfirmed(class UFortQuestItem* QuestToAbandon, bool CallFunc_AbandonQuest_questAbandoned_);
	void ReplayIntroAudio(bool* PassThrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue);
	void SetupInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11);
	void PopulateDetailWidgets();
	void PlayQuest(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HandleBack_PassThrough);
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	TArray<class UObject*> OnGetChildrenForCategory(class UObject* Item, TArray<class UObject*>& K2Node_MakeArray_Array, class UFortQuestCategory* K2Node_DynamicCast_AsFort_Quest_Category, bool K2Node_DynamicCast_bSuccess);
	void DialogResult_CE39442C4BCACCFD8414B495A3B27A21(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature(class FName TabId);
	void Refresh_Tree_View();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget);
	void PlayerPartyStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void OnClientPartyStateChanged(enum class EFortPartyState PartyState);
	void OnMatchamkingComplete(enum class EMatchmakingCompleteResult Result);
	void OnMatchmakingStarted();
	void OnPartyLeft();
	void Construct();
	void OnItemSelected(class UObject* Item, bool bIsSelected);
	void ShowAbandonQuestDialog(class UFortQuestItem* QuestToAbandon);
	void ExecuteUbergraph_QuestScreen(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget2, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry, bool K2Node_DynamicCast_bSuccess, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, TArray<class UObject*>& CallFunc_OnGetChildrenForCategory_ReturnValue, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry2, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* K2Node_Select_Default, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState K2Node_CustomEvent_PartyState, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_bIsSelected, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess4, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortQuestItem* K2Node_CustomEvent_QuestToAbandon, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11);
	void AbandonQuest__DelegateSignature(class UFortQuestItem* QuestToAbandon);
	void CloseJournal__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

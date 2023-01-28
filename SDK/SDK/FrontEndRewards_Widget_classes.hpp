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

// 0x141 (0x6D1 - 0x590)
// WidgetBlueprintGeneratedClass FrontEndRewards_Widget.FrontEndRewards_Widget_C
class UFrontEndRewards_Widget_C : public UFortRewardNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimShowBorder;                                    // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimFadeHeader;                                    // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimShowHeader;                                    // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPrimaryAction;                               // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ChoiceRewards_C*      ChoiceRewards;                                     // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Conversation_VO_C*    ConversationWidget;                                // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_CurrentReward_C*      CurrentRewardIcon;                                 // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Expedition_C*         ExpeditionRewards;                                 // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflector_C*                     InputReflector;                                    // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ListRewards_C*        ListRewards;                                       // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_EpicQuest_C*          NewQuest;                                          // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewards_Header_C*                     RewardHeader;                                      // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Queue_C*              RewardsQueue;                                      // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardSwitcher;                                    // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatingStarburstWidget_C*            RotatingStarburst;                                 // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_4;                                        // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_5;                                        // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_6;                                        // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBottom;                                     // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTop;                                        // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextStorage;                                       // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRewardNotificationSubWidget*      CurrentSubWidget;                                  // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIntroComplete;                                   // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnComplete;                                        // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsReadyToShowRewardWidget;                         // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortRewardNotificationSubWidget*> SubWidgets;                                        // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShowClaimedReward;                                 // 0x678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSubWidgetPopulated;                              // 0x679(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsError;                                           // 0x67A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRewardsClaimed;                                  // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UItemInspectScreen_C*                  ItemInspectScreen;                                 // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnRewardsClaimError;                               // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ClaimErrorEnountered;                              // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bRunningFrontEndRewards;                           // 0x6A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TriggerUpdateOnComplete;                           // 0x6AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationData*           LastClaimedReward;                                 // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPendingSafePop;                                  // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRewardsIgnored;                                  // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCompleted;                                        // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_Widget_C");
		return Clss;
	}

	void HandleOnMissionRewardsClaimFailed();
	void DebugPrintChoiceReward(class UObject* Object, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SafePop(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsActivated_ReturnValue);
	void TriggerUpdateWhenDone();
	void HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void ClaimMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void PopulateMissionAlertRewards();
	void InitRewardsQueue(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortRewardNotificationData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_QueueReward_OutIcon);
	void InitializeRewardsData(struct FFrontEndRewards_Definition& FrontEndRewards_Definition, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, class UFortExpeditionItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class UFortQuestItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable3, const struct FFortCollectionBookRewards& CallFunc_Array_Get_Item3);
	void InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition);
	void HandleBorderShown();
	void SkipPopAnimation(const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void SkipOpenAnimation();
	void PopulateVO(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue2, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue);
	void HandleOnNoRewardsToClaim();
	void UnbindEvents(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortMcpContext* CallFunc_GetContext_ReturnValue4);
	void ResetQueueState();
	void TransitionIn();
	void OpenReward();
	void PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleCurrentRewardTransitionOutComplete();
	void HandleOpenAnimationFinished();
	void InitSubWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortRewardNotificationSubWidget* K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue);
	void ClaimCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess);
	void ClaimQuestListReward(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess);
	void PopulateCollectionBookRewards(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasSelectableRewards_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFortSelectableRewardOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemQuantityList_Cards, int32 CallFunc_Array_Add_ReturnValue);
	void PopulateExpedition(class UFortRewardExpeditionData* K2Node_DynamicCast_AsFort_Reward_Expedition_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulateNewQuest(class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulateQuestRewards(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewAllSelectableRewards_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PopulateMissionRewards();
	void SetHeaderVisibility(bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ClaimMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards);
	void CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CreateCardsFromItemList(TArray<class UFortItem*>& Items, TArray<enum class EFortInventoryType>& ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards, const TArray<class URewards_ItemCard_C*>& CardList, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EFortInventoryType CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue);
	void ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void HandleChoiceRewardSelected(int32 RewardIndex, class UFortItem* Item, class UFortRewardNotificationData* NotificationData, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void InitInitialRewards(const struct FFrontEndRewards_Definition& Definition);
	void HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards);
	void Cleanup();
	void ShowCurrentReward(class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFrontEndRewards_ChoiceRewards_C* K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanAND_ReturnValue);
	void PopulateCurrentRewardWidget(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, class UFortQuestItem* Quest, class UFortRewardNotificationData* RewardData, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void AdjustCurrentRewardPadding(class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot2, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin);
	void BindEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UFortRewardNotificationSubWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15);
	void HandleShowHeaderFinished(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess);
	void PopNextReward(class UFortRewardNotificationData* NextReward, bool CallFunc_IsValid_ReturnValue, class UFortRewardNotificationData* CallFunc_DequeueReward_OutReward);
	void DropReward(class UFortRewardNotificationData* InReward);
	void HandleCurrentRewardDisplayed();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnNavigationUp();
	void OnNavigationDown();
	void OnPrimaryActionDisabled();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionHidden();
	void OnPrimaryActionTextChanged(class FText& Text);
	void BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void HideStarburst(float Delay);
	void OnDeactivated();
	void InspectItem(class UFortItem* ItemToInspect);
	void IntroSequence();
	void Destruct();
	void OnMatchmakingOrLobbyStarted();
	void ExecuteUbergraph_FrontEndRewards_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class FText K2Node_Event_Text, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue5, float K2Node_CustomEvent_Delay, bool CallFunc_IsValid_ReturnValue6, class UFortItem* K2Node_Event_ItemToInspect, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectScreen_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue8);
	void OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

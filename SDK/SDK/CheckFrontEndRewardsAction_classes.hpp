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

// 0x5A (0x442 - 0x3E8)
// BlueprintGeneratedClass CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C
class ACheckFrontEndRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFrontEndRewards_Definition           RewardsDefinition;                                 // 0x3F8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShowRewardsWidget;                                 // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        NewVar_0;                                          // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckFrontEndRewardsAction_C");
		return Clss;
	}

	void HandleRewardsIgnored(class UFrontEndRewards_Widget_C* RewardsWidget);
	bool CanShowFrontendRewards(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class EFortPartyMemberLocation CallFunc_GetLocalPartyMemberLocation_Location, bool CallFunc_GetLocalPartyMemberLocation_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void Is_FrontEndRewards_Running(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void PopulateMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasPendingMissionAlertRewards_ReturnValue);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Clear(TArray<struct FFortCollectionBookRewards>& K2Node_MakeArray_Array, TArray<class UFortExpeditionItem*>& K2Node_MakeArray_Array2, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array3, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array4, const struct FFrontEndRewards_Definition& K2Node_MakeStruct_FrontEndRewards_Definition);
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void PopulateCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, TArray<struct FFortCollectionBookRewards>& CallFunc_PopulateCollectionBookRewards_OutAvailableRewards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PopulateRewards();
	void OpenFrontEndRewards(class UFrontEndRewards_Widget_C* LocalRewardsWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void PopulateUnseenQuests(enum class EFortQuestType QuestType, const TArray<class UFortQuestItem*>& TempNewQuests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetNextUnseenQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_OutCompletedQuests);
	void PopulateNewQuests();
	void PopulateQuestRewards(const TArray<class UFortQuestItem*>& TempNewQuests, const TArray<class UFortQuestItem*>& TempCompletedQuests, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_Completed_Quests, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue, bool CallFunc_HasVisibleRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item2, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_IsVisibleToUser_ReturnValue);
	void PopulateMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreMissionRewardsAvailable_ReturnValue);
	void CompleteRewardsAction(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateFrontEnd* K2Node_DynamicCast_AsFort_Game_State_Front_End, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckFrontEndRewardsAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Is_FrontEndRewards_Running_bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool CallFunc_CanShowFrontendRewards_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

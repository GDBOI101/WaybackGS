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

// 0x68 (0x450 - 0x3E8)
// BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
class ACheckExpeditionRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFrontEndRewards_Definition           RewardsDefinition;                                 // 0x3F8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShowRewardsWidget;                                 // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFrontEndRewards_Widget_C*             Claimed_Reward_Widget;                             // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckExpeditionRewardsAction_C");
		return Clss;
	}

	void Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1, class AFortPlayerController* FoundPC, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Is_FrontEndRewards_Running(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear(TArray<struct FFortCollectionBookRewards>& K2Node_MakeArray_Array, TArray<class UFortExpeditionItem*>& K2Node_MakeArray_Array2, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array3, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array4, const struct FFrontEndRewards_Definition& K2Node_MakeStruct_FrontEndRewards_Definition);
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void PopulateExpeditionRewards(const TArray<class UFortExpeditionItem*>& CompletedExpeditions, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* CallFunc_Find_First_Valid_Player_Controller_FoundPC1, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_IsExpeditionCompleted_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void PopulateRewards();
	void OpenFrontEndRewards(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void PopulateCompletedQuests(const TArray<class UFortQuestItem*>& TempCompletedQuests, const TArray<class UFortQuestItem*>& TempNewQuests, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_Completed_Quests, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue, bool CallFunc_HasVisibleRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item2, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_IsVisibleToUser_ReturnValue);
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_OutCompletedQuests);
	void CompleteRewardsAction(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void Handle_Rewards_Running();
	void ExecuteUbergraph_CheckExpeditionRewardsAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Is_FrontEndRewards_Running_bRunning, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

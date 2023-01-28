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

// 0x130 (0x370 - 0x240)
// WidgetBlueprintGeneratedClass Results_BadgeLoot.Results_BadgeLoot_C
class UResults_BadgeLoot_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkipToFinalState;                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Outro;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_LeveledUp;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShiftBadges4;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShiftBadges3;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShiftBadges2;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShiftBadges1;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ZoomIntro;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ContinueButtonOutro;                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ContinueButtonIntro;                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_Badge_C*                      Badge1;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_Badge_C*                      Badge2;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_Badge_C*                      Badge3;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_Badge_C*                      Badge4;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonContinue;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_BadgeLootBar_C*               LootBar;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortItem*>                     BadgeItems;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  Finished;                                          // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        RewardBadgeItemsIndex;                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_Badge_C*                      CurrentBadgeAdding;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UResults_Badge_C*>              BadgeQueue;                                        // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        DelayBetweenBadgeIntros;                           // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenIntroAndAddBadges;                     // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>              BadgeAnimationQueue;                               // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        DelayBetweenAddingBadges;                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenAddingBadgesAndZoomIn;                 // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetween3DChestIntroAndBadgesIntro;            // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenOutroAndFinish;                        // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x33D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWaitingFor3DChestProgression;                     // 0x33E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCanSkipToEnd;                                     // 0x33F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                            ChestLootUpgrade;                                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ChestSlide;                                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ChestReward;                                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            FinalChestReward;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ChestDisappear;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenChestLoot;                                     // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_BadgeLoot_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void ShouldBadgeBeShown(class UFortItem* Badge, bool* ShownBadgeBeShown, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionPoints_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SkipToFinalState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UWidgetAnimation* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSkippingToEnd();
	void InitializeDelays(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue6);
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void StepBadgeQueues(class UWidgetAnimation* BadgeAnimation, class UResults_Badge_C* Badge, int32 CallFunc_Array_Add_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, class UResults_Badge_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue2);
	void HasMoreBadgesToShow(bool* bMoreBadgesToShow, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulateNextBadge(class UResults_Badge_C* Badge, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown, bool CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortItem* CallFunc_Array_Get_Item2);
	void Initialize(TArray<class UFortItem*>& RewardItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResults_Badge_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, TArray<class UResults_Badge_C*>& K2Node_MakeArray_Array2);
	void Intro_Sequence();
	void BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature();
	void Add_Badges_Sequence();
	void Add_Next_Badge();
	void OnConvertFinished();
	void FinishedAddingBadges();
	void BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature();
	void BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature();
	void BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Zoom_In_Sequence();
	void Skip_To_End_Sequence();
	void HandleClientEvent_ChestIntroDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestProgressionDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestResultFocusDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestOutroDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Skip();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_Results_BadgeLoot(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue8, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable2, bool Temp_bool_B_Execution_Happened_Variable2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_HasValidItem_HasValidItem, bool CallFunc_HasValidItem_HasValidItem2, bool CallFunc_HasValidItem_HasValidItem3, class UResults_Badge_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue9, bool CallFunc_HasValidItem_HasValidItem4, class UWidgetAnimation* CallFunc_Array_Get_Item2, bool CallFunc_HasValidItem_HasValidItem5, bool CallFunc_HasValidItem_HasValidItem6, bool CallFunc_BooleanOR_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_HandleClientEvent_EventSource4, class UObject* K2Node_HandleClientEvent_EventFocus4, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent4, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, bool CallFunc_BooleanOR_ReturnValue11, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Finished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

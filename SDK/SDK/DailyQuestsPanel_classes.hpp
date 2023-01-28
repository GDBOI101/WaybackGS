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

// 0x19 (0x251 - 0x238)
// WidgetBlueprintGeneratedClass DailyQuestsPanel.DailyQuestsPanel_C
class UDailyQuestsPanel_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ClaimButton;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DailyQuestList;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ClaimingQuestsInProgress;                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyQuestsPanel_C");
		return Clss;
	}

	void ClaimNextQuestReward(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void OnNoQuestRewardsToClaim();
	void OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnQuestsGranted(TArray<class UFortQuestItem*>& NewQuests);
	void CreateQuestWidget(class UFortQuestItem* Quest, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDailyQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnQuestsUpdated(bool ClaimQuests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UFortQuestItem*>& CallFunc_GetCurrentQuests_OutCurrentQuests, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void BindEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_DailyQuestsPanel(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

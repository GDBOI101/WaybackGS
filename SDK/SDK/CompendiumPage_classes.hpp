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

// 0x50 (0x458 - 0x408)
// WidgetBlueprintGeneratedClass CompendiumPage.CompendiumPage_C
class UCompendiumPage_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_2ECC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ClaimRewardsButton;                                // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCompendiumProgressWidget_C*           CompendiumProgressWidget;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                  PlayerEmblemAndXp_C_0;                             // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestListTitle;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          QuestPanel;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCompendiumItem*                   Compendium;                                        // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompendiumPage_C");
		return Clss;
	}

	void CreateDisabledQuestWidget(class UFortQuestItemDefinition* QuestDefinition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDisabledQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CreateQuestWidget(class UFortQuestItem* Quest, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDailyQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void RegisterEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void ClaimNextQuestReward();
	void UpdateQuests(bool bHasQuestsToClaim, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, class UFortCompendiumItemDefinition* CallFunc_GetCompendiumDefinitionBP_ReturnValue, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class UFortQuestItem*>& CallFunc_GetQuests_OwnedQuests, TArray<class UFortQuestItemDefinition*>& CallFunc_GetQuests_UnownedQuests, class UFortQuestItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item2, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2);
	void SetCompendium(class UFortCompendiumItem* Compendium, class FText CallFunc_GetDisplayName_ReturnValue);
	void Construct();
	void ExecuteUbergraph_CompendiumPage(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

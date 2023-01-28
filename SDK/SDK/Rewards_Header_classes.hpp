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

// 0x38 (0x270 - 0x238)
// WidgetBlueprintGeneratedClass Rewards_Header.Rewards_Header_C
class URewards_Header_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimFadeSubHeader;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderSubHeader;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlockHeader;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlockSubHeader;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseSubHeader;                                      // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationData*           Reward;                                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Rewards_Header_C");
		return Clss;
	}

	void SkipFadeInSubHeaderAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetQuestNameText(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayName_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class FText CallFunc_GetRewardHeaderText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void PopulateFromRewardType(enum class EFrontEndRewardType Selection, enum class ECollectionBookRewardType CollectionBookRewardType, class FText RewardDetailText, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3);
	void ResetSubHeader();
	void FadeInSubHeader(float CurrentAlpha, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetMissionLootLevelText(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, int32 CallFunc_GetRewardedChestIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulateFromReward(class UFortRewardNotificationData* InReward, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Rewards_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x38 (0x278 - 0x240)
// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
class URewardsListWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                          RewardsVerticalBox;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFrontEndRewardWrapperWidget_C*> RewardsArray;                                      // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Index;                                             // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RewardCount;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotAnimate;                                      // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bPlaySound;                                        // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFrontEndRewardWrapperWidget_C*> SelectableRewardsArray;                            // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardsListWidget_C");
		return Clss;
	}

	void PresentAllRewards(int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin2, int32 Temp_int_Loop_Counter_Variable2, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemOrWidget_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3);
	void CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, class FText DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Create_ReturnValue);
	void CreateReward(struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable, int32 Quantity, class UFortItem* Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeScreenQuestRewardItem_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_CreateRewardWrapper_OutputPin, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2);
	void PresentNextReward(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<struct FFortItemInstanceQuantityPair>& SelectableRewards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable2, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

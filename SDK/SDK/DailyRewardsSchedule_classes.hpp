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

// 0x38 (0x308 - 0x2D0)
// WidgetBlueprintGeneratedClass DailyRewardsSchedule.DailyRewardsSchedule_C
class UDailyRewardsSchedule_C : public UFortDailyRewardsSchedule
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AvailableRewards;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DailyRewardsBox;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EpicRewardsBox;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ScheduleTitle;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UpcomingText;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NumMaxEpicRewards;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Length_Of_Week;                                    // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyRewardsSchedule_C");
		return Clss;
	}

	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_DailyRewardsSchedule(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UDailyRewardsEpic_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_TextToUpper_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UDailyRewardsItem_C* CallFunc_Create_ReturnValue2, class UDailyRewardsItem_C* CallFunc_Create_ReturnValue3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue3, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

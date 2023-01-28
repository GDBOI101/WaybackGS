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

// 0x48 (0x908 - 0x8C0)
// WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C
class URewardInfoButtonWidget_C : public UFortRewardInfoButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ItemDetails;                                       // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemInfo;                                          // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayNameText;                                   // 0x8D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DisplayQuantity;                                   // 0x8F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardInfoButtonWidget_C");
		return Clss;
	}

	void GetDisplayName(class FText* DisplayName, class FText OutName, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, class UFortItem* CallFunc_GetItemInstance_ReturnValue2, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, class UFortItem* CallFunc_GetItemInstance_ReturnValue4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_Format_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortItem* CallFunc_GetItemInstance_ReturnValue5, enum class EFortItemType CallFunc_GetType_ReturnValue2, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3);
	void SetShowDescriptionBP(bool bInShowDescription);
	void HandleDifferentItemOrQuantitySetBP();
	void ExecuteUbergraph_RewardInfoButtonWidget(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_GetQuantity_ReturnValue, bool K2Node_Event_bInShowDescription, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue2, bool CallFunc_EqualEqual_TextText_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue2, class FText CallFunc_GetDisplayName_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetDisplayName_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, enum class ESlateVisibility Temp_byte_Variable2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetEmptyText_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

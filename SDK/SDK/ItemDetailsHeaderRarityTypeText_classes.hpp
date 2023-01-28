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

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C
class UItemDetailsHeaderRarityTypeText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      RarityTextBlock;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TypeTextBlock;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDetailsHeaderRarityTypeText_C");
		return Clss;
	}

	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_ToText_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

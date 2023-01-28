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

// 0x20 (0x250 - 0x230)
// WidgetBlueprintGeneratedClass Item_TierBadge.Item_TierBadge_C
class UItem_TierBadge_C : public UUserWidget
{
public:
	class UBorder*                               Border_Baseplate;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_StarGroup;                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Container;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Level;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_TierBadge_C");
		return Clss;
	}

	void Set_Level(int32 Current_Level, int32 Max_Level, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Refresh_Visibility(enum class EFortBrushSize Brush_Size, enum class EItemDisplayMode Display_Mode, enum class EFortItemTier Current_Tier, bool* Visible, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Update(enum class EFortItemTier Current_Tier, enum class EFortItemTier Max_Tier, enum class EFortBrushSize Brush_Size, enum class EItemDisplayStyle Item_Display_Style, enum class EItemDisplayMode Item_Display_Mode, const struct FFortRarityItemData& Rarity_Colors, int32 Current_Level, int32 Max_Level, int32 MaxLevel, int32 CurrentLevel, const struct FFortRarityItemData& RarityData, enum class EItemDisplayMode DisplayMode, enum class EItemDisplayStyle DisplayStyle, enum class EFortBrushSize BrushSize, enum class EFortItemTier MaxTier, enum class EFortItemTier CurrentTier, int32 MaxTierInt, int32 CurrentTierInt, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable6, float Temp_float_Variable7, float Temp_float_Variable8, float Temp_float_Variable9, float Temp_float_Variable10, float Temp_float_Variable11, bool Temp_bool_Variable, float Temp_float_Variable12, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Refresh_Visibility_Visible, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortBrushSize Temp_byte_Variable2, float K2Node_Select_Default, float K2Node_Select2_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable2, class UItem_TierStar_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier2, float Temp_float_Variable13, float K2Node_Select4_Default, const struct FMargin& K2Node_MakeStruct_Margin);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

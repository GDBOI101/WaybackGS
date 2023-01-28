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

// 0x40 (0x278 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformRequiredItems.ItemTransformRequiredItems_C
class UItemTransformRequiredItems_C : public UCommonUserWidget
{
public:
	class UImage*                                CheckMarkIcon;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CheckMarkSwitcher;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FailMarkIcon;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ItemCountSwitcher;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RequiredResourceCost;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         RequiredResourceIcon;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RequiredResourceItemCount;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*              RequiredResourceNameText;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformRequiredItems_C");
		return Clss;
	}

	void UpdateItems(class UFortItem* TransformKey, int32 SacrificePoints, const struct FSlateColor& NotHaveColor, const struct FSlateColor& HaveColor, int32 Temp_int_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable2, int32 CallFunc_GetRequiredItemQuantity_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetRequiredItemDefinition_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool Temp_bool_Variable2, int32 Temp_int_Variable3, int32 K2Node_Select_Default, int32 Temp_int_Variable4, const struct FSlateColor& K2Node_Select2_Default, bool Temp_bool_Variable3, int32 K2Node_Select3_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select4_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

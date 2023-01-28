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

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C
class UMiniItemCraftingIngredientsDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UMiniCraftingIngredientList_C*         MiniCraftingIngredientList;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MiniItemCraftingIngredientsDetailWidget_C");
		return Clss;
	}

	void GetRecipeItemQuantityPairs(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* Pairs, const TArray<struct FFortItemQuantityPair>& Results, int32 Temp_int_Array_Index_Variable, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, int32 Temp_int_Loop_Counter_Variable, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int32 EntryPoint, TArray<struct FFortItemQuantityPair>& CallFunc_GetRecipeItemQuantityPairs_Pairs, TArray<struct FFortItemQuantityPair>& CallFunc_GetRecipeItemQuantityPairs_Pairs2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

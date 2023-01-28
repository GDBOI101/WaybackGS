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

// 0x19 (0x2D1 - 0x2B8)
// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
class UItemCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          IngredientsList;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             ItemRepresented;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCraftingIngredientList_C");
		return Clss;
	}

	void GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients, const TArray<struct FFortItemQuantityPair>& Ingredients, int32 Temp_int_Array_Index_Variable, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetItemToCompare(class UFortItem* ItemToCompare, TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients);
	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void RefreshInventoryTracking(int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UItemCraftingIngredientListEntryHaveNeedVerbose_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose, bool K2Node_DynamicCast_bSuccess, class UItemCraftingIngredientListEntryHaveNeed_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void Refresh(TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients);
	void SetItemToRepresent(class UFortItem* Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, class UFortItemDefinition* K2Node_Select_Default, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_ItemCraftingIngredientList(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

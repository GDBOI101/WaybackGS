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

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C
class UItemCraftingIngredientListEntryHaveNeed_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*               ItemCountHave;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*               ItemCountNeed;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlash;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCraftingIngredientListEntryHaveNeed_C");
		return Clss;
	}

	class UWidget* GetToolTipWidget(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	void Refresh(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed(int32 EntryPoint, bool K2Node_Event_IsBeingReset, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

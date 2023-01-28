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

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C
class UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Border;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*               ItemCountHave;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*               ItemCountNeed;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*              ItemName;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCountPrefix;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlash;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bOverrideTextStyle;                                // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2B72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TextStyle;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C");
		return Clss;
	}

	void ShowHaveNeed(bool* HaveNeed, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void RefreshPreviewData(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_ShowHaveNeed_HaveNeed, enum class ESlateVisibility K2Node_Select_Default);
	void Refresh(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, bool CallFunc_ShowHaveNeed_HaveNeed, enum class ESlateVisibility K2Node_Select_Default, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetDisplayName_ReturnValue);
	void DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_IsBeingReset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

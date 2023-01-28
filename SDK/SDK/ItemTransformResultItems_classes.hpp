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

// 0xA0 (0x2D8 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformResultItems.ItemTransformResultItems_C
class UItemTransformResultItems_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          ResultsList;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ResultsSwitcher;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         RewardHeroXPIcon;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RewardHeroXPInfo;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RewardHeroXPQuantity;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardHeroXPText;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardItemDisplayName;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         RewardItemIcon;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RewardItemInfo;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         RewardSchematicXPIcon;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RewardSchematicXPInfo;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RewardSchematicXPQuantity;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardSchematicXPText;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         RewardWorkerXPIcon;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RewardWorkerXPInfo;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RewardWorkerXPQuantity;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardWorkerXPText;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformResultItems_C");
		return Clss;
	}

	void UpdateMainReward(class UFortItem* Item, int32 CurrentTier, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetRewardName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void CalculateRecycleXP(TArray<class UFortItem*>& SacrificeItems, int32* TotalHeroXP, int32* TotalSchematicXP, int32* TotalWorkerXP, int32 TempXP, int32 LocalTotalWorkerXP, int32 LocalTotalSchematicXP, int32 LocalTotalHeroXP, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetRecycleValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4);
	void UpdateItems(class UFortItem* Transform_Key, TArray<class UFortItem*>& SacrificeItems, int32 CurrentTier, int32 CallFunc_CalculateRecycleXP_TotalHeroXP, int32 CallFunc_CalculateRecycleXP_TotalSchematicXP, int32 CallFunc_CalculateRecycleXP_TotalWorkerXP, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortPersistentResourceItemDefinition* CallFunc_GetHeroResourceItemDefinition_ReturnValue, class UFortPersistentResourceItemDefinition* CallFunc_GetSchematicResourceItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue2, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class UFortPersistentResourceItemDefinition* CallFunc_GetPersonnelResourceItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue3, class FText CallFunc_GetDisplayName_ReturnValue3);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemTransformResultItems(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

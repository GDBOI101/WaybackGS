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

// 0x28 (0x2A0 - 0x278)
// WidgetBlueprintGeneratedClass ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C
class UItemCalledOutAttributesDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UFortItemCategoryIndicator*            AmmoTypeIndicator;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              ContainerWrapBox;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UStatsListItemWIdget_C*>        StatWidgets;                                       // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCalledOutAttributesDetailWidget_C");
		return Clss;
	}

	void Clear_Stats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatsListItemWIdget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateStats(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable2, class UStatsListItemWIdget_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetDisplayAttributesToCallOut_Attributes, class UStatsListItemWIdget_C* CallFunc_Create_ReturnValue, const struct FFortDisplayAttribute& CallFunc_Array_Get_Item2, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, const struct FFortDisplayAttribute& CallFunc_Array_Get_Item3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes, const TArray<struct FGameplayTag>& Tokens, const TArray<struct FFortDisplayAttribute>& Results, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& K2Node_MakeArray_Array2, TArray<struct FGameplayTag>& K2Node_MakeArray_Array3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithNetID_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EFortItemType K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortItemType K2Node_Select_Default, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

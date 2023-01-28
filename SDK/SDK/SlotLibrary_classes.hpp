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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SlotLibrary.SlotLibrary_C
class USlotLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlotLibrary_C");
		return Clss;
	}

	class FText Get_Attribute_Modifier_Header_Text(const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Tags, class FText Required_Gameplay_Tags_Description, class UObject* __WorldContext, bool Temp_bool_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetAttributeDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_TextIsEmpty_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText K2Node_Select2_Default);
	void Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Gameplay_Tags, class FText Required_Gameplay_Tags_Description, class FText Modifier_Source, class UObject* __WorldContext, class UWidget** Result, class FText Temp_text_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAttributeDescription_ReturnValue, class FText CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, class FText Temp_text_Variable2, TArray<class FText>& K2Node_Select2_Default, bool Temp_bool_Variable3, class FText K2Node_Select3_Default, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output);
	void Get_Traits_Of_Workers(TArray<class UFortWorker*>& Workers, class UObject* __WorldContext, struct FGameplayTagContainer* Chief_Personality, struct FGameplayTagContainer* Crew_Personalities, struct FGameplayTagContainer* Crew_Set_Bonuses, const TArray<struct FGameplayTag>& Crew_Personalities_Result, const TArray<struct FGameplayTag>& Crew_Set_Bonuses_Result, const TArray<struct FGameplayTag>& Chief_Personalities_Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortWorker* CallFunc_Array_Get_Item, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortWorkerType* K2Node_DynamicCast_AsFort_Worker_Type, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TArray<struct FGameplayTag>& K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Calculate_Current_Pulsing_Highlight_Color(const struct FLinearColor& Base_Color, const struct FLinearColor& Hightlight_Color, class UObject* __WorldContext, struct FLinearColor* Current_Color, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Sin_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue);
	void EnsureIconBrush(const struct FFortMultiSizeBrush& Multi_size_Brush, class UObject* __WorldContext, struct FSlateBrush* Brush, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_Select_Default);
	void InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_Create_Item_Tooltip_Return_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

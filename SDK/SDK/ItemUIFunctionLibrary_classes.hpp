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
// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemUIFunctionLibrary_C");
		return Clss;
	}

	void Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue3, class FText Temp_text_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class FText Temp_text_Variable2, bool Temp_bool_Variable5, class FText Temp_text_Variable3, float K2Node_Select_Default, class FText Temp_text_Variable4, float K2Node_Select2_Default, float K2Node_Select3_Default, bool Temp_bool_Variable6, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select4_Default, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Convert_Tier_To_Integer(enum class EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier, enum class EFortItemTier Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, int32 Temp_int_Variable10, int32 Temp_int_Variable11, int32 K2Node_Select_Default);
	void ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue);
	void Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int32 PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext, bool FormatForVaultDetails, bool ShowPreview, const struct FLinearColor& Color, int32 AlterationsArrayIndex, int32 LevelToPreview, bool bIsAlterationSlotActive, class UFortItem* ItemRef, class UVerticalBox* VerticalBoxRef, int32 ItemLevel, const class FString& LevelString, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue, class UTooltipStatWrapper_C* CallFunc_Create_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue3, class UTooltipStatWrapper_C* CallFunc_Create_ReturnValue4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, class FText CallFunc_GetAlterationSlotActivationRequirement_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor3, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_ParseLevelRequiredFromString_outInt, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_GetAlterationSlotActivationRequirement_ReturnValue2, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue2, class UFortAlterationItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat2, bool CallFunc_IsAlterationSlotActive_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

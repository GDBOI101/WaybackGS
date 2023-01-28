#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min_Fractional_Digits                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max_Fractional_Digits                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Formatted_Value                                                  (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              ()
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              ()
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        K2Node_Select6_Default                                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemUIFunctionLibrary_C::Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue3, class FText Temp_text_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class FText Temp_text_Variable2, bool Temp_bool_Variable5, class FText Temp_text_Variable3, float K2Node_Select_Default, class FText Temp_text_Variable4, float K2Node_Select2_Default, float K2Node_Select3_Default, bool Temp_bool_Variable6, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select4_Default, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "Truncate Integer Value");

	Params::UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params Parms;
	Parms.Value = Value;
	Parms.Min_Fractional_Digits = Min_Fractional_Digits;
	Parms.Max_Fractional_Digits = Max_Fractional_Digits;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue3 = CallFunc_GreaterEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Formatted_Value != nullptr)
		*Formatted_Value = Parms.Formatted_Value;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortItemTier           Tier                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Numeric_Tier                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemUIFunctionLibrary_C::Convert_Tier_To_Integer(enum class EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier, enum class EFortItemTier Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, int32 Temp_int_Variable10, int32 Temp_int_Variable11, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "Convert Tier To Integer");

	Params::UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params Parms;
	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Numeric_Tier != nullptr)
		*Numeric_Tier = Parms.Numeric_Tier;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutInt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemUIFunctionLibrary_C::ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "ParseLevelRequiredFromString");

	Params::UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params Parms;
	Parms.InString = InString;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue2 = CallFunc_FindSubstring_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInt != nullptr)
		*OutInt = Parms.OutInt;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                Host_Widget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviewLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowInVaultDetails                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FormatForVaultDetails                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPreview                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Color                                                            (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AlterationsArrayIndex                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelToPreview                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAlterationSlotActive                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   ItemRef                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                VerticalBoxRef                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemLevel                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelString                                                      (Edit, ZeroConstructor, HasGetValueTypeHash)
// class UTooltipStatWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipStatWrapper_C*       CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipStatWidget_C*        CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipStatWrapper_C*       CallFunc_Create_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (NoDestructor)
// class FText                        CallFunc_GetAlterationSlotActivationRequirement_ReturnValue      ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ParseLevelRequiredFromString_outInt                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAlterationSlotActivationRequirement_ReturnValue2     ()
// TArray<class UFortAlterationItemDefinition*>CallFunc_GetAlterations_ReturnValue                              (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FTooltipStat                K2Node_MakeStruct_TooltipStat                                    (HasGetValueTypeHash)
// struct FTooltipStat                K2Node_MakeStruct_TooltipStat2                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationSlotActive_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemUIFunctionLibrary_C::Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int32 PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext, bool FormatForVaultDetails, bool ShowPreview, const struct FLinearColor& Color, int32 AlterationsArrayIndex, int32 LevelToPreview, bool bIsAlterationSlotActive, class UFortItem* ItemRef, class UVerticalBox* VerticalBoxRef, int32 ItemLevel, const class FString& LevelString, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue, class UTooltipStatWrapper_C* CallFunc_Create_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue3, class UTooltipStatWrapper_C* CallFunc_Create_ReturnValue4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, class FText CallFunc_GetAlterationSlotActivationRequirement_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor3, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_ParseLevelRequiredFromString_outInt, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_GetAlterationSlotActivationRequirement_ReturnValue2, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue2, class UFortAlterationItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat2, bool CallFunc_IsAlterationSlotActive_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "Add Alteration Widgets");

	Params::UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params Parms;
	Parms.Host_Widget = Host_Widget;
	Parms.Item = Item;
	Parms.PreviewLevel = PreviewLevel;
	Parms.ShowInVaultDetails = ShowInVaultDetails;
	Parms.__WorldContext = __WorldContext;
	Parms.FormatForVaultDetails = FormatForVaultDetails;
	Parms.ShowPreview = ShowPreview;
	Parms.Color = Color;
	Parms.AlterationsArrayIndex = AlterationsArrayIndex;
	Parms.LevelToPreview = LevelToPreview;
	Parms.bIsAlterationSlotActive = bIsAlterationSlotActive;
	Parms.ItemRef = ItemRef;
	Parms.VerticalBoxRef = VerticalBoxRef;
	Parms.ItemLevel = ItemLevel;
	Parms.LevelString = LevelString;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue4 = CallFunc_Create_ReturnValue4;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue2 = CallFunc_AddChildToVerticalBox_ReturnValue2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue3 = CallFunc_AddChildToVerticalBox_ReturnValue3;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.CallFunc_GetAlterationSlotActivationRequirement_ReturnValue = CallFunc_GetAlterationSlotActivationRequirement_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor3 = K2Node_MakeStruct_LinearColor3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ParseLevelRequiredFromString_outInt = CallFunc_ParseLevelRequiredFromString_outInt;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetAlterationSlotActivationRequirement_ReturnValue2 = CallFunc_GetAlterationSlotActivationRequirement_ReturnValue2;
	Parms.CallFunc_GetAlterations_ReturnValue = CallFunc_GetAlterations_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue2 = CallFunc_Conv_TextToString_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue3 = CallFunc_Conv_TextToString_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_TooltipStat = K2Node_MakeStruct_TooltipStat;
	Parms.K2Node_MakeStruct_TooltipStat2 = K2Node_MakeStruct_TooltipStat2;
	Parms.CallFunc_IsAlterationSlotActive_ReturnValue = CallFunc_IsAlterationSlotActive_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue4 = CallFunc_AddChildToVerticalBox_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

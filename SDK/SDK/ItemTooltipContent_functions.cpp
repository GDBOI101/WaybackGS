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


// Function ItemTooltipContent.ItemTooltipContent_C.ClearExtendedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTooltipContent_C::ClearExtendedInfo()
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "ClearExtendedInfo");

	Params::UItemTooltipContent_C_ClearExtendedInfo_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULegacyRatingWidget_C*       ActiveWidget                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRating_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRating_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegacyRatingWidget_C*       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Set_Rating(class ULegacyRatingWidget_C* ActiveWidget, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetRating_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetRating_ReturnValue2, class ULegacyRatingWidget_C* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Rating");

	Params::UItemTooltipContent_C_Set_Rating_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRating_ReturnValue = CallFunc_GetRating_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRating_ReturnValue2 = CallFunc_GetRating_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Quantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemStackCounter_C*         K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Set_Quantity(bool Temp_bool_Variable, enum class EFortBrushSize Temp_byte_Variable, enum class EFortBrushSize Temp_byte_Variable2, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortBrushSize K2Node_Select_Default, class UItemStackCounter_C* K2Node_Select2_Default, int32 CallFunc_GetNumInStack_ReturnValue, int32 K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Quantity");

	Params::UItemTooltipContent_C_Set_Quantity_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.SetDescriptionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTooltip_DescriptionText_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_Init_Tooltip_Context_Tooltip_Context                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetDescription_OutDescription                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetDescription_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_Select2_Default                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::SetDescriptionText(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UTooltip_DescriptionText_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable2, class UVerticalBox* K2Node_Select_Default, class UFortTooltipContext* CallFunc_Init_Tooltip_Context_Tooltip_Context, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class FText>& CallFunc_GetDescription_OutDescription, bool CallFunc_GetDescription_ReturnValue2, TArray<class FText>& K2Node_Select2_Default, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "SetDescriptionText");

	Params::UItemTooltipContent_C_SetDescriptionText_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Init_Tooltip_Context_Tooltip_Context = CallFunc_Init_Tooltip_Context_Tooltip_Context;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetDescription_OutDescription = CallFunc_GetDescription_OutDescription;
	Parms.CallFunc_GetDescription_ReturnValue2 = CallFunc_GetDescription_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Create Custom Integer Stat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortStatValueDisplayTypeDisplay_Type                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Label                                                            (Parm)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Comparison_Value                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HigherIsBetter                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       Display_Attribute                                                (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData8                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()
// class FText                        CallFunc_Format_ReturnValue4                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortComparisonType     Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        K2Node_Select11_Default                                          ()
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select12_Default                                          ()
// enum class EFortBuffState          Temp_byte_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select13_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select14_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable21                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select15_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select16_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     K2Node_Select17_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          K2Node_Select18_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       K2Node_MakeStruct_FortDisplayAttribute                           ()

void UItemTooltipContent_C::Create_Custom_Integer_Stat(enum class EFortStatValueDisplayType Display_Type, class FText Label, int32 Value, int32 Comparison_Value, bool HigherIsBetter, struct FFortDisplayAttribute* Display_Attribute, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, class FText CallFunc_Format_ReturnValue3, class FText CallFunc_Format_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class FText K2Node_Select2_Default, enum class EFortBuffState Temp_byte_Variable, enum class EFortBuffState Temp_byte_Variable2, bool Temp_bool_Variable4, enum class EFortBuffState K2Node_Select3_Default, enum class EFortBuffState Temp_byte_Variable3, enum class EFortBuffState Temp_byte_Variable4, enum class EItemTooltip_DisplayMode Temp_byte_Variable5, enum class EFortBuffState K2Node_Select4_Default, bool Temp_bool_Variable5, enum class EItemTooltip_DisplayMode Temp_byte_Variable6, bool Temp_bool_Variable6, enum class EFortComparisonType Temp_byte_Variable7, enum class EFortComparisonType Temp_byte_Variable8, bool Temp_bool_Variable7, enum class EFortComparisonType K2Node_Select5_Default, enum class EFortComparisonType Temp_byte_Variable9, bool Temp_bool_Variable8, enum class EFortComparisonType K2Node_Select6_Default, enum class EFortBuffState Temp_byte_Variable10, bool Temp_bool_Variable9, enum class EFortBuffState K2Node_Select7_Default, enum class EItemTooltip_DisplayMode Temp_byte_Variable11, enum class EFortBuffState K2Node_Select8_Default, enum class EFortBuffState Temp_byte_Variable12, enum class EItemTooltip_DisplayMode Temp_byte_Variable13, enum class EFortComparisonType Temp_byte_Variable14, enum class EFortComparisonType Temp_byte_Variable15, enum class EFortComparisonType Temp_byte_Variable16, bool Temp_bool_Variable10, enum class EFortComparisonType K2Node_Select9_Default, bool Temp_bool_Variable11, enum class EFortBuffState Temp_byte_Variable17, bool Temp_bool_Variable12, enum class EFortBuffState Temp_byte_Variable18, enum class EFortBuffState Temp_byte_Variable19, class FText K2Node_Select10_Default, class FText K2Node_Select11_Default, bool Temp_bool_Variable13, class FText K2Node_Select12_Default, enum class EFortBuffState Temp_byte_Variable20, enum class EFortBuffState K2Node_Select13_Default, enum class EFortBuffState K2Node_Select14_Default, enum class EFortBuffState Temp_byte_Variable21, bool Temp_bool_Variable14, enum class EFortBuffState K2Node_Select15_Default, enum class EFortBuffState K2Node_Select16_Default, enum class EFortComparisonType K2Node_Select17_Default, enum class EFortBuffState K2Node_Select18_Default, const struct FFortDisplayAttribute& K2Node_MakeStruct_FortDisplayAttribute)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Create Custom Integer Stat");

	Params::UItemTooltipContent_C_Create_Custom_Integer_Stat_Params Parms;
	Parms.Display_Type = Display_Type;
	Parms.Label = Label;
	Parms.Value = Value;
	Parms.Comparison_Value = Comparison_Value;
	Parms.HigherIsBetter = HigherIsBetter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.K2Node_MakeStruct_FormatArgumentData8 = K2Node_MakeStruct_FormatArgumentData8;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;
	Parms.CallFunc_Format_ReturnValue4 = CallFunc_Format_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_byte_Variable16 = Temp_byte_Variable16;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_byte_Variable17 = Temp_byte_Variable17;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_byte_Variable18 = Temp_byte_Variable18;
	Parms.Temp_byte_Variable19 = Temp_byte_Variable19;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_byte_Variable20 = Temp_byte_Variable20;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_byte_Variable21 = Temp_byte_Variable21;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.K2Node_MakeStruct_FortDisplayAttribute = K2Node_MakeStruct_FortDisplayAttribute;

	UObject::ProcessEvent(Func, &Parms);

	if (Display_Attribute != nullptr)
		*Display_Attribute = Parms.Display_Attribute;

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Perks List
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAlterationItemDefinition*>CallFunc_GetAlterations_ReturnValue                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegacyPerksWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAlterationItemDefinition*>CallFunc_GetAlterations_ReturnValue2                             (ZeroConstructor, ReferenceParm)
// class ULegacyAlterationGroup_Widget_C*CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Build_Perks_List(class UFortHero* Hero, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyPerksWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue2, class ULegacyAlterationGroup_Widget_C* CallFunc_Create_ReturnValue2, int32 CallFunc_GetLevel_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Perks List");

	Params::UItemTooltipContent_C_Build_Perks_List_Params Parms;
	Parms.Hero = Hero;
	Parms.CallFunc_GetAlterations_ReturnValue = CallFunc_GetAlterations_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_GetAlterations_ReturnValue2 = CallFunc_GetAlterations_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue2 = CallFunc_AddChildToVerticalBox_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.IsComparison
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemTooltipContent_C::IsComparison(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "IsComparison");

	Params::UItemTooltipContent_C_IsComparison_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemTooltipContent.ItemTooltipContent_C.BuildHeroBonuses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipHeroBonuses_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsComparison_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::BuildHeroBonuses(class UFortHero* Hero, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipHeroBonuses_C* CallFunc_Create_ReturnValue, bool CallFunc_IsComparison_ReturnValue, bool Temp_bool_Variable, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "BuildHeroBonuses");

	Params::UItemTooltipContent_C_BuildHeroBonuses_Params Parms;
	Parms.Hero = Hero;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsComparison_ReturnValue = CallFunc_IsComparison_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Ingredients
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipIngredientList_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Build_Ingredients(bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipIngredientList_C* CallFunc_Create_ReturnValue, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Ingredients");

	Params::UItemTooltipContent_C_Build_Ingredients_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Init Tooltip Context
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipContext*         Tooltip_Context                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Query_Tag_Tag                                       (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddGameplayTagToContainer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Init_Tooltip_Context(class UFortTooltipContext** Tooltip_Context, const struct FGameplayTag& CallFunc_Get_Query_Tag_Tag, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_AddGameplayTagToContainer_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Init Tooltip Context");

	Params::UItemTooltipContent_C_Init_Tooltip_Context_Params Parms;
	Parms.CallFunc_Get_Query_Tag_Tag = CallFunc_Get_Query_Tag_Tag;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_AddGameplayTagToContainer_ReturnValue = CallFunc_AddGameplayTagToContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Tooltip_Context != nullptr)
		*Tooltip_Context = Parms.Tooltip_Context;

}


// Function ItemTooltipContent.ItemTooltipContent_C.Get Query Tag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable3                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Get_Query_Tag(struct FGameplayTag* Tag, enum class EItemTooltip_DisplayMode Temp_byte_Variable, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable2, const struct FGameplayTag& Temp_struct_Variable3, const struct FGameplayTag& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Get Query Tag");

	Params::UItemTooltipContent_C_Get_Query_Tag_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = Parms.Tag;

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Schematic Ingredients
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTooltipContent_C::Build_Schematic_Ingredients()
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Schematic Ingredients");

	Params::UItemTooltipContent_C_Build_Schematic_Ingredients_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Rarity Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UItemTooltipContent_C::Set_Rarity_Data(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Rarity Data");

	Params::UItemTooltipContent_C_Set_Rarity_Data_Params Parms;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemTooltip_DisplayModeDisplayMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemTooltip_DisplayModeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Set_Display_Mode(enum class EItemTooltip_DisplayMode DisplayMode, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EItemTooltip_DisplayMode Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EItemTooltip_DisplayMode K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Display Mode");

	Params::UItemTooltipContent_C_Set_Display_Mode_Params Parms;
	Parms.DisplayMode = DisplayMode;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Level Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CompareMaxLevel                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CompareLevel                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasLevel                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                ActiveBox                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevel                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentLevel                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       CallFunc_Create_Custom_Integer_Stat_Display_Attribute            ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// struct FFortDisplayAttribute       CallFunc_Create_Custom_Integer_Stat_Display_Attribute2           ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxLevel_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Set_Level_Text(int32 CompareMaxLevel, int32 CompareLevel, bool HasLevel, class UVerticalBox* ActiveBox, int32 MaxLevel, int32 CurrentLevel, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortDisplayAttribute& CallFunc_Create_Custom_Integer_Stat_Display_Attribute, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FFortDisplayAttribute& CallFunc_Create_Custom_Integer_Stat_Display_Attribute2, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_GetMaxLevel_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetLevel_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue2, class UVerticalBox* K2Node_Select2_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Level Text");

	Params::UItemTooltipContent_C_Set_Level_Text_Params Parms;
	Parms.CompareMaxLevel = CompareMaxLevel;
	Parms.CompareLevel = CompareLevel;
	Parms.HasLevel = HasLevel;
	Parms.ActiveBox = ActiveBox;
	Parms.MaxLevel = MaxLevel;
	Parms.CurrentLevel = CurrentLevel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Create_Custom_Integer_Stat_Display_Attribute = CallFunc_Create_Custom_Integer_Stat_Display_Attribute;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_Custom_Integer_Stat_Display_Attribute2 = CallFunc_Create_Custom_Integer_Stat_Display_Attribute2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_GetMaxLevel_ReturnValue2 = CallFunc_GetMaxLevel_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue2 = CallFunc_GetLevel_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue2 = CallFunc_AddChildToVerticalBox_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Tier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxTier                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              ActiveBox                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTier                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// enum class EFortItemTier           CallFunc_GetMaxTier_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_TierStar_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Set_Tier(int32 MaxTier, int32 CurrentTier, class UHorizontalBox* ActiveBox, bool HasTier, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, enum class EFortItemTier CallFunc_GetMaxTier_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItem_TierStar_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, class UHorizontalBox* K2Node_Select2_Default, enum class EFortItemTier CallFunc_GetTier_ReturnValue2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable3, const struct FLinearColor& K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Tier");

	Params::UItemTooltipContent_C_Set_Tier_Params Parms;
	Parms.MaxTier = MaxTier;
	Parms.CurrentTier = CurrentTier;
	Parms.ActiveBox = ActiveBox;
	Parms.HasTier = HasTier;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetMaxTier_ReturnValue = CallFunc_GetMaxTier_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue = CallFunc_GetTier_ReturnValue;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier = CallFunc_Convert_Tier_To_Integer_Numeric_Tier;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier2 = CallFunc_Convert_Tier_To_Integer_Numeric_Tier2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetTier_ReturnValue2 = CallFunc_GetTier_ReturnValue2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Tertiary Category Icon & Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Set_Tertiary_Category_Icon___Text(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class EFortBrushSize Temp_byte_Variable2, enum class EFortBrushSize Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class EFortBrushSize K2Node_Select_Default, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Tertiary Category Icon & Text");

	Params::UItemTooltipContent_C_Set_Tertiary_Category_Icon___Text_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Secondary Category Icon & Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   ()
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  ()
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Set_Secondary_Category_Icon___Text(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class EFortBrushSize Temp_byte_Variable2, enum class EFortBrushSize Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class EFortBrushSize K2Node_Select_Default, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Secondary Category Icon & Text");

	Params::UItemTooltipContent_C_Set_Secondary_Category_Icon___Text_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Primary Category Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPrimaryCategory_ItemCategoryText                     ()
// bool                               CallFunc_GetPrimaryCategory_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Set_Primary_Category_Text(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class FText CallFunc_GetPrimaryCategory_ItemCategoryText, bool CallFunc_GetPrimaryCategory_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Primary Category Text");

	Params::UItemTooltipContent_C_Set_Primary_Category_Text_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPrimaryCategory_ItemCategoryText = CallFunc_GetPrimaryCategory_ItemCategoryText;
	Parms.CallFunc_GetPrimaryCategory_ReturnValue = CallFunc_GetPrimaryCategory_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Name Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_TextTrimPrecedingAndTrailing_ReturnValue                ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemTooltipContent_C::Set_Display_Name_Text(class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Display Name Text");

	Params::UItemTooltipContent_C_Set_Display_Name_Text_Params Parms;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextTrimPrecedingAndTrailing_ReturnValue = CallFunc_TextTrimPrecedingAndTrailing_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Stat Block
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortDisplayAttribute>StatArray                                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortDisplayAttribute>CallFunc_GetTooltipStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetUpgradeStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetComparisonStats_ReturnValue                          (ZeroConstructor, ReferenceParm)

void UItemTooltipContent_C::Build_Basic_Stat_Block(const TArray<struct FFortDisplayAttribute>& StatArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDisplayAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UTooltip_DisplayAttribute_C* CallFunc_Create_ReturnValue, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetTooltipStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetUpgradeStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetComparisonStats_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Basic Stat Block");

	Params::UItemTooltipContent_C_Build_Basic_Stat_Block_Params Parms;
	Parms.StatArray = StatArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetTooltipStats_ReturnValue = CallFunc_GetTooltipStats_ReturnValue;
	Parms.CallFunc_GetUpgradeStats_ReturnValue = CallFunc_GetUpgradeStats_ReturnValue;
	Parms.CallFunc_GetComparisonStats_ReturnValue = CallFunc_GetComparisonStats_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTooltipContent_C::Intro()
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Intro");

	Params::UItemTooltipContent_C_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Durability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_Init_Tooltip_Context_Tooltip_Context                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipDurabilityMeter_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTooltipNumericValue_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTooltipNumericValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Build_Durability(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_Init_Tooltip_Context_Tooltip_Context, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipDurabilityMeter_C* CallFunc_Create_ReturnValue, float CallFunc_GetTooltipNumericValue_Value, bool CallFunc_GetTooltipNumericValue_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, bool Temp_bool_Variable, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Durability");

	Params::UItemTooltipContent_C_Build_Durability_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Init_Tooltip_Context_Tooltip_Context = CallFunc_Init_Tooltip_Context_Tooltip_Context;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetTooltipNumericValue_Value = CallFunc_GetTooltipNumericValue_Value;
	Parms.CallFunc_GetTooltipNumericValue_ReturnValue = CallFunc_GetTooltipNumericValue_ReturnValue;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Alteration Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::Build_Alteration_Info(bool Temp_bool_Variable, int32 CallFunc_GetLevel_ReturnValue, class UVerticalBox* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Alteration Info");

	Params::UItemTooltipContent_C_Build_Alteration_Info_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Worker Stats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     OccupiedBuildingDefinition                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorkerTooltipStatsWidget_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Build_Worker_Stats(class UObject* OccupiedBuildingDefinition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorkerTooltipStatsWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Worker Stats");

	Params::UItemTooltipContent_C_Build_Worker_Stats_Params Parms;
	Parms.OccupiedBuildingDefinition = OccupiedBuildingDefinition;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Weapon DPS Stat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_Init_Tooltip_Context_Tooltip_Context                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponTooltipDPSWidget_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Build_Weapon_DPS_Stat(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_Init_Tooltip_Context_Tooltip_Context, class UVerticalBox* K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWeaponTooltipDPSWidget_C* CallFunc_Create_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Weapon DPS Stat");

	Params::UItemTooltipContent_C_Build_Weapon_DPS_Stat_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Init_Tooltip_Context_Tooltip_Context = CallFunc_Init_Tooltip_Context_Tooltip_Context;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTooltipContent_C::Build_Basic_Info()
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Build Basic Info");

	Params::UItemTooltipContent_C_Build_Basic_Info_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Item Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Comparison_Item                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemTooltip_DisplayModeDisplayMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverrideQuantity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Set_Item_Data(class UFortItem* Item, class UFortItem* Comparison_Item, enum class EItemTooltip_DisplayMode DisplayMode, int32 OverrideQuantity, bool CallFunc_Update_Success)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Set Item Data");

	Params::UItemTooltipContent_C_Set_Item_Data_Params Parms;
	Parms.Item = Item;
	Parms.Comparison_Item = Comparison_Item;
	Parms.DisplayMode = DisplayMode;
	Parms.OverrideQuantity = OverrideQuantity;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.Update
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTooltipContent_C::Update(bool* Success, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Update");

	Params::UItemTooltipContent_C_Update_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ItemTooltipContent.ItemTooltipContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTooltipContent_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "Construct");

	Params::UItemTooltipContent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTooltipContent.ItemTooltipContent_C.ExecuteUbergraph_ItemTooltipContent
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTooltipContent_C::ExecuteUbergraph_ItemTooltipContent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemTooltipContent_C", "ExecuteUbergraph_ItemTooltipContent");

	Params::UItemTooltipContent_C_ExecuteUbergraph_ItemTooltipContent_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

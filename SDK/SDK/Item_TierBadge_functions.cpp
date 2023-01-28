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


// Function Item_TierBadge.Item_TierBadge_C.Set Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Current_Level                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max_Level                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UItem_TierBadge_C::Set_Level(int32 Current_Level, int32 Max_Level, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("Item_TierBadge_C", "Set Level");

	Params::UItem_TierBadge_C_Set_Level_Params Parms;
	Parms.Current_Level = Current_Level;
	Parms.Max_Level = Max_Level;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Item_TierBadge.Item_TierBadge_C.Refresh Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayMode        Display_Mode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           Current_Tier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItem_TierBadge_C::Refresh_Visibility(enum class EFortBrushSize Brush_Size, enum class EItemDisplayMode Display_Mode, enum class EFortItemTier Current_Tier, bool* Visible, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Item_TierBadge_C", "Refresh Visibility");

	Params::UItem_TierBadge_C_Refresh_Visibility_Params Parms;
	Parms.Brush_Size = Brush_Size;
	Parms.Display_Mode = Display_Mode;
	Parms.Current_Tier = Current_Tier;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function Item_TierBadge.Item_TierBadge_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemTier           Current_Tier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           Max_Tier                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Item_Display_Style                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayMode        Item_Display_Mode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         Rarity_Colors                                                    (Parm)
// int32                              Current_Level                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max_Level                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevel                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentLevel                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         RarityData                                                       (Edit)
// enum class EItemDisplayMode        DisplayMode                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       DisplayStyle                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          BrushSize                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           MaxTier                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CurrentTier                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxTierInt                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTierInt                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_Refresh_Visibility_Visible                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItem_TierStar_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)

void UItem_TierBadge_C::Update(enum class EFortItemTier Current_Tier, enum class EFortItemTier Max_Tier, enum class EFortBrushSize Brush_Size, enum class EItemDisplayStyle Item_Display_Style, enum class EItemDisplayMode Item_Display_Mode, const struct FFortRarityItemData& Rarity_Colors, int32 Current_Level, int32 Max_Level, int32 MaxLevel, int32 CurrentLevel, const struct FFortRarityItemData& RarityData, enum class EItemDisplayMode DisplayMode, enum class EItemDisplayStyle DisplayStyle, enum class EFortBrushSize BrushSize, enum class EFortItemTier MaxTier, enum class EFortItemTier CurrentTier, int32 MaxTierInt, int32 CurrentTierInt, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable6, float Temp_float_Variable7, float Temp_float_Variable8, float Temp_float_Variable9, float Temp_float_Variable10, float Temp_float_Variable11, bool Temp_bool_Variable, float Temp_float_Variable12, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Refresh_Visibility_Visible, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortBrushSize Temp_byte_Variable2, float K2Node_Select_Default, float K2Node_Select2_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable2, class UItem_TierStar_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier2, float Temp_float_Variable13, float K2Node_Select4_Default, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("Item_TierBadge_C", "Update");

	Params::UItem_TierBadge_C_Update_Params Parms;
	Parms.Current_Tier = Current_Tier;
	Parms.Max_Tier = Max_Tier;
	Parms.Brush_Size = Brush_Size;
	Parms.Item_Display_Style = Item_Display_Style;
	Parms.Item_Display_Mode = Item_Display_Mode;
	Parms.Rarity_Colors = Rarity_Colors;
	Parms.Current_Level = Current_Level;
	Parms.Max_Level = Max_Level;
	Parms.MaxLevel = MaxLevel;
	Parms.CurrentLevel = CurrentLevel;
	Parms.RarityData = RarityData;
	Parms.DisplayMode = DisplayMode;
	Parms.DisplayStyle = DisplayStyle;
	Parms.BrushSize = BrushSize;
	Parms.MaxTier = MaxTier;
	Parms.CurrentTier = CurrentTier;
	Parms.MaxTierInt = MaxTierInt;
	Parms.CurrentTierInt = CurrentTierInt;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.Temp_float_Variable8 = Temp_float_Variable8;
	Parms.Temp_float_Variable9 = Temp_float_Variable9;
	Parms.Temp_float_Variable10 = Temp_float_Variable10;
	Parms.Temp_float_Variable11 = Temp_float_Variable11;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable12 = Temp_float_Variable12;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Refresh_Visibility_Visible = CallFunc_Refresh_Visibility_Visible;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier = CallFunc_Convert_Tier_To_Integer_Numeric_Tier;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier2 = CallFunc_Convert_Tier_To_Integer_Numeric_Tier2;
	Parms.Temp_float_Variable13 = Temp_float_Variable13;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

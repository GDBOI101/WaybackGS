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


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (Parm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULegacyItem_DO_NOT_USE_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnDrop");

	Params::ULegacyItem_DO_NOT_USE_C_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Opacity(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Base Opacity");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Base_Opacity_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activatable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Activatable_State(bool Activatable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable, float Temp_float_Variable2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Activatable State");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Activatable_State_Params Parms;
	Parms.Activatable = Activatable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowRating                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// int32                              CallFunc_GetRating_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRating_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Update_Rating_Tag(bool ShowRating, enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, enum class EFortBrushSize Temp_byte_Variable4, bool K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_GetRating_ReturnValue, int32 CallFunc_GetRating_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Rating Tag");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Rating_Tag_Params Parms;
	Parms.ShowRating = ShowRating;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetRating_ReturnValue = CallFunc_GetRating_ReturnValue;
	Parms.CallFunc_GetRating_ReturnValue2 = CallFunc_GetRating_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush         Multi_Size_Brush                                                 (Parm)
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture2D                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Get_Texture2D_From_Multi_Size_Brush(const struct FFortMultiSizeBrush& Multi_Size_Brush, enum class EFortBrushSize Brush_Size, class UTexture2D** Texture2D, bool* Success, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Texture2D From Multi Size Brush");

	Params::ULegacyItem_DO_NOT_USE_C_Get_Texture2D_From_Multi_Size_Brush_Params Parms;
	Parms.Multi_Size_Brush = Multi_Size_Brush;
	Parms.Brush_Size = Brush_Size;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture2D != nullptr)
		*Texture2D = Parms.Texture2D;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

int32 ULegacyItem_DO_NOT_USE_C::Get_Num_in_Stack(int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Num in Stack");

	Params::ULegacyItem_DO_NOT_USE_C_Get_Num_in_Stack_Params Parms;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override_Display_Style                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       DisplayStyle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Style(bool Override_Display_Style, enum class EItemDisplayStyle DisplayStyle)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Display Style");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Display_Style_Params Parms;
	Parms.Override_Display_Style = Override_Display_Style;
	Parms.DisplayStyle = DisplayStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacyItem_DO_NOT_USE_C::Hide_Subtype_Icons()
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Hide Subtype Icons");

	Params::ULegacyItem_DO_NOT_USE_C_Hide_Subtype_Icons_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override_Icon_Visibility                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Item_Icon_Visibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           LocalItemType                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Set_Primary_Icon_Visibility(bool Override_Icon_Visibility, enum class ESlateVisibility Item_Icon_Visibility, enum class EFortItemType LocalItemType, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, enum class EFortBrushSize Temp_byte_Variable, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, enum class EItemDisplayStyle Temp_byte_Variable2, bool Temp_bool_Variable12, bool Temp_bool_Variable13, bool Temp_bool_Variable14, bool Temp_bool_Variable15, bool Temp_bool_Variable16, bool Temp_bool_Variable17, bool Temp_bool_Variable18, bool Temp_bool_Variable19, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable20, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, bool K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Primary Icon Visibility");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Primary_Icon_Visibility_Params Parms;
	Parms.Override_Icon_Visibility = Override_Icon_Visibility;
	Parms.Item_Icon_Visibility = Item_Icon_Visibility;
	Parms.LocalItemType = LocalItemType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.Temp_bool_Variable16 = Temp_bool_Variable16;
	Parms.Temp_bool_Variable17 = Temp_bool_Variable17;
	Parms.Temp_bool_Variable18 = Temp_bool_Variable18;
	Parms.Temp_bool_Variable19 = Temp_bool_Variable19;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable20 = Temp_bool_Variable20;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override_Secondary_Icon_Color                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Secondary_Icon_Override_Color                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Override_Tertiary_Icon_Color                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Tertiary_Icon_Override_Color                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Subtype Icons & Ammo Color");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Subtype_Icons___Ammo_Color_Params Parms;
	Parms.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	Parms.Secondary_Icon_Override_Color = Secondary_Icon_Override_Color;
	Parms.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	Parms.Tertiary_Icon_Override_Color = Tertiary_Icon_Override_Color;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// class UFortItem*                   CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActivateItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UFortItem* CallFunc_GetItem_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActivateItem_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseButtonDoubleClick");

	Params::ULegacyItem_DO_NOT_USE_C_OnMouseButtonDoubleClick_Params Parms;
	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ActivateItem_ReturnValue = CallFunc_ActivateItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Resize(enum class EFortBrushSize Brush_Size, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Resize");

	Params::ULegacyItem_DO_NOT_USE_C_Resize_Params Parms;
	Parms.Brush_Size = Brush_Size;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Refresh_Visibility_Visible                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNormalizedDurability_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Refresh(int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, bool CallFunc_Refresh_Visibility_Visible, float CallFunc_GetNormalizedDurability_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Refresh");

	Params::ULegacyItem_DO_NOT_USE_C_Refresh_Params Parms;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue = CallFunc_GetTier_ReturnValue;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_Refresh_Visibility_Visible = CallFunc_Refresh_Visibility_Visible;
	Parms.CallFunc_GetNormalizedDurability_ReturnValue = CallFunc_GetNormalizedDurability_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Stack_Count(int32 Count)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Stack Count");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Stack_Count_Params Parms;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Durability                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Durability(float Durability)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Durability");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Durability_Params Parms;
	Parms.Durability = Durability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacyItem_DO_NOT_USE_C::Update_Cooldown_Meter()
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Cooldown Meter");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Cooldown_Meter_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DurabilityBarHeight                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Get_Item_Icon_Size_Icon_Size                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedDurability_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Durability_Meter(float DurabilityBarHeight, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortBrushSize Temp_byte_Variable, float K2Node_Select_Default, const struct FVector2D& CallFunc_Get_Item_Icon_Size_Icon_Size, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_GetNormalizedDurability_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Durability Meter");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Durability_Meter_Params Parms;
	Parms.DurabilityBarHeight = DurabilityBarHeight;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Item_Icon_Size_Icon_Size = CallFunc_Get_Item_Icon_Size_Icon_Size;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_GetNormalizedDurability_ReturnValue = CallFunc_GetNormalizedDurability_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Tooltip_Header(class FText Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Tooltip Header");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Tooltip_Header_Params Parms;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              OverrideStackCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   ComparedItem                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToCompare_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Create_Item_Tooltip_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Create_Compare_Item_Tooltip_Return_Value                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULegacyItem_DO_NOT_USE_C::Get_Item_Tooltip(int32 OverrideStackCount, class UFortItem* ComparedItem, class UFortItem* CallFunc_GetItemToCompare_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_Create_Item_Tooltip_Return_Value, class UWidget* CallFunc_Create_Compare_Item_Tooltip_Return_Value)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Item Tooltip");

	Params::ULegacyItem_DO_NOT_USE_C_Get_Item_Tooltip_Params Parms;
	Parms.OverrideStackCount = OverrideStackCount;
	Parms.ComparedItem = ComparedItem;
	Parms.CallFunc_GetItemToCompare_ReturnValue = CallFunc_GetItemToCompare_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Item_Tooltip_Return_Value = CallFunc_Create_Item_Tooltip_Return_Value;
	Parms.CallFunc_Create_Compare_Item_Tooltip_Return_Value = CallFunc_Create_Compare_Item_Tooltip_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            Current_UI_State                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Cursor_Mode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayMode        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayMode        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayMode        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Mode(enum class EFortUIState Current_UI_State, bool Cursor_Mode, enum class EItemDisplayMode Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EItemDisplayMode Temp_byte_Variable2, bool Temp_bool_Variable, enum class EItemDisplayMode K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Display Mode");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Display_Mode_Params Parms;
	Parms.Current_UI_State = Current_UI_State;
	Parms.Cursor_Mode = Cursor_Mode;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        Temp_text_Variable                                               ()
// class FText                        K2Node_Select_Default                                            ()

void ULegacyItem_DO_NOT_USE_C::Set_Ammo_Count(int32 Count, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Ammo Count");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Ammo_Count_Params Parms;
	Parms.Count = Count;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Local_IconBrush                                                  (Edit)
// struct FSlateBrush                 Local_FillBrush                                                  (Edit)
// struct FSlateBrush                 Local_FrameBrush                                                 (Edit)
// enum class EFortBrushSize          Local_BrushSize                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    HorizontalAlign                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      VerticalAlign                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UnitPadding                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable23                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable24                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable25                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable26                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponRangedItemDefinition*K2Node_DynamicCast_AsFort_Weapon_Ranged_Item_Definition          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   ()
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  ()
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// enum class EVerticalAlignment      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable21                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable27                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable22                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// bool                               Temp_bool_Variable23                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable24                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2           (ConstParm)
// bool                               Temp_bool_Variable25                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable26                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable27                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue3           (ConstParm)
// bool                               Temp_bool_Variable28                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       Temp_byte_Variable28                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select10_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable29                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue              (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select11_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable30                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin3                                        (NoDestructor)
// bool                               Temp_bool_Variable29                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue4           (ConstParm)
// enum class ESlateVisibility        Temp_byte_Variable31                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable32                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable30                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select13_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText2                  ()
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush2                 ()
// bool                               CallFunc_GetSecondaryCategory_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Update_Subtype_Icons___Ammo(const struct FSlateBrush& Local_IconBrush, const struct FSlateBrush& Local_FillBrush, const struct FSlateBrush& Local_FrameBrush, enum class EFortBrushSize Local_BrushSize, enum class EHorizontalAlignment HorizontalAlign, enum class EVerticalAlignment VerticalAlign, float UnitPadding, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, enum class EFortBrushSize Temp_byte_Variable, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, bool Temp_bool_Variable13, float Temp_float_Variable, float Temp_float_Variable2, enum class EFortBrushSize Temp_byte_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, float Temp_float_Variable7, float Temp_float_Variable8, bool Temp_bool_Variable14, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortBrushSize Temp_byte_Variable5, enum class EHorizontalAlignment Temp_byte_Variable6, enum class ESlateVisibility K2Node_Select_Default, enum class EHorizontalAlignment Temp_byte_Variable7, enum class EHorizontalAlignment Temp_byte_Variable8, enum class EHorizontalAlignment Temp_byte_Variable9, enum class EHorizontalAlignment Temp_byte_Variable10, enum class EHorizontalAlignment Temp_byte_Variable11, enum class EFortBrushSize Temp_byte_Variable12, enum class EVerticalAlignment Temp_byte_Variable13, enum class EVerticalAlignment Temp_byte_Variable14, enum class EVerticalAlignment Temp_byte_Variable15, enum class EVerticalAlignment Temp_byte_Variable16, enum class EVerticalAlignment Temp_byte_Variable17, enum class EVerticalAlignment Temp_byte_Variable18, enum class EFortBrushSize Temp_byte_Variable19, enum class EFortBrushSize Temp_byte_Variable20, enum class EFortBrushSize Temp_byte_Variable21, enum class EFortBrushSize Temp_byte_Variable22, enum class EFortBrushSize Temp_byte_Variable23, enum class EFortBrushSize Temp_byte_Variable24, enum class EFortBrushSize Temp_byte_Variable25, enum class EFortBrushSize Temp_byte_Variable26, int32 CallFunc_GetRemainingAmmo_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortWeaponRangedItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Ranged_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortWorldItemDefinition* CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float Temp_float_Variable9, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue2, bool Temp_bool_Variable15, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable16, bool Temp_bool_Variable17, bool Temp_bool_Variable18, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, bool Temp_bool_Variable19, bool Temp_bool_Variable20, bool K2Node_Select2_Default, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, enum class EVerticalAlignment K2Node_Select3_Default, enum class EHorizontalAlignment K2Node_Select4_Default, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, enum class EFortBrushSize K2Node_Select5_Default, float K2Node_Select6_Default, bool Temp_bool_Variable21, bool K2Node_Select7_Default, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select8_Default, enum class EFortBrushSize Temp_byte_Variable27, bool Temp_bool_Variable22, bool K2Node_Select9_Default, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, bool Temp_bool_Variable23, bool Temp_bool_Variable24, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2, bool Temp_bool_Variable25, bool Temp_bool_Variable26, bool Temp_bool_Variable27, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue3, bool Temp_bool_Variable28, enum class EItemDisplayStyle Temp_byte_Variable28, bool K2Node_Select10_Default, const struct FMargin& K2Node_MakeStruct_Margin2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable29, bool CallFunc_BooleanAND_ReturnValue4, const struct FSlateFontInfo& CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, float K2Node_Select11_Default, bool CallFunc_BooleanAND_ReturnValue5, enum class ESlateVisibility Temp_byte_Variable30, float CallFunc_Multiply_FloatFloat_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin3, bool Temp_bool_Variable29, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class ESlateVisibility K2Node_Select12_Default, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable31, enum class ESlateVisibility Temp_byte_Variable32, bool Temp_bool_Variable30, enum class ESlateVisibility K2Node_Select13_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class FText CallFunc_GetSecondaryCategory_ItemCategoryText2, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush2, bool CallFunc_GetSecondaryCategory_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue7)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Subtype Icons & Ammo");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Subtype_Icons___Ammo_Params Parms;
	Parms.Local_IconBrush = Local_IconBrush;
	Parms.Local_FillBrush = Local_FillBrush;
	Parms.Local_FrameBrush = Local_FrameBrush;
	Parms.Local_BrushSize = Local_BrushSize;
	Parms.HorizontalAlign = HorizontalAlign;
	Parms.VerticalAlign = VerticalAlign;
	Parms.UnitPadding = UnitPadding;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.Temp_float_Variable8 = Temp_float_Variable8;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_byte_Variable16 = Temp_byte_Variable16;
	Parms.Temp_byte_Variable17 = Temp_byte_Variable17;
	Parms.Temp_byte_Variable18 = Temp_byte_Variable18;
	Parms.Temp_byte_Variable19 = Temp_byte_Variable19;
	Parms.Temp_byte_Variable20 = Temp_byte_Variable20;
	Parms.Temp_byte_Variable21 = Temp_byte_Variable21;
	Parms.Temp_byte_Variable22 = Temp_byte_Variable22;
	Parms.Temp_byte_Variable23 = Temp_byte_Variable23;
	Parms.Temp_byte_Variable24 = Temp_byte_Variable24;
	Parms.Temp_byte_Variable25 = Temp_byte_Variable25;
	Parms.Temp_byte_Variable26 = Temp_byte_Variable26;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged_Item_Definition = K2Node_DynamicCast_AsFort_Weapon_Ranged_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue = CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_float_Variable9 = Temp_float_Variable9;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue2 = CallFunc_GetRemainingAmmo_ReturnValue2;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable16 = Temp_bool_Variable16;
	Parms.Temp_bool_Variable17 = Temp_bool_Variable17;
	Parms.Temp_bool_Variable18 = Temp_bool_Variable18;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.Temp_bool_Variable19 = Temp_bool_Variable19;
	Parms.Temp_bool_Variable20 = Temp_bool_Variable20;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_bool_Variable21 = Temp_bool_Variable21;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_byte_Variable27 = Temp_byte_Variable27;
	Parms.Temp_bool_Variable22 = Temp_bool_Variable22;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.Temp_bool_Variable23 = Temp_bool_Variable23;
	Parms.Temp_bool_Variable24 = Temp_bool_Variable24;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2 = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2;
	Parms.Temp_bool_Variable25 = Temp_bool_Variable25;
	Parms.Temp_bool_Variable26 = Temp_bool_Variable26;
	Parms.Temp_bool_Variable27 = Temp_bool_Variable27;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue3 = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue3;
	Parms.Temp_bool_Variable28 = Temp_bool_Variable28;
	Parms.Temp_byte_Variable28 = Temp_byte_Variable28;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable29 = Temp_byte_Variable29;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue = CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.Temp_byte_Variable30 = Temp_byte_Variable30;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue2 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue2;
	Parms.K2Node_MakeStruct_Margin3 = K2Node_MakeStruct_Margin3;
	Parms.Temp_bool_Variable29 = Temp_bool_Variable29;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue4 = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue4;
	Parms.Temp_byte_Variable31 = Temp_byte_Variable31;
	Parms.Temp_byte_Variable32 = Temp_byte_Variable32;
	Parms.Temp_bool_Variable30 = Temp_bool_Variable30;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText2 = CallFunc_GetSecondaryCategory_ItemCategoryText2;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush2 = CallFunc_GetSecondaryCategory_ItemCategoryBrush2;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue2 = CallFunc_GetSecondaryCategory_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemType           Item_Type                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       Style                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable23                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable24                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable25                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable26                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable27                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable28                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable29                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable30                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable31                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable32                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable33                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable34                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable35                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable36                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable37                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable38                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable39                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable40                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable41                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable42                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable43                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable44                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable45                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable46                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable47                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable48                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable49                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable50                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable51                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable52                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable53                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable54                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable55                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable56                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable57                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable58                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable59                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable60                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable61                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable62                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable63                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable64                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable65                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable66                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable67                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable68                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Get_Display_Style(enum class EFortItemType Item_Type, enum class EItemDisplayStyle* Style, enum class EFortItemType Temp_byte_Variable, enum class EItemDisplayStyle Temp_byte_Variable2, enum class EItemDisplayStyle Temp_byte_Variable3, enum class EItemDisplayStyle Temp_byte_Variable4, enum class EItemDisplayStyle Temp_byte_Variable5, enum class EItemDisplayStyle Temp_byte_Variable6, enum class EItemDisplayStyle Temp_byte_Variable7, enum class EItemDisplayStyle Temp_byte_Variable8, enum class EItemDisplayStyle Temp_byte_Variable9, enum class EItemDisplayStyle Temp_byte_Variable10, enum class EItemDisplayStyle Temp_byte_Variable11, enum class EItemDisplayStyle Temp_byte_Variable12, enum class EItemDisplayStyle Temp_byte_Variable13, enum class EItemDisplayStyle Temp_byte_Variable14, enum class EItemDisplayStyle Temp_byte_Variable15, enum class EItemDisplayStyle Temp_byte_Variable16, enum class EItemDisplayStyle Temp_byte_Variable17, enum class EItemDisplayStyle Temp_byte_Variable18, enum class EItemDisplayStyle Temp_byte_Variable19, enum class EItemDisplayStyle Temp_byte_Variable20, enum class EItemDisplayStyle Temp_byte_Variable21, enum class EItemDisplayStyle Temp_byte_Variable22, enum class EItemDisplayStyle Temp_byte_Variable23, enum class EItemDisplayStyle Temp_byte_Variable24, enum class EItemDisplayStyle Temp_byte_Variable25, enum class EItemDisplayStyle Temp_byte_Variable26, enum class EItemDisplayStyle Temp_byte_Variable27, enum class EItemDisplayStyle Temp_byte_Variable28, enum class EItemDisplayStyle Temp_byte_Variable29, enum class EItemDisplayStyle Temp_byte_Variable30, enum class EItemDisplayStyle Temp_byte_Variable31, enum class EItemDisplayStyle Temp_byte_Variable32, enum class EItemDisplayStyle Temp_byte_Variable33, enum class EItemDisplayStyle Temp_byte_Variable34, enum class EItemDisplayStyle Temp_byte_Variable35, enum class EItemDisplayStyle Temp_byte_Variable36, enum class EItemDisplayStyle Temp_byte_Variable37, enum class EItemDisplayStyle Temp_byte_Variable38, enum class EItemDisplayStyle Temp_byte_Variable39, enum class EItemDisplayStyle Temp_byte_Variable40, enum class EItemDisplayStyle Temp_byte_Variable41, enum class EItemDisplayStyle Temp_byte_Variable42, enum class EItemDisplayStyle Temp_byte_Variable43, enum class EItemDisplayStyle Temp_byte_Variable44, enum class EItemDisplayStyle Temp_byte_Variable45, enum class EItemDisplayStyle Temp_byte_Variable46, enum class EItemDisplayStyle Temp_byte_Variable47, enum class EItemDisplayStyle Temp_byte_Variable48, enum class EItemDisplayStyle Temp_byte_Variable49, enum class EItemDisplayStyle Temp_byte_Variable50, enum class EItemDisplayStyle Temp_byte_Variable51, enum class EItemDisplayStyle Temp_byte_Variable52, enum class EItemDisplayStyle Temp_byte_Variable53, enum class EItemDisplayStyle Temp_byte_Variable54, enum class EItemDisplayStyle Temp_byte_Variable55, enum class EItemDisplayStyle Temp_byte_Variable56, enum class EItemDisplayStyle Temp_byte_Variable57, enum class EItemDisplayStyle Temp_byte_Variable58, enum class EItemDisplayStyle Temp_byte_Variable59, enum class EItemDisplayStyle Temp_byte_Variable60, enum class EItemDisplayStyle Temp_byte_Variable61, enum class EItemDisplayStyle Temp_byte_Variable62, enum class EItemDisplayStyle Temp_byte_Variable63, enum class EItemDisplayStyle Temp_byte_Variable64, enum class EItemDisplayStyle Temp_byte_Variable65, enum class EItemDisplayStyle Temp_byte_Variable66, enum class EItemDisplayStyle Temp_byte_Variable67, enum class EItemDisplayStyle Temp_byte_Variable68, enum class EItemDisplayStyle K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Display Style");

	Params::ULegacyItem_DO_NOT_USE_C_Get_Display_Style_Params Parms;
	Parms.Item_Type = Item_Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_byte_Variable16 = Temp_byte_Variable16;
	Parms.Temp_byte_Variable17 = Temp_byte_Variable17;
	Parms.Temp_byte_Variable18 = Temp_byte_Variable18;
	Parms.Temp_byte_Variable19 = Temp_byte_Variable19;
	Parms.Temp_byte_Variable20 = Temp_byte_Variable20;
	Parms.Temp_byte_Variable21 = Temp_byte_Variable21;
	Parms.Temp_byte_Variable22 = Temp_byte_Variable22;
	Parms.Temp_byte_Variable23 = Temp_byte_Variable23;
	Parms.Temp_byte_Variable24 = Temp_byte_Variable24;
	Parms.Temp_byte_Variable25 = Temp_byte_Variable25;
	Parms.Temp_byte_Variable26 = Temp_byte_Variable26;
	Parms.Temp_byte_Variable27 = Temp_byte_Variable27;
	Parms.Temp_byte_Variable28 = Temp_byte_Variable28;
	Parms.Temp_byte_Variable29 = Temp_byte_Variable29;
	Parms.Temp_byte_Variable30 = Temp_byte_Variable30;
	Parms.Temp_byte_Variable31 = Temp_byte_Variable31;
	Parms.Temp_byte_Variable32 = Temp_byte_Variable32;
	Parms.Temp_byte_Variable33 = Temp_byte_Variable33;
	Parms.Temp_byte_Variable34 = Temp_byte_Variable34;
	Parms.Temp_byte_Variable35 = Temp_byte_Variable35;
	Parms.Temp_byte_Variable36 = Temp_byte_Variable36;
	Parms.Temp_byte_Variable37 = Temp_byte_Variable37;
	Parms.Temp_byte_Variable38 = Temp_byte_Variable38;
	Parms.Temp_byte_Variable39 = Temp_byte_Variable39;
	Parms.Temp_byte_Variable40 = Temp_byte_Variable40;
	Parms.Temp_byte_Variable41 = Temp_byte_Variable41;
	Parms.Temp_byte_Variable42 = Temp_byte_Variable42;
	Parms.Temp_byte_Variable43 = Temp_byte_Variable43;
	Parms.Temp_byte_Variable44 = Temp_byte_Variable44;
	Parms.Temp_byte_Variable45 = Temp_byte_Variable45;
	Parms.Temp_byte_Variable46 = Temp_byte_Variable46;
	Parms.Temp_byte_Variable47 = Temp_byte_Variable47;
	Parms.Temp_byte_Variable48 = Temp_byte_Variable48;
	Parms.Temp_byte_Variable49 = Temp_byte_Variable49;
	Parms.Temp_byte_Variable50 = Temp_byte_Variable50;
	Parms.Temp_byte_Variable51 = Temp_byte_Variable51;
	Parms.Temp_byte_Variable52 = Temp_byte_Variable52;
	Parms.Temp_byte_Variable53 = Temp_byte_Variable53;
	Parms.Temp_byte_Variable54 = Temp_byte_Variable54;
	Parms.Temp_byte_Variable55 = Temp_byte_Variable55;
	Parms.Temp_byte_Variable56 = Temp_byte_Variable56;
	Parms.Temp_byte_Variable57 = Temp_byte_Variable57;
	Parms.Temp_byte_Variable58 = Temp_byte_Variable58;
	Parms.Temp_byte_Variable59 = Temp_byte_Variable59;
	Parms.Temp_byte_Variable60 = Temp_byte_Variable60;
	Parms.Temp_byte_Variable61 = Temp_byte_Variable61;
	Parms.Temp_byte_Variable62 = Temp_byte_Variable62;
	Parms.Temp_byte_Variable63 = Temp_byte_Variable63;
	Parms.Temp_byte_Variable64 = Temp_byte_Variable64;
	Parms.Temp_byte_Variable65 = Temp_byte_Variable65;
	Parms.Temp_byte_Variable66 = Temp_byte_Variable66;
	Parms.Temp_byte_Variable67 = Temp_byte_Variable67;
	Parms.Temp_byte_Variable68 = Temp_byte_Variable68;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Style != nullptr)
		*Style = Parms.Style;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetMaxTier_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Tier_Badge(enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, enum class EFortItemTier CallFunc_GetMaxTier_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Tier Badge");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Tier_Badge_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue = CallFunc_GetTier_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxTier_ReturnValue = CallFunc_GetMaxTier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Icon_Size                                                        (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Update_Primary_Icon(class UMaterialInstanceDynamic* Mid, const struct FVector2D& Icon_Size, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, float CallFunc_Conv_BoolToFloat_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Primary Icon");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Primary_Icon_Params Parms;
	Parms.Mid = Mid;
	Parms.Icon_Size = Icon_Size;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue2 = CallFunc_NotEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_Conv_BoolToFloat_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemDisplayStyle       Display_Style                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTextureSet             Texture_Set                                                      (Parm, OutParm, HasGetValueTypeHash)
// struct FItemTextureSet             Item_Texture_Set                                                 (Edit, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTextureSet             CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Get_Item_Texture_Set(enum class EItemDisplayStyle Display_Style, struct FItemTextureSet* Texture_Set, const struct FItemTextureSet& Item_Texture_Set, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemTextureSet& CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Item Texture Set");

	Params::ULegacyItem_DO_NOT_USE_C_Get_Item_Texture_Set_Params Parms;
	Parms.Display_Style = Display_Style;
	Parms.Item_Texture_Set = Item_Texture_Set;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture_Set != nullptr)
		*Texture_Set = Parms.Texture_Set;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_Get_Item_Size_Item_Size                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Size_Box(const struct FVector2D& CallFunc_Get_Item_Size_Item_Size, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Size Box");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Size_Box_Params Parms;
	Parms.CallFunc_Get_Item_Size_Item_Size = CallFunc_Get_Item_Size_Item_Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Drag_Icon_Texture                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemDragIcon_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UTexture2D* Drag_Icon_Texture, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UItemDragIcon_C* CallFunc_Create_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnDragDetected");

	Params::ULegacyItem_DO_NOT_USE_C_OnDragDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Drag_Icon_Texture = Drag_Icon_Texture;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 Result                                                           (Edit)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         ()
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& Result, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseButtonDown");

	Params::ULegacyItem_DO_NOT_USE_C_OnMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.Result = Result;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetCooldownMaterial_CooldownMat                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_IsActivatable_FailureReason                             ()
// bool                               CallFunc_IsActivatable_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTextureSet             CallFunc_Get_Item_Texture_Set_Texture_Set                        (HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_All(class UMaterialInstanceDynamic* CallFunc_GetCooldownMaterial_CooldownMat, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_IsActivatable_FailureReason, bool CallFunc_IsActivatable_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemTextureSet& CallFunc_Get_Item_Texture_Set_Texture_Set)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update All");

	Params::ULegacyItem_DO_NOT_USE_C_Update_All_Params Parms;
	Parms.CallFunc_GetCooldownMaterial_CooldownMat = CallFunc_GetCooldownMaterial_CooldownMat;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActivatable_FailureReason = CallFunc_IsActivatable_FailureReason;
	Parms.CallFunc_IsActivatable_ReturnValue = CallFunc_IsActivatable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Item_Texture_Set_Texture_Set = CallFunc_Get_Item_Texture_Set_Texture_Set;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Num_in_Stack_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Update_Stack_Counter(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_Get_Num_in_Stack_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Stack Counter");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Stack_Counter_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Get_Num_in_Stack_ReturnValue = CallFunc_Get_Num_in_Stack_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item_Data                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       CallFunc_Get_Display_Style_Style                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Set_Item_Data(class UFortItem* Item_Data, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EItemDisplayStyle CallFunc_Get_Display_Style_Style, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Item Data");

	Params::ULegacyItem_DO_NOT_USE_C_Set_Item_Data_Params Parms;
	Parms.Item_Data = Item_Data;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Get_Display_Style_Style = CallFunc_Get_Display_Style_Style;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Icon_Material                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Base_Material                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// class UTexture2D*                  CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Material(class UMaterialInstanceDynamic* Icon_Material, class UMaterialInstanceDynamic* Base_Material, enum class ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, bool CallFunc_NotEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D, bool CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success, class UTexture2D* CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D2, bool CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Base Material");

	Params::ULegacyItem_DO_NOT_USE_C_Update_Base_Material_Params Parms;
	Parms.Icon_Material = Icon_Material;
	Parms.Base_Material = Base_Material;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue2 = CallFunc_NotEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue3 = CallFunc_NotEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_Conv_BoolToFloat_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D = CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D;
	Parms.CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success = CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success;
	Parms.CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D2 = CallFunc_Get_Texture2D_From_Multi_Size_Brush_Texture2D2;
	Parms.CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success2 = CallFunc_Get_Texture2D_From_Multi_Size_Brush_Success2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULegacyItem_DO_NOT_USE_C::BPOnItemChanged()
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnItemChanged");

	Params::ULegacyItem_DO_NOT_USE_C_BPOnItemChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyItem_DO_NOT_USE_C::Construct()
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Construct");

	Params::ULegacyItem_DO_NOT_USE_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "PreConstruct");

	Params::ULegacyItem_DO_NOT_USE_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewItem                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::BPOnItemSet(class UFortItem* NewItem)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnItemSet");

	Params::ULegacyItem_DO_NOT_USE_C_BPOnItemSet_Params Parms;
	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCursorModeEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::OnCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnCursorModeChanged");

	Params::ULegacyItem_DO_NOT_USE_C_OnCursorModeChanged_Params Parms;
	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyItem_DO_NOT_USE_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseEnter");

	Params::ULegacyItem_DO_NOT_USE_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewCooldownSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::BPOnCooldownSecondsChanged(int32 NewCooldownSeconds)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnCooldownSecondsChanged");

	Params::ULegacyItem_DO_NOT_USE_C_BPOnCooldownSecondsChanged_Params Parms;
	Parms.NewCooldownSeconds = NewCooldownSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewActivatable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::BPOnActivatableChanged(bool bNewActivatable)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnActivatableChanged");

	Params::ULegacyItem_DO_NOT_USE_C_BPOnActivatableChanged_Params Parms;
	Parms.bNewActivatable = bNewActivatable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget*        CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCursorMode_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget*        CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_NewItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bCursorModeEnabled                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ActionName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_CursorModeContentWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// int32                              K2Node_Event_NewCooldownSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewActivatable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromSeconds_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Num_in_Stack_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Num_in_Stack_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Item_Tooltip_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Item_Tooltip_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::ExecuteUbergraph_LegacyItem_DO_NOT_USE(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsInCursorMode_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, class UFortUIManagerWidget* CallFunc_GetUIManagerWidget_ReturnValue2, bool CallFunc_IsValid_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue2, bool K2Node_Event_IsDesignTime, class UFortItem* K2Node_Event_NewItem, bool K2Node_CustomEvent_bCursorModeEnabled, class FName K2Node_CustomEvent_ActionName, class UUserWidget* K2Node_CustomEvent_CursorModeContentWidget, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_Event_NewCooldownSeconds, bool K2Node_Event_bNewActivatable, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_Get_Num_in_Stack_ReturnValue, int32 CallFunc_Get_Num_in_Stack_ReturnValue2, class UWidget* CallFunc_Get_Item_Tooltip_ReturnValue, class UWidget* CallFunc_Get_Item_Tooltip_ReturnValue2)
{
	static auto Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "ExecuteUbergraph_LegacyItem_DO_NOT_USE");

	Params::ULegacyItem_DO_NOT_USE_C_ExecuteUbergraph_LegacyItem_DO_NOT_USE_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsInCursorMode_ReturnValue = CallFunc_IsInCursorMode_ReturnValue;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue = CallFunc__BPGetCurrentUIState_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue2 = CallFunc__BPGetCurrentUIState_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewItem = K2Node_Event_NewItem;
	Parms.K2Node_CustomEvent_bCursorModeEnabled = K2Node_CustomEvent_bCursorModeEnabled;
	Parms.K2Node_CustomEvent_ActionName = K2Node_CustomEvent_ActionName;
	Parms.K2Node_CustomEvent_CursorModeContentWidget = K2Node_CustomEvent_CursorModeContentWidget;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_NewCooldownSeconds = K2Node_Event_NewCooldownSeconds;
	Parms.K2Node_Event_bNewActivatable = K2Node_Event_bNewActivatable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Get_Num_in_Stack_ReturnValue = CallFunc_Get_Num_in_Stack_ReturnValue;
	Parms.CallFunc_Get_Num_in_Stack_ReturnValue2 = CallFunc_Get_Num_in_Stack_ReturnValue2;
	Parms.CallFunc_Get_Item_Tooltip_ReturnValue = CallFunc_Get_Item_Tooltip_ReturnValue;
	Parms.CallFunc_Get_Item_Tooltip_ReturnValue2 = CallFunc_Get_Item_Tooltip_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

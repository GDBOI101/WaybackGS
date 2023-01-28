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


// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacyButtonIconText_C::Outro()
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Outro");

	Params::ULegacyButtonIconText_C_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacyButtonIconText_C::Intro()
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Intro");

	Params::ULegacyButtonIconText_C_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_Button                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            NextAnimation                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            PrevAnimation                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyButtonIconText_C::Toggle(bool Show_Button, class UWidgetAnimation* NextAnimation, class UWidgetAnimation* PrevAnimation, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Toggle");

	Params::ULegacyButtonIconText_C_Toggle_Params Parms;
	Parms.Show_Button = Show_Button;
	Parms.NextAnimation = NextAnimation;
	Parms.PrevAnimation = PrevAnimation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETextJustify            Align                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyButtonIconText_C::Set_Alignment(enum class ETextJustify Align, enum class ETextJustify Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable2, enum class EHorizontalAlignment Temp_byte_Variable3, enum class EHorizontalAlignment Temp_byte_Variable4, enum class EHorizontalAlignment K2Node_Select_Default, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Set Alignment");

	Params::ULegacyButtonIconText_C_Set_Alignment_Params Parms;
	Parms.Align = Align;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortButtonStyle*            CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyButtonIconText_C::Update_Size_Box(class UFortButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Update Size Box");

	Params::ULegacyButtonIconText_C_Update_Size_Box_Params Parms;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFortStateStyle             CallFunc_GetCurrentStateStyle_ReturnValue                        (ConstParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

struct FSlateColor ULegacyButtonIconText_C::Get_Primary_Color(const struct FFortStateStyle& CallFunc_GetCurrentStateStyle_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Get Primary Color");

	Params::ULegacyButtonIconText_C_Get_Primary_Color_Params Parms;
	Parms.CallFunc_GetCurrentStateStyle_ReturnValue = CallFunc_GetCurrentStateStyle_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortStateStyle             CallFunc_GetCurrentStateStyle_ReturnValue                        (ConstParm)

struct FLinearColor ULegacyButtonIconText_C::Get_Secondary_Color(const struct FFortStateStyle& CallFunc_GetCurrentStateStyle_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Get Secondary Color");

	Params::ULegacyButtonIconText_C_Get_Secondary_Color_Params Parms;
	Parms.CallFunc_GetCurrentStateStyle_ReturnValue = CallFunc_GetCurrentStateStyle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     Margin                                                           (Edit, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin3                                        (NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortButtonStyle*            CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin4                                        (NoDestructor)
// struct FMargin                     CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue          (ConstParm, NoDestructor)

void ULegacyButtonIconText_C::Update_Padding(const struct FMargin& Margin, bool Temp_bool_Variable, float Temp_float_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot2, bool K2Node_DynamicCast_bSuccess3, const struct FMargin& K2Node_MakeStruct_Margin3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortButtonStyle* CallFunc_GetStyle_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin4, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Update Padding");

	Params::ULegacyButtonIconText_C_Update_Padding_Params Parms;
	Parms.Margin = Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot2 = K2Node_DynamicCast_AsHorizontal_Box_Slot2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_MakeStruct_Margin3 = K2Node_MakeStruct_Margin3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin4 = K2Node_MakeStruct_Margin4;
	Parms.CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue = CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (Parm)
// bool                               RefreshPadding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyButtonIconText_C::Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Set Icon");

	Params::ULegacyButtonIconText_C_Set_Icon_Params Parms;
	Parms.InBrush = InBrush;
	Parms.RefreshPadding = RefreshPadding;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (Parm)
// bool                               RefreshPadding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              CallFunc_GetCurrentFont_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyButtonIconText_C::Set_Text(class FText InText, bool RefreshPadding, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FSlateFontInfo& CallFunc_GetCurrentFont_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "Set Text");

	Params::ULegacyButtonIconText_C_Set_Text_Params Parms;
	Parms.InText = InText;
	Parms.RefreshPadding = RefreshPadding;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentFont_ReturnValue = CallFunc_GetCurrentFont_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyButtonIconText_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "PreConstruct");

	Params::ULegacyButtonIconText_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyButtonIconText_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "OnMouseEnter");

	Params::ULegacyButtonIconText_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyButtonIconText_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "OnMouseLeave");

	Params::ULegacyButtonIconText_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void ULegacyButtonIconText_C::ExecuteUbergraph_LegacyButtonIconText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "ExecuteUbergraph_LegacyButtonIconText");

	Params::ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Hovered                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyButtonIconText_C::On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto Func = Class->GetFunction("LegacyButtonIconText_C", "On Mouse Hovered Changed__DelegateSignature");

	Params::ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params Parms;
	Parms.Is_Hovered = Is_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

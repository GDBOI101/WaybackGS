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


// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTooltipDescription_ReturnValue                       (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Multi_Line_Tooltip_Output                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPerkWidget_C::CreateToolTipWidget(TArray<class FText>& CallFunc_GetTooltipDescription_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "CreateToolTipWidget");

	Params::UPerkWidget_C_CreateToolTipWidget_Params Parms;
	Parms.CallFunc_GetTooltipDescription_ReturnValue = CallFunc_GetTooltipDescription_ReturnValue;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Multi_Line_Tooltip_Output = CallFunc_Create_Basic_Multi_Line_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PerkWidget.PerkWidget_C.InitializeTextInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   CallFunc_GetSupportBonusType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()

void UPerkWidget_C::InitializeTextInfo(enum class EFortSupportBonusType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetTooltipTitle_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "InitializeTextInfo");

	Params::UPerkWidget_C_InitializeTextInfo_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetSupportBonusType_ReturnValue = CallFunc_GetSupportBonusType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetHighlightColor_Color                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHighlightColor_Color2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPerkWidget_C::HighlightBadge(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FLinearColor& CallFunc_GetHighlightColor_Color2, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "HighlightBadge");

	Params::UPerkWidget_C_HighlightBadge_Params Parms;
	Parms.CallFunc_GetHighlightColor_Color = CallFunc_GetHighlightColor_Color;
	Parms.CallFunc_GetHighlightColor_Color2 = CallFunc_GetHighlightColor_Color2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.GetPerkStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat                TooltipStat                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemTier           CallFunc_GetPerkTier_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// bool                               CallFunc_IsTierPerk_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue2                            ()
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetTierText_ReturnValue                                 ()
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// class FText                        K2Node_Select_Default                                            ()
// struct FTooltipStat                K2Node_MakeStruct_TooltipStat                                    (HasGetValueTypeHash)

void UPerkWidget_C::GetPerkStat(struct FTooltipStat* TooltipStat, bool Temp_bool_Variable, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, bool CallFunc_IsTierPerk_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetTooltipTitle_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetTierText_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, class FText K2Node_Select_Default, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "GetPerkStat");

	Params::UPerkWidget_C_GetPerkStat_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPerkTier_ReturnValue = CallFunc_GetPerkTier_ReturnValue;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.CallFunc_IsTierPerk_ReturnValue = CallFunc_IsTierPerk_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetTooltipTitle_ReturnValue2 = CallFunc_GetTooltipTitle_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetTierText_ReturnValue = CallFunc_GetTierText_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_TooltipStat = K2Node_MakeStruct_TooltipStat;

	UObject::ProcessEvent(Func, &Parms);

	if (TooltipStat != nullptr)
		*TooltipStat = Parms.TooltipStat;

}


// Function PerkWidget.PerkWidget_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkWidget_C::ShowTierImage()
{
	static auto Func = Class->GetFunction("PerkWidget_C", "ShowTierImage");

	Params::UPerkWidget_C_ShowTierImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportBonusType   SupportPerkType                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetTierAbilityBrush_SlateBrush                          ()
// bool                               CallFunc_IsTierPerk_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UPerkWidget_C::SetupBadge(enum class EFortSupportBonusType SupportPerkType, const struct FSlateBrush& CallFunc_GetTierAbilityBrush_SlateBrush, bool CallFunc_IsTierPerk_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "SetupBadge");

	Params::UPerkWidget_C_SetupBadge_Params Parms;
	Parms.SupportPerkType = SupportPerkType;
	Parms.CallFunc_GetTierAbilityBrush_SlateBrush = CallFunc_GetTierAbilityBrush_SlateBrush;
	Parms.CallFunc_IsTierPerk_ReturnValue = CallFunc_IsTierPerk_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportBonusType   SupportPerkType                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSupportBonusType   CallFunc_GetSupportBonusType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::InitializeHeroBonusIcon(enum class EFortSupportBonusType SupportPerkType, enum class EFortSupportBonusType Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "InitializeHeroBonusIcon");

	Params::UPerkWidget_C_InitializeHeroBonusIcon_Params Parms;
	Parms.SupportPerkType = SupportPerkType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_GetSupportBonusType_ReturnValue = CallFunc_GetSupportBonusType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTooltipStat                CallFunc_GetPerkStat_TooltipStat                                 (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipStatWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidget_C::InitializeTextOnlyPerk(const struct FTooltipStat& CallFunc_GetPerkStat_TooltipStat, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "InitializeTextOnlyPerk");

	Params::UPerkWidget_C_InitializeTextOnlyPerk_Params Parms;
	Parms.CallFunc_GetPerkStat_TooltipStat = CallFunc_GetPerkStat_TooltipStat;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.ShouldFadePerk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::ShouldFadePerk(bool* Result, bool CallFunc_IsPerkHighlighted_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "ShouldFadePerk");

	Params::UPerkWidget_C_ShouldFadePerk_Params Parms;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PerkWidget.PerkWidget_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Buff_Color_Color                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidget_C::GetHighlightColor(struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, bool CallFunc_IsPerkHighlighted_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "GetHighlightColor");

	Params::UPerkWidget_C_GetHighlightColor_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Get_Buff_Color_Color = CallFunc_Get_Buff_Color_Color;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 SlateBrush                                                       (Parm, OutParm)
// enum class EFortItemTier           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetPerkTier_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UPerkWidget_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush, enum class EFortItemTier Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, class UObject* Temp_object_Variable11, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "GetTierAbilityBrush");

	Params::UPerkWidget_C_GetTierAbilityBrush_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.CallFunc_GetPerkTier_ReturnValue = CallFunc_GetPerkTier_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateBrush != nullptr)
		*SlateBrush = Parms.SlateBrush;

}


// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetHighlightColor_Color                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetIcon_Brush                                           ()
// bool                               CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select2_Default                                           ()
// struct FSlateBrush                 CallFunc_ResizeBrush_NewParam                                    ()

void UPerkWidget_C::InitializeAbilityPerk(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsPerkHighlighted_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select2_Default, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "InitializeAbilityPerk");

	Params::UPerkWidget_C_InitializeAbilityPerk_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetHighlightColor_Color = CallFunc_GetHighlightColor_Color;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetIcon_Brush = CallFunc_GetIcon_Brush;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_ResizeBrush_NewParam = CallFunc_ResizeBrush_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetHighlightColor_Color                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetIcon_Brush                                           ()
// bool                               CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 CallFunc_ResizeBrush_NewParam                                    ()

void UPerkWidget_C::InitializeBasicPerk(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "InitializeBasicPerk");

	Params::UPerkWidget_C_InitializeBasicPerk_Params Parms;
	Parms.CallFunc_GetHighlightColor_Color = CallFunc_GetHighlightColor_Color;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIcon_Brush = CallFunc_GetIcon_Brush;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ResizeBrush_NewParam = CallFunc_ResizeBrush_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "PreConstruct");

	Params::UPerkWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPerkWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PerkWidget_C", "Construct");

	Params::UPerkWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_ShouldFadePerk_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::ExecuteUbergraph_PerkWidget(int32 EntryPoint, bool CallFunc_HasAbility_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_ShouldFadePerk_Result, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("PerkWidget_C", "ExecuteUbergraph_PerkWidget");

	Params::UPerkWidget_C_ExecuteUbergraph_PerkWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_ShouldFadePerk_Result = CallFunc_ShouldFadePerk_Result;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

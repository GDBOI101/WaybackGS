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


// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// class FText                        CallFunc_GetCombinedTooltipDescription_ReturnValue               ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHeroSquadBonus_C::Get_ToolTipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, class FText CallFunc_GetCombinedTooltipDescription_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "Get_ToolTipWidget");

	Params::UHeroSquadBonus_C_Get_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.CallFunc_GetCombinedTooltipDescription_ReturnValue = CallFunc_GetCombinedTooltipDescription_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GlowBackground                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonus_C::SetBackgroundGlow(bool GlowBackground, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "SetBackgroundGlow");

	Params::UHeroSquadBonus_C_SetBackgroundGlow_Params Parms;
	Parms.GlowBackground = GlowBackground;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 Tint                                                             (Edit)
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_Select3_Default                                           ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UHeroSquadBonus_C::UpdateSquadBonusIconState(const struct FSlateColor& Tint, enum class EFortSupportBonusType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortSupportBonusType Temp_byte_Variable5, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsPerkEmpty_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select3_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "UpdateSquadBonusIconState");

	Params::UHeroSquadBonus_C_UpdateSquadBonusIconState_Params Parms;
	Parms.Tint = Tint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetIcon_Brush                                           ()
// bool                               CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_SetFieldsInStruct_StructOut                               ()
// class FText                        CallFunc_GetTooltipTitle_ReturnValue2                            ()

void UHeroSquadBonus_C::UpdateBonusPerk(class FText CallFunc_GetTooltipTitle_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsPerkEmpty_ReturnValue, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut, class FText CallFunc_GetTooltipTitle_ReturnValue2)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "UpdateBonusPerk");

	Params::UHeroSquadBonus_C_UpdateBonusPerk_Params Parms;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.CallFunc_GetIcon_Brush = CallFunc_GetIcon_Brush;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetTooltipTitle_ReturnValue2 = CallFunc_GetTooltipTitle_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonus_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "PreConstruct");

	Params::UHeroSquadBonus_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadBonus_C::OnPerkUpdated()
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "OnPerkUpdated");

	Params::UHeroSquadBonus_C_OnPerkUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadBonus_C::Construct()
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "Construct");

	Params::UHeroSquadBonus_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonus_C::ExecuteUbergraph_HeroSquadBonus(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("HeroSquadBonus_C", "ExecuteUbergraph_HeroSquadBonus");

	Params::UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

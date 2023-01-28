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


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FSlateBrush                 CallFunc_ResizeBrush_NewParam                                    ()
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void ULegacyAlteration_Widget_C::InitSmallAlteration(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam, class FText CallFunc_GetSingleLineDescription_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "InitSmallAlteration");

	Params::ULegacyAlteration_Widget_C_InitSmallAlteration_Params Parms;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_ResizeBrush_NewParam = CallFunc_ResizeBrush_NewParam;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetHighlightColor_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            ()
// TArray<class FText>                CallFunc_GetDescription_ReturnValue                              (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Multi_Line_Tooltip_Output                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void ULegacyAlteration_Widget_C::InitFullAlteration(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_GetHighlightColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateColor& K2Node_Select_Default, TArray<class FText>& CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "InitFullAlteration");

	Params::ULegacyAlteration_Widget_C_InitFullAlteration_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_GetHighlightColor_ReturnValue = CallFunc_GetHighlightColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Multi_Line_Tooltip_Output = CallFunc_Create_Basic_Multi_Line_Tooltip_Output;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue2 = CallFunc_GetAlterationDefintion_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ULegacyAlteration_Widget_C::ShouldFadeAlteration(bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "ShouldFadeAlteration");

	Params::ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params Parms;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Buff_Color_Color                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ULegacyAlteration_Widget_C::GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "GetHighlightColor");

	Params::ULegacyAlteration_Widget_C_GetHighlightColor_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_Get_Buff_Color_Color = CallFunc_Get_Buff_Color_Color;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyAlteration_Widget_C::Construct()
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "Construct");

	Params::ULegacyAlteration_Widget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyAlteration_Widget_C::ExecuteUbergraph_LegacyAlteration_Widget(int32 EntryPoint, bool CallFunc_ShouldFadeAlteration_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("LegacyAlteration_Widget_C", "ExecuteUbergraph_LegacyAlteration_Widget");

	Params::ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

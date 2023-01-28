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


// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::SetEvolutionDetails(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsAlterationHighlighted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "SetEvolutionDetails");

	Params::UAlterationWidget_C_SetEvolutionDetails_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::UpdateRaritySwitcherVisiblity(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool Temp_bool_Variable2, class UWidget* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "UpdateRaritySwitcherVisiblity");

	Params::UAlterationWidget_C_UpdateRaritySwitcherVisiblity_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.SetLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetHighlightColor_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAlterationWidget_C::SetLevelText(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_GetHighlightColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "SetLevelText");

	Params::UAlterationWidget_C_SetLevelText_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_GetHighlightColor_ReturnValue = CallFunc_GetHighlightColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.InitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::InitText(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue2, class FText CallFunc_GetSingleLineDescription_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue3, class FText CallFunc_GetDisplayName_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "InitText");

	Params::UAlterationWidget_C_InitText_Params Parms;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue2 = CallFunc_GetAlterationDefintion_ReturnValue2;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue3 = CallFunc_GetAlterationDefintion_ReturnValue3;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface = K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 CallFunc_ResizeBrush_NewParam                                    ()
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()

void UAlterationWidget_C::InitIcon(const struct FSlateBrush& CallFunc_ResizeBrush_NewParam, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "InitIcon");

	Params::UAlterationWidget_C_InitIcon_Params Parms;
	Parms.CallFunc_ResizeBrush_NewParam = CallFunc_ResizeBrush_NewParam;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAlterationWidget_C::ShouldFadeAlteration(bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "ShouldFadeAlteration");

	Params::UAlterationWidget_C_ShouldFadeAlteration_Params Parms;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Buff_Color_Color                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UAlterationWidget_C::GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "GetHighlightColor");

	Params::UAlterationWidget_C_GetHighlightColor_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_Get_Buff_Color_Color = CallFunc_Get_Buff_Color_Color;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationWidget.AlterationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "Construct");

	Params::UAlterationWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int32 EntryPoint, bool CallFunc_ShouldFadeAlteration_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "ExecuteUbergraph_AlterationWidget");

	Params::UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.GetToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTooltip_DisplayAttribute_C::GetToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "GetToolTipWidget");

	Params::UTooltip_DisplayAttribute_C_GetToolTipWidget_Params Parms;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.UpdateValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()

void UTooltip_DisplayAttribute_C::UpdateValueText(const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "UpdateValueText");

	Params::UTooltip_DisplayAttribute_C_UpdateValueText_Params Parms;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update Base & Buff Colors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Base                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Buff                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DisplayAttribute_C::Update_Base___Buff_Colors(const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "Update Base & Buff Colors");

	Params::UTooltip_DisplayAttribute_C_Update_Base___Buff_Colors_Params Parms;
	Parms.CallFunc_Get_Base___Buff_Colors_Base = CallFunc_Get_Base___Buff_Colors_Base;
	Parms.CallFunc_Get_Base___Buff_Colors_Buff = CallFunc_Get_Base___Buff_Colors_Buff;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortComparisonType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortComparisonType     Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStatValueDisplayTypeTemp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortComparisonType     Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select6_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DisplayAttribute_C::Update(enum class EFortComparisonType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class EFortBuffState Temp_byte_Variable6, bool Temp_bool_Variable, enum class EFortComparisonType Temp_byte_Variable7, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, enum class EFortBuffState Temp_byte_Variable8, enum class EFortStatValueDisplayType Temp_byte_Variable9, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, float Temp_float_Variable5, float Temp_float_Variable6, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, float Temp_float_Variable7, float Temp_float_Variable8, enum class EFortComparisonType Temp_byte_Variable10, float K2Node_Select3_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float K2Node_Select4_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, const struct FLinearColor& K2Node_Select5_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select6_Default, class UWidget* K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "Update");

	Params::UTooltip_DisplayAttribute_C_Update_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.Temp_float_Variable8 = Temp_float_Variable8;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::Construct()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "Construct");

	Params::UTooltip_DisplayAttribute_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature");

	Params::UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature");

	Params::UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.DisplayAttributeChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::DisplayAttributeChanged()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "DisplayAttributeChanged");

	Params::UTooltip_DisplayAttribute_C_DisplayAttributeChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DisplayAttribute_C::ValueChanged(float Delta)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "ValueChanged");

	Params::UTooltip_DisplayAttribute_C_ValueChanged_Params Parms;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::PreviewStarted()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "PreviewStarted");

	Params::UTooltip_DisplayAttribute_C_PreviewStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UTooltip_DisplayAttribute_C::PreviewEnded()
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "PreviewEnded");

	Params::UTooltip_DisplayAttribute_C_PreviewEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ExecuteUbergraph_Tooltip-DisplayAttribute
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_SetDisplayAttribute_DeltaAttribute                      ()
// bool                               CallFunc_SetDisplayAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetToolTipWidget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DisplayAttribute_C::ExecuteUbergraph_Tooltip_DisplayAttribute(int32 EntryPoint, const struct FFortDisplayAttribute& CallFunc_SetDisplayAttribute_DeltaAttribute, bool CallFunc_SetDisplayAttribute_ReturnValue, float K2Node_Event_Delta, class UWidget* CallFunc_GetToolTipWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("Tooltip-DisplayAttribute_C", "ExecuteUbergraph_Tooltip-DisplayAttribute");

	Params::UTooltip_DisplayAttribute_C_ExecuteUbergraph_Tooltip_DisplayAttribute_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetDisplayAttribute_DeltaAttribute = CallFunc_SetDisplayAttribute_DeltaAttribute;
	Parms.CallFunc_SetDisplayAttribute_ReturnValue = CallFunc_SetDisplayAttribute_ReturnValue;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.CallFunc_GetToolTipWidget_ReturnValue = CallFunc_GetToolTipWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

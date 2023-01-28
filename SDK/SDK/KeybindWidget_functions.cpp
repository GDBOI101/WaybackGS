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


// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHoldKeybind_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::ShowHoldBackPlate(enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable, float Temp_float_Variable7, float Temp_float_Variable8, bool CallFunc_IsHoldKeybind_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select2_Default, float CallFunc_Add_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "ShowHoldBackPlate");

	Params::UKeybindWidget_C_ShowHoldBackPlate_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.Temp_float_Variable8 = Temp_float_Variable8;
	Parms.CallFunc_IsHoldKeybind_ReturnValue = CallFunc_IsHoldKeybind_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::SetOpacity(float InOpacity)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "SetOpacity");

	Params::UKeybindWidget_C_SetOpacity_Params Parms;
	Parms.InOpacity = InOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.Get Bound Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Get_Bound_Action(class FName* Action)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Get Bound Action");

	Params::UKeybindWidget_C_Get_Bound_Action_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function KeybindWidget.KeybindWidget_C.Set Brush Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Set_Brush_Size(enum class EFortBrushSize Brush_Size)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Set Brush Size");

	Params::UKeybindWidget_C_Set_Brush_Size_Params Parms;
	Parms.Brush_Size = Brush_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.Get Brush Size
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Get_Brush_Size(enum class EFortBrushSize* Brush_Size)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Get Brush Size");

	Params::UKeybindWidget_C_Get_Brush_Size_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Brush_Size != nullptr)
		*Brush_Size = Parms.Brush_Size;

}


// Function KeybindWidget.KeybindWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKeybindWidget_C::Construct()
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Construct");

	Params::UKeybindWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.Update
// (Event, Protected, BlueprintEvent)
// Parameters:

void UKeybindWidget_C::Update()
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Update");

	Params::UKeybindWidget_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeybindWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "PreConstruct");

	Params::UKeybindWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.UpdateFrameSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeybindWidget_C::UpdateFrameSize()
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "UpdateFrameSize");

	Params::UKeybindWidget_C_UpdateFrameSize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKeyTextForAction_ButtonActionType                    ()
// class FText                        CallFunc_GetKeyTextForAction_ReturnValue                         ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// struct FSlateBrush                 CallFunc_GetBrushForKey_Brush                                    ()
// bool                               CallFunc_GetBrushForKey_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int32 EntryPoint, enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetKeyTextForAction_ButtonActionType, class FText CallFunc_GetKeyTextForAction_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue2, int32 Temp_int_Variable2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushForKey_Brush, bool CallFunc_GetBrushForKey_ReturnValue, bool Temp_bool_Variable2, class FText CallFunc_GetText_ReturnValue, int32 K2Node_Select2_Default, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "ExecuteUbergraph_KeybindWidget");

	Params::UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
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
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetKeyTextForAction_ButtonActionType = CallFunc_GetKeyTextForAction_ButtonActionType;
	Parms.CallFunc_GetKeyTextForAction_ReturnValue = CallFunc_GetKeyTextForAction_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_GetBrushForKey_Brush = CallFunc_GetBrushForKey_Brush;
	Parms.CallFunc_GetBrushForKey_ReturnValue = CallFunc_GetBrushForKey_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

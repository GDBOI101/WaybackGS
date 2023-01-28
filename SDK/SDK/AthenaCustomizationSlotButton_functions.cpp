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


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ShouldShowEmptyImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UAthenaCustomizationSlotButton_C::ShouldShowEmptyImage(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "ShouldShowEmptyImage");

	Params::UAthenaCustomizationSlotButton_C_ShouldShowEmptyImage_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.UpdateTypeIconOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              VerticalOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UAthenaCustomizationSlotButton_C::UpdateTypeIconOffset(float VerticalOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "UpdateTypeIconOffset");

	Params::UAthenaCustomizationSlotButton_C_UpdateTypeIconOffset_Params Parms;
	Parms.VerticalOffset = VerticalOffset;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Glow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GlowIcon                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UAthenaCustomizationSlotButton_C::Update_SubType_Icon_Glow(bool GlowIcon, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Update SubType Icon Glow");

	Params::UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Glow_Params Parms;
	Parms.GlowIcon = GlowIcon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationSlotButton_C::Update_SubType_Icon_Image()
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Update SubType Icon Image");

	Params::UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Image_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationSlotButton_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Construct");

	Params::UAthenaCustomizationSlotButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "PreConstruct");

	Params::UAthenaCustomizationSlotButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "ExecuteUbergraph_AthenaCustomizationSlotButton");

	Params::UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

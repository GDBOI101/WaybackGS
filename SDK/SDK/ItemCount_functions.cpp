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


// Function ItemCount.ItemCount_C.SetBrushAndTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          InBrushSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCount_C::SetBrushAndTextStyle(enum class EFortBrushSize InBrushSize, class UClass* InStyle)
{
	static auto Func = Class->GetFunction("ItemCount_C", "SetBrushAndTextStyle");

	Params::UItemCount_C_SetBrushAndTextStyle_Params Parms;
	Parms.InBrushSize = InBrushSize;
	Parms.InStyle = InStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.UpdateOverrideState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCount_C::UpdateOverrideState(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCount_C", "UpdateOverrideState");

	Params::UItemCount_C_UpdateOverrideState_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.SetOverrideValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OverrrideValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCount_C::SetOverrideValue(int32 OverrrideValue)
{
	static auto Func = Class->GetFunction("ItemCount_C", "SetOverrideValue");

	Params::UItemCount_C_SetOverrideValue_Params Parms;
	Parms.OverrrideValue = OverrrideValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.SetIsBeingPreviewed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BeingPreviewed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCount_C::SetIsBeingPreviewed(bool BeingPreviewed, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemCount_C", "SetIsBeingPreviewed");

	Params::UItemCount_C_SetIsBeingPreviewed_Params Parms;
	Parms.BeingPreviewed = BeingPreviewed;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.SetItemDefinition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCount_C::SetItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto Func = Class->GetFunction("ItemCount_C", "SetItemDefinition");

	Params::UItemCount_C_SetItemDefinition_Params Parms;
	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemCount_C::Construct()
{
	static auto Func = Class->GetFunction("ItemCount_C", "Construct");

	Params::UItemCount_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCount_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCount_C", "PreConstruct");

	Params::UItemCount_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCount_C::ExecuteUbergraph_ItemCount(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, const struct FMargin& K2Node_Select_Default, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemCount_C", "ExecuteUbergraph_ItemCount");

	Params::UItemCount_C_ExecuteUbergraph_ItemCount_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Backfill_Color                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDurabilityMeter_C::Set_Backfill_Color(const struct FLinearColor& Backfill_Color)
{
	static auto Func = Class->GetFunction("ItemDurabilityMeter_C", "Set Backfill Color");

	Params::UItemDurabilityMeter_C_Set_Backfill_Color_Params Parms;
	Parms.Backfill_Color = Backfill_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Durability                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDurabilityMeter_C::Set_Durability(float Durability, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemDurabilityMeter_C", "Set Durability");

	Params::UItemDurabilityMeter_C_Set_Durability_Params Parms;
	Parms.Durability = Durability;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Draw_Size                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Durability                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)

void UItemDurabilityMeter_C::Update(const struct FVector2D& Draw_Size, float Durability, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("ItemDurabilityMeter_C", "Update");

	Params::UItemDurabilityMeter_C_Update_Params Parms;
	Parms.Draw_Size = Draw_Size;
	Parms.Durability = Durability;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDurabilityMeter_C::Construct()
{
	static auto Func = Class->GetFunction("ItemDurabilityMeter_C", "Construct");

	Params::UItemDurabilityMeter_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDurabilityMeter_C::ExecuteUbergraph_ItemDurabilityMeter(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemDurabilityMeter_C", "ExecuteUbergraph_ItemDurabilityMeter");

	Params::UItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function ItemCooldownMeter.ItemCooldownMeter_C.GetCooldownMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CooldownMat                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCooldownMeter_C::GetCooldownMaterial(class UMaterialInstanceDynamic** CooldownMat, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCooldownMeter_C", "GetCooldownMaterial");

	Params::UItemCooldownMeter_C_GetCooldownMaterial_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CooldownMat != nullptr)
		*CooldownMat = Parms.CooldownMat;

}


// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Minutes                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemCooldownMeter_C::GetSecondsCorrectedMinutes(int32 Minutes, int32 Seconds, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCooldownMeter_C", "GetSecondsCorrectedMinutes");

	Params::UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params Parms;
	Parms.Minutes = Minutes;
	Parms.Seconds = Seconds;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                   Time_Left                                                        (Parm, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSecondsCorrectedMinutes_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FString                      CallFunc_Conv_IntToString_ReturnValue2                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          ()
// class FString                      CallFunc_Conv_IntToString_ReturnValue3                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue3                          ()
// class FString                      CallFunc_Conv_IntToString_ReturnValue4                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue4                          ()
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCooldownMeter_C::Set_Cooldown(const struct FTimespan& Time_Left, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetSecondsCorrectedMinutes_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue2, const class FString& CallFunc_Conv_IntToString_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue3, class FText CallFunc_Conv_StringToText_ReturnValue3, const class FString& CallFunc_Conv_IntToString_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue4, class FText CallFunc_Conv_StringToText_ReturnValue4, float CallFunc_GetTotalSeconds_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemCooldownMeter_C", "Set Cooldown");

	Params::UItemCooldownMeter_C_Set_Cooldown_Params Parms;
	Parms.Time_Left = Time_Left;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetSecondsCorrectedMinutes_ReturnValue = CallFunc_GetSecondsCorrectedMinutes_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue2 = CallFunc_Conv_IntToString_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_Conv_IntToString_ReturnValue3 = CallFunc_Conv_IntToString_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Conv_StringToText_ReturnValue3 = CallFunc_Conv_StringToText_ReturnValue3;
	Parms.CallFunc_Conv_IntToString_ReturnValue4 = CallFunc_Conv_IntToString_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue4 = CallFunc_Greater_IntInt_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.CallFunc_Conv_StringToText_ReturnValue4 = CallFunc_Conv_StringToText_ReturnValue4;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Get_Item_Icon_Size_Icon_Size                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue              (ConstParm, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue          (ConstParm, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromSeconds_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UItemCooldownMeter_C::Update(enum class EFortBrushSize Brush_Size, const struct FVector2D& CallFunc_Get_Item_Icon_Size_Icon_Size, const struct FSlateFontInfo& CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FTimespan& CallFunc_FromSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCooldownMeter_C", "Update");

	Params::UItemCooldownMeter_C_Update_Params Parms;
	Parms.Brush_Size = Brush_Size;
	Parms.CallFunc_Get_Item_Icon_Size_Icon_Size = CallFunc_Get_Item_Icon_Size_Icon_Size;
	Parms.CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue = CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue = CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

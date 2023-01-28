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


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateDBNOState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDBNO                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaViewTargetHitPointBar_C::UpdateDBNOState(bool IsDBNO, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "UpdateDBNOState");

	Params::UAthenaViewTargetHitPointBar_C_UpdateDBNOState_Params Parms;
	Parms.IsDBNO = IsDBNO;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateVolatileForUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVolatile                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressBarType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaViewTargetHitPointBar_C::UpdateVolatileForUpdate(bool NewVolatile, enum class EProgressBarType Temp_byte_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "UpdateVolatileForUpdate");

	Params::UAthenaViewTargetHitPointBar_C_UpdateVolatileForUpdate_Params Parms;
	Parms.NewVolatile = NewVolatile;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::Update(bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Update");

	Params::UAthenaViewTargetHitPointBar_C_Update_Params Parms;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::Update_Delta_Bar(float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Update Delta Bar");

	Params::UAthenaViewTargetHitPointBar_C_Update_Delta_Bar_Params Parms;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable6                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable7                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable8                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable9                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable10                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable11                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable12                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable13                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable14                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable15                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select6_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select7_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::Initialize_Bar(enum class EProgressBarType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, enum class EProgressBarType Temp_byte_Variable2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, enum class EProgressBarType Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, const struct FLinearColor& Temp_struct_Variable6, enum class EProgressBarType Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable7, const struct FLinearColor& Temp_struct_Variable8, const struct FLinearColor& Temp_struct_Variable9, const struct FMargin& K2Node_MakeStruct_Margin, class UTexture2D* Temp_object_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, enum class EProgressBarType Temp_byte_Variable5, const struct FLinearColor& Temp_struct_Variable10, const struct FLinearColor& Temp_struct_Variable11, const struct FLinearColor& Temp_struct_Variable12, enum class EProgressBarType Temp_byte_Variable6, const struct FLinearColor& Temp_struct_Variable13, const struct FLinearColor& Temp_struct_Variable14, const struct FLinearColor& Temp_struct_Variable15, enum class EProgressBarType Temp_byte_Variable7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, const struct FLinearColor& K2Node_Select_Default, class UClass* K2Node_Select2_Default, class UTexture2D* K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, const struct FLinearColor& K2Node_Select6_Default, const struct FLinearColor& K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Initialize Bar");

	Params::UAthenaViewTargetHitPointBar_C_Initialize_Bar_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_struct_Variable10 = Temp_struct_Variable10;
	Parms.Temp_struct_Variable11 = Temp_struct_Variable11;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_struct_Variable13 = Temp_struct_Variable13;
	Parms.Temp_struct_Variable14 = Temp_struct_Variable14;
	Parms.Temp_struct_Variable15 = Temp_struct_Variable15;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValueWithoutReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "UpdateCurrentValueWithoutReason");

	Params::UAthenaViewTargetHitPointBar_C_UpdateCurrentValueWithoutReason_Params Parms;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::Update_Fill_Bar(float Temp_float_Variable, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Update Fill Bar");

	Params::UAthenaViewTargetHitPointBar_C_Update_Fill_Bar_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue2 = CallFunc_FMax_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHitPointModificationReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UAthenaViewTargetHitPointBar_C::UpdateCurrentValue(float Current, enum class EFortHitPointModificationReason Reason, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_FMax_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "UpdateCurrentValue");

	Params::UAthenaViewTargetHitPointBar_C_UpdateCurrentValue_Params Parms;
	Parms.Current = Current;
	Parms.Reason = Reason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UAthenaViewTargetHitPointBar_C::UpdateMaxValue(float Max, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "UpdateMaxValue");

	Params::UAthenaViewTargetHitPointBar_C_UpdateMaxValue_Params Parms;
	Parms.Max = Max;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaViewTargetHitPointBar_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Construct");

	Params::UAthenaViewTargetHitPointBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaViewTargetHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "PreConstruct");

	Params::UAthenaViewTargetHitPointBar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewTargetHitPointBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "Tick");

	Params::UAthenaViewTargetHitPointBar_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.ExecuteUbergraph_AthenaViewTargetHitPointBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UAthenaViewTargetHitPointBar_C::ExecuteUbergraph_AthenaViewTargetHitPointBar(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("AthenaViewTargetHitPointBar_C", "ExecuteUbergraph_AthenaViewTargetHitPointBar");

	Params::UAthenaViewTargetHitPointBar_C_ExecuteUbergraph_AthenaViewTargetHitPointBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

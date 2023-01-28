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


// Function Car_Copper.Car_Copper_C.toggle light visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACar_Copper_C::Toggle_light_visibility(bool bNewVisibility, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "toggle light visibility");

	Params::ACar_Copper_C_Toggle_light_visibility_Params Parms;
	Parms.bNewVisibility = bNewVisibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Randomize the target brightness levels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_Copper_C::Randomize_the_target_brightness_levels(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Randomize the target brightness levels");

	Params::ACar_Copper_C_Randomize_the_target_brightness_levels_Params Parms;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Set Light Brightness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              _0_1_Intensity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Include_Second_Emissive_Channel                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_Copper_C::Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Set Light Brightness");

	Params::ACar_Copper_C_Set_Light_Brightness_Params Parms;
	Parms._0_1_Intensity = _0_1_Intensity;
	Parms.Include_Second_Emissive_Channel = Include_Second_Emissive_Channel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.MaterialEditorSine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Look_up_value                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Period                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegSin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ACar_Copper_C::MaterialEditorSine(float Look_up_value, float Period, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "MaterialEditorSine");

	Params::ACar_Copper_C_MaterialEditorSine_Params Parms;
	Parms.Look_up_value = Look_up_value;
	Parms.Period = Period;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_DegSin_ReturnValue = CallFunc_DegSin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Random_Value_5_59614                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaterialEditorSine_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaterialEditorSine_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaterialEditorSine_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

float ACar_Copper_C::SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam, float Random_Value_5_59614, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_MaterialEditorSine_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_MaterialEditorSine_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_MaterialEditorSine_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Fraction_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "SetCarAlarmEnabledBasedOnLocation");

	Params::ACar_Copper_C_SetCarAlarmEnabledBasedOnLocation_Params Parms;
	Parms.Location = Location;
	Parms.Random_Value_5_59614 = Random_Value_5_59614;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue2 = CallFunc_FCeil_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_MaterialEditorSine_ReturnValue = CallFunc_MaterialEditorSine_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_MaterialEditorSine_ReturnValue2 = CallFunc_MaterialEditorSine_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_MaterialEditorSine_ReturnValue3 = CallFunc_MaterialEditorSine_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Multiply_FloatFloat_ReturnValue6;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

	return Parms.ReturnValue;

}


// Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::Setcanmakebouncingnoisetrue()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "setcanmakebouncingnoisetrue");

	Params::ACar_Copper_C_Setcanmakebouncingnoisetrue_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::StopCarAlarmFromPlaying()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "StopCarAlarmFromPlaying");

	Params::ACar_Copper_C_StopCarAlarmFromPlaying_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ParametersToLerp                                                 (Edit, ZeroConstructor)
// class FName                        Wind_offset_1                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Wind_1_Random_Rotation_Influence                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Max_Rotation_1                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Wind_1_Random_Rotation_Change_Rate                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpotLightComponent*         CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpotLightComponent*         CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInterface*>  CallFunc_GetIntenseWindMaterialsForPreview_Materials             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*           CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UCurveLinearColor*           CallFunc_GetWindSpeedCurveForPreview_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable4                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable5                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USpotLightComponent*         CallFunc_AddComponent_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpotLightComponent*         CallFunc_AddComponent_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*           CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*           CallFunc_GetWindSpeedCurveForPreview_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue2                               (ZeroConstructor, ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue3                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue4                         (IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location4                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation4                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale4                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACar_Copper_C::UserConstructionScript(const TArray<class FName>& ParametersToLerp, class FName Wind_offset_1, class FName Wind_1_Random_Rotation_Influence, class FName Max_Rotation_1, class FName Wind_1_Random_Rotation_Change_Rate, TArray<class FName>& K2Node_MakeArray_Array, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, const struct FTransform& Temp_struct_Variable2, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, class USpotLightComponent* CallFunc_AddComponent_ReturnValue2, int32 Temp_int_Array_Index_Variable, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& Temp_struct_Variable3, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class FName CallFunc_Array_Get_Item2, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& Temp_struct_Variable4, const struct FTransform& Temp_struct_Variable5, class USpotLightComponent* CallFunc_AddComponent_ReturnValue4, class USpotLightComponent* CallFunc_AddComponent_ReturnValue5, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue2, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue2, class UMaterialInterface* CallFunc_Array_Get_Item4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue4, float CallFunc_K2_GetScalarParameterValue_ReturnValue2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue4, bool CallFunc_DoesSocketExist_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult4, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, bool CallFunc_DoesSocketExist_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "UserConstructionScript");

	Params::ACar_Copper_C_UserConstructionScript_Params Parms;
	Parms.ParametersToLerp = ParametersToLerp;
	Parms.Wind_offset_1 = Wind_offset_1;
	Parms.Wind_1_Random_Rotation_Influence = Wind_1_Random_Rotation_Influence;
	Parms.Max_Rotation_1 = Max_Rotation_1;
	Parms.Wind_1_Random_Rotation_Change_Rate = Wind_1_Random_Rotation_Change_Rate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue2 = CallFunc_DoesSocketExist_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetIntenseWindMaterialsForPreview_Materials = CallFunc_GetIntenseWindMaterialsForPreview_Materials;
	Parms.CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue = CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue = CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetWindSpeedCurveForPreview_ReturnValue = CallFunc_GetWindSpeedCurveForPreview_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue2 = CallFunc_GetBuildingMeshComponent_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.CallFunc_AddComponent_ReturnValue4 = CallFunc_AddComponent_ReturnValue4;
	Parms.CallFunc_AddComponent_ReturnValue5 = CallFunc_AddComponent_ReturnValue5;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2 = CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2;
	Parms.CallFunc_GetWindSpeedCurveForPreview_ReturnValue2 = CallFunc_GetWindSpeedCurveForPreview_ReturnValue2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_GetLinearColorValue_ReturnValue2 = CallFunc_GetLinearColorValue_ReturnValue2;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue3 = CallFunc_GetBuildingMeshComponent_ReturnValue3;
	Parms.CallFunc_GetMaterials_ReturnValue2 = CallFunc_GetMaterials_ReturnValue2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue4 = CallFunc_GetBuildingMeshComponent_ReturnValue4;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue2 = CallFunc_K2_GetScalarParameterValue_ReturnValue2;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.CallFunc_GetSocketTransform_ReturnValue3 = CallFunc_GetSocketTransform_ReturnValue3;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult3 = CallFunc_K2_SetWorldTransform_SweepHitResult3;
	Parms.CallFunc_GetSocketTransform_ReturnValue4 = CallFunc_GetSocketTransform_ReturnValue4;
	Parms.CallFunc_DoesSocketExist_ReturnValue3 = CallFunc_DoesSocketExist_ReturnValue3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult4 = CallFunc_K2_SetWorldTransform_SweepHitResult4;
	Parms.CallFunc_BreakTransform_Location4 = CallFunc_BreakTransform_Location4;
	Parms.CallFunc_BreakTransform_Rotation4 = CallFunc_BreakTransform_Rotation4;
	Parms.CallFunc_BreakTransform_Scale4 = CallFunc_BreakTransform_Scale4;
	Parms.CallFunc_DoesSocketExist_ReturnValue4 = CallFunc_DoesSocketExist_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Timeline_0__FinishedFunc");

	Params::ACar_Copper_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Timeline_0__UpdateFunc");

	Params::ACar_Copper_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::BounceCar__FinishedFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "BounceCar__FinishedFunc");

	Params::ACar_Copper_C_BounceCar__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::BounceCar__UpdateFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "BounceCar__UpdateFunc");

	Params::ACar_Copper_C_BounceCar__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::Timeline_2__FinishedFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Timeline_2__FinishedFunc");

	Params::ACar_Copper_C_Timeline_2__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::Timeline_2__UpdateFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Timeline_2__UpdateFunc");

	Params::ACar_Copper_C_Timeline_2__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc
// (BlueprintEvent)
// Parameters:

void ACar_Copper_C::Timeline_2__FireOffNoise__EventFunc()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Timeline_2__FireOffNoise__EventFunc");

	Params::ACar_Copper_C_Timeline_2__FireOffNoise__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACar_Copper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "ReceiveBeginPlay");

	Params::ACar_Copper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACar_Copper_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "ReceiveHit");

	Params::ACar_Copper_C_ReceiveHit_Params Parms;
	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.StartSirenLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::StartSirenLight()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "StartSirenLight");

	Params::ACar_Copper_C_StartSirenLight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.FadeSirenLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::FadeSirenLight()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "FadeSirenLight");

	Params::ACar_Copper_C_FadeSirenLight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::TriggerLowHealthParticleEffect()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "TriggerLowHealthParticleEffect");

	Params::ACar_Copper_C_TriggerLowHealthParticleEffect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void ACar_Copper_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "OnDeathPlayEffects");

	Params::ACar_Copper_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void ACar_Copper_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "OnDamagePlayEffects");

	Params::ACar_Copper_C_OnDamagePlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_Copper_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "ReceiveEndPlay");

	Params::ACar_Copper_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void ACar_Copper_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "OnDamageServer");

	Params::ACar_Copper_C_OnDamageServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.FireOffCarAlarm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::FireOffCarAlarm()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "FireOffCarAlarm");

	Params::ACar_Copper_C_FireOffCarAlarm_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortBounceData             Data                                                             (Parm, NoDestructor)

void ACar_Copper_C::OnBounceAnimationUpdate(const struct FFortBounceData& Data)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "OnBounceAnimationUpdate");

	Params::ACar_Copper_C_OnBounceAnimationUpdate_Params Parms;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Hit Bounce Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::Hit_Bounce_Finished()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Hit Bounce Finished");

	Params::ACar_Copper_C_Hit_Bounce_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.Player jump based bounce 
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACar_Copper_C::Player_jump_based_bounce_()
{
	static auto Func = Class->GetFunction("Car_Copper_C", "Player jump based bounce ");

	Params::ACar_Copper_C_Player_jump_based_bounce__Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetComponentVelocity_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue2                                (NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags3                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum3                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo3                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext3                                      ()
// float                              K2Node_Event_Damage2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags2                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum2                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo2                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext2                                      ()
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBuildingHealthPercentage_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue3                                (NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasHealthLeft_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBounceData             K2Node_Event_Data                                                (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue6                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue7                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue8                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue9                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue10                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue3                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue4                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue5                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue6                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue4                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue7                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue8                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue9                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue10                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue11                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue12                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue4                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue5                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue6                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue7                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue8                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult4                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue13                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue11                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue9                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue14                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue10                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACar_Copper_C::ExecuteUbergraph_Car_Copper(int32 EntryPoint, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue3, float CallFunc_GetScalarParameterValue_ReturnValue4, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 CallFunc_Array_LastIndex_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, bool Temp_bool_Has_Been_Initd_Variable2, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue2, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FVector& CallFunc_MakeVector_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_Damage3, const struct FGameplayTagContainer& K2Node_Event_DamageTags3, const struct FVector& K2Node_Event_Momentum3, const struct FHitResult& K2Node_Event_HitInfo3, class AFortPawn* K2Node_Event_InstigatedBy3, class AActor* K2Node_Event_DamageCauser3, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext3, float K2Node_Event_Damage2, const struct FGameplayTagContainer& K2Node_Event_DamageTags2, const struct FVector& K2Node_Event_Momentum2, const struct FHitResult& K2Node_Event_HitInfo2, class AFortPawn* K2Node_Event_InstigatedBy2, class AActor* K2Node_Event_DamageCauser2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetBuildingHealthPercentage_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_HasHealthLeft_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FFortBounceData& K2Node_Event_Data, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, float CallFunc_BreakColor_R3, float CallFunc_BreakColor_G3, float CallFunc_BreakColor_B3, float CallFunc_BreakColor_A3, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, float CallFunc_BreakColor_R4, float CallFunc_BreakColor_G4, float CallFunc_BreakColor_B4, float CallFunc_BreakColor_A4, float CallFunc_BreakColor_R5, float CallFunc_BreakColor_G5, float CallFunc_BreakColor_B5, float CallFunc_BreakColor_A5, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue6, float CallFunc_BreakColor_R6, float CallFunc_BreakColor_G6, float CallFunc_BreakColor_B6, float CallFunc_BreakColor_A6, float CallFunc_BreakColor_R7, float CallFunc_BreakColor_G7, float CallFunc_BreakColor_B7, float CallFunc_BreakColor_A7, const struct FVector& CallFunc_MakeVector_ReturnValue7, const struct FVector& CallFunc_MakeVector_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, float CallFunc_BreakColor_R8, float CallFunc_BreakColor_G8, float CallFunc_BreakColor_B8, float CallFunc_BreakColor_A8, float CallFunc_BreakColor_R9, float CallFunc_BreakColor_G9, float CallFunc_BreakColor_B9, float CallFunc_BreakColor_A9, const struct FVector& CallFunc_MakeVector_ReturnValue9, const struct FVector& CallFunc_MakeVector_ReturnValue10, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& Temp_struct_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_VSize_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_VSize_ReturnValue4, float CallFunc_FClamp_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_SelectFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue7, float CallFunc_SelectFloat_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue9, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue10, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, bool Temp_bool_Variable2, const struct FVector& K2Node_Select2_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue6, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue8, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult4, int32 Temp_int_Variable2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_RandomFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue13, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue11, bool CallFunc_RandomBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_SelectFloat_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue4, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue9, const struct FVector& CallFunc_TransformLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue5, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 Temp_int_Variable3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue14, float CallFunc_Conv_BoolToFloat_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue10, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam2, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("Car_Copper_C", "ExecuteUbergraph_Car_Copper");

	Params::ACar_Copper_C_ExecuteUbergraph_Car_Copper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue2 = CallFunc_GetScalarParameterValue_ReturnValue2;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue3 = CallFunc_GetScalarParameterValue_ReturnValue3;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue4 = CallFunc_GetScalarParameterValue_ReturnValue4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetAnimatingMID_ReturnValue = CallFunc_GetAnimatingMID_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue2 = CallFunc_EqualEqual_VectorVector_ReturnValue2;
	Parms.CallFunc_GetComponentVelocity_ReturnValue = CallFunc_GetComponentVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue2 = CallFunc_K2_SetTimer_ReturnValue2;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_Event_Damage3 = K2Node_Event_Damage3;
	Parms.K2Node_Event_DamageTags3 = K2Node_Event_DamageTags3;
	Parms.K2Node_Event_Momentum3 = K2Node_Event_Momentum3;
	Parms.K2Node_Event_HitInfo3 = K2Node_Event_HitInfo3;
	Parms.K2Node_Event_InstigatedBy3 = K2Node_Event_InstigatedBy3;
	Parms.K2Node_Event_DamageCauser3 = K2Node_Event_DamageCauser3;
	Parms.K2Node_Event_EffectContext3 = K2Node_Event_EffectContext3;
	Parms.K2Node_Event_Damage2 = K2Node_Event_Damage2;
	Parms.K2Node_Event_DamageTags2 = K2Node_Event_DamageTags2;
	Parms.K2Node_Event_Momentum2 = K2Node_Event_Momentum2;
	Parms.K2Node_Event_HitInfo2 = K2Node_Event_HitInfo2;
	Parms.K2Node_Event_InstigatedBy2 = K2Node_Event_InstigatedBy2;
	Parms.K2Node_Event_DamageCauser2 = K2Node_Event_DamageCauser2;
	Parms.K2Node_Event_EffectContext2 = K2Node_Event_EffectContext2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetBuildingHealthPercentage_ReturnValue = CallFunc_GetBuildingHealthPercentage_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue3 = CallFunc_K2_SetTimer_ReturnValue3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue2 = CallFunc_GetBuildingMeshComponent_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_HasHealthLeft_ReturnValue = CallFunc_HasHealthLeft_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_BreakColor_R3 = CallFunc_BreakColor_R3;
	Parms.CallFunc_BreakColor_G3 = CallFunc_BreakColor_G3;
	Parms.CallFunc_BreakColor_B3 = CallFunc_BreakColor_B3;
	Parms.CallFunc_BreakColor_A3 = CallFunc_BreakColor_A3;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BreakColor_R4 = CallFunc_BreakColor_R4;
	Parms.CallFunc_BreakColor_G4 = CallFunc_BreakColor_G4;
	Parms.CallFunc_BreakColor_B4 = CallFunc_BreakColor_B4;
	Parms.CallFunc_BreakColor_A4 = CallFunc_BreakColor_A4;
	Parms.CallFunc_BreakColor_R5 = CallFunc_BreakColor_R5;
	Parms.CallFunc_BreakColor_G5 = CallFunc_BreakColor_G5;
	Parms.CallFunc_BreakColor_B5 = CallFunc_BreakColor_B5;
	Parms.CallFunc_BreakColor_A5 = CallFunc_BreakColor_A5;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue6 = CallFunc_MakeVector_ReturnValue6;
	Parms.CallFunc_BreakColor_R6 = CallFunc_BreakColor_R6;
	Parms.CallFunc_BreakColor_G6 = CallFunc_BreakColor_G6;
	Parms.CallFunc_BreakColor_B6 = CallFunc_BreakColor_B6;
	Parms.CallFunc_BreakColor_A6 = CallFunc_BreakColor_A6;
	Parms.CallFunc_BreakColor_R7 = CallFunc_BreakColor_R7;
	Parms.CallFunc_BreakColor_G7 = CallFunc_BreakColor_G7;
	Parms.CallFunc_BreakColor_B7 = CallFunc_BreakColor_B7;
	Parms.CallFunc_BreakColor_A7 = CallFunc_BreakColor_A7;
	Parms.CallFunc_MakeVector_ReturnValue7 = CallFunc_MakeVector_ReturnValue7;
	Parms.CallFunc_MakeVector_ReturnValue8 = CallFunc_MakeVector_ReturnValue8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BreakColor_R8 = CallFunc_BreakColor_R8;
	Parms.CallFunc_BreakColor_G8 = CallFunc_BreakColor_G8;
	Parms.CallFunc_BreakColor_B8 = CallFunc_BreakColor_B8;
	Parms.CallFunc_BreakColor_A8 = CallFunc_BreakColor_A8;
	Parms.CallFunc_BreakColor_R9 = CallFunc_BreakColor_R9;
	Parms.CallFunc_BreakColor_G9 = CallFunc_BreakColor_G9;
	Parms.CallFunc_BreakColor_B9 = CallFunc_BreakColor_B9;
	Parms.CallFunc_BreakColor_A9 = CallFunc_BreakColor_A9;
	Parms.CallFunc_MakeVector_ReturnValue9 = CallFunc_MakeVector_ReturnValue9;
	Parms.CallFunc_MakeVector_ReturnValue10 = CallFunc_MakeVector_ReturnValue10;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_Subtract_VectorVector_ReturnValue2;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue2 = CallFunc_VSize_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue2 = CallFunc_SelectFloat_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue3 = CallFunc_Multiply_VectorFloat_ReturnValue3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue4 = CallFunc_Multiply_VectorFloat_ReturnValue4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue5 = CallFunc_Multiply_VectorFloat_ReturnValue5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue6 = CallFunc_Multiply_VectorFloat_ReturnValue6;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue3 = CallFunc_Subtract_VectorVector_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue3 = CallFunc_VSize_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue4 = CallFunc_Subtract_VectorVector_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue4 = CallFunc_VSize_ReturnValue4;
	Parms.CallFunc_FClamp_ReturnValue3 = CallFunc_FClamp_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_FClamp_ReturnValue4 = CallFunc_FClamp_ReturnValue4;
	Parms.CallFunc_SelectFloat_ReturnValue3 = CallFunc_SelectFloat_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue7 = CallFunc_Multiply_VectorFloat_ReturnValue7;
	Parms.CallFunc_SelectFloat_ReturnValue4 = CallFunc_SelectFloat_ReturnValue4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue8 = CallFunc_Multiply_VectorFloat_ReturnValue8;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue9 = CallFunc_Multiply_VectorFloat_ReturnValue9;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue10 = CallFunc_Multiply_VectorFloat_ReturnValue10;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue11 = CallFunc_Multiply_VectorFloat_ReturnValue11;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue12 = CallFunc_Multiply_VectorFloat_ReturnValue12;
	Parms.CallFunc_Add_VectorVector_ReturnValue4 = CallFunc_Add_VectorVector_ReturnValue4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Add_VectorVector_ReturnValue5 = CallFunc_Add_VectorVector_ReturnValue5;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Add_VectorVector_ReturnValue6 = CallFunc_Add_VectorVector_ReturnValue6;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_Add_VectorVector_ReturnValue7 = CallFunc_Add_VectorVector_ReturnValue7;
	Parms.CallFunc_Add_VectorVector_ReturnValue8 = CallFunc_Add_VectorVector_ReturnValue8;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult3 = CallFunc_K2_SetWorldLocation_SweepHitResult3;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult4 = CallFunc_K2_SetWorldLocation_SweepHitResult4;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue13 = CallFunc_Multiply_VectorFloat_ReturnValue13;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue11 = CallFunc_MakeVector_ReturnValue11;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue5 = CallFunc_SelectFloat_ReturnValue5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue4 = CallFunc_RandomFloatInRange_ReturnValue4;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue3 = CallFunc_GetBuildingMeshComponent_ReturnValue3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_DoesSocketExist_ReturnValue2 = CallFunc_DoesSocketExist_ReturnValue2;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue4 = CallFunc_GetBuildingMeshComponent_ReturnValue4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue5 = CallFunc_RandomFloatInRange_ReturnValue5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue2 = CallFunc_GetSocketLocation_ReturnValue2;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue9 = CallFunc_Add_VectorVector_ReturnValue9;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam = CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam;
	Parms.CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue = CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue5 = CallFunc_GetBuildingMeshComponent_ReturnValue5;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue14 = CallFunc_Multiply_VectorFloat_ReturnValue14;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_Conv_BoolToFloat_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.CallFunc_Add_VectorVector_ReturnValue10 = CallFunc_Add_VectorVector_ReturnValue10;
	Parms.CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam2 = CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam2;
	Parms.CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue2 = CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

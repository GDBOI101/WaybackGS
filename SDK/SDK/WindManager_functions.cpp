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


// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Wind_location                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Storm_Cyl_Mesh_Match                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Wind_Cyl_Mesh_Array_Match_Index                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int32* Wind_Cyl_Mesh_Array_Match_Index, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("WindManager_C", "Find Matching Wind Mesh Index And Write Bool");

	Params::AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params Parms;
	Parms.Wind_location = Wind_location;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Storm_Cyl_Mesh_Match != nullptr)
		*Storm_Cyl_Mesh_Match = Parms.Storm_Cyl_Mesh_Match;

	if (Wind_Cyl_Mesh_Array_Match_Index != nullptr)
		*Wind_Cyl_Mesh_Array_Match_Index = Parms.Wind_Cyl_Mesh_Array_Match_Index;

}


// Function WindManager.WindManager_C.SetWindMatVariables
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_AnimatedCylinderCenter                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     AnimatedCylinderCenter                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Animating_Wind_Magnitude                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Animating_Wind_Magnitude                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Static_Wind_Magnitude                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Static_Wind_Magnitude                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_CylinderCenter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CylinderCenter                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_WindVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     WindVector                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_WindCrossVector                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     WindCrossVector                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_OverallOuterRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OverallOuterRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_OverallInnerRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OverallInnerRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Wind_Still_0_or_Animating_1                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Wind_Still_0_or_Animating_1                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Circular_Shader_                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Circular_Shader_                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue3                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue4                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue4, class FName CallFunc_MakeLiteralName_ReturnValue5, class FName CallFunc_MakeLiteralName_ReturnValue6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue7, class FName CallFunc_MakeLiteralName_ReturnValue8, class FName CallFunc_MakeLiteralName_ReturnValue9, class FName CallFunc_MakeLiteralName_ReturnValue10, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue4)
{
	static auto Func = Class->GetFunction("WindManager_C", "SetWindMatVariables");

	Params::AWindManager_C_SetWindMatVariables_Params Parms;
	Parms.Mid = Mid;
	Parms.Set_AnimatedCylinderCenter = Set_AnimatedCylinderCenter;
	Parms.AnimatedCylinderCenter = AnimatedCylinderCenter;
	Parms.Set_Animating_Wind_Magnitude = Set_Animating_Wind_Magnitude;
	Parms.Animating_Wind_Magnitude = Animating_Wind_Magnitude;
	Parms.Set_Static_Wind_Magnitude = Set_Static_Wind_Magnitude;
	Parms.Static_Wind_Magnitude = Static_Wind_Magnitude;
	Parms.Set_CylinderCenter = Set_CylinderCenter;
	Parms.CylinderCenter = CylinderCenter;
	Parms.Set_WindVector = Set_WindVector;
	Parms.WindVector = WindVector;
	Parms.Set_WindCrossVector = Set_WindCrossVector;
	Parms.WindCrossVector = WindCrossVector;
	Parms.Set_OverallOuterRadius = Set_OverallOuterRadius;
	Parms.OverallOuterRadius = OverallOuterRadius;
	Parms.Set_OverallInnerRadius = Set_OverallInnerRadius;
	Parms.OverallInnerRadius = OverallInnerRadius;
	Parms.Set_Wind_Still_0_or_Animating_1 = Set_Wind_Still_0_or_Animating_1;
	Parms.Wind_Still_0_or_Animating_1 = Wind_Still_0_or_Animating_1;
	Parms.Set_Circular_Shader_ = Set_Circular_Shader_;
	Parms.Circular_Shader_ = Circular_Shader_;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_MakeLiteralName_ReturnValue3 = CallFunc_MakeLiteralName_ReturnValue3;
	Parms.CallFunc_MakeLiteralName_ReturnValue4 = CallFunc_MakeLiteralName_ReturnValue4;
	Parms.CallFunc_MakeLiteralName_ReturnValue5 = CallFunc_MakeLiteralName_ReturnValue5;
	Parms.CallFunc_MakeLiteralName_ReturnValue6 = CallFunc_MakeLiteralName_ReturnValue6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_MakeLiteralName_ReturnValue7 = CallFunc_MakeLiteralName_ReturnValue7;
	Parms.CallFunc_MakeLiteralName_ReturnValue8 = CallFunc_MakeLiteralName_ReturnValue8;
	Parms.CallFunc_MakeLiteralName_ReturnValue9 = CallFunc_MakeLiteralName_ReturnValue9;
	Parms.CallFunc_MakeLiteralName_ReturnValue10 = CallFunc_MakeLiteralName_ReturnValue10;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue3 = CallFunc_Conv_VectorToLinearColor_ReturnValue3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue4 = CallFunc_Conv_VectorToLinearColor_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WindManager.WindManager_C.UpdateWindDeltaCyl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Static_Cylinder_Outer_Radius                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Wind_Circular_                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable2, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select2_Default, float K2Node_Select3_Default, float K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("WindManager_C", "UpdateWindDeltaCyl");

	Params::AWindManager_C_UpdateWindDeltaCyl_Params Parms;
	Parms.Static_Cylinder_Outer_Radius = Static_Cylinder_Outer_Radius;
	Parms.Duration = Duration;
	Parms.Mid = Mid;
	Parms.Is_Wind_Circular_ = Is_Wind_Circular_;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.RemoveWindCylinder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
// class UStaticMeshComponent*        CurrentStormCylinder                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent* CurrentStormCylinder, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("WindManager_C", "RemoveWindCylinder");

	Params::AWindManager_C_RemoveWindCylinder_Params Parms;
	Parms.WindImpulseCylinder = WindImpulseCylinder;
	Parms.CurrentStormCylinder = CurrentStormCylinder;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.UpdateStormWindCylinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    Wind_Impulse                                                     (Parm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaWind_Delta                                                       (Parm, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds (IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds (IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds         (IsPlainOldData, NoDestructor)
// struct FFortWindImpulseHandle      CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify (NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWindMatVariables_NewParam                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWindMatVariables_NewParam2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter, bool CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized, bool CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds, const struct FFortWindImpulseHandle& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_SetWindMatVariables_NewParam, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetWindMatVariables_NewParam2)
{
	static auto Func = Class->GetFunction("WindManager_C", "UpdateStormWindCylinder");

	Params::AWindManager_C_UpdateStormWindCylinder_Params Parms;
	Parms.Wind_Impulse = Wind_Impulse;
	Parms.Wind_Delta = Wind_Delta;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized = CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward = CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds = CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds = CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds;
	Parms.CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify = CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_SetWindMatVariables_NewParam = CallFunc_SetWindMatVariables_NewParam;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetWindMatVariables_NewParam2 = CallFunc_SetWindMatVariables_NewParam2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Calculate Camera Position
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    Scene_Capture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AWindManager_C::Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue4, int32 CallFunc_FCeil_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2)
{
	static auto Func = Class->GetFunction("WindManager_C", "Calculate Camera Position");

	Params::AWindManager_C_Calculate_Camera_Position_Params Parms;
	Parms.Scale = Scale;
	Parms.Scene_Capture = Scene_Capture;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorFloat_ReturnValue = CallFunc_Subtract_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue2 = CallFunc_FCeil_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_FCeil_ReturnValue3 = CallFunc_FCeil_ReturnValue3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue5 = CallFunc_Conv_IntToFloat_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WindManager.WindManager_C.SetRenderOnlyAssets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::SetRenderOnlyAssets(class UPrimitiveComponent* InComponent)
{
	static auto Func = Class->GetFunction("WindManager_C", "SetRenderOnlyAssets");

	Params::AWindManager_C_SetRenderOnlyAssets_Params Parms;
	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.InitializeOrthoSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWindManager_C::InitializeOrthoSettings()
{
	static auto Func = Class->GetFunction("WindManager_C", "InitializeOrthoSettings");

	Params::AWindManager_C_InitializeOrthoSettings_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("WindManager_C", "UserConstructionScript");

	Params::AWindManager_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Add Render To Texture Particle
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform)
{
	static auto Func = Class->GetFunction("WindManager_C", "Add Render To Texture Particle");

	Params::AWindManager_C_Add_Render_To_Texture_Particle_Params Parms;
	Parms.EmitterTemplate = EmitterTemplate;
	Parms.InTransform = InTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void AWindManager_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("WindManager_C", "OnWorldReady");

	Params::AWindManager_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("WindManager_C", "ReceiveTick");

	Params::AWindManager_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Register player for render to texture purposes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Generic_C*       Player_Pawn_Generic                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic)
{
	static auto Func = Class->GetFunction("WindManager_C", "Register player for render to texture purposes");

	Params::AWindManager_C_Register_player_for_render_to_texture_purposes_Params Parms;
	Parms.Player_Pawn_Generic = Player_Pawn_Generic;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.AddWindParticleSystemComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    ParticleSystemComponent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent)
{
	static auto Func = Class->GetFunction("WindManager_C", "AddWindParticleSystemComponent");

	Params::AWindManager_C_AddWindParticleSystemComponent_Params Parms;
	Parms.ParticleSystemComponent = ParticleSystemComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaWindImpulseCylinderDelta                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta)
{
	static auto Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderCreation");

	Params::AWindManager_C_OnWindImpulseCylinderCreation_Params Parms;
	Parms.WindImpulseCylinder = WindImpulseCylinder;
	Parms.WindImpulseCylinderDelta = WindImpulseCylinderDelta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static auto Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeath");

	Params::AWindManager_C_OnWindImpulseCylinderDeath_Params Parms;
	Parms.WindImpulseCylinder = WindImpulseCylinder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder    WindImpulseCylinder                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AWindManager_C::OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static auto Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeltaComplete");

	Params::AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params Parms;
	Parms.WindImpulseCylinder = WindImpulseCylinder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.SpawnTestWind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImpulseMagnitude                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::SpawnTestWind(float Radius, float ImpulseMagnitude)
{
	static auto Func = Class->GetFunction("WindManager_C", "SpawnTestWind");

	Params::AWindManager_C_SpawnTestWind_Params Parms;
	Parms.Radius = Radius;
	Parms.ImpulseMagnitude = ImpulseMagnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Particle_Transform                                               (Parm, IsPlainOldData, NoDestructor)

void AWindManager_C::Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform)
{
	static auto Func = Class->GetFunction("WindManager_C", "Play Water Splash Particle System At Location");

	Params::AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params Parms;
	Parms.Particle_Transform = Particle_Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Add Wind Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Add_Wind_Component(class UPrimitiveComponent* InComponent)
{
	static auto Func = Class->GetFunction("WindManager_C", "Add Wind Component");

	Params::AWindManager_C_Add_Wind_Component_Params Parms;
	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWindManager_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("WindManager_C", "ReceiveBeginPlay");

	Params::AWindManager_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.Update Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMagnitude                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWindManager_C::Update_Test(float NewMagnitude)
{
	static auto Func = Class->GetFunction("WindManager_C", "Update Test");

	Params::AWindManager_C_Update_Test_Params Parms;
	Parms.NewMagnitude = NewMagnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortStaticMeshActor*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_InTransform                                   (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_CustomEvent_Player_Pawn_Generic                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaticMeshMaterialArrayComboCallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterMeshAssetsToReplace   CallFunc_Array_Get_Item4                                         (HasGetValueTypeHash)
// struct FWaterMeshAssetsToReplace   CallFunc_Array_Get_Item5                                         (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortStaticMeshActor*        CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaticMeshMaterialArrayComboK2Node_MakeStruct_StaticMeshMaterialArrayCombo                   (HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Calculate_Camera_Position_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlowMapMaterials           CallFunc_Array_Get_Item7                                         (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_Event_ParticleSystemComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder3                                (ConstParm, NoDestructor)
// struct FFortWindImpulseCylinderDeltaK2Node_Event_WindImpulseCylinderDelta                            (ConstParm, NoDestructor)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder2                                (ConstParm, NoDestructor)
// struct FFortWindImpulseCylinder    K2Node_Event_WindImpulseCylinder                                 (ConstParm, NoDestructor)
// float                              CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetGlobalWindIntensityAndDirection_WindDirection        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetWindMatVariables_NewParam                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ImpulseMagnitude                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_Particle_Transform                            (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_InComponent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMagnitude                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortWindImpulseCylinder    CallFunc_MakeWindImpulseCylinder_ReturnValue                     (NoDestructor)
// struct FFortWindImpulseHandle      CallFunc_AddWindImpulseCylinder_ReturnValue                      (NoDestructor)
// bool                               CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWindManager_C::ExecuteUbergraph_WindManager(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue2, TArray<class AFortStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_InTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FTransform& Temp_struct_Variable, class AActor* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerPawn_Generic_C* K2Node_CustomEvent_Player_Pawn_Generic, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_True_if_break_was_hit_Variable2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable4, class UStaticMesh* Temp_object_Variable, const struct FStaticMeshMaterialArrayCombo& CallFunc_Array_Get_Item2, class UMaterialInterface* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue3, int32 Temp_int_Loop_Counter_Variable4, bool CallFunc_IsDedicatedServer_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item4, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue4, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, int32 Temp_int_Array_Index_Variable5, const struct FVector& CallFunc_MakeVector_ReturnValue, class AFortStaticMeshActor* CallFunc_Array_Get_Item6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue7, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue8, const struct FStaticMeshMaterialArrayCombo& K2Node_MakeStruct_StaticMeshMaterialArrayCombo, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue2, float CallFunc_FMax_ReturnValue3, float CallFunc_FMin_ReturnValue2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 Temp_int_Loop_Counter_Variable5, const struct FVector& CallFunc_Calculate_Camera_Position_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue5, int32 Temp_int_Array_Index_Variable6, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, float CallFunc_BreakVector_X6, float CallFunc_BreakVector_Y6, float CallFunc_BreakVector_Z6, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, const struct FFlowMapMaterials& CallFunc_Array_Get_Item7, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue6, int32 Temp_int_Array_Index_Variable7, int32 Temp_int_Loop_Counter_Variable6, class UParticleSystemComponent* K2Node_Event_ParticleSystemComponent, bool CallFunc_Less_IntInt_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue6, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder3, const struct FFortWindImpulseCylinderDelta& K2Node_Event_WindImpulseCylinderDelta, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder2, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder, float CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity, const struct FVector& CallFunc_GetGlobalWindIntensityAndDirection_WindDirection, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, bool CallFunc_SetWindMatVariables_NewParam, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ImpulseMagnitude, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& K2Node_CustomEvent_Particle_Transform, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable7, bool CallFunc_Less_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue7, float CallFunc_MakeLiteralFloat_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_InComponent, const struct FVector& CallFunc_MakeVector_ReturnValue3, float K2Node_CustomEvent_NewMagnitude, const struct FFortWindImpulseCylinder& CallFunc_MakeWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulseCylinder_ReturnValue, bool CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue, int32 Temp_int_Loop_Counter_Variable8, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue8, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue3, int32 Temp_int_Array_Index_Variable8, class UStaticMeshComponent* CallFunc_Array_Get_Item8, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("WindManager_C", "ExecuteUbergraph_WindManager");

	Params::AWindManager_C_ExecuteUbergraph_WindManager_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_EmitterTemplate = K2Node_CustomEvent_EmitterTemplate;
	Parms.K2Node_CustomEvent_InTransform = K2Node_CustomEvent_InTransform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Player_Pawn_Generic = K2Node_CustomEvent_Player_Pawn_Generic;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable2 = Temp_bool_True_if_break_was_hit_Variable2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_Length_ReturnValue6 = CallFunc_Array_Length_ReturnValue6;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue2 = CallFunc_Abs_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X3 = CallFunc_BreakVector2D_X3;
	Parms.CallFunc_BreakVector2D_Y3 = CallFunc_BreakVector2D_Y3;
	Parms.Temp_int_Array_Index_Variable5 = Temp_int_Array_Index_Variable5;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue7 = CallFunc_Array_Length_ReturnValue7;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue8 = CallFunc_Array_Length_ReturnValue8;
	Parms.K2Node_MakeStruct_StaticMeshMaterialArrayCombo = K2Node_MakeStruct_StaticMeshMaterialArrayCombo;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue2 = CallFunc_FMax_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue3 = CallFunc_FMax_ReturnValue3;
	Parms.CallFunc_FMin_ReturnValue2 = CallFunc_FMin_ReturnValue2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable5 = Temp_int_Loop_Counter_Variable5;
	Parms.CallFunc_Calculate_Camera_Position_ReturnValue = CallFunc_Calculate_Camera_Position_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue5 = CallFunc_Less_IntInt_ReturnValue5;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_int_Array_Index_Variable6 = Temp_int_Array_Index_Variable6;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_BreakVector_X6 = CallFunc_BreakVector_X6;
	Parms.CallFunc_BreakVector_Y6 = CallFunc_BreakVector_Y6;
	Parms.CallFunc_BreakVector_Z6 = CallFunc_BreakVector_Z6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue4 = CallFunc_Greater_FloatFloat_ReturnValue4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue5 = CallFunc_Greater_FloatFloat_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue6 = CallFunc_Greater_FloatFloat_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.Temp_int_Array_Index_Variable7 = Temp_int_Array_Index_Variable7;
	Parms.Temp_int_Loop_Counter_Variable6 = Temp_int_Loop_Counter_Variable6;
	Parms.K2Node_Event_ParticleSystemComponent = K2Node_Event_ParticleSystemComponent;
	Parms.CallFunc_Less_IntInt_ReturnValue6 = CallFunc_Less_IntInt_ReturnValue6;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.K2Node_Event_WindImpulseCylinder3 = K2Node_Event_WindImpulseCylinder3;
	Parms.K2Node_Event_WindImpulseCylinderDelta = K2Node_Event_WindImpulseCylinderDelta;
	Parms.K2Node_Event_WindImpulseCylinder2 = K2Node_Event_WindImpulseCylinder2;
	Parms.K2Node_Event_WindImpulseCylinder = K2Node_Event_WindImpulseCylinder;
	Parms.CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity = CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity;
	Parms.CallFunc_GetGlobalWindIntensityAndDirection_WindDirection = CallFunc_GetGlobalWindIntensityAndDirection_WindDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation = CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius = CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude = CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds = CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging;
	Parms.CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending = CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match;
	Parms.CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index = CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index;
	Parms.CallFunc_SetWindMatVariables_NewParam = CallFunc_SetWindMatVariables_NewParam;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_ImpulseMagnitude = K2Node_CustomEvent_ImpulseMagnitude;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Particle_Transform = K2Node_CustomEvent_Particle_Transform;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable7 = Temp_int_Loop_Counter_Variable7;
	Parms.CallFunc_Less_IntInt_ReturnValue7 = CallFunc_Less_IntInt_ReturnValue7;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_CustomEvent_InComponent = K2Node_CustomEvent_InComponent;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.K2Node_CustomEvent_NewMagnitude = K2Node_CustomEvent_NewMagnitude;
	Parms.CallFunc_MakeWindImpulseCylinder_ReturnValue = CallFunc_MakeWindImpulseCylinder_ReturnValue;
	Parms.CallFunc_AddWindImpulseCylinder_ReturnValue = CallFunc_AddWindImpulseCylinder_ReturnValue;
	Parms.CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue = CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable8 = Temp_int_Loop_Counter_Variable8;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue8 = CallFunc_Less_IntInt_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_MakeLiteralName_ReturnValue3 = CallFunc_MakeLiteralName_ReturnValue3;
	Parms.Temp_int_Array_Index_Variable8 = Temp_int_Array_Index_Variable8;
	Parms.CallFunc_Array_Get_Item8 = CallFunc_Array_Get_Item8;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item9 = CallFunc_Array_Get_Item9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

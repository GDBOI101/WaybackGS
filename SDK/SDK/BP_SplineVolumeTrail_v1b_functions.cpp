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


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::UpdateCheapSplinesWPOVectors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "UpdateCheapSplinesWPOVectors");

	Params::ABP_SplineVolumeTrail_v1b_C_UpdateCheapSplinesWPOVectors_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue2 = CallFunc_GetLocationAtSplinePoint_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Socket_Name                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationWS                                                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::GetSocketLocationWS(class FName Socket_Name, struct FVector* LocationWS, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "GetSocketLocationWS");

	Params::ABP_SplineVolumeTrail_v1b_C_GetSocketLocationWS_Params Parms;
	Parms.Socket_Name = Socket_Name;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationWS != nullptr)
		*LocationWS = Parms.LocationWS;

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Update_All_Spline_Meshes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SetStartAndEndAllSplineMeshes");

	Params::ABP_SplineVolumeTrail_v1b_C_SetStartAndEndAllSplineMeshes_Params Parms;
	Parms.Update_All_Spline_Meshes = Update_All_Spline_Meshes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::DestroyAllSplineMeshes(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class USplineMeshComponent* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "DestroyAllSplineMeshes");

	Params::ABP_SplineVolumeTrail_v1b_C_DestroyAllSplineMeshes_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveLinearColor*           Curve_Linear_Color                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Pixel__X_                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColorOut                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int32 Pixel__X_, struct FLinearColor* LinearColorOut, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "BakeLinearColor");

	Params::ABP_SplineVolumeTrail_v1b_C_BakeLinearColor_Params Parms;
	Parms.Curve_Linear_Color = Curve_Linear_Color;
	Parms.Pixel__X_ = Pixel__X_;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColorOut != nullptr)
		*LinearColorOut = Parms.LinearColorOut;

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*        SplineMesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToRemove                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int32 IndexToRemove, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ReturnSplineMeshToPool");

	Params::ABP_SplineVolumeTrail_v1b_C_ReturnSplineMeshToPool_Params Parms;
	Parms.SplineMesh = SplineMesh;
	Parms.IndexToRemove = IndexToRemove;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddSplineDistanceCheck_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::SplineUpdateOnTick(int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_AddSplineDistanceCheck_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Variable, int32 K2Node_Select_Default, class USplineMeshComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class USplineMeshComponent* CallFunc_Array_Get_Item3)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SplineUpdateOnTick");

	Params::ABP_SplineVolumeTrail_v1b_C_SplineUpdateOnTick_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_AddSplineDistanceCheck_ReturnValue = CallFunc_AddSplineDistanceCheck_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtTime_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::RedistributePointsAlongSpline(int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtTime_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "RedistributePointsAlongSpline");

	Params::ABP_SplineVolumeTrail_v1b_C_RedistributePointsAlongSpline_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLocationAtTime_ReturnValue = CallFunc_GetLocationAtTime_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveLinearColor*           Curve_Linear_Color                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColorOut                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int32 Index, struct FLinearColor* LinearColorOut, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float K2Node_Select_Default, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "GetLinearColorFromCurveAtTime");

	Params::ABP_SplineVolumeTrail_v1b_C_GetLinearColorFromCurveAtTime_Params Parms;
	Parms.Curve_Linear_Color = Curve_Linear_Color;
	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColorOut != nullptr)
		*LinearColorOut = Parms.LinearColorOut;

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::TickIntervalLODCheck(bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS, bool CallFunc_Not_PreBool_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Array_Get_Item2, int32 CallFunc_Array_Get_Item3, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, int32 K2Node_Select_Default, int32 CallFunc_Array_Get_Item4, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "TickIntervalLODCheck");

	Params::ABP_SplineVolumeTrail_v1b_C_TickIntervalLODCheck_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::SetWasRecentlyRendered(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SetWasRecentlyRendered");

	Params::ABP_SplineVolumeTrail_v1b_C_SetWasRecentlyRendered_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_SplineVolumeTrail_v1b_C::AddSplineDistanceCheck(bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "AddSplineDistanceCheck");

	Params::ABP_SplineVolumeTrail_v1b_C_AddSplineDistanceCheck_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue2 = CallFunc_GetLocationAtSplinePoint_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::SetNewSplinePointsBool(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SetNewSplinePointsBool");

	Params::ABP_SplineVolumeTrail_v1b_C_SetNewSplinePointsBool_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*        SplineMesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SetForwardAxisOnSplineMesh");

	Params::ABP_SplineVolumeTrail_v1b_C_SetForwardAxisOnSplineMesh_Params Parms;
	Parms.SplineMesh = SplineMesh;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::RollSplineMesh(float CallFunc_GetGameTimeInSeconds_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Array_Get_Item, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Array_Get_Item2, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select2_Default, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue2, float CallFunc_GetFloatValue_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "RollSplineMesh");

	Params::ABP_SplineVolumeTrail_v1b_C_RollSplineMesh_Params Parms;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue2 = CallFunc_Array_IsValidIndex_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.CallFunc_GetFloatValue_ReturnValue2 = CallFunc_GetFloatValue_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SplineVolumeTrail_v1b_C::UpdateParticleSystemPosition(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "UpdateParticleSystemPosition");

	Params::ABP_SplineVolumeTrail_v1b_C_UpdateParticleSystemPosition_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::UpdateMID(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut, const struct FLinearColor& CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "UpdateMID");

	Params::ABP_SplineVolumeTrail_v1b_C_UpdateMID_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut = CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut;
	Parms.CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2 = CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue2                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::ScaleSplineMesh(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut, const struct FLinearColor& CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ScaleSplineMesh");

	Params::ABP_SplineVolumeTrail_v1b_C_ScaleSplineMesh_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut = CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut;
	Parms.CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2 = CallFunc_GetLinearColorFromCurveAtTime_LinearColorOut2;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue2 = CallFunc_Multiply_Vector2DFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::SplineTimestampManagement(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Lerp_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class USplineMeshComponent* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, float CallFunc_Array_Get_Item3, float CallFunc_Subtract_FloatFloat_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SplineTimestampManagement");

	Params::ABP_SplineVolumeTrail_v1b_C_SplineTimestampManagement_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::UpdateSplinePointPosition(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "UpdateSplinePointPosition");

	Params::ABP_SplineVolumeTrail_v1b_C_UpdateSplinePointPosition_Params Parms;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::AddSplinePoint(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "AddSplinePoint");

	Params::ABP_SplineVolumeTrail_v1b_C_AddSplinePoint_Params Parms;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Update_Spline_Mesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Location             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Tangent              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Location2            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Tangent2             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::SetStartAndEndSplineMesh(bool Update_Spline_Mesh, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location2, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent2)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SetStartAndEndSplineMesh");

	Params::ABP_SplineVolumeTrail_v1b_C_SetStartAndEndSplineMesh_Params Parms;
	Parms.Update_Spline_Mesh = Update_Spline_Mesh;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Location = CallFunc_GetLocationAndTangentAtSplinePoint_Location;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent = CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Location2 = CallFunc_GetLocationAndTangentAtSplinePoint_Location2;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent2 = CallFunc_GetLocationAndTangentAtSplinePoint_Tangent2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue3                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::AddSplineMesh(bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue3, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FTransform& Temp_struct_Variable, int32 CallFunc_Array_LastIndex_ReturnValue2, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue4, float CallFunc_Array_Get_Item2, float CallFunc_Array_Get_Item3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, class UMaterialInterface* K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "AddSplineMesh");

	Params::ABP_SplineVolumeTrail_v1b_C_AddSplineMesh_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue2 = CallFunc_GetLocationAtSplinePoint_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue3 = CallFunc_Conv_VectorToLinearColor_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue4 = CallFunc_Subtract_IntInt_ReturnValue4;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue2 = CallFunc_GetNumberOfSplinePoints_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue5 = CallFunc_Subtract_IntInt_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USplineComponent*            CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESplineCoordinateSpace  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESplineCoordinateSpace  Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESplineCoordinateSpace  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, class USplineComponent* CallFunc_AddComponent_ReturnValue, enum class ESplineCoordinateSpace Temp_byte_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, enum class ESplineCoordinateSpace Temp_byte_Variable2, bool Temp_bool_Variable, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2, enum class ESplineCoordinateSpace K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_Array_Add_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "UserConstructionScript");

	Params::ABP_SplineVolumeTrail_v1b_C_UserConstructionScript_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "DebugRotateTimeline__FinishedFunc");

	Params::ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "DebugRotateTimeline__UpdateFunc");

	Params::ABP_SplineVolumeTrail_v1b_C_DebugRotateTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineVolumeTrail_v1b_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ReceiveTick");

	Params::ABP_SplineVolumeTrail_v1b_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ReceiveBeginPlay");

	Params::ABP_SplineVolumeTrail_v1b_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::SplineSystemDurationReached()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "SplineSystemDurationReached");

	Params::ABP_SplineVolumeTrail_v1b_C_SplineSystemDurationReached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::DebugMode_Rotate()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "DebugMode_Rotate");

	Params::ABP_SplineVolumeTrail_v1b_C_DebugMode_Rotate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::ManuallyStopSplineSystem()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ManuallyStopSplineSystem");

	Params::ABP_SplineVolumeTrail_v1b_C_ManuallyStopSplineSystem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Check()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "Tick Interval LOD Check");

	Params::ABP_SplineVolumeTrail_v1b_C_Tick_Interval_LOD_Check_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Check()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "Recently Rendered Check");

	Params::ABP_SplineVolumeTrail_v1b_C_Recently_Rendered_Check_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::ClearRenderTarget()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ClearRenderTarget");

	Params::ABP_SplineVolumeTrail_v1b_C_ClearRenderTarget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineVolumeTrail_v1b_C::GenerateCurveTextures()
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "GenerateCurveTextures");

	Params::ABP_SplineVolumeTrail_v1b_C_GenerateCurveTextures_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocationWS_LocationWS                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue3                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_BakeLinearColor_LinearColorOut                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineVolumeTrail_v1b_C::ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue4, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocationWS_LocationWS, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable2, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UCurveLinearColor* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_BakeLinearColor_LinearColorOut, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Multiply_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_Multiply_IntInt_ReturnValue3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue4, float CallFunc_Conv_IntToFloat_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, int32 CallFunc_FTrunc_ReturnValue2, int32 CallFunc_Multiply_IntInt_ReturnValue4, int32 CallFunc_FTrunc_ReturnValue3, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, int32 CallFunc_FTrunc_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_SplineVolumeTrail_v1b_C", "ExecuteUbergraph_BP_SplineVolumeTrail_v1b");

	Params::ABP_SplineVolumeTrail_v1b_C_ExecuteUbergraph_BP_SplineVolumeTrail_v1b_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue4 = CallFunc_GetGameTimeInSeconds_ReturnValue4;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocationWS_LocationWS = CallFunc_GetSocketLocationWS_LocationWS;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue5 = CallFunc_GetGameTimeInSeconds_ReturnValue5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue3 = CallFunc_K2_SetTimerDelegate_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BakeLinearColor_LinearColorOut = CallFunc_BakeLinearColor_LinearColorOut;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Multiply_IntInt_ReturnValue2 = CallFunc_Multiply_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_IntInt_ReturnValue3 = CallFunc_Multiply_IntInt_ReturnValue3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue5 = CallFunc_Conv_IntToFloat_ReturnValue5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue6 = CallFunc_Conv_IntToFloat_ReturnValue6;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue2 = CallFunc_FTrunc_ReturnValue2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue4 = CallFunc_Multiply_IntInt_ReturnValue4;
	Parms.CallFunc_FTrunc_ReturnValue3 = CallFunc_FTrunc_ReturnValue3;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X3 = CallFunc_BreakVector2D_X3;
	Parms.CallFunc_BreakVector2D_Y3 = CallFunc_BreakVector2D_Y3;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_FTrunc_ReturnValue4 = CallFunc_FTrunc_ReturnValue4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

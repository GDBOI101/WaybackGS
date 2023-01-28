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


// Function WeakSpot.WeakSpot_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USoundBase*>          K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWeakSpot_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class USoundBase*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("WeakSpot_C", "UserConstructionScript");

	Params::AWeakSpot_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWeakSpot_C::ScaleDownParticleTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "ScaleDownParticleTL__FinishedFunc");

	Params::AWeakSpot_C_ScaleDownParticleTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWeakSpot_C::ScaleDownParticleTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "ScaleDownParticleTL__UpdateFunc");

	Params::AWeakSpot_C_ScaleDownParticleTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.OnHitCrack
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeakSpot_C::OnHitCrack()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "OnHitCrack");

	Params::AWeakSpot_C_OnHitCrack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.OnStartDirectionEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeakSpot_C::OnStartDirectionEffect()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "OnStartDirectionEffect");

	Params::AWeakSpot_C_OnStartDirectionEffect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.OnFadeOut
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeakSpot_C::OnFadeOut()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "OnFadeOut");

	Params::AWeakSpot_C_OnFadeOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.HideMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeakSpot_C::HideMesh()
{
	static auto Func = Class->GetFunction("WeakSpot_C", "HideMesh");

	Params::AWeakSpot_C_HideMesh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeakSpot_C::ExecuteUbergraph_WeakSpot(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float Temp_float_Variable, float K2Node_Select_Default, int32 CallFunc_Array_LastIndex_ReturnValue, float Temp_float_Variable2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, class USoundBase* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2)
{
	static auto Func = Class->GetFunction("WeakSpot_C", "ExecuteUbergraph_WeakSpot");

	Params::AWeakSpot_C_ExecuteUbergraph_WeakSpot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

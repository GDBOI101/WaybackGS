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


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ShouldPlayPostProcess
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AB_Prj_Pumpkin_RPG_Athena_C::ShouldPlayPostProcess(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "ShouldPlayPostProcess");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_ShouldPlayPostProcess_Params Parms;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Pumpkin_RPG_Athena_C::UserConstructionScript(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "UserConstructionScript");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Pumpkin_RPG_Athena_C::PPFader__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "PPFader__FinishedFunc");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_PPFader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Pumpkin_RPG_Athena_C::PPFader__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "PPFader__UpdateFunc");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_PPFader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Pumpkin_RPG_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "ReceiveTick");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              HitActors                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          HitResults                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Pumpkin_RPG_Athena_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "OnExploded");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_OnExploded_Params Parms;
	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Pumpkin_RPG_Athena_C::FuseTimerMax()
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "FuseTimerMax");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_FuseTimerMax_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Pumpkin_RPG_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "ReceiveBeginPlay");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Pumpkin_RPG_Athena_C::OnStop(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "OnStop");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_OnStop_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Pumpkin_RPG_Athena_C::OnBounce(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "OnBounce");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_OnBounce_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Prj_Pumpkin_RPG_Athena_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "ReceiveDestroyed");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_Event_HitActors                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          K2Node_Event_HitResults                                          (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingKilled_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FHitResult                  K2Node_Event_Hit2                                                (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_ShouldPlayPostProcess_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Pumpkin_RPG_Athena_C::ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool CallFunc_IsDedicatedServer_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsBeingKilled_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FHitResult& K2Node_Event_Hit2, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_ShouldPlayPostProcess_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue3)
{
	static auto Func = Class->GetFunction("B_Prj_Pumpkin_RPG_Athena_C", "ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena");

	Params::AB_Prj_Pumpkin_RPG_Athena_C_ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_HitActors = K2Node_Event_HitActors;
	Parms.K2Node_Event_HitResults = K2Node_Event_HitResults;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsBeingKilled_ReturnValue = CallFunc_IsBeingKilled_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_Hit2 = K2Node_Event_Hit2;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_ShouldPlayPostProcess_ReturnValue = CallFunc_ShouldPlayPostProcess_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue3 = CallFunc_SpawnEmitterAtLocation_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

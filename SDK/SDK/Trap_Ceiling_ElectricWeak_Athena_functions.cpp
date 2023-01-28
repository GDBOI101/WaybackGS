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


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.GetFireLocationAndRotation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

struct FTransform ATrap_Ceiling_ElectricWeak_Athena_C::GetFireLocationAndRotation(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "GetFireLocationAndRotation");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_GetFireLocationAndRotation_Params Parms;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Ceiling_ElectricWeak_Athena_C::UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "UserConstructionScript");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::ScaleOutLight__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "ScaleOutLight__FinishedFunc");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_ScaleOutLight__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::ScaleOutLight__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "ScaleOutLight__UpdateFunc");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_ScaleOutLight__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::OnPlaced()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "OnPlaced");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_OnPlaced_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::OnFinishedBuilding()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "OnFinishedBuilding");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_OnFinishedBuilding_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::OnReloadEnd()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "OnReloadEnd");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_OnReloadEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void ATrap_Ceiling_ElectricWeak_Athena_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::OnOutOfDurability()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "OnOutOfDurability");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_OnOutOfDurability_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_ElectricWeak_Athena_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "OnWorldReady");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue4                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam2                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam3                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam4                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam5                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam6                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam7                              (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Ceiling_ElectricWeak_Athena_C::ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam6, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam7, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, float Temp_float_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_ElectricWeak_Athena_C", "ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena");

	Params::ATrap_Ceiling_ElectricWeak_Athena_C_ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue3 = CallFunc_Multiply_VectorVector_ReturnValue3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue4 = CallFunc_Multiply_VectorVector_ReturnValue4;
	Parms.K2Node_MakeStruct_ParticleSysParam2 = K2Node_MakeStruct_ParticleSysParam2;
	Parms.K2Node_MakeStruct_ParticleSysParam3 = K2Node_MakeStruct_ParticleSysParam3;
	Parms.K2Node_MakeStruct_ParticleSysParam4 = K2Node_MakeStruct_ParticleSysParam4;
	Parms.K2Node_MakeStruct_ParticleSysParam5 = K2Node_MakeStruct_ParticleSysParam5;
	Parms.K2Node_MakeStruct_ParticleSysParam6 = K2Node_MakeStruct_ParticleSysParam6;
	Parms.K2Node_MakeStruct_ParticleSysParam7 = K2Node_MakeStruct_ParticleSysParam7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

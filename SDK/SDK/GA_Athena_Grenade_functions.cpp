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


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ThrowAthenaGrenade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewParam                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Grenade_C::ThrowAthenaGrenade(struct FVector* NewParam, struct FRotator* Rotation, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "ThrowAthenaGrenade");

	Params::UGA_Athena_Grenade_C_ThrowAthenaGrenade_Params Parms;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Completed_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Grenade_C::Completed_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Completed_6845367B4931B42A6C8BF6A6664F2203");

	Params::UGA_Athena_Grenade_C_Completed_6845367B4931B42A6C8BF6A6664F2203_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Cancelled_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Grenade_C::Cancelled_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Cancelled_6845367B4931B42A6C8BF6A6664F2203");

	Params::UGA_Athena_Grenade_C_Cancelled_6845367B4931B42A6C8BF6A6664F2203_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Triggered_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Grenade_C::Triggered_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Triggered_6845367B4931B42A6C8BF6A6664F2203");

	Params::UGA_Athena_Grenade_C_Triggered_6845367B4931B42A6C8BF6A6664F2203_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Destroyed_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Destroyed_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Destroyed_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Destroyed_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Exploded_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Exploded_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Exploded_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Exploded_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Stopped_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Stopped_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Stopped_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Stopped_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Bounced_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Bounced_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Bounced_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Bounced_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Touched_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Touched_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Touched_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Touched_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Created_9688DEB14FA370B967517191C2B710DA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_Grenade_C::Created_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "Created_9688DEB14FA370B967517191C2B710DA");

	Params::UGA_Athena_Grenade_C_Created_9688DEB14FA370B967517191C2B710DA_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Grenade_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "K2_ActivateAbility");

	Params::UGA_Athena_Grenade_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ExecuteUbergraph_GA_Athena_Grenade
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData6                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData5                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData4                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData3                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData2                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData                                (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        Temp_struct_Variable3                                            (ContainsInstancedReference)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAimLocationNearestPawn_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ThrowAthenaGrenade_NewParam                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ThrowAthenaGrenade_Rotation                             (IsPlainOldData, NoDestructor)
// class UFortAbilityTask_SpawnProjectileAndWait*CallFunc_SpawnProjectileAndWait_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// class AFortProjectileBase*         CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)

void UGA_Athena_Grenade_C::ExecuteUbergraph_GA_Athena_Grenade(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FProjectileEventData& Temp_struct_Variable3, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FVector& CallFunc_GetAimLocationNearestPawn_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_ThrowAthenaGrenade_NewParam, const struct FRotator& CallFunc_ThrowAthenaGrenade_Rotation, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_K2_CommitAbility_ReturnValue2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9)
{
	static auto Func = Class->GetFunction("GA_Athena_Grenade_C", "ExecuteUbergraph_GA_Athena_Grenade");

	Params::UGA_Athena_Grenade_C_ExecuteUbergraph_GA_Athena_Grenade_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CustomEvent_ProjectileData6 = K2Node_CustomEvent_ProjectileData6;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_ProjectileData5 = K2Node_CustomEvent_ProjectileData5;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_ProjectileData4 = K2Node_CustomEvent_ProjectileData4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CustomEvent_ProjectileData3 = K2Node_CustomEvent_ProjectileData3;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CustomEvent_ProjectileData2 = K2Node_CustomEvent_ProjectileData2;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_ProjectileData = K2Node_CustomEvent_ProjectileData;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.CallFunc_GetAimLocationNearestPawn_ReturnValue = CallFunc_GetAimLocationNearestPawn_ReturnValue;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ThrowAthenaGrenade_NewParam = CallFunc_ThrowAthenaGrenade_NewParam;
	Parms.CallFunc_ThrowAthenaGrenade_Rotation = CallFunc_ThrowAthenaGrenade_Rotation;
	Parms.CallFunc_SpawnProjectileAndWait_ReturnValue = CallFunc_SpawnProjectileAndWait_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_CommitAbility_ReturnValue2 = CallFunc_K2_CommitAbility_ReturnValue2;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

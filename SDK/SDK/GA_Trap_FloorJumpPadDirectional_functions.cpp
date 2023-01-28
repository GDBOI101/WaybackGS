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


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorJumpPadDirectional_C::Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0");

	Params::UGA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorJumpPadDirectional_C::Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "Targeted_9399FB2A485BD9AC6632A4B347C4BBE0");

	Params::UGA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Trap_FloorJumpPadDirectional_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "K2_ActivateAbility");

	Params::UGA_Trap_FloorJumpPadDirectional_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LaunchRotation                                                   (Parm, IsPlainOldData, NoDestructor)
// struct FTransform                  TrapTransform                                                    (Parm, IsPlainOldData, NoDestructor)

void UGA_Trap_FloorJumpPadDirectional_C::PlayPlayerFX(class AFortPlayerPawn* Player, const struct FRotator& LaunchRotation, const struct FTransform& TrapTransform)
{
	static auto Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "PlayPlayerFX");

	Params::UGA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX_Params Parms;
	Parms.Player = Player;
	Parms.LaunchRotation = LaunchRotation;
	Parms.TrapTransform = TrapTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              ()
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTrapLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageDelay_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFireDelay_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_LaunchRotation                                (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_CustomEvent_TrapTransform                                 (IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetActorsFromTargetData_ReturnValue                     (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetDataCountFromTargetData_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_WaitTargetSelection*CallFunc_WaitTargetSelection_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable                                             ()
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UGA_Trap_FloorJumpPadDirectional_C::ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, int32 CallFunc_GetAbilityLevel_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDedicatedServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerPawn* K2Node_CustomEvent_Player, const struct FRotator& K2Node_CustomEvent_LaunchRotation, const struct FTransform& K2Node_CustomEvent_TrapTransform, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess3, const struct FVector& CallFunc_TransformDirection_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue2, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayTag& Temp_struct_Variable2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AActor* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional");

	Params::UGA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Trap = K2Node_DynamicCast_AsBuilding_Trap;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTrapLevel_ReturnValue = CallFunc_GetTrapLevel_ReturnValue;
	Parms.CallFunc_GetDamageDelay_ReturnValue = CallFunc_GetDamageDelay_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_GetFireDelay_ReturnValue = CallFunc_GetFireDelay_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue2 = CallFunc_GetOwningActorFromActorInfo_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBuilding_Trap2 = K2Node_DynamicCast_AsBuilding_Trap2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_LaunchRotation = K2Node_CustomEvent_LaunchRotation;
	Parms.K2Node_CustomEvent_TrapTransform = K2Node_CustomEvent_TrapTransform;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue2 = CallFunc_DoesSocketExist_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetActorsFromTargetData_ReturnValue = CallFunc_GetActorsFromTargetData_ReturnValue;
	Parms.CallFunc_GetDataCountFromTargetData_ReturnValue = CallFunc_GetDataCountFromTargetData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitTargetSelection_ReturnValue = CallFunc_WaitTargetSelection_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

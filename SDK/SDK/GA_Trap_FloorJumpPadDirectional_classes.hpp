#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xAD8 - 0xA70)
// BlueprintGeneratedClass GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C
class UGA_Trap_FloorJumpPadDirectional_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(Transient, DuplicateTransient)
	float                                        LaunchPitch;                                       // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchStrength;                                    // 0xA7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  LaunchForceFeedback;                               // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LaunchedPlayer;                                    // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_LaunchTag;                                      // 0xA90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_PlayerLaunched;                                 // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        OverlappingTargets;                                // 0xAA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                GE_TrapImmunity;                                   // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Trap_FloorJumpPadDirectional_C");
		return Clss;
	}

	void Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void PlayPlayerFX(class AFortPlayerPawn* Player, const struct FRotator& LaunchRotation, const struct FTransform& TrapTransform);
	void ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, int32 CallFunc_GetAbilityLevel_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDedicatedServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerPawn* K2Node_CustomEvent_Player, const struct FRotator& K2Node_CustomEvent_LaunchRotation, const struct FTransform& K2Node_CustomEvent_TrapTransform, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess3, const struct FVector& CallFunc_TransformDirection_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue2, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayTag& Temp_struct_Variable2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AActor* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

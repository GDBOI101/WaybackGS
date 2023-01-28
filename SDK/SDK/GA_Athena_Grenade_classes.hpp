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

// 0x208 (0xC48 - 0xA40)
// BlueprintGeneratedClass GA_Athena_Grenade.GA_Athena_Grenade_C
class UGA_Athena_Grenade_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class UClass*                                Prj_Athena_Grenade;                                // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             PlayerPawn;                                        // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TransformOffsetA1;                                 // 0xA58(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TransformOffsetB1;                                 // 0xA64(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NegHorizontalSpread1;                              // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PosHorizontalSpread1;                              // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0xA78(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialSpeed;                                      // 0xA84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Athena_Grenade_Gravity;                            // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StartRotation;                                     // 0xA8C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          EventComplete;                                     // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventActivation;                                   // 0xAA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortAbilityTargetSelection           T_Explosion;                                       // 0xAA8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            ActivationSound;                                   // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0xB10(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Vertical_Throw;                                    // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anm_PlayRate;                                      // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_Explode_Return;                                 // 0xBC0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_Explode;                                        // 0xC40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Grenade_C");
		return Clss;
	}

	void ThrowAthenaGrenade(struct FVector* NewParam, struct FRotator* Rotation, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue);
	void Completed_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6845367B4931B42A6C8BF6A6664F2203(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Destroyed_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void Exploded_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void Stopped_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void Bounced_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void Touched_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void Created_9688DEB14FA370B967517191C2B710DA(struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Grenade(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FProjectileEventData& Temp_struct_Variable3, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FVector& CallFunc_GetAimLocationNearestPawn_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_ThrowAthenaGrenade_NewParam, const struct FRotator& CallFunc_ThrowAthenaGrenade_Rotation, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_K2_CommitAbility_ReturnValue2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

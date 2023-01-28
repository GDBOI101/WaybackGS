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

// 0xD9 (0xB19 - 0xA40)
// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_TransferKnockback;                              // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockbackActive;                                // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockbackPropagationThreshold;                     // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          KnockbackUpMontage;                                // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackUpMontageSection;                         // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackDownMontage;                              // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackDownMontageSection;                       // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandMontage;                              // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandMontageSection;                       // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandToIdleMontage;                        // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToIdleMontageSection;                 // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandToStunMontage;                        // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToStunMontageSection;                 // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0xAB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugNumbers;                                      // 0xAB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugForceKnockbackValues;                         // 0xAB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bOrientToImpulse;                                  // 0xAB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle           ActiveKnockback;                                   // 0xAB4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OrientDirection;                                   // 0xABC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitDirection;                                      // 0xAC8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpulseDirectionVelocityOrRotation;                // 0xAD4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DebugLastLocation;                                 // 0xAE0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3450[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TC_NPCStatusLockedInPlace;                         // 0xAF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LockedInPlaceKnockbackAngle;                       // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LockedInPlaceKnockbackMagnitude;                   // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_RestoreControlResistance;                       // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasImpactImmunity;                                // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyKnockback_C");
		return Clss;
	}

	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void K2_OnEndAbility();
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void OnPawnLanded(struct FHitResult& Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void DebugLine();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, bool CallFunc_IsValid_ReturnValue3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue3, bool CallFunc_IsFalling_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue5, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue6, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue4, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue7, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue7, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue8, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue9, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue10, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue4, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue5, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue3, bool CallFunc_IsValid_ReturnValue10, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue14, const struct FVector& CallFunc_Normal_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_VSize_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, const struct FGameplayEventData& K2Node_Event_EventData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, float CallFunc_VSize_ReturnValue3, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue2, float CallFunc_SelectFloat_ReturnValue2, const struct FVector& CallFunc_SelectVector_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

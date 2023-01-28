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

// 0x98 (0xB08 - 0xA70)
// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          TakerSoulSuckVictimMontage;                        // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_GT_NPCAbilityAttackMeleeSoulSuck;               // 0xA80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityAttackMeleeSoulSuckRelease;           // 0xA88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_NPCAbilityAttackMeleeSoulSuck;                  // 0xA90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                             PlayerPawn;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SoulSuckMontageSection;                            // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SoulSuckCurrentMontageSection;                     // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SoulSuckGoalActorNormalizedHealth;                 // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortFeedbackHandle                   StunFeedbackEvent;                                 // 0xAD0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                SoulSuckCameraShake;                               // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimInst*                       SoulSuckCameraAnimInst;                            // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     PlayerController;                                  // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_Stunned_C");
		return Clss;
	}

	void Completed_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ResetSoulSuckLift();
	void SoulSuckCheck();
	void ResetSoulSuckRelease();
	void SoulSuckEndCheck();
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AController* CallFunc_GetController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_IsValid_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, class FName K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue5, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable2, bool Temp_bool_Has_Been_Initd_Variable2, const struct FGameplayTag& Temp_struct_Variable2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue6, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UFortAbilityTask_SetNextMontageSectionAndWait* CallFunc_SetNextMontageSectionAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue2, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self2_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue3, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self3_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

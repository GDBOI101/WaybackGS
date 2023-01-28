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

// 0xE8 (0xB28 - 0xA40)
// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          DeathMontage;                                      // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeathHitDirection;                                 // 0xA50(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            DeathHitResult;                                    // 0xA60(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                 DamageTags;                                        // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayStatusAfflicted;                           // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AthenaDBNO_C");
		return Clss;
	}

	void GetInitialHealAmount(float* Health, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, float CallFunc_GetInitialHealAmount_Health, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

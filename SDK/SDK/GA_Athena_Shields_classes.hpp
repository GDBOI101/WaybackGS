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

// 0x90 (0xAD0 - 0xA40)
// BlueprintGeneratedClass GA_Athena_Shields.GA_Athena_Shields_C
class UGA_Athena_Shields_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo       AnimMontageInfo;                                   // 0xA48(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              SpawnHeading;                                      // 0xAA8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2775[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Projectile;                                        // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShieldingAmount;                                   // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggerDuration;                                   // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Shields_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetShield_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Completed_8143D5814CB74D956510E191077DBB83(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8143D5814CB74D956510E191077DBB83(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_8143D5814CB74D956510E191077DBB83(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Shields(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue2, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, float CallFunc_GetShield_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

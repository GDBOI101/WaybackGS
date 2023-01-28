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

// 0x30 (0xA70 - 0xA40)
// BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C
class UGA_TrapGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class ABuildingTrap*                         CeilingTrap;                                       // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CachedDamageTargets;                               // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        TargetArray;                                       // 0xA60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_TrapGeneric_C");
		return Clss;
	}

	void Cancelled_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapGeneric(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayTag& Temp_struct_Variable2, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap2, bool K2Node_DynamicCast_bSuccess2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue3, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap3, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue4, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap4, bool K2Node_DynamicCast_bSuccess4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

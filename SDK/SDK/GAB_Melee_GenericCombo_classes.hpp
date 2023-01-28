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

// 0x10 (0xA64 - 0xA54)
// BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	uint8                                        Pad_2B9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA58(0x8)(Transient, DuplicateTransient)
	float                                        OriginalMontagePlayRate;                           // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Melee_GenericCombo_C");
		return Clss;
	}

	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CheckAbilityCost_ReturnValue, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, int32 CallFunc_FTrunc_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

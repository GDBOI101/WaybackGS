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
// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
class UGA_Trap_FloorJumpPad_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(Transient, DuplicateTransient)
	float                                        LaunchStrength;                                    // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  LaunchForceFeedback;                               // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerJumping;                                     // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_PlayerLaunched;                                 // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_LaunchTag;                                      // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        OverlappingTargets;                                // 0xAA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                GE_TrapImmunity;                                   // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Trap_FloorJumpPad_C");
		return Clss;
	}

	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void PlayPlayerFX(class AFortPlayerPawn* Player);
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAbilityLevel_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap2, bool K2Node_DynamicCast_bSuccess2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable2, const struct FVector& CallFunc_MakeVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerPawn* K2Node_CustomEvent_Player, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue3, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap3, bool K2Node_DynamicCast_bSuccess4, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

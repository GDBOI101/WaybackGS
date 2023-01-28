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

// 0x40 (0xA80 - 0xA40)
// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EC_AppliedEffect;                                  // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockbackMagnitude;                                // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HitActors;                                         // 0xA60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                KnockbackStunGE;                                   // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BP_VictoryDrone;                                   // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AthenaDBNORevive_C");
		return Clss;
	}

	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayTag& Temp_struct_Variable3, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable4, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector_NetQuantizeNormal& K2Node_MakeStruct_Vector_NetQuantizeNormal, const struct FGameplayEventData& K2Node_Event_EventData, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

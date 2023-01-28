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
// BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C
class UGAB_PlayerDBNOResurrect_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EC_AppliedEffect;                                  // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockbackMagnitude;                                // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3419[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HitActors;                                         // 0xA60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                KnockbackStunGE;                                   // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BP_VictoryDrone;                                   // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_PlayerDBNOResurrect_C");
		return Clss;
	}

	void Completed_0B41E4DC44D3371D619734A714E9FE50(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0B41E4DC44D3371D619734A714E9FE50(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B41E4DC44D3371D619734A714E9FE50(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_PlayerDBNOResurrect(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable3, const struct FGameplayTag& Temp_struct_Variable4, const struct FGameplayEventData& K2Node_Event_EventData, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, int32 Temp_int_Variable, const struct FVector_NetQuantizeNormal& K2Node_MakeStruct_Vector_NetQuantizeNormal, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Less_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

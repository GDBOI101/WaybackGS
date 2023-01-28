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
// BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C
class UGAB_PlayerDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          DeathMontage;                                      // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeathHitDirection;                                 // 0xA50(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            DeathHitResult;                                    // 0xA60(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                 DamageTags;                                        // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayStatusAfflicted;                           // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_PlayerDBNO_C");
		return Clss;
	}

	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnCancelled_4B0F8658452931EE3B297A9E70C9C496();
	void OnInterrupted_4B0F8658452931EE3B297A9E70C9C496();
	void OnBlendOut_4B0F8658452931EE3B297A9E70C9C496();
	void OnCompleted_4B0F8658452931EE3B297A9E70C9C496();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_PlayerDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

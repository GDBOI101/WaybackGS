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

// 0xC (0x474 - 0x468)
// BlueprintGeneratedClass GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C
class AGCNL_GM_ReflectDamage_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(Transient, DuplicateTransient)
	float                                        ParticleMeshLength;                                // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GM_ReflectDamage_C");
		return Clss;
	}

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue2, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCNL_GM_ReflectDamage(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

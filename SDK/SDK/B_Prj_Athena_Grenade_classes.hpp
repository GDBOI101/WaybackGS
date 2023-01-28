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

// 0x128 (0x920 - 0x7F8)
// BlueprintGeneratedClass B_Prj_Athena_Grenade.B_Prj_Athena_Grenade_C
class AB_Prj_Athena_Grenade_C : public AFortProjectileBase
{
public:
	uint8                                        Pad_26E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(Transient, DuplicateTransient)
	class UCapsuleComponent*                     OverlapCapsule;                                    // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x810(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0x818(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x820(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x828(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0x830(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x840(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Cue_DistantSound;                                  // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x860(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfBouncesTillExplode;                        // 0x864(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumberOfBounces;                            // 0x868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Cue_GrenadeFuseSound;                              // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BouncePawnAgainstPawnGravityScale;                 // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            StoredHit;                                         // 0x880(0x88)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, ContainsInstancedReference)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_Bounce;                                        // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_Grenade_C");
		return Clss;
	}

	void OnRep_StoredHit(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(struct FHitResult& Hit);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_Prj_Athena_Grenade(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& K2Node_Event_Hit2, class AController* CallFunc_GetInstigatorController_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_OnSameTeam_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable2, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, class APawn* K2Node_DynamicCast_AsPawn2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x188 (0x980 - 0x7F8)
// BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C
class AB_Prj_Ranged_GrenadeLauncher_Athena_C : public AFortProjectileBase
{
public:
	uint8                                        Pad_2789[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Mesh;                                              // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       RibbonTrail_PS;                                    // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RibbonTrail_PSC;                                   // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrailLifetime;                                     // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  WaterPhysMat;                                      // 0x824(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Bounce_WaterSplash_PS;                             // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              WaterSplash_PSC;                                   // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Bounce_Generic_PSC;                                // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Bounce_Generic_PS;                                 // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Explosion_PS;                                      // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Explosion_PSC;                                     // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StopLocation;                                      // 0x858(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectsToTraceAgainst;                             // 0x868(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                              StopRotX;                                          // 0x878(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_278C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Grenade_Explosion_Sound;                           // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Explosion_Flesh_Damage_PS;                         // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Explosion_Water_PS;                                // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Explosion_Water_PSC;                               // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SpawnBounceFXHitActor;                             // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            OnBounceHitResult;                                 // 0x8B0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        FuseTimer_Spawn;                                   // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuseTimerAfterBounce;                              // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              WaterLandDelayRipplePSC;                           // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WaterLandDelayPS;                                  // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GrenadeInWaterLocation;                            // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Grenade_Explosion_Water_Sound;                     // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  StopSurfaceType;                                   // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              StopRotZ;                                          // 0x964(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Ranged_GrenadeLauncher_Athena_C");
		return Clss;
	}

	void SpawnBounceFX(struct FHitResult& Hit, class AActor** HitActor, enum class EPhysicalSurface* SurfaceType, struct FRotator* HitResultRotation, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchEnum_CmpSuccess, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue);
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveBeginPlay();
	void DelayBeforeExplode_();
	void OnStop(struct FHitResult& Hit);
	void OnBounce(struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena(int32 EntryPoint, bool CallFunc_IsBeingKilled_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_SpawnBounceFX_HitActor, enum class EPhysicalSurface CallFunc_SpawnBounceFX_SurfaceType, const struct FRotator& CallFunc_SpawnBounceFX_HitResultRotation, const struct FHitResult& K2Node_Event_Hit2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

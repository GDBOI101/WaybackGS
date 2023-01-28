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

// 0x128 (0x968 - 0x840)
// BlueprintGeneratedClass B_DtB_FloatingRift.B_DtB_FloatingRift_C
class AB_DtB_FloatingRift_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Electricity_Spark_Zaps_Audio_Component;            // 0x848(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_ground_04;                                // 0x850(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_ground_03;                                // 0x858(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_ground_02;                                // 0x860(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_ground_01;                                // 0x868(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DispatcherCallOutVolume;                           // 0x870(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal_Ground;                                      // 0x878(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DtB_GroundFog;                                  // 0x880(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DtB_GroundTendril;                              // 0x888(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_orb_01;                                   // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_floating_pieces_01;                       // 0x8B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  S_Elevation_Ground_Z;                              // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dtb_rift_center_01;                                // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_StormFog;                                        // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientClose_small;                                // 0x8D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientLoopingSound_large;                         // 0x8D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 FortMiniMap;                                       // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     KillVolume;                                        // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      StaminaVolume;                                     // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DamageVolume;                                      // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_Arcs;                                       // 0x900(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         RiftArcTriggerVolume;                              // 0x908(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CampSlime;                                         // 0x910(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x918(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PostProcessVolume;                                 // 0x920(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_DtBRiftCoreFloating;                             // 0x928(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x930(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsRiftArcsActive_;                                // 0x938(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2808[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilitySystemComponent*           AIPawnAbilitySystemComponent;                      // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  RiftLocated;                                       // 0x948(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  CallOutVolumeOverlap;                              // 0x958(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_DtB_FloatingRift_C");
		return Clss;
	}

	void OnRep_bIsRiftArcsActive_();
	void UserConstructionScript();
	void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void HandleMissionEvent_NewPlayer(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount);
	void ExecuteUbergraph_B_DtB_FloatingRift(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent4, class AActor* K2Node_ComponentBoundEvent_OtherActor4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex4, bool K2Node_ComponentBoundEvent_bFromSweep3, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent3, class AActor* K2Node_ComponentBoundEvent_OtherActor3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn3, bool K2Node_DynamicCast_bSuccess3, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest, bool CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn4, bool K2Node_DynamicCast_bSuccess4, class FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleCount, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void CallOutVolumeOverlap__DelegateSignature(class AFortPlayerPawn* FortPlayerPawn);
	void RiftLocated__DelegateSignature(class AFortPlayerPawn* FortPlayPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

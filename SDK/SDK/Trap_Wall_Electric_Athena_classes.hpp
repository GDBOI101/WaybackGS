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

// 0x80 (0x1160 - 0x10E0)
// BlueprintGeneratedClass Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C
class ATrap_Wall_Electric_Athena_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10E0(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       ChargeSound;                                       // 0x10E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TraceLocation;                                     // 0x10F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         TriggerComponent;                                  // 0x10F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Coil_R;                                     // 0x1100(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Coil_L;                                     // 0x1108(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light_onFire;                                      // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Arcs_R;                                     // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Arcs_L;                                     // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeLight_Brightness_C184AADC4D731F4EF02D419DFF483ED3; // 0x1130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeLight__Direction_C184AADC4D731F4EF02D419DFF483ED3; // 0x1134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeLight;                                         // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Activate_Sound_Cue;                                // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Placed_Sound_Cue;                                  // 0x1148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Explode_Sound_Cue;                                 // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound_Cue;                               // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Wall_Electric_Athena_C");
		return Clss;
	}

	void PlayActivationSoundAndFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	struct FTransform GetFireLocationAndRotation(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void FadeLight__FinishedFunc();
	void FadeLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Wall_Electric_Athena(int32 EntryPoint, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam6, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam7, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool Temp_bool_Has_Been_Initd_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

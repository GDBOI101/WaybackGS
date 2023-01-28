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

// 0xB8 (0x1190 - 0x10D8)
// BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C
class ATrap_Floor_Spikes_C : public ABuildingTrapFloor
{
public:
	uint8                                        Pad_2F17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10E0(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       TraceLocation;                                     // 0x10E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Spike_Mesh;                                        // 0x10F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger;                                           // 0x10F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x1100(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0x1108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0x110C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ResetSpikes;                                       // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD;     // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD; // 0x111C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Retract;                                           // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF;        // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF;  // 0x112C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fire;                                              // 0x1130(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Place_Trap_Sound;                                  // 0x1138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Active_Sound;                                 // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Reload_Sound;                                      // 0x1148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Explode_Sound;                                // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound;                                   // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeRestingScale;                                 // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeActiveScale;                                  // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeHoldOnFireLength;                             // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              SpikesMID;                                         // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepExponent;                                     // 0x1178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SweepColor;                                        // 0x117C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepSpeed;                                        // 0x118C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Floor_Spikes_C");
		return Clss;
	}

	struct FTransform GetFireLocationAndRotation(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	void MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void SetSpikePosition(float NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Spikes(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam6, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam7, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Lerp_ReturnValue3, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

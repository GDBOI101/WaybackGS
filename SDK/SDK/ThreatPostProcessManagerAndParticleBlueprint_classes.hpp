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

// 0x1B6 (0x546 - 0x390)
// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       EnterTheStormSound;                                // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Sprite1;                                           // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4094[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Ramp_Up_down_values_on_death;                      // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min_Cloud_Distance_from_player;                    // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4095[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Localized_Particle_System_MID;                     // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  NewEventDispatcher;                                // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  NewEventDispatcher0;                               // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVector>                       Array_of_Cloud_Positions;                          // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                SkyParticleCloudDistances;                         // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                CloudDistanceToPlayerLookUpArray;                  // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               Target_Cloud_Position;                             // 0x418(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecalculateTimer;                                  // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Alive;                                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAliveJustChanged;                                // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAlivePrevious;                                   // 0x42A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4096[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive; // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentCloudMesh;                                  // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4097[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead; // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                    Materialpost;                                      // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Post_process_volume_falloff__around_the_threat_volume; // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRainEffect;                                    // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4098[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        FourClosestClouds;                                 // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Number_Of_Volumes_to_check;                        // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessTargetWeight;                           // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Current_Post_Process_Weight;                       // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Post_Process_Fade_in_speed;                        // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SoundIsActive;                                     // 0x46C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SoundWasPreviouslyActive;                          // 0x46D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4099[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerTransform;                                   // 0x470(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_On;                                             // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APostProcessVolume*                    MaterialEffectsPostProcess;                        // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Morning;                 // 0x4B0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Day;                     // 0x4C0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Evening;                 // 0x4D0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Night;                   // 0x4E0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBox>                          Array_of_Cloud_Volumes;                            // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        ClosestCloudIndex;                                 // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestCloudDistance;                              // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessWeightModulation;                       // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ramp_Up_And_Down_Anim_Values;                      // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRainOnCameraLens;                              // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEmitterCameraLensEffectBase*          Rain_Camera_Lens_Effect;                           // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LocalizedParticleSystem;                           // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWorldReady;                                      // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rain_Trace_Timer;                                  // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               RainTraceOffset;                                   // 0x530(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RainMultiplierCurrent;                             // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rain_Spawn_Rate_Exponent;                          // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TracePrevious;                                     // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAthenaWorld;                                     // 0x545(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ThreatPostProcessManagerAndParticleBlueprint_C");
		return Clss;
	}

	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage, float SafeZoneRadius, float DistanceToSafeZone, const struct FVector& PlayerCameraLoc, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_FClamp_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_FClamp_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue7);
	void UserConstructionScript();
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakColor_R3, float CallFunc_BreakColor_G3, float CallFunc_BreakColor_B3, float CallFunc_BreakColor_A3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_BreakColor_R4, float CallFunc_BreakColor_G4, float CallFunc_BreakColor_B4, float CallFunc_BreakColor_A4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, float CallFunc_BreakColor_R5, float CallFunc_BreakColor_G5, float CallFunc_BreakColor_B5, float CallFunc_BreakColor_A5, TArray<struct FThreatLocationInfo>& K2Node_Event_ThreatLocationInfo, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FThreatLocationInfo& CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FBox& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, float CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, class AEmitterCameraLensEffectBase* CallFunc_AddCameraLensEffect_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue3, class APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AThreat_RainAttachedToPlayer_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue3, bool CallFunc_IsValid_ReturnValue6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue8, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

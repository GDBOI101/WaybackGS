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

// 0x1F0 (0x9C8 - 0x7D8)
// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
class AB_Rift_Portals_C : public ABuildingRift
{
public:
	uint8                                        Pad_24E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Wind_Vector_Explosion;                             // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WindVectorVortex;                                  // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Storm_Small_Vortex_Cue;                            // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_RandomLightning_01;                         // 0x800(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RiftVortex;                                        // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 FortMiniMap;                                       // 0x810(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_Active;                                     // 0x818(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x820(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio1;                                            // 0x828(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x834(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleLightOnOff;                                   // 0x838(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D;  // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D; // 0x844(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BoostLight;                                        // 0x848(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnCloud;                                        // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SwipeMaterial;                                     // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Plasma_Particles;                                  // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Lightning_Strike_Particles;                        // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Decal_Material;                                    // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactLocation;                                    // 0x878(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecalComponent*                       Decal;                                             // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVectorFieldComponent*                 Impact_Vector_Field;                               // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                Wind_Impulse;                                      // 0x898(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Wind_Impulse_Default_Strength;                     // 0x89C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Wind_location;                                     // 0x8A0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wind_Radius;                                       // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Overlapping_Actors;                                // 0x8B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACar_Copper_C*>                 ArrayOfNearbyCars;                                 // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                          Light_Color_Idle;                                  // 0x8D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Light_Color_Active;                                // 0x8E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Intensity_Idle;                              // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Intensity_Active;                            // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Radius_Idle;                                 // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Radius_Active;                               // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ParticlesBaseMID;                                  // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightEnabled;                                      // 0x908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Light_Fade_In_Time;                                // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Light_Fade_Out_Time;                               // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SpawnImpactParticles;                              // 0x914(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualDeactivateDelayBeforeDestory;                // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftLightningDuration;                             // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSize;                                        // 0x920(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSizeMin;                                     // 0x92C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSizeMax;                                     // 0x938(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount_Min;                                  // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount_Max;                                  // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength_Min;                               // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength_Max;                               // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RiftVortexMID;                                     // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount;                                      // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength;                                   // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WPO_Strength;                                      // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Model_Height;                                      // 0x96C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             UV_Tile_Multiplier_Min;                            // 0x970(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             UV_Tile_Multiplier_Max;                            // 0x978(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Frequency_Min;                              // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Frequency_Max;                              // 0x984(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Wiggle_Speed_Min;                                  // 0x988(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Wiggle_Speed_Max;                                  // 0x990(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lightning_Spawn_Loc;                               // 0x998(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lightning_Bloat;                                   // 0x9A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftVortexFadeInTime;                              // 0x9A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftVortexFadeOutTime;                             // 0x9AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Water_Scene_Capture_Activated;                     // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Wind_Vortex_MID;                                   // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Explosion_Wind_Vector_Mesh_MID;                    // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Rift_Portals_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_RandomFloatInRange_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_RandomFloatInRange_ReturnValue6, float CallFunc_BreakVector2D_X4, float CallFunc_BreakVector2D_Y4, float CallFunc_BreakVector2D_X5, float CallFunc_BreakVector2D_Y5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue7, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, float CallFunc_BreakVector2D_X6, float CallFunc_BreakVector2D_Y6, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue10, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue);
	void BoostLight__FinishedFunc();
	void BoostLight__UpdateFunc();
	void ScaleLightOnOff__FinishedFunc();
	void ScaleLightOnOff__UpdateFunc();
	void OnPlaced();
	void OnRemoved();
	void OnSpawnAI();
	void Lightning_Impact_Event();
	void OnActivated();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void FadeLightIn();
	void FadeLightOut();
	void ManuallyActivateRift();
	void ManuallyDeactivateRift();
	void PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles);
	void OnDeactivated();
	void ResetGate();
	void ExecuteUbergraph_B_Rift_Portals(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_Lerp_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float K2Node_CustomEvent_Delay, float K2Node_CustomEvent_RiftLightningDuration, bool K2Node_CustomEvent_SpawnImpactParticles, float Temp_float_Variable, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue6, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue2, bool Temp_bool_IsClosed_Variable, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, class ACar_Copper_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, class ACar_Copper_C* K2Node_DynamicCast_AsCar_Copper, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class AWindManager_C* K2Node_DynamicCast_AsWind_Manager, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

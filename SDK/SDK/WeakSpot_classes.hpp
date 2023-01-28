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

// 0xDC (0x52C - 0x450)
// BlueprintGeneratedClass WeakSpot.WeakSpot_C
class AWeakSpot_C : public AFortCrackEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              AnimatedBackgroundRingsParticleEffect;             // 0x458(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SphereHitLocator;                                  // 0x460(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CollisionComponent;                                // 0x468(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              DamageEffect;                                      // 0x470(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleDownParticleTL;                               // 0x480(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Impact_Sound;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SpawnSound;                                        // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Particle_Location;                                 // 0x498(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundCrack_Level_01;                               // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_02;                               // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_03;                               // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_04;                               // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_05;                               // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_06;                               // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_07;                               // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                    Crack_sounds;                                      // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                            SoundCrack_Level_08;                               // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCrack_Level_09;                               // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsWidth;                               // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_23D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  ConnectTheDotsMesh;                                // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsDuration;                            // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsTimeoutFromPreviousHit;              // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsDurationScale;                       // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsMaxDuration;                         // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsTileScale;                           // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsMinLength;                           // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectTheDotsMaxLength;                           // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeakSpot_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class USoundBase*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void OnHitCrack();
	void OnStartDirectionEffect();
	void OnFadeOut();
	void HideMesh();
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float Temp_float_Variable, float K2Node_Select_Default, int32 CallFunc_Array_LastIndex_ReturnValue, float Temp_float_Variable2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, class USoundBase* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xE0 (0xB68 - 0xA88)
// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA88(0x8)(Transient, DuplicateTransient)
	bool                                         Has_Idle_Effect;                                   // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Idle_Effect;                                       // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Effects_Color_Level;                               // 0xAA0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Swing_Effect;                                  // 0xAAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Swing_Effect;                                      // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Effect_Color_Override;                         // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Main_Effects_Color_Lv;                             // 0xABC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Lv2_wpn;                                           // 0xACC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Lv3_Wpn;                                           // 0xACD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Main_Effects_Color2_Lv;                            // 0xAD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              AnimTrail_PSC;                                     // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MeleeHeavy_PSC;                                    // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MeleeHeavy_ParticleSystem;                         // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  IdleFXAttachSocket;                                // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFXComponent;                                   // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       AnimTrailsParticles;                               // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  FirstSocketName;                                   // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  Second_Socket_Name;                                // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Width;                                             // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseAnimTrails;                                     // 0xB3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2F5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SwingFXSocket;                                     // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  PokeAnimations;                                    // 0xB48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              WeaponMID;                                         // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Generic_C");
		return Clss;
	}

	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void SetWpnRarity(enum class EFortRarity Temp_byte_Variable, uint8 Temp_byte_Variable2, uint8 Temp_byte_Variable3, uint8 Temp_byte_Variable4, uint8 Temp_byte_Variable5, uint8 Temp_byte_Variable6, uint8 Temp_byte_Variable7, uint8 Temp_byte_Variable8, uint8 Temp_byte_Variable9, uint8 Temp_byte_Variable10, uint8 Temp_byte_Variable11, uint8 K2Node_Select_Default, float CallFunc_Conv_ByteToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void UserConstructionScript();
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void FootStepLeft();
	void FootStepRight();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void K2_OnUnEquip();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void ExecuteUbergraph_B_Melee_Generic(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess3, class APawn* CallFunc_GetInstigator_ReturnValue3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class UObject* Temp_object_Variable, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess5, class UObject* K2Node_CustomEvent_Loaded, class APawn* CallFunc_GetInstigator_ReturnValue4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess6, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue2, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue5, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue2, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue4, bool CallFunc_DoesSocketExist_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

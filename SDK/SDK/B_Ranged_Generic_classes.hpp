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

// 0x160 (0xE00 - 0xCA0)
// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCA0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              MuzzleWindParticle_Empty_;                         // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Reload_Empty_;                                     // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 SecondDownScopePostProcess;                        // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shells_empty_;                                     // 0xCC0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 DownScopePostProcess;                              // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScopeMesh1P;                                       // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Muzzle_Empty_;                                     // 0xCD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0xCE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0xCE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2940[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AnimateScopePostProcess;                           // 0xCE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xCF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xD08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Reload_Particles;                              // 0xD09(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2941[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Reload_ParticleSystem;                             // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xD18(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseShellsOnFire_;                                  // 0xD20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnReload_;                                // 0xD21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnPump_;                                  // 0xD22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2942[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ShellsParticleSystemTemplate;                      // 0xD28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReloadSocketName;                                  // 0xD30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                   Array_Of_Active_Enemy_AI;                          // 0xD38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Scope___Render_Enemies_To_Custom_Depth_Buffer;     // 0xD48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Shells_Socket_Name;                                // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class En_ShellTypes_01                  ShellTypeSelect;                                   // 0xD58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2944[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shells_Spawn_Rate_Scale;                           // 0xD5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShellsRotationRate;                                // 0xD60(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Velocity;                                   // 0xD6C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Gravity;                                    // 0xD78(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Lifetime;                                   // 0xD84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Size;                                       // 0xD88(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Time_Dilation;                              // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Scope_Vignette_Blur_Screen_Percentage;      // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scope_Camera_Offset_Amount;                        // 0xD9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SmallShells;                                       // 0xDA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MediumShells;                                      // 0xDA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LargeShells;                                       // 0xDA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShotgunShells;                                     // 0xDA3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnergyShells;                                      // 0xDA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2945[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Inherit_Parent_Velocity;                           // 0xDA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Radius;                                // 0xDAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Height;                                // 0xDB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugShellsSocket_;                                // 0xDB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_2_Post_Processes_For_the_Scope;                // 0xDB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2946[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_ScopeZoomIn;                                 // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_ScopeZoomOut;                                // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xDD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Wind_Enabled;                                   // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2947[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       MuzzleWindParticleSystem;                          // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Ranged_Generic_C");
		return Clss;
	}

	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue);
	void SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UpdateShellEmittersFX(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue8, bool CallFunc_BooleanAND_ReturnValue9);
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Muzzle_Flash_FX(bool Persistent_Fire, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsUsingScope_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetWpnRarity();
	void AddRandomScale(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue2);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue3);
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue2, bool K2Node_Event_bNewIsTargeting, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue3, bool CallFunc_IsAssetNull_ReturnValue4, float CallFunc_GetTimeToNextFire_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess3, class UObject* Temp_object_Variable2, class UParticleSystem* K2Node_DynamicCast_AsParticle_System2, bool K2Node_DynamicCast_bSuccess4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_CustomEvent_Enable2, int32 K2Node_CustomEvent_TargetLimit2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded2, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, int32 CallFunc_SelectInt_ReturnValue2, class UObject* Temp_object_Variable3, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System3, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class AController* CallFunc_GetInstigatorController_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue2, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess6, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone2, bool K2Node_DynamicCast_bSuccess7, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess8, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_UseScopeTargeting_ReturnValue2, class APawn* CallFunc_GetInstigator_ReturnValue3, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn3, bool K2Node_DynamicCast_bSuccess9, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class APawn* CallFunc_GetInstigator_ReturnValue4, class APawn* CallFunc_GetInstigator_ReturnValue5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn4, bool K2Node_DynamicCast_bSuccess10, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn5, bool K2Node_DynamicCast_bSuccess11, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, bool CallFunc_UseScopeTargeting_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsDedicatedServer_ReturnValue2, class UObject* K2Node_CustomEvent_Loaded3, class UObject* Temp_object_Variable4, class UParticleSystem* K2Node_DynamicCast_AsParticle_System4, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_CustomEvent_Loaded4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AFortAIPawn* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue3, bool CallFunc_DoesSocketExist_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

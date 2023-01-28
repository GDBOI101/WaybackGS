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

// 0xC1 (0x4F1 - 0x430)
// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UChildActorComponent*                  PrefabActorComp;                                   // 0x438(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x440(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x448(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalePivot;                                        // 0x450(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PivotHolder;                                       // 0x458(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CelebratoryFX;                                     // 0x460(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x468(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x474(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimEvolve;                                   // 0x478(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x484(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3294[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimLevel;                                    // 0x488(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Rotation;                                          // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3295[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemToRepresent;                                   // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewRotation;                                   // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3296[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RotationAnimation;                                 // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LevelUpFX;                                         // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       EvolveUpFX;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXTargetLocation;                                  // 0x4C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCharacter;                                       // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEvolve;                                          // 0x4D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3297[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CharLevelUpFX;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CharEvolveUpFX;                                    // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              UIoverrideMID;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasResetVisuals;                                   // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyDisplayManagerBP_C");
		return Clss;
	}

	void SetupPrefabVisuals(class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput, class USkeletalMeshComponent* CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_Select_Default);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, enum class EFortRarity Rarity, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue2, int32 CallFunc_FindSubstring_ReturnValue3, bool CallFunc_Conv_IntToBool_ReturnValue2, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 CallFunc_FindSubstring_ReturnValue4, bool CallFunc_Conv_IntToBool_ReturnValue4);
	struct FTransform GetWeaponPlacementTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue2, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	void UpdatePreviewMeshTransforms(const struct FTransform& CallFunc_GetPreviewMeshWorldTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetPreviewMeshOffset_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue2, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	struct FTransform GetPreviewMeshWorldTransform(float Temp_float_Variable, bool Temp_bool_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetItemPreviewOffset_ReturnValue, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, float K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue2);
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void ResetVisuals(bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem* ItemToView);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, TArray<class UObject*>& LoadedAssets);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortItem* K2Node_Event_ItemToView, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_Event_ItemWhoseAssetsWereLoaded, TArray<class UObject*>& K2Node_Event_LoadedAssets, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition2, bool CallFunc_Not_PreBool_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetPreviewPrefabAsset_Asset, bool CallFunc_GetPreviewPrefabAsset_ReturnValue, class UClass* CallFunc_Conv_AssetClassToClass_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue2, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess2, enum class EFortRarity CallFunc_GetRarity_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue3, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition3, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<TSoftObjectPtr<class UObject>>& CallFunc_GetPreviewAssets_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

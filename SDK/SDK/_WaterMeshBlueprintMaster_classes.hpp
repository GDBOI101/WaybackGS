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

// 0xC3 (0x44B - 0x388)
// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
class A_WaterMeshBlueprintMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CollisionMesh1;                                    // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CollisionMesh2;                                    // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CollisionMesh4;                                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CollisionMesh3;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Number_of_Collision_Meshes;                        // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       EnterExitWaterSplash_Ripple_Texture_Particle;      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       EnterExitWaterSplash_Visual_Particle;              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlipFlow;                                          // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoFlow;                                            // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B59[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FlippedMaterial;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Internal_volume_penetration_Counter;               // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerPawn_Generic_C*>         PlayerGenericArray;                                // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>      WaterRingArray;                                    // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Current_Characters_Personal_Water_Counter;         // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FListOfWaterComponentsThatTheCharactersInteractingWithByIndex> ArrayOfCollisionComponentsPerActor;                // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Water_Interactions;                                // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Entering_True_Exiting_False;                       // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B5B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Generic_C*                 ExternalActor;                                     // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Internal_Mesh;                                     // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Continue;                                          // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum_time_between_splashes;                     // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowTestMesh;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasExecutedConstuctionScript;                      // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Deep_Water_Asset_;                              // 0x44A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("_WaterMeshBlueprintMaster_C");
		return Clss;
	}

	void Construction(int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume, int32 Temp_int_Variable, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable2, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue);
	void Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit, const struct FLinearColor& NewLocalVar_0, bool Temp_bool_Variable, class UStaticMeshComponent* K2Node_Select_Default, const struct FVector& CallFunc_GetVelocity_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_K2_LineTraceComponent_HitLocation, const struct FVector& CallFunc_K2_LineTraceComponent_HitNormal, class FName CallFunc_K2_LineTraceComponent_BoneName, const struct FHitResult& CallFunc_K2_LineTraceComponent_OutHit, bool CallFunc_K2_LineTraceComponent_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue2, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32 Target_Int, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UserConstructionScript();
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Construct();
	void ReceiveBeginPlay();
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int32 EntryPoint, const struct FTransform& CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform, const struct FVector& CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector, bool CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue2, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AWindManager_C* K2Node_DynamicCast_AsWind_Manager, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent8, class AActor* K2Node_ComponentBoundEvent_OtherActor8, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp8, int32 K2Node_ComponentBoundEvent_OtherBodyIndex8, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent7, class AActor* K2Node_ComponentBoundEvent_OtherActor7, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp7, int32 K2Node_ComponentBoundEvent_OtherBodyIndex7, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent6, class AActor* K2Node_ComponentBoundEvent_OtherActor6, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp6, int32 K2Node_ComponentBoundEvent_OtherBodyIndex6, bool K2Node_ComponentBoundEvent_bFromSweep4, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent5, class AActor* K2Node_ComponentBoundEvent_OtherActor5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp5, int32 K2Node_ComponentBoundEvent_OtherBodyIndex5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent4, class AActor* K2Node_ComponentBoundEvent_OtherActor4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex4, bool K2Node_ComponentBoundEvent_bFromSweep3, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent3, class AActor* K2Node_ComponentBoundEvent_OtherActor3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex3, bool K2Node_ComponentBoundEvent_bFromSweep2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

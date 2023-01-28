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

// 0x138 (0x4C0 - 0x388)
// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
class ADuplicateResOutMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CharacterSpawnInTimeline;                          // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh_Duplicate;                           // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gun_True;                                          // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_29AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoundsRadius;                                      // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_0;                                          // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MIDArray;                                          // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               World_location_for_the_dissolve_location;          // 0x3D8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Current_MID;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Head_Space;                                        // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Leg_Space;                                         // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Spawn_Light;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_intensity;                                   // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Number_of_Base_skeletal_mesh_materials;            // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstPassComplete;                                 // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMeshComponent*>        ExternalSkeletalMeshComponent;                     // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FTransform                            Box_Local_Transform;                               // 0x420(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Timeline_Play_Length;                              // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TeleportOut_;                                      // 0x454(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_29AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ExternalActor;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        InternalSkeletalMeshComponents;                    // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentMeshMidIndex;                               // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                External_Base_Mesh_Component;                      // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      ExternalMidArray;                                  // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	class USkeletalMeshComponent*                ExternalRootMeshComponent;                         // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            ListOfMaterialsExemptFromReparenting;              // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         MaterialParentIsValid;                             // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CurrentParentMaterial;                             // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CurrentMaterial;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DuplicateResOutMesh_C");
		return Clss;
	}

	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array(int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class USkeletalMeshComponent* CallFunc_Array_Get_Item2, class UMaterialInstance* Temp_object_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstance* Temp_object_Variable2, class UMaterialInstance* K2Node_Select_Default, class USkeletalMeshComponent* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Make_and_slave_internal_meshes(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class USkeletalMeshComponent* CallFunc_Array_Get_Item2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item3, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponent* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class USkeletalMeshComponent* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2);
	void Spawn__Light(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue);
	void Find_Bounds(bool Temp_bool_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_BreakRotIntoAxes_X, const struct FVector& CallFunc_BreakRotIntoAxes_Y, const struct FVector& CallFunc_BreakRotIntoAxes_Z, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue3);
	void InitializeExternalSkeletalMeshArray(class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_Parent, bool K2Node_DynamicCast_bSuccess2, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess3, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array);
	void UserConstructionScript(int32 NewLocalVar_2, class UMaterialInstanceDynamic* Container_Material, class UStaticMeshComponent* NewLocalVar_1, const struct FTransform& Box_Local_Transform, const struct FVector& NewLocalVar_0);
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateExternalParameters(TArray<class UMaterialInstanceDynamic*>& MID_Array, TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array);
	void ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue2, float K2Node_Event_DeltaSeconds, class USkeletalMeshComponent* CallFunc_Array_Get_Item2, class USkeletalMeshComponent* CallFunc_Array_Get_Item3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, TArray<class UMaterialInstanceDynamic*>& K2Node_CustomEvent_MID_Array, TArray<class USkeletalMeshComponent*>& K2Node_CustomEvent_External_MEsh_Component_Array, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

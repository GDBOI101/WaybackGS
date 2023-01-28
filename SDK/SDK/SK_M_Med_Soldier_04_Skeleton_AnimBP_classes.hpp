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

// 0x1728 (0x1B38 - 0x410)
// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000; // 0x418(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5B5C2BC342A9E2373684A581DE190146; // 0x460(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_58B7F723420BD05107F77090484DA4F7; // 0x6C8(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B614050A427F32E2A71520A396D4981D; // 0x930(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_D4E756144665125C57D74F847DF5CAE2; // 0xB98(0x268)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D; // 0xE00(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71; // 0xE48(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE; // 0xE90(0x98)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2; // 0xF28(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442; // 0x1190(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337; // 0x13F8(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4; // 0x1660(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_01F0D350476ED069A3D9B380171159E1; // 0x18C8(0x268)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1B30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_M_Med_Soldier_04_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

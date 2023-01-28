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

// 0x4A8 (0x8B8 - 0x410)
// AnimBlueprintGeneratedClass F_MED_CAU_Armstrong_01_Skeleton_AnimBP.F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C
class UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0EC26DC347D7E40CA9392680E3F1A752; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8D1C069949068E49AA68DC8A8B44667E; // 0x4F8(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_F1CCD822439E57B485188E9BE6399F53; // 0x558(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9374D3DC4CFB636084873392DF9E8E45; // 0x608(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361; // 0x6B8(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9; // 0x788(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0CABFE4A496CC11CE98E88957AA63F33; // 0x820(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6AC04744409DE2AEE363C79CDEBDCF53; // 0x868(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

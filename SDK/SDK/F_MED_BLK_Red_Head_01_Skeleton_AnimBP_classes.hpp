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
// AnimBlueprintGeneratedClass F_MED_BLK_Red_Head_01_Skeleton_AnimBP.F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C
class UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ADD84ECA4C179A894077EA926E4E8C27; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_14C43EE54D79827F00DF1E9A8242ED73; // 0x4F8(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_26AEFC2749B6D18C132B8A9AFACB7107; // 0x558(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B3EB7DD7487D3DA8C89669A6B3EE960E; // 0x608(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F; // 0x6B8(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D; // 0x788(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9E42BD2C4D12D2F1E124EFBCD05D9810; // 0x820(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1E99F95C4ECF47136D41C482F786FD2C; // 0x868(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

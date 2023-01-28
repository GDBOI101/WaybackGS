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
// AnimBlueprintGeneratedClass M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP.M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C
class UM_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F901F86F47BB0F1F9BB524BC464D209F; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_0DAB21BB41E9DEE27FC2A48E47BCC290; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_EC53447A47EF3B33B9B6AB9A09D0A7B8; // 0x4F8(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_126DBAF54E00BF07110680986BEC829C; // 0x558(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_662B3DFB44FA08592E46219428119F66; // 0x608(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4C473D884B5C599CB66269BA6C880FDD; // 0x6B8(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_CD91997043F75270B169AA90390DB8CD; // 0x788(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2A31EFF642A7F0EC3DDBA189723CF36C; // 0x820(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_EB97BCF7419D3643C831D8A99B57F2EB; // 0x868(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_CD91997043F75270B169AA90390DB8CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_4C473D884B5C599CB66269BA6C880FDD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0DAB21BB41E9DEE27FC2A48E47BCC290();
	void Playface();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x1858 (0x1C68 - 0x410)
// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP.F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C
class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081; // 0x4F8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA; // 0x540(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299; // 0x5A0(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3; // 0x650(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4; // 0x700(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F; // 0x7D0(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B; // 0x868(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621; // 0x8B0(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B; // 0xB18(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378; // 0xD80(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676; // 0xFE8(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97; // 0x1250(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC; // 0x14B8(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F; // 0x1720(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444; // 0x1988(0x268)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DA85215A4F9C03E4623785A8AA328C9B; // 0x1BF0(0x70)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1C60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

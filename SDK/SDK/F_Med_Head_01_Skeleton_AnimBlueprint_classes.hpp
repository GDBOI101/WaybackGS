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

// 0xEB8 (0x12C8 - 0x410)
// AnimBlueprintGeneratedClass F_Med_Head_01_Skeleton_AnimBlueprint.F_Med_Head_01_Skeleton_AnimBlueprint_C
class UF_Med_Head_01_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5; // 0x418(0x98)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DAAA55974A974C7391E2738414737C1A; // 0x4B0(0x268)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_ADAB37DE4D0626D74E5B289531C43C2B; // 0x718(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_0636CDEC4754ABD475C03684CC485005; // 0x760(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_87895A27417AC5E9596A6AAFC208A8AB; // 0x7A8(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_F322569444B8EAC4D76EDFB3DD1FFFA4; // 0xA10(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5FC365C8473A405E8D365596E3963183; // 0xC78(0x268)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_EE6745244161B5BBC7CDC6A630489F45; // 0xEE0(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_FB2B157E47A93660872C13BDA80F5382; // 0xF40(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7D36480A45BCB919AC54C88B614CD912; // 0xFF0(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF; // 0x10A0(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09; // 0x1170(0x98)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_78C289E7415EB6B448CEBA94209DD0E0; // 0x1208(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2B2874774D09EC4D49B608AE20C3B1E8; // 0x1250(0x70)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x12C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_Med_Head_01_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

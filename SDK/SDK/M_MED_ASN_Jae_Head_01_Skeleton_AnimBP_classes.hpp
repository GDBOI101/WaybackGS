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
// AnimBlueprintGeneratedClass M_MED_ASN_Jae_Head_01_Skeleton_AnimBP.M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C
class UM_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_41381D7E4D7E99EA8EC551A923E79B00; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_F956F2E8479EEFF67D8F1DA653FDDA51; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_FE1708FD4517E3B31189ED81E8962A96; // 0x4F8(0x60)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_72B6242A4CD8EEAB1EFFBF86F43E5880; // 0x558(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6236249D4438BD6C34A1F893FA09079C; // 0x608(0xB0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_B5E65BCB4057B88003A0D69EBD580D3A; // 0x6B8(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_6C132E614AB4561E426158B1BE9628A7; // 0x788(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_A7365E35471B8EF307FFA39C7D11F102; // 0x820(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3EC5D65A4E8ADCB871D686A4380F2903; // 0x868(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_6C132E614AB4561E426158B1BE9628A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_B5E65BCB4057B88003A0D69EBD580D3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F956F2E8479EEFF67D8F1DA653FDDA51();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

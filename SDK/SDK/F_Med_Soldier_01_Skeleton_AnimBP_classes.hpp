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

// 0xB20 (0xF30 - 0x410)
// AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C
class UF_Med_Soldier_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451; // 0x460(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767; // 0x4F8(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE; // 0x540(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515; // 0x588(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6F4A94024B5C2ABE419876B18771368A; // 0x7F0(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7DD61B914A5D12998FBEB0A641F3B55D; // 0xA58(0x268)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_F7EDF3B142843689DC3442A6FE1CD5A2; // 0xCC0(0x268)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xF28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_Med_Soldier_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

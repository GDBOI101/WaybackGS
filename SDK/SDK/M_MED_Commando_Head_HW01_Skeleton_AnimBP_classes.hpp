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

// 0xF0 (0x448 - 0x358)
// AnimBlueprintGeneratedClass M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C
class UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_D438209241CBEA7C1261418DAF6624DF; // 0x360(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C; // 0x3A8(0x98)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Commando_Head_HW01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

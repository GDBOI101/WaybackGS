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

// 0x58 (0x468 - 0x410)
// AnimBlueprintGeneratedClass Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C
class UFemale_Commando_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983; // 0x418(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Female_Commando_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

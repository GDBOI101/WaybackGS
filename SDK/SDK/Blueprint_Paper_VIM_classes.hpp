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

// 0x3E8 (0x7C8 - 0x3E0)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F; // 0x3E8(0xC8)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D; // 0x4B0(0xC8)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0; // 0x578(0xC8)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC; // 0x640(0xC8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E; // 0x708(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7; // 0x750(0x48)()
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF; // 0x798(0x30)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Blueprint_Paper_VIM_C");
		return Clss;
	}

	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

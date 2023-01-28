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

// 0x8 (0x3A8 - 0x3A0)
// BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C
class AB_IngameMap_SceneCaptureBlurryNew_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_IngameMap_SceneCaptureBlurryNew_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

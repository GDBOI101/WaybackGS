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

// 0x10 (0x3B0 - 0x3A0)
// BlueprintGeneratedClass B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C
class AB_IngameMap_SceneCaptureNew_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  PostProcessPlane;                                  // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_IngameMap_SceneCaptureNew_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

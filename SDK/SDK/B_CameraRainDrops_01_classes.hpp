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

// 0x8 (0x448 - 0x440)
// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraRainDrops_01_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

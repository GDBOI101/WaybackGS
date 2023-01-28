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

// 0x10 (0x3B8 - 0x3A8)
// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
class AWM_PinManager_C : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WM_PinManager_C");
		return Clss;
	}

	class AWorldMapPin* CreateWorldMapPin(const class FString& TheaterId, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AWorldMapPin* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WM_PinManager(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

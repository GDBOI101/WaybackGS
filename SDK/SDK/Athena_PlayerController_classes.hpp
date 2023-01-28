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

// 0x10 (0x3300 - 0x32F0)
// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x32F0(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       ListenerOverride;                                  // 0x32F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PlayerController_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayWinEffects();
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

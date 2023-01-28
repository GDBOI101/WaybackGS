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
// BlueprintGeneratedClass Frontend.FrontEnd_C
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class AHBOnboardingFlow_C*                   HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void OnMatchStarted();
	void ReceiveBeginPlay();
	void EnableTutorial();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

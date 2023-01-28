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

// 0x10 (0x8D0 - 0x8C0)
// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
class AFrontendCamera_Inspect_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontendCamera_Inspect_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item2, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

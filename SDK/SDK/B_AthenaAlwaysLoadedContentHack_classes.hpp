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

// 0x28 (0x3B0 - 0x388)
// BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
class AB_AthenaAlwaysLoadedContentHack_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       HardObjectList;                                    // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                        HardClassList;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_AthenaAlwaysLoadedContentHack_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x8 (0x748 - 0x740)
// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
class APlayerSpawnPlacementActor_C : public AFortPlacementActor
{
public:
	class UArrowComponent*                       Arrow;                                             // 0x740(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSpawnPlacementActor_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

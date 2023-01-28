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

// 0x8 (0x418 - 0x410)
// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
class AAnnounce_ZoneModifiers_C : public AFortClientAnnouncement_ZoneModifiers
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x410(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_ZoneModifiers_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

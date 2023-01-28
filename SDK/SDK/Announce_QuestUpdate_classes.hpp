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

// 0x28 (0x420 - 0x3F8)
// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
class AAnnounce_QuestUpdate_C : public AFortClientAnnouncement
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestUpdateInfo               QuestUpdateInfo;                                   // 0x400(0x1D)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2744[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_QuestUpdate_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

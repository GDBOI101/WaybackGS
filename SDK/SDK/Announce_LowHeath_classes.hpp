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

// 0x10 (0x4F8 - 0x4E8)
// BlueprintGeneratedClass Announce_LowHeath.Announce_LowHeath_C
class AAnnounce_LowHeath_C : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_LowHeath_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void ExecuteUbergraph_Announce_LowHeath(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

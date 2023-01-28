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

// 0x10 (0x2A8 - 0x298)
// WidgetBlueprintGeneratedClass QuestTrackerEntry.QuestTrackerEntry_C
class UQuestTrackerEntry_C : public UFortQuestTrackerEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UImage*                                SeparatorLine;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTrackerEntry_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

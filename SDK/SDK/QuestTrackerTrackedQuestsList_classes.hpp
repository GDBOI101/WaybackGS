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

// 0x0 (0x270 - 0x270)
// WidgetBlueprintGeneratedClass QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C
class UQuestTrackerTrackedQuestsList_C : public UFortQuestTrackerList
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTrackerTrackedQuestsList_C");
		return Clss;
	}

	TArray<class UFortQuestItem*> GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetPinnedQuests_OutPinnedQuestItems, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

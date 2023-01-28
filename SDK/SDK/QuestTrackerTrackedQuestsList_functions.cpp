#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      CallFunc_GetPinnedQuests_OutPinnedQuestItems                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UFortQuestItem*> UQuestTrackerTrackedQuestsList_C::GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetPinnedQuests_OutPinnedQuestItems, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestTrackerTrackedQuestsList_C", "GetQuestsToDisplay");

	Params::UQuestTrackerTrackedQuestsList_C_GetQuestsToDisplay_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPinnedQuests_OutPinnedQuestItems = CallFunc_GetPinnedQuests_OutPinnedQuestItems;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

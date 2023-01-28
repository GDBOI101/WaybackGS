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

// 0x10 (0x3F8 - 0x3E8)
// BlueprintGeneratedClass CheckRateExperienceAction.CheckRateExperienceAction_C
class ACheckRateExperienceAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckRateExperienceAction_C");
		return Clss;
	}

	void UserConstructionScript();
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckRateExperienceAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFeedback_RateExperience_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetFeedbackTitle_ReturnValue, bool CallFunc_ShouldShowRateWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsPendingLogout_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

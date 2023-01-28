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
// BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C
class AAnnounce_OnboardingSatelliteCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x400(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          SatelliteMediaSource;                              // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowSkipping;                                     // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      StartingState;                                     // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMediaSubtitlesPlayer*             SatelliteSubtitlesPlayer;                          // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_OnboardingSatelliteCine_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7();
	void OnStateEntered_9AA291E3426E3967D1365A9851D878CE();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_OnboardingSatelliteCine(int32 EntryPoint, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

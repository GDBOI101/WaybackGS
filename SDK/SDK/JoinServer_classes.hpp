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

// 0x7C (0x47C - 0x400)
// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
class UJoinServer_C : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ManualStart;                                       // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConfirmationDialogAction>     TutorialCanceledConfirmActions;                    // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  NoneAction;                                        // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundPromptTutorial;                               // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MatchmakingAttempts;                               // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialMatchmakingStarted;                        // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressWidget_C*                     ProgressWidget;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialWindow_C*                     TutorialWindow;                                    // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbandonSession;                                    // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MenuWidget;                                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMatchmakingAttempts;                            // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URejoinWindow_C*                       RejoinWindow;                                      // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RejoinAttemptCount;                                // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JoinServer_C");
		return Clss;
	}

	void HandleLobbyConnectingToGame();
	void ShowAbandoningProgress(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void ShowRetryRejoinWindow(class FText Failure, bool AllowRetry, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void ShowRetryRejoinSession(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsJoinableGameAvailable_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ShowRejoiningProgress(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void HideRejoinWindow(bool AbandonSession);
	void ShowRejoinWindow(class UWidget* CallFunc_PopWigdet_ReturnValue);
	class UWidget* HandleGetMainMenuContent();
	void ShowTutorialCanceled(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void GetMatchmakingError(enum class EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText, enum class EMatchmakingCompleteResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText K2Node_Select_Default);
	void HandleLobbyTimeUpdated(int32 TimeRemaining, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsWorldRecordLoaded_ReturnValue, bool CallFunc_JoinFromLobby_ReturnValue);
	void SkipTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void StartTutorialMatchmakingFlow(class UWidget* CallFunc_PopWigdet_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_StartOnboardingMission_ReturnValue);
	void HandleEnterState(enum class EFortUIState PreviousState, enum class EFortUIState LocalPreviousState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleLobbyDisconnected();
	void HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result, enum class EMatchmakingCompleteResult MatchmakingResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetMatchmakingError_ErrorText, class UWidget* CallFunc_PopWigdet_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialize(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class URejoinWindow_C* CallFunc_Create_ReturnValue, class UProgressWidget_C* CallFunc_Create_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UTutorialWindow_C* CallFunc_Create_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(enum class EFortDialogResult Result, class FName ResultName);
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void RequestTutorialRetry();
	void ShowSkipTutorial();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleRequestRejoinRetry();
	void HandleRequestAbandon();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Construct();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void ExecuteUbergraph_JoinServer(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortTutorialContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_ShouldPromptToSkipTutorial_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_RejoinSession* CallFunc_RejoinSession_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, class UFortAsyncAction_AbandonSession* CallFunc_AbandonSession_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, enum class EFortUIState K2Node_Event_PreviousUIState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

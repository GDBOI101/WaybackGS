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

// 0xB3 (0x4B3 - 0x400)
// WidgetBlueprintGeneratedClass UIManager.UIManager_C
class UUIManager_C : public UFortUIManagerWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UNamedSlot*                            Confirmation_Layer;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ControllerDisconnectedLayer;                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Error_Layer;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      GlobalInvalidationBox;                             // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Modal_Layer;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTalkingHeadWidget_C*             QuestTalkingHeadWidget;                            // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            State_Content_Layer;                               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            TalkingHeadLayer;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastDisplayArea_C*                   ToastDisplayArea;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ToastDisplayLayer;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Tutorial_Layer;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialOverlay_C*                    TutorialOverlay;                                   // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatablePanel*               CurrentModalWidget;                                // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonActivatablePanel*>       ModalQueue;                                        // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFortDialogDescription_NUI>    ConfirmationQueue;                                 // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UConfirmationWindow_C*                 ConfirmationWindow;                                // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UErrorWindow_C*                        ErrorWindow;                                       // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWebPurchase_C*                        WebPurchaseWindow;                                 // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ControllerDisconnectedModal;                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bClosingConfirmation;                              // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bClosingErrorDialog;                               // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShouldTriggerCameraModeOnClose;                   // 0x4B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UIManager_C");
		return Clss;
	}

	bool IsShowingModalsConfirmationsErrors(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue3, int32 CallFunc_GetChildrenCount_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3);
	void SafeTriggerCursorMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SafeTriggerCameraMode(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearConfirmationLayer(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveModalPanel(class UCommonActivatablePanel* Panel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PopModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleControllerConnectionChanged(bool bConnected, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle, const struct FFortDialogExternalLatentActionHandle& CallFunc_GetLatentActionWaitHandle_LatentActionHandle, bool CallFunc_EqualEqual_FFortDialogWaitingForLatentActionHandle_ReturnValue, bool CallFunc_IsLatentActionHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	bool IsConsole(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue);
	void DismissWebPurchase();
	void DisplayWebPurchase(class UWidget* WebWidget, const class FString& OfferId, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasChild_ReturnValue);
	void HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel, bool CallFunc_IsValid_ReturnValue);
	void AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Initialize(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, const class FString& CallFunc_GetPlatformName_ReturnValue, class FText Temp_text_Variable4, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UWebPurchase_C* CallFunc_Create_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, bool Temp_bool_Variable2, class UErrorWindow_C* CallFunc_Create_ReturnValue3, class FText K2Node_Select2_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class UConfirmationWindow_C* CallFunc_Create_ReturnValue4, bool CallFunc_HasAnyChildren_ReturnValue);
	void QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsStateContentChildShowing_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void ShowNextConfirmation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, const struct FFortDialogDescription_NUI& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleModalContentCleared();
	bool IsStateContentChildShowing(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void ShowNextModalWidget(class UCommonActivatablePanel* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel, bool CallFunc_IsStateContentChildShowing_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void PopCurrentModal();
	void ClearLayers(class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void DisplayStateContent(bool bDisplay);
	void OnStateStarted();
	void Destruct();
	void KillConfirmation();
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	void DebugToggleInvalidationPanel();
	void Construct();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateEnded();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void CloseConfirmationWindow();
	void CloseErrorWindow();
	void ExecuteUbergraph_UIManager(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsGamepadAttached_ReturnValue, bool K2Node_Event_bDisplay, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, const struct FFortErrorInfo& K2Node_Event_Info, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCanCache_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFortDialogDescription_NUI& K2Node_Event_Description, class UFortUIStateWidget_NUI* K2Node_Event_StateWidget, class UCommonActivatablePanel* K2Node_Event_Panel2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UCommonActivatablePanel* K2Node_Event_Panel, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

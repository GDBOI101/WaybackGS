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

// 0x1F8 (0x5F8 - 0x400)
// WidgetBlueprintGeneratedClass AthenaHUD.AthenaHUD_C
class UAthenaHUD_C : public UAthenaHUDBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UFortActorCanvas*                      _Actor_Canvas__Indicators;                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        _Horizontal_Box__Top_Right_Content;                // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__Camera_Mode_Content;                     // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__Cursor_Mode_Content;                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__Persistent_HUD_Content;                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       _Switcher__CursorModeContent;                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       _Switcher__Mode_Content;                           // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          _Vertical_Box__Bottom_Left_Content;                // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          _Vertical_Box__Top_Left_Content;                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          _Vertical_Box__Top_Right_Content;                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaAerialFeedback_C*               AthenaAerialFeedback;                              // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCompass_C*                      AthenaCompass;                                     // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEquippedItemWidget_C*           AthenaEquippedItemWidget;                          // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaFPS_C*                          AthenaFPS;                                         // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseWidget_C*              AthenaGamePhaseWidget;                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEquipProgress_C*                AthenaHealProgress;                                // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPickupManager_C*                AthenaPickupManager;                               // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerActionAlert_C*            AthenaPlayerActionAlert;                           // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerInfo_C*                   AthenaPlayerInfo_C_0;                              // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                    AthenaSessionId;                                   // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaWatchers_C*                     AthenaWatchers;                                    // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBottomBarWidget_C*                    BottomBarWidget;                                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortLiveStreamGrantWindowExpires_C* BP_FortLiveStreamGrantWindowExpires;               // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CursorModeContent;                                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameOverScreen_C*               GameOverScreen;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseChangeWidget_C*        GamePhaseAlert;                                    // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBoxBottomLeft;                         // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBoxCameraMode;                         // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBoxCenterPopup;                        // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*      LocalPlayerHitPointInfo;                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*             MinimapContainer;                                  // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayIndicatorContent;                           // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupCenterMessageWidget_C*           PopupCenterMessageWidget;                          // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickbarPrimary_C*              QuickbarPrimary;                                   // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickbarSecondary_C*            QuickbarSecondary;                                 // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPicker_C*                       RadialPicker;                                      // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResourceAggregationWidget_C*          ResourceAggregationWidget;                         // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticle_C*                            Reticle;                                           // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticleStatusWidget_C*                ReticleStatusWidget;                               // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                          Subtitles;                                         // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTeamInfo_C*                     TeamInfo;                                          // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortActorCanvas*                      TeamMembersActorCanvas;                            // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxMissionWidgets;                         // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     Widget_BuildWatermark;                             // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortQuickBars                    FocusedQuickbar;                                   // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UnfocusedQuickbarScale;                            // 0x584(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CursorModeEnabled;                                 // 0x58C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ZoneCompleted;                                     // 0x58D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInterestIndicatorWidget_C*>    AvailableInterestIndicators;                       // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>    ActiveInterestIndicators;                          // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  PlayerLeft;                                        // 0x5B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  KillsPrefix;                                       // 0x5C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAthenaTeamMemberIndicator_C*>  TeamMemberIndicators;                              // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWidgetSwitcher*                       _Switcher__CursorModeContent_0;                    // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUD_C");
		return Clss;
	}

	void SetupCameraMode(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess2);
	void AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaTeamMemberIndicator_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void HandleAircraftModeChanged(const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInAircraft_ReturnValue);
	void CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void CreateInterestIndicatorWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest, class UInterestIndicatorWidget_C* CurrentPointOfInterestWidget, bool Removed, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemovePointOfInterest_Removed, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleFocusChat();
	void ToggleTopLevelMenu(bool Show);
	void ToggleChat(bool Show);
	void SetPersistentHUDContentVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void HandleIndicatorModeChanged(bool InidicatorsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName& ActionName, class UUserWidget* CursorWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnPlayerTargetingChanged(bool IsTargeting, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess);
	void HandleKeybindsChanged();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough, bool HandleAction, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldCloseMenuOnEscape_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void SetQuickbarSizes(bool K2Node_SwitchEnum_CmpSuccess);
	void HandleQuickbarSlotFocusSlotChanged(enum class EFortQuickBars Quickbar_Index, int32 Slot, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchName_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortInputMode Temp_byte_Variable2, enum class EFortInputMode Temp_byte_Variable3, enum class EFortInputMode K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default);
	void OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED();
	void OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED();
	void Construct();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void QuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void Destruct();
	void HandleInputMethodChanged(bool UsingGamepad);
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature();
	void Prepare_Game_Over();
	void On_Player_Died(struct FFortPlayerDeathReport& DeathReport);
	void PrepareToShowEndGameUI();
	void On_Player_Won();
	void OnRevived();
	void HandleRevived();
	void OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText);
	void On_Team_Won();
	void TeamMembersChanged();
	void ShowGameOverLayer();
	void ExecuteUbergraph_AthenaHUD(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Array_Index_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue6, class UFortHUDContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortUIState K2Node_Event_PreviousUIState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue9, class UBuildingInfoIndicator_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, enum class ESlateVisibility Temp_byte_Variable2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UInteractionIndicator_C* CallFunc_Create_ReturnValue2, bool Temp_bool_Variable, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortPickerContext* CallFunc_GetContext_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, int32 Temp_int_Loop_Counter_Variable3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue14, int32 CallFunc_Add_IntInt_ReturnValue3, bool K2Node_CustomEvent_UsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable3, class UFortQuestItem* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFortDialogDescription& K2Node_MakeStruct_FortDialogDescription, class UFortAsyncAction_TriggerNotification* CallFunc_TriggerNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2, bool K2Node_DynamicCast_bSuccess2, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, bool CallFunc_HasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UAthenaTeamMemberIndicator_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue15, bool CallFunc_Less_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerStateAthena* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_RemoveChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

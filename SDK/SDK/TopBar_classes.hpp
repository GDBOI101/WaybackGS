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

// 0x10A (0x51A - 0x410)
// WidgetBlueprintGeneratedClass TopBar.TopBar_C
class UTopBar_C : public UFortTopBarPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      PartyJoinFlash;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroMainMenu;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortLiveStreamGrantWindowExpires_C* BP_FortLiveStreamGrantWindowExpires;               // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBRCurrency_C*                         BRCurrency;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FortniteLogo;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                     FriendInviteBang;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyTimer_C*                         LobbyTimer_112;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_C*                           MainMenu;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MainMenuBorder;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MainMenuButton;                                    // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyBar_C*                       MiniPartyBar;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonContainer;                                // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PartyFlash;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                        PowerWidget;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Social;                                            // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           SocialMenuAnchor;                                  // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBarSkillPoints_C*                  TopBarSkillPoints;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         MainMenuShown;                                     // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_StoreButtonClicked_Error;                    // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_StoreMusic;                                  // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     Fort_Entry_Music_Controller;                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   LastNavigationRequestCameraState;                  // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HeroSquadPulseTimer;                               // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          DisableHeroSquadPulseTimer;                        // 0x4E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                  MainMenuStateChanged;                              // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortGameFeedbackBase*                 FeedbackWidget;                                    // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FEdgePower;                                        // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OpenAccountPicker;                                 // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseAnimation;                                      // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMainMenuOpen;                                    // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopBar_C");
		return Clss;
	}

	void ConfigureVisibleItemsForSubGame(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OpenSocialMenu(class FText Temp_text_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class FText Temp_text_Variable2, bool Temp_bool_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class FText K2Node_Select_Default, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess);
	void FireOpenAnalyticsEvent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	void HideMTXPlusButton();
	void ForceMenuClosed();
	class UWidget* GetMainMenuTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	class UWidget* GetFriendsTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	void HandleActiveInvitesCountChanged(int32 ActiveInvitesCount, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleAccountPickerResult(int32 ControllerIndex, bool UserSwitched, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetPlayerControllerID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UnbindActiveFriendsCountChangedEvent(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void HandleActiveFriendsCountChanged(int32 ActiveFriendsCount, class FText CallFunc_Conv_IntToText_ReturnValue);
	void BindActiveFriendsCountChangedEvent(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void BindSwitchProfileAction(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_BooleanAND_ReturnValue);
	void HandleSwitchProfileAction(bool* PassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetPlayerControllerID_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue);
	void HandleFeatureSwitchOp(enum class EFortUIFeature Feature, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UnbindNavigationDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindNavigationDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void ForceMenuOpen(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	class UWidget* GetSocialMenuContent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USlateContentCalloutMenu_C* CallFunc_Create_ReturnValue, class USizeBox* CallFunc_Get_Size_Box_Size_Box);
	void CreateWidgets(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFeedback_C* CallFunc_Create_ReturnValue);
	void HandleCloseAction(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue);
	void BindPanelControl(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void CloseMainMenu(const struct FMargin& K2Node_MakeStruct_Margin, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void OpenMainMenu(const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_GetAnimationCurrentTime_ReturnValue);
	void DialogResult_32D813B145A5E184B01A15AABE16B774(enum class EFortDialogResult Result, class FName ResultName);
	void OnBeginIntro();
	void OnBeginOutro();
	void OnActivated();
	void Hidden();
	void BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature();
	void BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature();
	void ShowSocialConfirmation(class FText MESSAGE);
	void On_Power_Increased();
	void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TopBar(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_AreSocialFeaturesEnabled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_HandleCloseAction_PassThrough, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FVector2D& Temp_struct_Variable2, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class FText K2Node_CustomEvent_Message, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default);
	void OpenAccountPicker__DelegateSignature();
	void MainMenuStateChanged__DelegateSignature(bool Open);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

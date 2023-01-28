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

// 0xE0 (0x550 - 0x470)
// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonGamepadSelect;                               // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestsPanel_C*                   DailyQuestsPanel;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchmakingWidget_C*            Launch;                                            // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                  PlayerEmblemAndXp;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanel_C*             PlayerPanel;                                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RegionWatermark;                                   // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ShadowPlayHighlights;                              // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputCancel;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SwitcherDetailsActiveIndex;                        // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3233[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortTeamMemberInfo>           TeamMembersInfo;                                   // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        HoveredPlayerIndex;                                // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3234[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   InputScroll;                                       // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SelectedPlayerIndex;                               // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3235[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NavigationOrderToPlayerIndex;                      // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                   PlaylistChange;                                    // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FillChange;                                        // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputNews;                                         // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputShowCustomMatchmakingKey;                     // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobby_C");
		return Clss;
	}

	void OnInput_ShowCustomMatchmakingKey(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCustomMatchmakingKeyModal_C* CallFunc_Create_ReturnValue);
	void HighlightsCountChanged(int32 NewParam, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void ShowModalNews(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaNewsModal_C* CallFunc_Create_ReturnValue);
	void OnInputNews(bool* bPassThrough);
	void OnInputFillChangeGamepad(bool* bCommited, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void OnInputPlaylistChangeGamepad(bool* bCommited, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void IsLocalPlayer(int32 PlayerIndex, bool* IsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void OnSelect(int32 PlayerIndex, class UPartyFinder_C* CallFunc_Create_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CanNavigatePlayers(bool* bCanNavigatePlayers, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHoveredPlayer(int32 PlayerIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanNavigatePlayers_bCanNavigatePlayers);
	void HoverNextPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void HoverPreviousPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void StartMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ShouldAddPlay(bool* bShouldAdd, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeInput(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
	void OnLobbyPlayerPadUnhovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLobbyPlayerPadHovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void OnLobbyPlayerGadgetsClicked(int32 PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int32 PlayerIndex);
	void OnLobbyDisconnected(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_ShouldAddCancel_bShouldAdd, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_OnInputCancel_bCommited, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd, bool CallFunc_IsVisible_ReturnValue);
	void RefreshInput(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable3, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class EInputActionState Temp_byte_Variable7, enum class EInputActionState Temp_byte_Variable8, enum class EInputActionState K2Node_Select_Default, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_ShouldAddScroll_bShouldAdd, enum class ESlateVisibility K2Node_Select2_Default, enum class EInputActionState K2Node_Select3_Default, bool CallFunc_ShouldAddCancel_bShouldAdd2, enum class EInputActionState K2Node_Select4_Default);
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnInputCancel(bool* bCommited, bool CallFunc_IsVisible_ReturnValue);
	void RefreshPlayerHeroes(int32 Index, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 EmptySlot, bool CallFunc_IsActivated_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_IsActivated_ReturnValue);
	void Refresh();
	void Initialize();
	void DialogResult_156754AE468EF93DCA2009A412591BA7(enum class EFortDialogResult Result, class FName ResultName);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void Event_Abandon();
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnPlayerClicked(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void OnActivated();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCMSContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsNewNewsAvailable_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_Event_PlayerIndex3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class FText CallFunc_GetMCPRegion_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, int32 K2Node_Event_PlayerIndex2, int32 K2Node_Event_PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

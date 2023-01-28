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

// 0xB0 (0x5C0 - 0x510)
// WidgetBlueprintGeneratedClass AthenaLeaderboardTab.AthenaLeaderboardTab_C
class UAthenaLeaderboardTab_C : public UAthenaLeaderboardScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(Transient, DuplicateTransient)
	class UComingSoonPlaceholderWidget_C*        ComingSoonPlaceholderWidget;                       // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EnableWidgetSwitcher;                              // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBContentMain;                                     // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardHeaderRowWidget_C*         LeaderboardHeaderRow;                              // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardListView_C*                LeaderboardListView;                               // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LeaderboardSwitcher;                               // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                LeaderboardThrobber;                               // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardRowWidget_C*               LocalUserRow;                                      // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoDataMessageText;                                 // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              QueryError;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QueryErrorMessageText;                             // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ResetTimeBox;                                      // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBFriendsOnly;                                     // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBNoData;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlaylistChange;                                    // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FriendTypeChange;                                  // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          QueryTimerHandle;                                  // 0x5B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                            OnQueryFinishedSound;                              // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLeaderboardTab_C");
		return Clss;
	}

	void ToggleDisabledTabVisuals(bool bShouldBeDisabled, bool CallFunc_Not_PreBool_ReturnValue);
	void OnShowQueryThrobber();
	void OnQueryStateChanged(bool bQueryInProgress, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnFriendTypeChangeGamepad(bool* bCommitted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingGamepad_ReturnValue);
	void OnPlaylistChangeGamepad(bool* bCommitted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void OnActivated();
	void BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnDeactivated();
	void OnQueryFinished();
	void OnQueryStarted();
	void ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool CallFunc_CanShowLeaderboards_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable6, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_ComponentBoundEvent_Value2, int32 K2Node_ComponentBoundEvent_Value, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_Map_Add_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UCommonButton* K2Node_Event_Button, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData2, bool K2Node_Event_bWasSuccessful, class UFortLeaderboardRowProxyInstance* K2Node_Event_LocalUserRow, class FText K2Node_Event_QueryErrorStr, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UAthenaLeaderboardTabButton_C* K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select3_Default, int32 Temp_int_Variable, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Variable2, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable7, enum class ESlateVisibility K2Node_Select4_Default, int32 CallFunc_Array_Length_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_CanShowLeaderboards_ReturnValue2, enum class ESlateVisibility K2Node_Select5_Default, int32 K2Node_Select6_Default, class FText K2Node_Select7_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

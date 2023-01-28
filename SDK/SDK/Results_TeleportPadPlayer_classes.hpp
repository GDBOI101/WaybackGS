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

// 0xF8 (0x330 - 0x238)
// WidgetBlueprintGeneratedClass Results_TeleportPadPlayer.Results_TeleportPadPlayer_C
class UResults_TeleportPadPlayer_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Outro;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_InviteCheck;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ThumbsPulse;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ThumbsClick;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_TeleportPadScreenIntro;                       // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonInvite;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonStats;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonThumbs;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayThumbs;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayerTop_C*       Top;                                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsValid;                                          // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsLocalPlayer;                                    // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ThumbsUp;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ThumbsNeutral;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      UniqueNetID;                                       // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnMissionStatsClicked;                             // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnAddFriendClicked;                                // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnUpVoteClicked;                                   // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  PlayerName;                                        // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTeleportPadIntroFinished;                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUniqueNetIdRepl                      ConsoleUniqueNetId;                                // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeleportPadPlayer_C");
		return Clss;
	}

	void IsLocalPlayersPad(bool* bIsLocalPlayersPad);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void CanFriend(bool* bCanFriendPlayer, enum class EFortFriendRequestStatus FriendRequestStatus, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable7, enum class EFortFriendRequestStatus Temp_byte_Variable, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool K2Node_Select2_Default, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue);
	void CanInviteParty(bool* bCanInvitePlayer, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue);
	void InvitePlayer(class UFortPartyContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_CanInviteParty_bCanInvitePlayer, bool CallFunc_CanFriend_bCanFriendPlayer);
	void ThumbsUpPlayer(const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void IsValidPad(bool* bIsValid);
	void SetIsValidPad();
	void Initialize(struct FUniqueNetIdRepl& InUniqueId, class UFortUIScoreReport*& InScoreReport, const struct FUniqueNetIdRepl& InConsoleUniqueId, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, bool CallFunc_CanFriend_bCanFriendPlayer, bool CallFunc_IsLocalPlayer_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue);
	void Team_Score_Screen_Intro();
	void Team_Score_Screen_Outro();
	void Teleport_Pad_Screen_Intro();
	void Outro();
	void BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_Results_TeleportPadPlayer(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_CanInviteParty_bCanInvitePlayer, bool CallFunc_CanFriend_bCanFriendPlayer, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UCommonButton* K2Node_ComponentBoundEvent_Button2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer);
	void OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void OnMissionStatsClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

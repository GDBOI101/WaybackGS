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


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsLocalPlayersPad                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsLocalPlayersPad(bool* bIsLocalPlayersPad)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsLocalPlayersPad");

	Params::UResults_TeleportPadPlayer_C_IsLocalPlayersPad_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocalPlayersPad != nullptr)
		*bIsLocalPlayersPad = Parms.bIsLocalPlayersPad;

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Focus");

	Params::UResults_TeleportPadPlayer_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanFriendPlayer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusFriendRequestStatus                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetFriendRequestStatusForPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::CanFriend(bool* bCanFriendPlayer, enum class EFortFriendRequestStatus FriendRequestStatus, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable7, enum class EFortFriendRequestStatus Temp_byte_Variable, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool K2Node_Select2_Default, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "CanFriend");

	Params::UResults_TeleportPadPlayer_C_CanFriend_Params Parms;
	Parms.FriendRequestStatus = FriendRequestStatus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetFriendRequestStatusForPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanFriendPlayer != nullptr)
		*bCanFriendPlayer = Parms.bCanFriendPlayer;

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanInviteParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanInvitePlayer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyRestriction   CallFunc_CanBeInvitedNetID_FailReason                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeInvitedNetID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::CanInviteParty(bool* bCanInvitePlayer, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "CanInviteParty");

	Params::UResults_TeleportPadPlayer_C_CanInviteParty_Params Parms;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanBeInvitedNetID_FailReason = CallFunc_CanBeInvitedNetID_FailReason;
	Parms.CallFunc_CanBeInvitedNetID_ReturnValue = CallFunc_CanBeInvitedNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInvitePlayer != nullptr)
		*bCanInvitePlayer = Parms.bCanInvitePlayer;

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.InvitePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInviteParty_bCanInvitePlayer                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFriend_bCanFriendPlayer                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::InvitePlayer(class UFortPartyContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_CanInviteParty_bCanInvitePlayer, bool CallFunc_CanFriend_bCanFriendPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "InvitePlayer");

	Params::UResults_TeleportPadPlayer_C_InvitePlayer_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_CanInviteParty_bCanInvitePlayer = CallFunc_CanInviteParty_bCanInvitePlayer;
	Parms.CallFunc_CanFriend_bCanFriendPlayer = CallFunc_CanFriend_bCanFriendPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::ThumbsUpPlayer(const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ThumbsUpPlayer");

	Params::UResults_TeleportPadPlayer_C_ThumbsUpPlayer_Params Parms;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsValidPad(bool* bIsValid)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsValidPad");

	Params::UResults_TeleportPadPlayer_C_IsValidPad_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::SetIsValidPad()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "SetIsValidPad");

	Params::UResults_TeleportPadPlayer_C_SetIsValidPad_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UFortUIScoreReport*          InScoreReport                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            InConsoleUniqueId                                                (Parm, HasGetValueTypeHash)
// int32                              ScoreReportIndex                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFriend_bCanFriendPlayer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               ()
// int32                              CallFunc_GetScoreReportIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::Initialize(struct FUniqueNetIdRepl& InUniqueId, class UFortUIScoreReport*& InScoreReport, const struct FUniqueNetIdRepl& InConsoleUniqueId, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, bool CallFunc_CanFriend_bCanFriendPlayer, bool CallFunc_IsLocalPlayer_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Initialize");

	Params::UResults_TeleportPadPlayer_C_Initialize_Params Parms;
	Parms.InUniqueId = InUniqueId;
	Parms.InScoreReport = InScoreReport;
	Parms.InConsoleUniqueId = InConsoleUniqueId;
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.ScoreReport = ScoreReport;
	Parms.CallFunc_CanFriend_bCanFriendPlayer = CallFunc_CanFriend_bCanFriendPlayer;
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetScoreReportIndex_ReturnValue = CallFunc_GetScoreReportIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Intro");

	Params::UResults_TeleportPadPlayer_C_Team_Score_Screen_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Outro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Outro");

	Params::UResults_TeleportPadPlayer_C_Team_Score_Screen_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::Teleport_Pad_Screen_Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Teleport Pad Screen Intro");

	Params::UResults_TeleportPadPlayer_C_Teleport_Pad_Screen_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::Outro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Outro");

	Params::UResults_TeleportPadPlayer_C_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_CanInviteParty_bCanInvitePlayer                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFriend_bCanFriendPlayer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::ExecuteUbergraph_Results_TeleportPadPlayer(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_CanInviteParty_bCanInvitePlayer, bool CallFunc_CanFriend_bCanFriendPlayer, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UCommonButton* K2Node_ComponentBoundEvent_Button2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ExecuteUbergraph_Results_TeleportPadPlayer");

	Params::UResults_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_CanInviteParty_bCanInvitePlayer = CallFunc_CanInviteParty_bCanInvitePlayer;
	Parms.CallFunc_CanFriend_bCanFriendPlayer = CallFunc_CanFriend_bCanFriendPlayer;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*TeleportPadPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnTeleportPadIntroFinished__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature_Params Parms;
	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnUpVoteClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnAddFriendClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayer_C::OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnMissionStatsClicked__DelegateSignature");

	Params::UResults_TeleportPadPlayer_C_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanViewProfile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanView                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::CanViewProfile(bool* CanView, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "CanViewProfile");

	Params::UAthenaLobbyPlayerPanelActions_C_CanViewProfile_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanView != nullptr)
		*CanView = Parms.CanView;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsTeamMemberLocalPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaLobbyPlayerPanelActions_C::IsTeamMemberLocalPlayer(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "IsTeamMemberLocalPlayer");

	Params::UAthenaLobbyPlayerPanelActions_C_IsTeamMemberLocalPlayer_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)

void UAthenaLobbyPlayerPanelActions_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "SetTeamMemberInfo");

	Params::UAthenaLobbyPlayerPanelActions_C_SetTeamMemberInfo_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnActiveFriendsCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveFriendsCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::OnActiveFriendsCountUpdated(int32 ActiveFriendsCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "OnActiveFriendsCountUpdated");

	Params::UAthenaLobbyPlayerPanelActions_C_OnActiveFriendsCountUpdated_Params Parms;
	Parms.ActiveFriendsCount = ActiveFriendsCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnPartyInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InvitesCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::OnPartyInvitesCountChanged(int32 InvitesCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "OnPartyInvitesCountChanged");

	Params::UAthenaLobbyPlayerPanelActions_C_OnPartyInvitesCountChanged_Params Parms;
	Parms.InvitesCount = InvitesCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "InitializeContextEvents");

	Params::UAthenaLobbyPlayerPanelActions_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*           CallFunc_GetFirstActiveActionButton_IconTextButton               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::Focus(class UIconTextButton_C* CallFunc_GetFirstActiveActionButton_IconTextButton, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "Focus");

	Params::UAthenaLobbyPlayerPanelActions_C_Focus_Params Parms;
	Parms.CallFunc_GetFirstActiveActionButton_IconTextButton = CallFunc_GetFirstActiveActionButton_IconTextButton;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.HasValidActions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasValidActions                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           CallFunc_GetFirstActiveActionButton_IconTextButton               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::HasValidActions(bool* bHasValidActions, class UIconTextButton_C* CallFunc_GetFirstActiveActionButton_IconTextButton, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "HasValidActions");

	Params::UAthenaLobbyPlayerPanelActions_C_HasValidActions_Params Parms;
	Parms.CallFunc_GetFirstActiveActionButton_IconTextButton = CallFunc_GetFirstActiveActionButton_IconTextButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasValidActions != nullptr)
		*bHasValidActions = Parms.bHasValidActions;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.GetFirstActiveActionButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*           IconTextButton                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::GetFirstActiveActionButton(class UIconTextButton_C** IconTextButton, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "GetFirstActiveActionButton");

	Params::UAthenaLobbyPlayerPanelActions_C_GetFirstActiveActionButton_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IconTextButton != nullptr)
		*IconTextButton = Parms.IconTextButton;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanManage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanManage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLocalPlayersParty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::CanManage(bool* bCanManage, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInLocalPlayersParty_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "CanManage");

	Params::UAthenaLobbyPlayerPanelActions_C_CanManage_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInLocalPlayersParty_ReturnValue = CallFunc_IsInLocalPlayersParty_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanManage != nullptr)
		*bCanManage = Parms.bCanManage;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsInvitationPending
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsInvitationPending                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            PlayerUniqueId                                                   (Edit, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetFriendRequestStatusForPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select2_Default                                           (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPendingPartyInvitation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool K2Node_Select_Default, const struct FUniqueNetIdRepl& K2Node_Select2_Default, bool K2Node_Select3_Default, bool CallFunc_HasPendingPartyInvitation_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "IsInvitationPending");

	Params::UAthenaLobbyPlayerPanelActions_C_IsInvitationPending_Params Parms;
	Parms.PlayerUniqueId = PlayerUniqueId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GetFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetFriendRequestStatusForPlayer_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_HasPendingPartyInvitation_ReturnValue = CallFunc_HasPendingPartyInvitation_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue2 = CallFunc_IsValidNetID_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = Parms.bIsInvitationPending;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanInviteToParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanInviteToParty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInvitationPending_bIsInvitationPending                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyRestriction   CallFunc_CanBeInvitedNetID_FailReason                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeInvitedNetID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::CanInviteToParty(bool* bCanInviteToParty, bool CallFunc_IsInvitationPending_bIsInvitationPending, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "CanInviteToParty");

	Params::UAthenaLobbyPlayerPanelActions_C_CanInviteToParty_Params Parms;
	Parms.CallFunc_IsInvitationPending_bIsInvitationPending = CallFunc_IsInvitationPending_bIsInvitationPending;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanBeInvitedNetID_FailReason = CallFunc_CanBeInvitedNetID_FailReason;
	Parms.CallFunc_CanBeInvitedNetID_ReturnValue = CallFunc_CanBeInvitedNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInviteToParty != nullptr)
		*bCanInviteToParty = Parms.bCanInviteToParty;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanFriend                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetFriendRequestStatusForPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::CanFriend(bool* bCanFriend, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue, bool K2Node_Select_Default, bool K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "CanFriend");

	Params::UAthenaLobbyPlayerPanelActions_C_CanFriend_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.CallFunc_GetFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetFriendRequestStatusForPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanFriend != nullptr)
		*bCanFriend = Parms.bCanFriend;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsMissionLocalPlayersOutpost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLocalPlayersOutpost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMissionDetails         CallFunc_GetActiveTileMissionDetails_MissionDetails              ()
// bool                               CallFunc_GetActiveTileMissionDetails_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::IsMissionLocalPlayersOutpost(bool* IsLocalPlayersOutpost, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortMissionDetails& CallFunc_GetActiveTileMissionDetails_MissionDetails, bool CallFunc_GetActiveTileMissionDetails_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "IsMissionLocalPlayersOutpost");

	Params::UAthenaLobbyPlayerPanelActions_C_IsMissionLocalPlayersOutpost_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetActiveTileMissionDetails_MissionDetails = CallFunc_GetActiveTileMissionDetails_MissionDetails;
	Parms.CallFunc_GetActiveTileMissionDetails_ReturnValue = CallFunc_GetActiveTileMissionDetails_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocalPlayersOutpost != nullptr)
		*IsLocalPlayersOutpost = Parms.IsLocalPlayersOutpost;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsLocalPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsLocalPlayer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::IsLocalPlayer(bool* bIsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "IsLocalPlayer");

	Params::UAthenaLobbyPlayerPanelActions_C_IsLocalPlayer_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocalPlayer != nullptr)
		*bIsLocalPlayer = Parms.bIsLocalPlayer;

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanViewProfile_CanView                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanManage_bCanManage                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInviteToParty_bCanInviteToParty                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFriend_bCanFriend                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayer_bIsLocalPlayer                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::Refresh(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_CanViewProfile_CanView, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_CanManage_bCanManage, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_CanInviteToParty_bCanInviteToParty, bool CallFunc_CanFriend_bCanFriend, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_IsLocalPlayer_bIsLocalPlayer)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "Refresh");

	Params::UAthenaLobbyPlayerPanelActions_C_Refresh_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.CallFunc_CanViewProfile_CanView = CallFunc_CanViewProfile_CanView;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanManage_bCanManage = CallFunc_CanManage_bCanManage;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_CanInviteToParty_bCanInviteToParty = CallFunc_CanInviteToParty_bCanInviteToParty;
	Parms.CallFunc_CanFriend_bCanFriend = CallFunc_CanFriend_bCanFriend;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_IsLocalPlayer_bIsLocalPlayer = CallFunc_IsLocalPlayer_bIsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UIconTextButton_C*>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::Initialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "Initialize");

	Params::UAthenaLobbyPlayerPanelActions_C_Initialize_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::OnButtonHovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "OnButtonHovered");

	Params::UAthenaLobbyPlayerPanelActions_C_OnButtonHovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanelActions_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.ExecuteUbergraph_AthenaLobbyPlayerPanelActions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowPartyDialog*CallFunc_ShowPartyLeaderManageDialog_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowPartyDialog*CallFunc_ShowPartyMemberManageDialog_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_Select2_Default                                           (ConstParm, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInOurParty_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelActions_C::ExecuteUbergraph_AthenaLobbyPlayerPanelActions(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_IsValidNetID_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyLeaderManageDialog_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyMemberManageDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_IsValidNetID_ReturnValue2, bool CallFunc_IsValidNetID_ReturnValue3, const struct FUniqueNetIdRepl& K2Node_Select_Default, const struct FUniqueNetIdRepl& K2Node_Select2_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsPlayerInOurParty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "ExecuteUbergraph_AthenaLobbyPlayerPanelActions");

	Params::UAthenaLobbyPlayerPanelActions_C_ExecuteUbergraph_AthenaLobbyPlayerPanelActions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_ShowPartyLeaderManageDialog_ReturnValue = CallFunc_ShowPartyLeaderManageDialog_ReturnValue;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ShowPartyMemberManageDialog_ReturnValue = CallFunc_ShowPartyMemberManageDialog_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_IsValidNetID_ReturnValue2 = CallFunc_IsValidNetID_ReturnValue2;
	Parms.CallFunc_IsValidNetID_ReturnValue3 = CallFunc_IsValidNetID_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsPlayerInOurParty_ReturnValue = CallFunc_IsPlayerInOurParty_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnGadgetsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelActions_C::OnGadgetsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelActions_C", "OnGadgetsClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanelActions_C_OnGadgetsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

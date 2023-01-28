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


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::RefreshBanner()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshBanner");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshBanner_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)

void UAthenaLobbyPlayerPanelDetails_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "SetTeamMemberInfo");

	Params::UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "InitializeContextEvents");

	Params::UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveFriendsCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnActiveFriendsCountUpdated(int32 ActiveFriendsCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnActiveFriendsCountUpdated");

	Params::UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params Parms;
	Parms.ActiveFriendsCount = ActiveFriendsCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InvitesCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnPartyInvitesCountChanged(int32 InvitesCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnPartyInvitesCountChanged");

	Params::UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params Parms;
	Parms.InvitesCount = InvitesCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::Initialize()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Initialize");

	Params::UAthenaLobbyPlayerPanelDetails_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsInvitationPending                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            PlayerUniqueId                                                   (Edit, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPendingPartyInvitation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetFriendRequestStatusForPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select3_Default                                           (HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_HasPendingPartyInvitation_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool K2Node_Select_Default, bool Temp_bool_Variable8, bool K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue2, const struct FUniqueNetIdRepl& K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "IsInvitationPending");

	Params::UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params Parms;
	Parms.PlayerUniqueId = PlayerUniqueId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_HasPendingPartyInvitation_ReturnValue = CallFunc_HasPendingPartyInvitation_ReturnValue;
	Parms.CallFunc_GetFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetFriendRequestStatusForPlayer_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue2 = CallFunc_IsValidNetID_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = Parms.bIsInvitationPending;

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInvitationPending_bIsInvitationPending                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPendingInvite(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsInvitationPending_bIsInvitationPending, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPendingInvite");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsInvitationPending_bIsInvitationPending = CallFunc_IsInvitationPending_bIsInvitationPending;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::RefreshPlayerName()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPlayerName");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::Refresh()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Refresh");

	Params::UAthenaLobbyPlayerPanelDetails_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "PreConstruct");

	Params::UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable4                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaLobbyPlayerPanelDetails_C::ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "ExecuteUbergraph_AthenaLobbyPlayerPanelDetails");

	Params::UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.Temp_string_Variable4 = Temp_string_Variable4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

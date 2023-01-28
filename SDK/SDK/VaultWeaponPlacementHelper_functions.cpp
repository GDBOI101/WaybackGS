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


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnLobbyPlayerUnhovered");

	Params::AVaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::GetFrontendAnimInstance()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "GetFrontendAnimInstance");

	Params::AVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWeaponPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnTeamMemberStateChanged");

	Params::AVaultWeaponPlacementHelper_C_OnTeamMemberStateChanged_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamMemberInfo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::OnTeamMemberRemoved(int32 TeamMemberInfo)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnTeamMemberRemoved");

	Params::AVaultWeaponPlacementHelper_C_OnTeamMemberRemoved_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWeaponPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnTeamMemberAdded");

	Params::AVaultWeaponPlacementHelper_C_OnTeamMemberAdded_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         OldCamera                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWeaponPlacementHelper_C::OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnFrontEndCameraChanged");

	Params::AVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params Parms;
	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::OnLobbyStarted()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnLobbyStarted");

	Params::AVaultWeaponPlacementHelper_C_OnLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::Initialize()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "Initialize");

	Params::AVaultWeaponPlacementHelper_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "InitializeContextEvents");

	Params::AVaultWeaponPlacementHelper_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerSelected(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnLobbyPlayerSelected");

	Params::AVaultWeaponPlacementHelper_C_OnLobbyPlayerSelected_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnLobbyPlayerHovered");

	Params::AVaultWeaponPlacementHelper_C_OnLobbyPlayerHovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "UserConstructionScript");

	Params::AVaultWeaponPlacementHelper_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ReceiveBeginPlay");

	Params::AVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::ItemRez()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ItemRez");

	Params::AVaultWeaponPlacementHelper_C_ItemRez_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ExecuteUbergraph_VaultWeaponPlacementHelper");

	Params::AVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultWeaponPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	Params::AVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

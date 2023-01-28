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


// Function MainMenu.MainMenu_C.ConfigureSubGameWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyBarAthena_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyBar_C*             CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::ConfigureSubGameWidgets(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyBarAthena_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFullPartyBar_C* CallFunc_Create_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ConfigureSubGameWidgets");

	Params::UMainMenu_C_ConfigureSubGameWidgets_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Set Icon Button List Column Width
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingGamepad                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::Set_Icon_Button_List_Column_Width(bool IsUsingGamepad)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Set Icon Button List Column Width");

	Params::UMainMenu_C_Set_Icon_Button_List_Column_Width_Params Parms;
	Parms.IsUsingGamepad = IsUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class UFortPartyContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class UCommonUIContext* CallFunc_GetContext_ReturnValue9)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindDelegates");

	Params::UMainMenu_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ProcessFriendCodes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::ProcessFriendCodes(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ProcessFriendCodes");

	Params::UMainMenu_C_ProcessFriendCodes_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnIssueFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFriendCode                 FriendCode                                                       (Parm, OutParm, ReferenceParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMainMenu_C::OnIssueFriendCodes(bool Success, struct FFriendCode& FriendCode, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnIssueFriendCodes");

	Params::UMainMenu_C_OnIssueFriendCodes_Params Parms;
	Parms.Success = Success;
	Parms.FriendCode = FriendCode;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.GetTotalNumFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Num_Codes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::GetTotalNumFriendCodes(int32* Num_Codes, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "GetTotalNumFriendCodes");

	Params::UMainMenu_C_GetTotalNumFriendCodes_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue = CallFunc_GetNumFriendCodesToIssue_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num_Codes != nullptr)
		*Num_Codes = Parms.Num_Codes;

}


// Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFriendCode>         FriendCodes                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainMenu_C::OnQueryUnredeemedFriendCodes(bool Success, TArray<struct FFriendCode>& FriendCodes)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnQueryUnredeemedFriendCodes");

	Params::UMainMenu_C_OnQueryUnredeemedFriendCodes_Params Parms;
	Parms.Success = Success;
	Parms.FriendCodes = FriendCodes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.RefreshFriendCodesButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalNumFriendCodes_Num_Codes                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlatformSupportFriendCodes_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalNumFriendCodes_Num_Codes2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UMainMenu_C::RefreshFriendCodesButton(class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalNumFriendCodes_Num_Codes, bool CallFunc_DoesPlatformSupportFriendCodes_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetTotalNumFriendCodes_Num_Codes2, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "RefreshFriendCodesButton");

	Params::UMainMenu_C_RefreshFriendCodesButton_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalNumFriendCodes_Num_Codes = CallFunc_GetTotalNumFriendCodes_Num_Codes;
	Parms.CallFunc_DoesPlatformSupportFriendCodes_ReturnValue = CallFunc_DoesPlatformSupportFriendCodes_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTotalNumFriendCodes_Num_Codes2 = CallFunc_GetTotalNumFriendCodes_Num_Codes2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPartyState         New_State                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPartyState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePartyStateChanged(enum class EFortPartyState New_State, enum class EFortPartyState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyStateChanged");

	Params::UMainMenu_C_HandlePartyStateChanged_Params Parms;
	Parms.New_State = New_State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleMatchmakingStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleMatchmakingStarted()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleMatchmakingStarted");

	Params::UMainMenu_C_HandleMatchmakingStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleLobbyDisconnected()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLobbyDisconnected");

	Params::UMainMenu_C_HandleLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleLobbyStarted()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLobbyStarted");

	Params::UMainMenu_C_HandleLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleMatchmakingComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleMatchmakingComplete");

	Params::UMainMenu_C_HandleMatchmakingComplete_Params Parms;
	Parms.Result = Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleActiveInvitesAmountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveInvitesAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandleActiveInvitesAmountChanged(int32 ActiveInvitesAmount, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleActiveInvitesAmountChanged");

	Params::UMainMenu_C_HandleActiveInvitesAmountChanged_Params Parms;
	Parms.ActiveInvitesAmount = ActiveInvitesAmount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              Party_Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePartyTypeChanged(enum class EPartyType Party_Type)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyTypeChanged");

	Params::UMainMenu_C_HandlePartyTypeChanged_Params Parms;
	Parms.Party_Type = Party_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyJoined
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandlePartyJoined()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyJoined");

	Params::UMainMenu_C_HandlePartyJoined_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     FeatureState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortUIFeatureState Temp_byte_Variable5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartybarUIFeatureChanged");

	Params::UMainMenu_C_HandlePartybarUIFeatureChanged_Params Parms;
	Parms.Feature = Feature;
	Parms.FeatureState = FeatureState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemovedIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::HandleRemotePlayerRemoved(int32 RemovedIndex)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleRemotePlayerRemoved");

	Params::UMainMenu_C_HandleRemotePlayerRemoved_Params Parms;
	Parms.RemovedIndex = RemovedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberState                                                   (Parm)

void UMainMenu_C::HandleRemotePlayerStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleRemotePlayerStateChanged");

	Params::UMainMenu_C_HandleRemotePlayerStateChanged_Params Parms;
	Parms.NewMemberState = NewMemberState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandlePartyLeft()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyLeft");

	Params::UMainMenu_C_HandlePartyLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         MemberState                                                      (Parm, OutParm, ReferenceParm)

void UMainMenu_C::HandleLocalPlayerStateChanged(struct FFortTeamMemberInfo& MemberState)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLocalPlayerStateChanged");

	Params::UMainMenu_C_HandleLocalPlayerStateChanged_Params Parms;
	Parms.MemberState = MemberState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePrivacySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              PartyPrivacyType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FriendsOfFriends                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::HandlePrivacySelected(enum class EPartyType PartyPrivacyType, bool FriendsOfFriends, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePrivacySelected");

	Params::UMainMenu_C_HandlePrivacySelected_Params Parms;
	Parms.PartyPrivacyType = PartyPrivacyType;
	Parms.FriendsOfFriends = FriendsOfFriends;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OpenPartyPrivacy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::OpenPartyPrivacy(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OpenPartyPrivacy");

	Params::UMainMenu_C_OpenPartyPrivacy_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OpenPartyInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    UIManager                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              K2Node_DynamicCast_AsParty_Finder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::OpenPartyInvites(class UFortUIManagerWidget_NUI* UIManager, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OpenPartyInvites");

	Params::UMainMenu_C_OpenPartyInvites_Params Parms;
	Parms.UIManager = UIManager;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsParty_Finder = K2Node_DynamicCast_AsParty_Finder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetPrivacyButtonData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Button_Text                                                      (Parm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UMainMenu_C::SetPrivacyButtonData(class UTexture2D* Image, class FText Button_Text, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetPrivacyButtonData");

	Params::UMainMenu_C_SetPrivacyButtonData_Params Parms;
	Parms.Image = Image;
	Parms.Button_Text = Button_Text;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdatePrivacyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              Overide_Party_Type                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Use_Overide_Party_Type                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPartyType              Party_Type                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPartyType              CallFunc_GetPartyPrivacySetting_OutPartyType                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::UpdatePrivacyButton(enum class EPartyType Overide_Party_Type, bool Use_Overide_Party_Type, enum class EPartyType Party_Type, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EPartyType CallFunc_GetPartyPrivacySetting_OutPartyType, bool CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly, bool CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly, bool CallFunc_GetPartyPrivacySetting_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdatePrivacyButton");

	Params::UMainMenu_C_UpdatePrivacyButton_Params Parms;
	Parms.Overide_Party_Type = Overide_Party_Type;
	Parms.Use_Overide_Party_Type = Use_Overide_Party_Type;
	Parms.Party_Type = Party_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyPrivacySetting_OutPartyType = CallFunc_GetPartyPrivacySetting_OutPartyType;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly = CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly = CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly;
	Parms.CallFunc_GetPartyPrivacySetting_ReturnValue = CallFunc_GetPartyPrivacySetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.IsOutpostOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutpostOwner                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::IsOutpostOwner(bool* OutpostOwner, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "IsOutpostOwner");

	Params::UMainMenu_C_IsOutpostOwner_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutpostOwner != nullptr)
		*OutpostOwner = Parms.OutpostOwner;

}


// Function MainMenu.MainMenu_C.PushDailyRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::PushDailyRewards(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4)
{
	static auto Func = Class->GetFunction("MainMenu_C", "PushDailyRewards");

	Params::UMainMenu_C_PushDailyRewards_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ProcessPartyBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::ProcessPartyBar()
{
	static auto Func = Class->GetFunction("MainMenu_C", "ProcessPartyBar");

	Params::UMainMenu_C_ProcessPartyBar_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOutpostOwner_OutpostOwner                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::UpdateButtonStates(bool CallFunc_IsOutpostOwner_OutpostOwner, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasCompletedQuest_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateButtonStates");

	Params::UMainMenu_C_UpdateButtonStates_Params Parms;
	Parms.CallFunc_IsOutpostOwner_OutpostOwner = CallFunc_IsOutpostOwner_OutpostOwner;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HelpText                                                         (Parm)

void UMainMenu_C::UpdateDescriptionText(class FText HelpText)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateDescriptionText");

	Params::UMainMenu_C_UpdateDescriptionText_Params Parms;
	Parms.HelpText = HelpText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InitializeMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowLogout_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UIconTextButton_C*>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrivacyWidget_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShowFriendCodesSelection_C* CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_OutpostOwner                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ArePartyFeaturesEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AllowQuit_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessageCenterWidget_C*      CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNews_C*                     CallFunc_Create_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPermissionsRoot_C*          CallFunc_Create_ReturnValue5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegalInfo_C*                CallFunc_Create_ReturnValue6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCredits_C*                  CallFunc_Create_ReturnValue7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenu_C*              CallFunc_Create_ReturnValue8                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::InitializeMainMenu(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_AllowLogout_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, bool Temp_bool_Variable3, class UIconTextButton_C* CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select2_Default, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPrivacyWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UShowFriendCodesSelection_C* CallFunc_Create_ReturnValue2, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_IsOutpostOwner_OutpostOwner, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_AllowQuit_ReturnValue, bool CallFunc_IsInZone_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UMessageCenterWidget_C* CallFunc_Create_ReturnValue3, class UNews_C* CallFunc_Create_ReturnValue4, class UPermissionsRoot_C* CallFunc_Create_ReturnValue5, class ULegalInfo_C* CallFunc_Create_ReturnValue6, class UCredits_C* CallFunc_Create_ReturnValue7, class UOptionsMenu_C* CallFunc_Create_ReturnValue8)
{
	static auto Func = Class->GetFunction("MainMenu_C", "InitializeMainMenu");

	Params::UMainMenu_C_InitializeMainMenu_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_AllowLogout_ReturnValue = CallFunc_AllowLogout_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_IsOutpostOwner_OutpostOwner = CallFunc_IsOutpostOwner_OutpostOwner;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_ArePartyFeaturesEnabled_ReturnValue = CallFunc_ArePartyFeaturesEnabled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_AllowQuit_ReturnValue = CallFunc_AllowQuit_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue2 = CallFunc_IsInZone_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue4 = CallFunc_Create_ReturnValue4;
	Parms.CallFunc_Create_ReturnValue5 = CallFunc_Create_ReturnValue5;
	Parms.CallFunc_Create_ReturnValue6 = CallFunc_Create_ReturnValue6;
	Parms.CallFunc_Create_ReturnValue7 = CallFunc_Create_ReturnValue7;
	Parms.CallFunc_Create_ReturnValue8 = CallFunc_Create_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetupTestUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFlagStatus             CallFunc_CheckFlag_OutStatus                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::SetupTestUI(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFlagStatus CallFunc_CheckFlag_OutStatus, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetupTestUI");

	Params::UMainMenu_C_SetupTestUI_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CheckFlag_OutStatus = CallFunc_CheckFlag_OutStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("MainMenu_C", "DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0");

	Params::UMainMenu_C_DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("MainMenu_C", "DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7");

	Params::UMainMenu_C_DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetCenterWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::SetCenterWidget()
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetCenterWidget");

	Params::UMainMenu_C_SetCenterWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LeaveUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::LeaveUnhovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "LeaveUnhovered");

	Params::UMainMenu_C_LeaveUnhovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LeaveGameHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::LeaveGameHovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "LeaveGameHovered");

	Params::UMainMenu_C_LeaveGameHovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindLeaveHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::BindLeaveHovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindLeaveHovered");

	Params::UMainMenu_C_BindLeaveHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindLeaveUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::BindLeaveUnhovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindLeaveUnhovered");

	Params::UMainMenu_C_BindLeaveUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_C::Destruct()
{
	static auto Func = Class->GetFunction("MainMenu_C", "Destruct");

	Params::UMainMenu_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_C::Construct()
{
	static auto Func = Class->GetFunction("MainMenu_C", "Construct");

	Params::UMainMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleChangeGameModeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleChangeGameModeHovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleChangeGameModeHovered");

	Params::UMainMenu_C_HandleChangeGameModeHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleChangeGameModeUnhovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleChangeGameModeUnhovered");

	Params::UMainMenu_C_HandleChangeGameModeUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Handle Game Mode Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::Handle_Game_Mode_Unhovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Handle Game Mode Unhovered");

	Params::UMainMenu_C_Handle_Game_Mode_Unhovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Handle Game Mode Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::Handle_Game_Mode_Hovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Handle Game Mode Hovered");

	Params::UMainMenu_C_Handle_Game_Mode_Hovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature_Params Parms;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetUITestingClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAthenaCodeOfConductURL_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowWebURL_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button49                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button48                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button47                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button46                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button45                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button44                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// enum class EFortDialogResult       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button43                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button42                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button41                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button40                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button39                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button38                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button37                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button36                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button35                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button34                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button33                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button32                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button31                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue2                               ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Visibility                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6, class UCommonUIContext* CallFunc_GetContext_ReturnValue7, class UClass* CallFunc_GetUITestingClass_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_IsInZone_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue13, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue14, const class FString& CallFunc_GetAthenaCodeOfConductURL_ReturnValue, bool CallFunc_ShowWebURL_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue15, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button49, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button48, class UCommonButton* K2Node_ComponentBoundEvent_Button47, class UCommonButton* K2Node_ComponentBoundEvent_Button46, class UCommonButton* K2Node_ComponentBoundEvent_Button45, class UCommonButton* K2Node_ComponentBoundEvent_Button44, class FText CallFunc_GetEmptyText_ReturnValue, enum class EFortDialogResult Temp_byte_Variable3, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button43, class UCommonButton* K2Node_ComponentBoundEvent_Button42, class UCommonButton* K2Node_ComponentBoundEvent_Button41, class UCommonButton* K2Node_ComponentBoundEvent_Button40, class UCommonButton* K2Node_ComponentBoundEvent_Button39, class UCommonButton* K2Node_ComponentBoundEvent_Button38, class UCommonButton* K2Node_ComponentBoundEvent_Button37, class UCommonButton* K2Node_ComponentBoundEvent_Button36, class UCommonButton* K2Node_CustomEvent_Button4, class UIconTextButton_C* CallFunc_GetButton_Leave, class UCommonButton* K2Node_CustomEvent_Button3, class UIconTextButton_C* CallFunc_GetButton_Leave2, class UCommonButton* K2Node_ComponentBoundEvent_Button35, class FName Temp_name_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button34, class UIconTextButton_C* CallFunc_GetButton_Leave3, class UCommonButton* K2Node_ComponentBoundEvent_Button33, class UCommonButton* K2Node_ComponentBoundEvent_Button32, class UCommonButton* K2Node_ComponentBoundEvent_Button31, class UFortHUDContext* CallFunc_GetContext_ReturnValue16, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonButton* K2Node_ComponentBoundEvent_Button30, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button29, class UCommonButton* K2Node_ComponentBoundEvent_Button28, class UCommonButton* K2Node_ComponentBoundEvent_Button27, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button26, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button25, class UCommonButton* K2Node_ComponentBoundEvent_Button24, class UCommonButton* K2Node_ComponentBoundEvent_Button23, class UCommonButton* K2Node_ComponentBoundEvent_Button22, class UCommonButton* K2Node_ComponentBoundEvent_Button21, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue4, class UCommonButton* K2Node_ComponentBoundEvent_Button20, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue5, class UCommonButton* K2Node_ComponentBoundEvent_Button19, enum class EFortDialogResult Temp_byte_Variable4, class FName Temp_name_Variable2, bool K2Node_SwitchEnum2_CmpSuccess, class UCommonUIContext* CallFunc_GetContext_ReturnValue17, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue3, class UBoostsRoot_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UCommonButton* K2Node_ComponentBoundEvent_Button18, class UCommonButton* K2Node_ComponentBoundEvent_Button17, class UCommonButton* K2Node_ComponentBoundEvent_Button16, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_IsInZone_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button15, class UCommonButton* K2Node_ComponentBoundEvent_Button14, class UCommonButton* K2Node_ComponentBoundEvent_Button13, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button11, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class FText CallFunc_GetEmptyText_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_CustomEvent_Button2, class UCommonButton* K2Node_CustomEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_ComponentBoundEvent_Visibility, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::UMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetUITestingClass_ReturnValue = CallFunc_GetUITestingClass_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue2 = CallFunc_GetInputManager_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.CallFunc_GetAthenaCodeOfConductURL_ReturnValue = CallFunc_GetAthenaCodeOfConductURL_ReturnValue;
	Parms.CallFunc_ShowWebURL_ReturnValue = CallFunc_ShowWebURL_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button49 = K2Node_ComponentBoundEvent_Button49;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button48 = K2Node_ComponentBoundEvent_Button48;
	Parms.K2Node_ComponentBoundEvent_Button47 = K2Node_ComponentBoundEvent_Button47;
	Parms.K2Node_ComponentBoundEvent_Button46 = K2Node_ComponentBoundEvent_Button46;
	Parms.K2Node_ComponentBoundEvent_Button45 = K2Node_ComponentBoundEvent_Button45;
	Parms.K2Node_ComponentBoundEvent_Button44 = K2Node_ComponentBoundEvent_Button44;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Button43 = K2Node_ComponentBoundEvent_Button43;
	Parms.K2Node_ComponentBoundEvent_Button42 = K2Node_ComponentBoundEvent_Button42;
	Parms.K2Node_ComponentBoundEvent_Button41 = K2Node_ComponentBoundEvent_Button41;
	Parms.K2Node_ComponentBoundEvent_Button40 = K2Node_ComponentBoundEvent_Button40;
	Parms.K2Node_ComponentBoundEvent_Button39 = K2Node_ComponentBoundEvent_Button39;
	Parms.K2Node_ComponentBoundEvent_Button38 = K2Node_ComponentBoundEvent_Button38;
	Parms.K2Node_ComponentBoundEvent_Button37 = K2Node_ComponentBoundEvent_Button37;
	Parms.K2Node_ComponentBoundEvent_Button36 = K2Node_ComponentBoundEvent_Button36;
	Parms.K2Node_CustomEvent_Button4 = K2Node_CustomEvent_Button4;
	Parms.CallFunc_GetButton_Leave = CallFunc_GetButton_Leave;
	Parms.K2Node_CustomEvent_Button3 = K2Node_CustomEvent_Button3;
	Parms.CallFunc_GetButton_Leave2 = CallFunc_GetButton_Leave2;
	Parms.K2Node_ComponentBoundEvent_Button35 = K2Node_ComponentBoundEvent_Button35;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_ComponentBoundEvent_Button34 = K2Node_ComponentBoundEvent_Button34;
	Parms.CallFunc_GetButton_Leave3 = CallFunc_GetButton_Leave3;
	Parms.K2Node_ComponentBoundEvent_Button33 = K2Node_ComponentBoundEvent_Button33;
	Parms.K2Node_ComponentBoundEvent_Button32 = K2Node_ComponentBoundEvent_Button32;
	Parms.K2Node_ComponentBoundEvent_Button31 = K2Node_ComponentBoundEvent_Button31;
	Parms.CallFunc_GetContext_ReturnValue16 = CallFunc_GetContext_ReturnValue16;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_ComponentBoundEvent_Button30 = K2Node_ComponentBoundEvent_Button30;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button29 = K2Node_ComponentBoundEvent_Button29;
	Parms.K2Node_ComponentBoundEvent_Button28 = K2Node_ComponentBoundEvent_Button28;
	Parms.K2Node_ComponentBoundEvent_Button27 = K2Node_ComponentBoundEvent_Button27;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button26 = K2Node_ComponentBoundEvent_Button26;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue3 = CallFunc_GetUIManagerWidget_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button25 = K2Node_ComponentBoundEvent_Button25;
	Parms.K2Node_ComponentBoundEvent_Button24 = K2Node_ComponentBoundEvent_Button24;
	Parms.K2Node_ComponentBoundEvent_Button23 = K2Node_ComponentBoundEvent_Button23;
	Parms.K2Node_ComponentBoundEvent_Button22 = K2Node_ComponentBoundEvent_Button22;
	Parms.K2Node_ComponentBoundEvent_Button21 = K2Node_ComponentBoundEvent_Button21;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue4 = CallFunc_GetUIManagerWidget_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Button20 = K2Node_ComponentBoundEvent_Button20;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue5 = CallFunc_GetUIManagerWidget_ReturnValue5;
	Parms.K2Node_ComponentBoundEvent_Button19 = K2Node_ComponentBoundEvent_Button19;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue17 = CallFunc_GetContext_ReturnValue17;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue3 = CallFunc_GetInputManager_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_ComponentBoundEvent_Button18 = K2Node_ComponentBoundEvent_Button18;
	Parms.K2Node_ComponentBoundEvent_Button17 = K2Node_ComponentBoundEvent_Button17;
	Parms.K2Node_ComponentBoundEvent_Button16 = K2Node_ComponentBoundEvent_Button16;
	Parms.CallFunc_GetContext_ReturnValue18 = CallFunc_GetContext_ReturnValue18;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_IsInZone_ReturnValue2 = CallFunc_IsInZone_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button15 = K2Node_ComponentBoundEvent_Button15;
	Parms.K2Node_ComponentBoundEvent_Button14 = K2Node_ComponentBoundEvent_Button14;
	Parms.K2Node_ComponentBoundEvent_Button13 = K2Node_ComponentBoundEvent_Button13;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.K2Node_ComponentBoundEvent_Button11 = K2Node_ComponentBoundEvent_Button11;
	Parms.K2Node_ComponentBoundEvent_Button10 = K2Node_ComponentBoundEvent_Button10;
	Parms.K2Node_ComponentBoundEvent_Button9 = K2Node_ComponentBoundEvent_Button9;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.CallFunc_GetEmptyText_ReturnValue2 = CallFunc_GetEmptyText_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_CustomEvent_Button2 = K2Node_CustomEvent_Button2;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Visibility = K2Node_ComponentBoundEvent_Visibility;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnRequestShowFeedbackWidget__DelegateSignature");

	Params::UMainMenu_C_OnRequestShowFeedbackWidget__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

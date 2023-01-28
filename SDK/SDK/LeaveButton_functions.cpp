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


// Function LeaveButton.LeaveButton_C.IsInNeighborhood
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInNeighborhood                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortDeployableBaseManager*  DeployableBaseManager                                            (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeployableBaseUseType  CallFunc_GetDeployableBaseUseType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortDeployableBaseManager*  CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::IsInNeighborhood(bool* bIsInNeighborhood, class AFortDeployableBaseManager* DeployableBaseManager, enum class EDeployableBaseUseType CallFunc_GetDeployableBaseUseType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "IsInNeighborhood");

	Params::ULeaveButton_C_IsInNeighborhood_Params Parms;
	Parms.DeployableBaseManager = DeployableBaseManager;
	Parms.CallFunc_GetDeployableBaseUseType_ReturnValue = CallFunc_GetDeployableBaseUseType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInNeighborhood != nullptr)
		*bIsInNeighborhood = Parms.bIsInNeighborhood;

}


// Function LeaveButton.LeaveButton_C.Update Style State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Update_Style_State()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Update Style State");

	Params::ULeaveButton_C_Update_Style_State_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextOverride                                                     (Parm)

void ULeaveButton_C::SetText(class FText TextOverride)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "SetText");

	Params::ULeaveButton_C_SetText_Params Parms;
	Parms.TextOverride = TextOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*           Leave                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::GetButton(class UIconTextButton_C** Leave)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "GetButton");

	Params::ULeaveButton_C_GetButton_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Leave != nullptr)
		*Leave = Parms.Leave;

}


// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasUnsavedQuestProgress                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HasUnsavedQuestProgress");

	Params::ULeaveButton_C_HasUnsavedQuestProgress_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue = CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUnsavedQuestProgress != nullptr)
		*HasUnsavedQuestProgress = Parms.HasUnsavedQuestProgress;

}


// Function LeaveButton.LeaveButton_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::LeaveParty(class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "LeaveParty");

	Params::ULeaveButton_C_LeaveParty_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLeaveActionText_Text                                 ()
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::UpdateState(class FText CallFunc_GetLeaveActionText_Text, bool CallFunc_IsConsideredInGame_InGame, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "UpdateState");

	Params::ULeaveButton_C_UpdateState_Params Parms;
	Parms.CallFunc_GetLeaveActionText_Text = CallFunc_GetLeaveActionText_Text;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InGame                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::IsConsideredInGame(bool* InGame, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "IsConsideredInGame");

	Params::ULeaveButton_C_IsConsideredInGame_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InGame != nullptr)
		*InGame = Parms.InGame;

}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable5                                              ()
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::GetLeaveActionText(class FText* Text, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInOutpostZone_ReturnValue, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText Temp_text_Variable5, class FText K2Node_Select_Default, bool CallFunc_IsConsideredInGame_InGame, bool Temp_bool_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select2_Default, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class FText K2Node_Select3_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "GetLeaveActionText");

	Params::ULeaveButton_C_GetLeaveActionText_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_IsConsideredInGame_InGame2 = CallFunc_IsConsideredInGame_InGame2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_1E39F47546648367BB2F218F69311220(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_1E39F47546648367BB2F218F69311220");

	Params::ULeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_F5AF58094777CFEEC0BF28BEA620800C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_F5AF58094777CFEEC0BF28BEA620800C");

	Params::ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B");

	Params::ULeaveButton_C_DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "DialogResult_A0D25F7F4E82D325BF226E811F1D79AF");

	Params::ULeaveButton_C_DialogResult_A0D25F7F4E82D325BF226E811F1D79AF_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::HandleTeamMemberRemoved(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberRemoved");

	Params::ULeaveButton_C_HandleTeamMemberRemoved_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewTeamMemberInfo                                                (Parm)

void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberAdded");

	Params::ULeaveButton_C_HandleTeamMemberAdded_Params Parms;
	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::HandleLobbyEvents()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "HandleLobbyEvents");

	Params::ULeaveButton_C_HandleLobbyEvents_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Construct()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Construct");

	Params::ULeaveButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	Params::ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaveButton_C::Destruct()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Destruct");

	Params::ULeaveButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "PreConstruct");

	Params::ULeaveButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result4                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_NewTeamMemberInfo                             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable3                                              ()
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// bool                               CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress2        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortOutpostContext*         CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable6                                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable7                                              ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaveWarningInfo_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaveWarningInfo_C*         CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable8                                              ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        K2Node_Select4_Default                                           ()
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsideredInGame_InGame2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInNeighborhood_bIsInNeighborhood                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable9                                              ()
// bool                               CallFunc_IsInOutpostZone_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable10                                             ()
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        K2Node_Select7_Default                                           ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int32 EntryPoint, bool Temp_bool_Variable, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName3, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, bool Temp_bool_Variable3, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FText K2Node_Select_Default, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class FName Temp_name_Variable4, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable4, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, class FText Temp_text_Variable3, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, class FText Temp_text_Variable4, class FText Temp_text_Variable5, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress2, bool Temp_bool_Variable4, class UFortOutpostContext* CallFunc_GetContext_ReturnValue8, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_IsInOutpostZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue10, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class FText Temp_text_Variable7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable8, bool Temp_bool_Variable5, bool Temp_bool_Variable6, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool Temp_bool_Variable7, bool CallFunc_IsConsideredInGame_InGame2, bool CallFunc_IsInNeighborhood_bIsInNeighborhood, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class FText Temp_text_Variable9, bool CallFunc_IsInOutpostZone_ReturnValue2, class FText Temp_text_Variable10, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, class FText K2Node_Select7_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "ExecuteUbergraph_LeaveButton");

	Params::ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result3 = K2Node_CustomEvent_Result3;
	Parms.K2Node_CustomEvent_ResultName3 = K2Node_CustomEvent_ResultName3;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CustomEvent_Result4 = K2Node_CustomEvent_Result4;
	Parms.K2Node_CustomEvent_ResultName4 = K2Node_CustomEvent_ResultName4;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_NewTeamMemberInfo = K2Node_CustomEvent_NewTeamMemberInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_IsConsideredInGame_InGame = CallFunc_IsConsideredInGame_InGame;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue2 = CallFunc_GetNumPlayersInLocalParty_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress = CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress;
	Parms.CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress2 = CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue3 = CallFunc_GetNumPlayersInLocalParty_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue3 = CallFunc_GetUINavigationManager_ReturnValue3;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_IsConsideredInGame_InGame2 = CallFunc_IsConsideredInGame_InGame2;
	Parms.CallFunc_IsInNeighborhood_bIsInNeighborhood = CallFunc_IsInNeighborhood_bIsInNeighborhood;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.CallFunc_IsInOutpostZone_ReturnValue2 = CallFunc_IsInOutpostZone_ReturnValue2;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue3 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue3;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue4 = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto Func = Class->GetFunction("LeaveButton_C", "Update Visibility__DelegateSignature");

	Params::ULeaveButton_C_Update_Visibility__DelegateSignature_Params Parms;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("LeaveButton_C", "OnClicked__DelegateSignature");

	Params::ULeaveButton_C_OnClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

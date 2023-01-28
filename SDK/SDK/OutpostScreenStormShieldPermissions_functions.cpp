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


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldPermissions_C::CenterWidget()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "CenterWidget");

	Params::UOutpostScreenStormShieldPermissions_C_CenterWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOutpostScreenStormShield_C* ParentWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldPermissions_C::SetParent(class UOutpostScreenStormShield_C* ParentWidget)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "SetParent");

	Params::UOutpostScreenStormShieldPermissions_C_SetParent_Params Parms;
	Parms.ParentWidget = ParentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldPermissions_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "HandleBack");

	Params::UOutpostScreenStormShieldPermissions_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UOutpostScreenStormShieldPermissions_C::AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "AddInputHandlers");

	Params::UOutpostScreenStormShieldPermissions_C_AddInputHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UOutpostScreenStormShieldPermissions_C::IsOwningPlayerOutpostOwner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "IsOwningPlayerOutpostOwner");

	Params::UOutpostScreenStormShieldPermissions_C_IsOwningPlayerOutpostOwner_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_isPlayerAlone_isAlone                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilages(bool CallFunc_isPlayerAlone_isAlone)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "UpdatePrivilages");

	Params::UOutpostScreenStormShieldPermissions_C_UpdatePrivilages_Params Parms;
	Parms.CallFunc_isPlayerAlone_isAlone = CallFunc_isPlayerAlone_isAlone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAlone                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldPermissions_C::IsPlayerAlone(bool* IsAlone, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "isPlayerAlone");

	Params::UOutpostScreenStormShieldPermissions_C_IsPlayerAlone_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlone != nullptr)
		*IsAlone = Parms.IsAlone;

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldPermissions_C::Construct()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "Construct");

	Params::UOutpostScreenStormShieldPermissions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewTeamMemberInfo                                                (Parm)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_0(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "UpdatePrivilagesEvent_0");

	Params::UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_0_Params Parms;
	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_1(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "UpdatePrivilagesEvent_1");

	Params::UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_1_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldPermissions_C::OnActivated()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "OnActivated");

	Params::UOutpostScreenStormShieldPermissions_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_NewTeamMemberInfo                             ()
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldPermissions_C::ExecuteUbergraph_OutpostScreenStormShieldPermissions(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "ExecuteUbergraph_OutpostScreenStormShieldPermissions");

	Params::UOutpostScreenStormShieldPermissions_C_ExecuteUbergraph_OutpostScreenStormShieldPermissions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_NewTeamMemberInfo = K2Node_CustomEvent_NewTeamMemberInfo;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldPermissions_C::CloseOutpostScreen__DelegateSignature()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldPermissions_C", "CloseOutpostScreen__DelegateSignature");

	Params::UOutpostScreenStormShieldPermissions_C_CloseOutpostScreen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

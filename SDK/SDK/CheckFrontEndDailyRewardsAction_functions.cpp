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


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::IsFrontEndRewards_Running(bool* IsRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "IsFrontEndRewards Running");

	Params::ACheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRunning                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::Daily_Rewards_Open(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "Daily Rewards Open");

	Params::ACheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bRunning != nullptr)
		*bRunning = Parms.bRunning;

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFrontEndDailyRewardsAction_C::CompleteDailyRewardAction()
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "CompleteDailyRewardAction");

	Params::ACheckFrontEndDailyRewardsAction_C_CompleteDailyRewardAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::ShowDailyRewards(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "ShowDailyRewards");

	Params::ACheckFrontEndDailyRewardsAction_C_ShowDailyRewards_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFrontEndDailyRewardsAction_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "UserConstructionScript");

	Params::ACheckFrontEndDailyRewardsAction_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::Execute(struct FFortScriptedActionParams& Params)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "Execute");

	Params::ACheckFrontEndDailyRewardsAction_C_Execute_Params Parms;
	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "HandleClientEvent_FinishedModalQueue");

	Params::ACheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDailyRewardAvailable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Daily_Rewards_Open_bRunning                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStoreState         CallFunc_GetStoreState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFrontEndRewards_Running_IsRunning                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortScriptedActionParams& K2Node_Event_Params, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Daily_Rewards_Open_bRunning, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsFrontEndRewards_Running_IsRunning, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_IsInLobby_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2)
{
	static auto Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "ExecuteUbergraph_CheckFrontEndDailyRewardsAction");

	Params::ACheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward = CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward;
	Parms.CallFunc_IsDailyRewardAvailable_ReturnValue = CallFunc_IsDailyRewardAvailable_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Daily_Rewards_Open_bRunning = CallFunc_Daily_Rewards_Open_bRunning;
	Parms.CallFunc_GetStoreState_ReturnValue = CallFunc_GetStoreState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsFrontEndRewards_Running_IsRunning = CallFunc_IsFrontEndRewards_Running_IsRunning;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetFeatureState_ReturnValue = CallFunc_GetFeatureState_ReturnValue;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

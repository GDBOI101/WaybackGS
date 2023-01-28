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


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "UserConstructionScript");

	Params::AAnnounce_HexsylvaniaCine_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnStateEntered_9C83DA6340C5A54C51BA50B49786F065
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::OnStateEntered_9C83DA6340C5A54C51BA50B49786F065()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "OnStateEntered_9C83DA6340C5A54C51BA50B49786F065");

	Params::AAnnounce_HexsylvaniaCine_C_OnStateEntered_9C83DA6340C5A54C51BA50B49786F065_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B");

	Params::AAnnounce_HexsylvaniaCine_C_OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "OnClientAnnouncementStart");

	Params::AAnnounce_HexsylvaniaCine_C_OnClientAnnouncementStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::OnClientAnnouncementStop()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "OnClientAnnouncementStop");

	Params::AAnnounce_HexsylvaniaCine_C_OnClientAnnouncementStop_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::OnPlayerSkippedCutscene()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "OnPlayerSkippedCutscene");

	Params::AAnnounce_HexsylvaniaCine_C_OnPlayerSkippedCutscene_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AAnnounce_HexsylvaniaCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::AAnnounce_HexsylvaniaCine_C_HandleClientEvent_CinematicFinishedPlaying_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_HexsylvaniaCine_C::HandleAllowSkip()
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "HandleAllowSkip");

	Params::AAnnounce_HexsylvaniaCine_C_HandleAllowSkip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.ExecuteUbergraph_Announce_HexsylvaniaCine
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_HexsylvaniaCine_C::ExecuteUbergraph_Announce_HexsylvaniaCine(int32 EntryPoint, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("Announce_HexsylvaniaCine_C", "ExecuteUbergraph_Announce_HexsylvaniaCine");

	Params::AAnnounce_HexsylvaniaCine_C_ExecuteUbergraph_Announce_HexsylvaniaCine_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetUIState_ReturnValue = CallFunc_SetUIState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue = CallFunc__BPGetCurrentUIState_ReturnValue;
	Parms.CallFunc_SetUIState_ReturnValue2 = CallFunc_SetUIState_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

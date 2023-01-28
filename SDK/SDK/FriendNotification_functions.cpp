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


// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEnd_C*                 K2Node_DynamicCast_AsFront_End                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendNotification_C::ShowFriendInvites(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FriendNotification_C", "ShowFriendInvites");

	Params::UFriendNotification_C_ShowFriendInvites_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End = K2Node_DynamicCast_AsFront_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendNotification.FriendNotification_C.ShowPartyInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_DynamicCast_AsCommon_Activatable_Panel                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendNotification_C::ShowPartyInvites(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FriendNotification_C", "ShowPartyInvites");

	Params::UFriendNotification_C_ShowPartyInvites_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Activatable_Panel = K2Node_DynamicCast_AsCommon_Activatable_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendNotification.FriendNotification_C.TakeAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendNotification_C::TakeAction()
{
	static auto Func = Class->GetFunction("FriendNotification_C", "TakeAction");

	Params::UFriendNotification_C_TakeAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("FriendNotification_C", "ExecuteUbergraph_FriendNotification");

	Params::UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

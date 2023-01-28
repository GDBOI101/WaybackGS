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


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageModalPanel_C::LeaveZone(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "LeaveZone");

	Params::UPopupCenterMessageModalPanel_C_LeaveZone_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StopTimer                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentCount                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class AFortGameStatePvP*           K2Node_DynamicCast_AsFort_Game_State_Pv_P                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStartMatchDelayTimer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageModalPanel_C::UpdateMatchTimerText(bool* StopTimer, int32 CurrentCount, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FText CallFunc_Format_ReturnValue, class AFortGameStatePvP* K2Node_DynamicCast_AsFort_Game_State_Pv_P, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStartMatchDelayTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "UpdateMatchTimerText");

	Params::UPopupCenterMessageModalPanel_C_UpdateMatchTimerText_Params Parms;
	Parms.CurrentCount = CurrentCount;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Pv_P = K2Node_DynamicCast_AsFort_Game_State_Pv_P;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStartMatchDelayTimer_ReturnValue = CallFunc_GetStartMatchDelayTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StopTimer != nullptr)
		*StopTimer = Parms.StopTimer;

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECenterPopupMessageStateEnumNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CurrentMessage                                                   (Edit)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateMatchTimerText_StopTimer                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupCenterMessageModalPanel_C::UpdateState(enum class ECenterPopupMessageStateEnum NewState, class FText CurrentMessage, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_UpdateMatchTimerText_StopTimer, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "UpdateState");

	Params::UPopupCenterMessageModalPanel_C_UpdateState_Params Parms;
	Parms.NewState = NewState;
	Parms.CurrentMessage = CurrentMessage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_UpdateMatchTimerText_StopTimer = CallFunc_UpdateMatchTimerText_StopTimer;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupCenterMessageModalPanel_C::UpdateMatchTimer()
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "UpdateMatchTimer");

	Params::UPopupCenterMessageModalPanel_C_UpdateMatchTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupCenterMessageModalPanel_C::StartMatchTimer()
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "StartMatchTimer");

	Params::UPopupCenterMessageModalPanel_C_StartMatchTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPopupCenterMessageModalPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "OnActivated");

	Params::UPopupCenterMessageModalPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_UpdateMatchTimerText_StopTimer                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageModalPanel_C::ExecuteUbergraph_PopupCenterMessageModalPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_UpdateMatchTimerText_StopTimer, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("PopupCenterMessageModalPanel_C", "ExecuteUbergraph_PopupCenterMessageModalPanel");

	Params::UPopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UpdateMatchTimerText_StopTimer = CallFunc_UpdateMatchTimerText_StopTimer;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

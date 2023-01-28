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


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldBeDisabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::ToggleDisabledTabVisuals(bool bShouldBeDisabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "ToggleDisabledTabVisuals");

	Params::UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params Parms;
	Parms.bShouldBeDisabled = bShouldBeDisabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnShowQueryThrobber()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnShowQueryThrobber");

	Params::UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bQueryInProgress                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAthenaLeaderboardTab_C::OnQueryStateChanged(bool bQueryInProgress, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryStateChanged");

	Params::UAthenaLeaderboardTab_C_OnQueryStateChanged_Params Parms;
	Parms.bQueryInProgress = bQueryInProgress;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue = CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommitted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::OnFriendTypeChangeGamepad(bool* bCommitted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnFriendTypeChangeGamepad");

	Params::UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommitted != nullptr)
		*bCommitted = Parms.bCommitted;

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommitted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::OnPlaylistChangeGamepad(bool* bCommitted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnPlaylistChangeGamepad");

	Params::UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommitted != nullptr)
		*bCommitted = Parms.bCommitted;

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnActivated");

	Params::UAthenaLeaderboardTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "Construct");

	Params::UAthenaLeaderboardTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaPlaylistLeaderboardDataPlaylistTabData                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateTabButtonText");

	Params::UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params Parms;
	Parms.Button = Button;
	Parms.PlaylistTabData = PlaylistTabData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardRowProxyInstance*LocalUserRow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        QueryErrorStr                                                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateLeaderboardListUI");

	Params::UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params Parms;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.LocalUserRow = LocalUserRow;
	Parms.QueryErrorStr = QueryErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaPlaylistLeaderboardDataPlaylistTabData                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateListHeader");

	Params::UAthenaLeaderboardTab_C_OnUpdateListHeader_Params Parms;
	Parms.PlaylistTabData = PlaylistTabData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnDeactivated");

	Params::UAthenaLeaderboardTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnQueryFinished()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryFinished");

	Params::UAthenaLeaderboardTab_C_OnQueryFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnQueryStarted()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryStarted");

	Params::UAthenaLeaderboardTab_C_OnQueryStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowLeaderboards_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Add_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_Event_Button                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaPlaylistLeaderboardDataK2Node_Event_PlaylistTabData2                                    (ConstParm)
// bool                               K2Node_Event_bWasSuccessful                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardRowProxyInstance*K2Node_Event_LocalUserRow                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_QueryErrorStr                                       (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaLeaderboardTabButton_C*K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaPlaylistLeaderboardDataK2Node_Event_PlaylistTabData                                     (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowLeaderboards_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()

void UAthenaLeaderboardTab_C::ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool CallFunc_CanShowLeaderboards_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable6, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_ComponentBoundEvent_Value2, int32 K2Node_ComponentBoundEvent_Value, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_Map_Add_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UCommonButton* K2Node_Event_Button, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData2, bool K2Node_Event_bWasSuccessful, class UFortLeaderboardRowProxyInstance* K2Node_Event_LocalUserRow, class FText K2Node_Event_QueryErrorStr, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UAthenaLeaderboardTabButton_C* K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select3_Default, int32 Temp_int_Variable, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Variable2, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable7, enum class ESlateVisibility K2Node_Select4_Default, int32 CallFunc_Array_Length_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_CanShowLeaderboards_ReturnValue2, enum class ESlateVisibility K2Node_Select5_Default, int32 K2Node_Select6_Default, class FText K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "ExecuteUbergraph_AthenaLeaderboardTab");

	Params::UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_CanShowLeaderboards_ReturnValue = CallFunc_CanShowLeaderboards_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabButton2 = K2Node_ComponentBoundEvent_TabButton2;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_ComponentBoundEvent_Value2 = K2Node_ComponentBoundEvent_Value2;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.CallFunc_Map_Add_ReturnValue = CallFunc_Map_Add_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_Event_PlaylistTabData2 = K2Node_Event_PlaylistTabData2;
	Parms.K2Node_Event_bWasSuccessful = K2Node_Event_bWasSuccessful;
	Parms.K2Node_Event_LocalUserRow = K2Node_Event_LocalUserRow;
	Parms.K2Node_Event_QueryErrorStr = K2Node_Event_QueryErrorStr;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button = K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_PlaylistTabData = K2Node_Event_PlaylistTabData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue = CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CanShowLeaderboards_ReturnValue2 = CallFunc_CanShowLeaderboards_ReturnValue2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

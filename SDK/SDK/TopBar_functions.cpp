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


// Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::ConfigureVisibleItemsForSubGame(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("TopBar_C", "ConfigureVisibleItemsForSubGame");

	Params::UTopBar_C_ConfigureVisibleItemsForSubGame_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OpenSocialMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class UPartyFinder_C*              K2Node_DynamicCast_AsParty_Finder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::OpenSocialMenu(class FText Temp_text_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class FText Temp_text_Variable2, bool Temp_bool_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class FText K2Node_Select_Default, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TopBar_C", "OpenSocialMenu");

	Params::UTopBar_C_OpenSocialMenu_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.CallFunc_GetFeatureState_ReturnValue = CallFunc_GetFeatureState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsParty_Finder = K2Node_DynamicCast_AsParty_Finder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.FireOpenAnalyticsEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetPlayerInfoFromUniqueID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()

void UTopBar_C::FireOpenAnalyticsEvent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "FireOpenAnalyticsEvent");

	Params::UTopBar_C_FireOpenAnalyticsEvent_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetPlayerInfoFromUniqueID_ReturnValue = CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.HideMTXPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBar_C::HideMTXPlusButton()
{
	static auto Func = Class->GetFunction("TopBar_C", "HideMTXPlusButton");

	Params::UTopBar_C_HideMTXPlusButton_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.ForceMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBar_C::ForceMenuClosed()
{
	static auto Func = Class->GetFunction("TopBar_C", "ForceMenuClosed");

	Params::UTopBar_C_ForceMenuClosed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.GetMainMenuTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBar_C::GetMainMenuTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "GetMainMenuTooltipWidget");

	Params::UTopBar_C_GetMainMenuTooltipWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBar.TopBar_C.GetFriendsTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBar_C::GetFriendsTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "GetFriendsTooltipWidget");

	Params::UTopBar_C_GetFriendsTooltipWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBar.TopBar_C.HandleActiveInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveInvitesCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::HandleActiveInvitesCountChanged(int32 ActiveInvitesCount, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleActiveInvitesCountChanged");

	Params::UTopBar_C_HandleActiveInvitesCountChanged_Params Parms;
	Parms.ActiveInvitesCount = ActiveInvitesCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.HandleAccountPickerResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ControllerIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UserSwitched                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerControllerID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::HandleAccountPickerResult(int32 ControllerIndex, bool UserSwitched, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetPlayerControllerID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleAccountPickerResult");

	Params::UTopBar_C_HandleAccountPickerResult_Params Parms;
	Parms.ControllerIndex = ControllerIndex;
	Parms.UserSwitched = UserSwitched;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerControllerID_ReturnValue = CallFunc_GetPlayerControllerID_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.UnbindActiveFriendsCountChangedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::UnbindActiveFriendsCountChangedEvent(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "UnbindActiveFriendsCountChangedEvent");

	Params::UTopBar_C_UnbindActiveFriendsCountChangedEvent_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.HandleActiveFriendsCountChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveFriendsCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UTopBar_C::HandleActiveFriendsCountChanged(int32 ActiveFriendsCount, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleActiveFriendsCountChanged");

	Params::UTopBar_C_HandleActiveFriendsCountChanged_Params Parms;
	Parms.ActiveFriendsCount = ActiveFriendsCount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BindActiveFriendsCountChangedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSocialItem*>     CallFunc_GetActiveFriendsList_OutActiveFriends                   (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UTopBar_C::BindActiveFriendsCountChangedEvent(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "BindActiveFriendsCountChangedEvent");

	Params::UTopBar_C_BindActiveFriendsCountChangedEvent_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetActiveFriendsList_OutActiveFriends = CallFunc_GetActiveFriendsList_OutActiveFriends;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BindSwitchProfileAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::BindSwitchProfileAction(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "BindSwitchProfileAction");

	Params::UTopBar_C_BindSwitchProfileAction_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.HandleSwitchProfileAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetPlayerControllerID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::HandleSwitchProfileAction(bool* PassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetPlayerControllerID_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleSwitchProfileAction");

	Params::UTopBar_C_HandleSwitchProfileAction_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerControllerID_ReturnValue = CallFunc_GetPlayerControllerID_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function TopBar.TopBar_C.HandleFeatureSwitchOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::HandleFeatureSwitchOp(enum class EFortUIFeature Feature, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleFeatureSwitchOp");

	Params::UTopBar_C_HandleFeatureSwitchOp_Params Parms;
	Parms.Feature = Feature;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.UnbindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::UnbindNavigationDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "UnbindNavigationDelegates");

	Params::UTopBar_C_UnbindNavigationDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::BindNavigationDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "BindNavigationDelegates");

	Params::UTopBar_C_BindNavigationDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.ForceMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::ForceMenuOpen(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "ForceMenuOpen");

	Params::UTopBar_C_ForceMenuOpen_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.GetSocialMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USlateContentCalloutMenu_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_Get_Size_Box_Size_Box                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBar_C::GetSocialMenuContent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USlateContentCalloutMenu_C* CallFunc_Create_ReturnValue, class USizeBox* CallFunc_Get_Size_Box_Size_Box)
{
	static auto Func = Class->GetFunction("TopBar_C", "GetSocialMenuContent");

	Params::UTopBar_C_GetSocialMenuContent_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Size_Box_Size_Box = CallFunc_Get_Size_Box_Size_Box;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBar.TopBar_C.CreateWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFeedback_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::CreateWidgets(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFeedback_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "CreateWidgets");

	Params::UTopBar_C_CreateWidgets_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.HandleCloseAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::HandleCloseAction(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "HandleCloseAction");

	Params::UTopBar_C_HandleCloseAction_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function TopBar.TopBar_C.BindPanelControl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UTopBar_C::BindPanelControl(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("TopBar_C", "BindPanelControl");

	Params::UTopBar_C_BindPanelControl_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.CloseMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::CloseMainMenu(const struct FMargin& K2Node_MakeStruct_Margin, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "CloseMainMenu");

	Params::UTopBar_C_CloseMainMenu_Params Parms;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OpenMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::OpenMainMenu(const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_GetAnimationCurrentTime_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBar_C", "OpenMainMenu");

	Params::UTopBar_C_OpenMainMenu_Params Parms;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.DialogResult_32D813B145A5E184B01A15AABE16B774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::DialogResult_32D813B145A5E184B01A15AABE16B774(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("TopBar_C", "DialogResult_32D813B145A5E184B01A15AABE16B774");

	Params::UTopBar_C_DialogResult_32D813B145A5E184B01A15AABE16B774_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopBar_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("TopBar_C", "OnBeginIntro");

	Params::UTopBar_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopBar_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("TopBar_C", "OnBeginOutro");

	Params::UTopBar_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTopBar_C::OnActivated()
{
	static auto Func = Class->GetFunction("TopBar_C", "OnActivated");

	Params::UTopBar_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.Hidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBar_C::Hidden()
{
	static auto Func = Class->GetFunction("TopBar_C", "Hidden");

	Params::UTopBar_C_Hidden_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopBar_C::BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto Func = Class->GetFunction("TopBar_C", "BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature");

	Params::UTopBar_C_BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TopBar_C", "BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature");

	Params::UTopBar_C_BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TopBar_C", "PreConstruct");

	Params::UTopBar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBar_C::Construct()
{
	static auto Func = Class->GetFunction("TopBar_C", "Construct");

	Params::UTopBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBar_C::Destruct()
{
	static auto Func = Class->GetFunction("TopBar_C", "Destruct");

	Params::UTopBar_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("TopBar_C", "OnAnimationFinished");

	Params::UTopBar_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopBar_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature()
{
	static auto Func = Class->GetFunction("TopBar_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature");

	Params::UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopBar_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature()
{
	static auto Func = Class->GetFunction("TopBar_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature");

	Params::UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.ShowSocialConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MESSAGE                                                          (Parm)

void UTopBar_C::ShowSocialConfirmation(class FText MESSAGE)
{
	static auto Func = Class->GetFunction("TopBar_C", "ShowSocialConfirmation");

	Params::UTopBar_C_ShowSocialConfirmation_Params Parms;
	Parms.MESSAGE = MESSAGE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.On Power Increased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBar_C::On_Power_Increased()
{
	static auto Func = Class->GetFunction("TopBar_C", "On Power Increased");

	Params::UTopBar_C_On_Power_Increased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TopBar_C", "BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature");

	Params::UTopBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_AreSocialFeaturesEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleCloseAction_PassThrough                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FVector2D                   Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Message                                       ()
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::ExecuteUbergraph_TopBar(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_AreSocialFeaturesEnabled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_HandleCloseAction_PassThrough, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FVector2D& Temp_struct_Variable2, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class FText K2Node_CustomEvent_Message, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TopBar_C", "ExecuteUbergraph_TopBar");

	Params::UTopBar_C_ExecuteUbergraph_TopBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_AreSocialFeaturesEnabled_ReturnValue = CallFunc_AreSocialFeaturesEnabled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_HandleCloseAction_PassThrough = CallFunc_HandleCloseAction_PassThrough;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBar_C::OpenAccountPicker__DelegateSignature()
{
	static auto Func = Class->GetFunction("TopBar_C", "OpenAccountPicker__DelegateSignature");

	Params::UTopBar_C_OpenAccountPicker__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBar_C::MainMenuStateChanged__DelegateSignature(bool Open)
{
	static auto Func = Class->GetFunction("TopBar_C", "MainMenuStateChanged__DelegateSignature");

	Params::UTopBar_C_MainMenuStateChanged__DelegateSignature_Params Parms;
	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

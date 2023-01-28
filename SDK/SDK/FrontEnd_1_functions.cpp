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


// Function FrontEnd.FrontEnd_C.PlayEventMovieIfNecessary
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayingEventMovie                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::PlayEventMovieIfNecessary(bool* PlayingEventMovie, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PlayEventMovieIfNecessary");

	Params::UFrontEnd_C_PlayEventMovieIfNecessary_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie = CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayingEventMovie != nullptr)
		*PlayingEventMovie = Parms.PlayingEventMovie;

}


// Function FrontEnd.FrontEnd_C.NeedsToPlayEventMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NeedsToPlayEventMovie                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "NeedsToPlayEventMovie");

	Params::UFrontEnd_C_NeedsToPlayEventMovie_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedsToPlayEventMovie != nullptr)
		*NeedsToPlayEventMovie = Parms.NeedsToPlayEventMovie;

}


// Function FrontEnd.FrontEnd_C.UpdateVisibilityState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideHeader                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideFooter                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideChat                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "UpdateVisibilityState");

	Params::UFrontEnd_C_UpdateVisibilityState_Params Parms;
	Parms.HideHeader = HideHeader;
	Parms.HideFooter = HideFooter;
	Parms.HideChat = HideChat;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetChatWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetChatWidgetVisibility(bool Visible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetChatWidgetVisibility");

	Params::UFrontEnd_C_SetChatWidgetVisibility_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.InitForSubGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTabsScreen_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabsScreen_C*           CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::InitForSubGame(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UMainTabsScreen_C* CallFunc_Create_ReturnValue2, bool CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue2)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "InitForSubGame");

	Params::UFrontEnd_C_InitForSubGame_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue = CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue2 = CallFunc_ShouldPartyInvitesBeEnabled_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.GetActiveTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ActiveTab                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabsScreen_C*           K2Node_DynamicCast_AsMain_Tabs_Screen                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "GetActiveTab");

	Params::UFrontEnd_C_GetActiveTab_Params Parms;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tabs_Screen = K2Node_DynamicCast_AsMain_Tabs_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveTab != nullptr)
		*ActiveTab = Parms.ActiveTab;

}


// Function FrontEnd.FrontEnd_C.HandleWidgetStackChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopContentWidget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingNavigationOp_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, bool CallFunc_HasPendingNavigationOp_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleWidgetStackChanged");

	Params::UFrontEnd_C_HandleWidgetStackChanged_Params Parms;
	Parms.Widget = Widget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PopContentWidget_ReturnValue = CallFunc_PopContentWidget_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_HasPendingNavigationOp_ReturnValue = CallFunc_HasPendingNavigationOp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)

void UFrontEnd_C::UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "UnbindDelegates");

	Params::UFrontEnd_C_UnbindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandlePopContentStackOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopContentWidget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandlePopContentStackOp");

	Params::UFrontEnd_C_HandlePopContentStackOp_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PopContentWidget_ReturnValue = CallFunc_PopContentWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UFrontEnd_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PopContentWidgetInternal");

	Params::UFrontEnd_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontEnd.FrontEnd_C.HandleQuestRewardClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    K2Node_DynamicCast_AsFort_Quest_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestRewardClaimed");

	Params::UFrontEnd_C_HandleQuestRewardClaimed_Params Parms;
	Parms.Quest = Quest;
	Parms.Rewards = Rewards;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item_Definition = K2Node_DynamicCast_AsFort_Quest_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)

void UFrontEnd_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "BindDelegates");

	Params::UFrontEnd_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleEnterFrontend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            UIState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            LocalUIState                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleEnterFrontend");

	Params::UFrontEnd_C_HandleEnterFrontend_Params Parms;
	Parms.UIState = UIState;
	Parms.LocalUIState = LocalUIState;
	Parms.CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie = CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetFooterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetFooterVisibility(bool Visible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetFooterVisibility");

	Params::UFrontEnd_C_SetFooterVisibility_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PopContentWidget_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::PopContentWidget_Internal()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PopContentWidget_Internal");

	Params::UFrontEnd_C_PopContentWidget_Internal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetHeaderVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetHeaderVisibility(bool Visible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetHeaderVisibility");

	Params::UFrontEnd_C_SetHeaderVisibility_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PushContentWidget_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HideHeader                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideFooter                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PushContentWidget_Internal");

	Params::UFrontEnd_C_PushContentWidget_Internal_Params Parms;
	Parms.InWidget = InWidget;
	Parms.HideHeader = HideHeader;
	Parms.HideFooter = HideFooter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.RegisterScriptedActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            InPreviousUIState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "RegisterScriptedActions");

	Params::UFrontEnd_C_RegisterScriptedActions_Params Parms;
	Parms.InPreviousUIState = InPreviousUIState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleMainMenuStateChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ActiveTab                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select2_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleMainMenuStateChanged");

	Params::UFrontEnd_C_HandleMainMenuStateChanged_Params Parms;
	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetActiveTab_ActiveTab = CallFunc_GetActiveTab_ActiveTab;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.On_MainAreaDarken_MouseButtonUp
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UFrontEnd_C::On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "On_MainAreaDarken_MouseButtonUp");

	Params::UFrontEnd_C_On_MainAreaDarken_MouseButtonUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontEnd.FrontEnd_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnEnterState");

	Params::UFrontEnd_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleQuestsGranted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestsGranted");

	Params::UFrontEnd_C_HandleQuestsGranted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleQuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestsCompleted");

	Params::UFrontEnd_C_HandleQuestsCompleted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::HandleLobbyDisconnected()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleLobbyDisconnected");

	Params::UFrontEnd_C_HandleLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void UFrontEnd_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PushContentWidgetInternal");

	Params::UFrontEnd_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            NextUIState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::OnExitState(enum class EFortUIState NextUIState)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnExitState");

	Params::UFrontEnd_C_OnExitState_Params Parms;
	Parms.NextUIState = NextUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Destruct()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Destruct");

	Params::UFrontEnd_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.DailyRewardsTokenGranted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::DailyRewardsTokenGranted()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "DailyRewardsTokenGranted");

	Params::UFrontEnd_C_DailyRewardsTokenGranted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_FinishedModalWindows
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_FinishedModalWindows");

	Params::UFrontEnd_C_HandleClientEvent_FinishedModalWindows_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnFrontEndVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHideHeader                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideFooter                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideChatWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnFrontEndVisibilityUpdated");

	Params::UFrontEnd_C_OnFrontEndVisibilityUpdated_Params Parms;
	Parms.bHideHeader = bHideHeader;
	Parms.bHideFooter = bHideFooter;
	Parms.bHideChatWidget = bHideChatWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_EventMovieFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_EventMovieFinishedPlaying");

	Params::UFrontEnd_C_HandleClientEvent_EventMovieFinishedPlaying_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Construct");

	Params::UFrontEnd_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_NotPlayingEventMovie
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_NotPlayingEventMovie");

	Params::UFrontEnd_C_HandleClientEvent_NotPlayingEventMovie_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests2                                       (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests                                        (ConstParm, ZeroConstructor, ReferenceParm)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            K2Node_Event_NextUIState                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent3                            (ConstParm, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDailyRewardAvailable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideHeader                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideFooter                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideChatWidget                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent2                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)

void UFrontEnd_C::ExecuteUbergraph_FrontEnd(int32 EntryPoint, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "ExecuteUbergraph_FrontEnd");

	Params::UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Quests2 = K2Node_CustomEvent_Quests2;
	Parms.K2Node_CustomEvent_Quests = K2Node_CustomEvent_Quests;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.K2Node_Event_NextUIState = K2Node_Event_NextUIState;
	Parms.K2Node_HandleClientEvent_EventSource3 = K2Node_HandleClientEvent_EventSource3;
	Parms.K2Node_HandleClientEvent_EventFocus3 = K2Node_HandleClientEvent_EventFocus3;
	Parms.K2Node_HandleClientEvent_ClientEvent3 = K2Node_HandleClientEvent_ClientEvent3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward = CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward;
	Parms.CallFunc_IsDailyRewardAvailable_ReturnValue = CallFunc_IsDailyRewardAvailable_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_bHideHeader = K2Node_Event_bHideHeader;
	Parms.K2Node_Event_bHideFooter = K2Node_Event_bHideFooter;
	Parms.K2Node_Event_bHideChatWidget = K2Node_Event_bHideChatWidget;
	Parms.K2Node_HandleClientEvent_EventSource2 = K2Node_HandleClientEvent_EventSource2;
	Parms.K2Node_HandleClientEvent_EventFocus2 = K2Node_HandleClientEvent_EventFocus2;
	Parms.K2Node_HandleClientEvent_ClientEvent2 = K2Node_HandleClientEvent_ClientEvent2;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

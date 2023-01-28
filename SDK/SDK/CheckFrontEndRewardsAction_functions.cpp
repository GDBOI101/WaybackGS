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


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckFrontEndRewardsAction_C::HandleRewardsIgnored(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "HandleRewardsIgnored");

	Params::ACheckFrontEndRewardsAction_C_HandleRewardsIgnored_Params Parms;
	Parms.RewardsWidget = RewardsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStoreState         CallFunc_GetStoreState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberLocationCallFunc_GetLocalPartyMemberLocation_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLocalPartyMemberLocation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ACheckFrontEndRewardsAction_C::CanShowFrontendRewards(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class EFortPartyMemberLocation CallFunc_GetLocalPartyMemberLocation_Location, bool CallFunc_GetLocalPartyMemberLocation_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "CanShowFrontendRewards");

	Params::ACheckFrontEndRewardsAction_C_CanShowFrontendRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetStoreState_ReturnValue = CallFunc_GetStoreState_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue = CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetLocalPartyMemberLocation_Location = CallFunc_GetLocalPartyMemberLocation_Location;
	Parms.CallFunc_GetLocalPartyMemberLocation_ReturnValue = CallFunc_GetLocalPartyMemberLocation_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue2 = CallFunc_NotEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRunning                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::Is_FrontEndRewards_Running(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "Is FrontEndRewards Running");

	Params::ACheckFrontEndRewardsAction_C_Is_FrontEndRewards_Running_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bRunning != nullptr)
		*bRunning = Parms.bRunning;

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingMissionAlertRewards_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::PopulateMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasPendingMissionAlertRewards_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateMissionAlertRewards");

	Params::ACheckFrontEndRewardsAction_C_PopulateMissionAlertRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_HasPendingMissionAlertRewards_ReturnValue = CallFunc_HasPendingMissionAlertRewards_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "HandleRewardsClaimError");

	Params::ACheckFrontEndRewardsAction_C_HandleRewardsClaimError_Params Parms;
	Parms.RewardsWidget = RewardsWidget;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortCollectionBookRewards>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UFortExpeditionItem*> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<class UFortQuestItem*>      K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<class UFortQuestItem*>      K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// struct FFrontEndRewards_Definition K2Node_MakeStruct_FrontEndRewards_Definition                     (HasGetValueTypeHash)

void ACheckFrontEndRewardsAction_C::Clear(TArray<struct FFortCollectionBookRewards>& K2Node_MakeArray_Array, TArray<class UFortExpeditionItem*>& K2Node_MakeArray_Array2, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array3, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array4, const struct FFrontEndRewards_Definition& K2Node_MakeStruct_FrontEndRewards_Definition)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "Clear");

	Params::ACheckFrontEndRewardsAction_C_Clear_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.K2Node_MakeStruct_FrontEndRewards_Definition = K2Node_MakeStruct_FrontEndRewards_Definition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "HandleRewardsClaimed");

	Params::ACheckFrontEndRewardsAction_C_HandleRewardsClaimed_Params Parms;
	Parms.RewardsWidget = RewardsWidget;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortCollectionBookRewards>CallFunc_PopulateCollectionBookRewards_OutAvailableRewards       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::PopulateCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, TArray<struct FFortCollectionBookRewards>& CallFunc_PopulateCollectionBookRewards_OutAvailableRewards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateCollectionBookRewards");

	Params::ACheckFrontEndRewardsAction_C_PopulateCollectionBookRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.CallFunc_PopulateCollectionBookRewards_OutAvailableRewards = CallFunc_PopulateCollectionBookRewards_OutAvailableRewards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFrontEndRewardsAction_C::PopulateRewards()
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateRewards");

	Params::ACheckFrontEndRewardsAction_C_PopulateRewards_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   LocalRewardsWidget                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::OpenFrontEndRewards(class UFrontEndRewards_Widget_C* LocalRewardsWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "OpenFrontEndRewards");

	Params::ACheckFrontEndRewardsAction_C_OpenFrontEndRewards_Params Parms;
	Parms.LocalRewardsWidget = LocalRewardsWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuestType          QuestType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      TempNewQuests                                                    (Edit, ZeroConstructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetNextUnseenQuest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisibleToUser_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::PopulateUnseenQuests(enum class EFortQuestType QuestType, const TArray<class UFortQuestItem*>& TempNewQuests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetNextUnseenQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateUnseenQuests");

	Params::ACheckFrontEndRewardsAction_C_PopulateUnseenQuests_Params Parms;
	Parms.QuestType = QuestType;
	Parms.TempNewQuests = TempNewQuests;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetNextUnseenQuest_ReturnValue = CallFunc_GetNextUnseenQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisibleToUser_ReturnValue = CallFunc_IsVisibleToUser_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Completed_Quests                                                 (Parm, OutParm, ZeroConstructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      CallFunc_GetCompletedQuests_OutCompletedQuests                   (ZeroConstructor, ReferenceParm)

void ACheckFrontEndRewardsAction_C::GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_OutCompletedQuests)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "GetCompletedQuests");

	Params::ACheckFrontEndRewardsAction_C_GetCompletedQuests_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetCompletedQuests_OutCompletedQuests = CallFunc_GetCompletedQuests_OutCompletedQuests;

	UObject::ProcessEvent(Func, &Parms);

	if (Completed_Quests != nullptr)
		*Completed_Quests = Parms.Completed_Quests;

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFrontEndRewardsAction_C::PopulateNewQuests()
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateNewQuests");

	Params::ACheckFrontEndRewardsAction_C_PopulateNewQuests_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      TempNewQuests                                                    (Edit, ZeroConstructor)
// TArray<class UFortQuestItem*>      TempCompletedQuests                                              (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      CallFunc_GetCompletedQuests_Completed_Quests                     (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>CallFunc_GetPreviewRewards_ReturnValue                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_HasVisibleRewards_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item2                                         (NoDestructor)
// class UFortQuestItem*              K2Node_DynamicCast_AsFort_Quest_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisibleToUser_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::PopulateQuestRewards(const TArray<class UFortQuestItem*>& TempNewQuests, const TArray<class UFortQuestItem*>& TempCompletedQuests, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_Completed_Quests, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue, bool CallFunc_HasVisibleRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item2, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_IsVisibleToUser_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateQuestRewards");

	Params::ACheckFrontEndRewardsAction_C_PopulateQuestRewards_Params Parms;
	Parms.TempNewQuests = TempNewQuests;
	Parms.TempCompletedQuests = TempCompletedQuests;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_GetCompletedQuests_Completed_Quests = CallFunc_GetCompletedQuests_Completed_Quests;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPreviewRewards_ReturnValue = CallFunc_GetPreviewRewards_ReturnValue;
	Parms.CallFunc_HasVisibleRewards_ReturnValue = CallFunc_HasVisibleRewards_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item = K2Node_DynamicCast_AsFort_Quest_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_IsVisibleToUser_ReturnValue = CallFunc_IsVisibleToUser_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreMissionRewardsAvailable_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::PopulateMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreMissionRewardsAvailable_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "PopulateMissionRewards");

	Params::ACheckFrontEndRewardsAction_C_PopulateMissionRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_AreMissionRewardsAvailable_ReturnValue = CallFunc_AreMissionRewardsAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateFrontEnd*      K2Node_DynamicCast_AsFort_Game_State_Front_End                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckFrontEndRewardsAction_C::CompleteRewardsAction(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateFrontEnd* K2Node_DynamicCast_AsFort_Game_State_Front_End, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "CompleteRewardsAction");

	Params::ACheckFrontEndRewardsAction_C_CompleteRewardsAction_Params Parms;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Front_End = K2Node_DynamicCast_AsFort_Game_State_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFrontEndRewardsAction_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "UserConstructionScript");

	Params::ACheckFrontEndRewardsAction_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFrontEndRewardsAction_C::Execute(struct FFortScriptedActionParams& Params)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "Execute");

	Params::ACheckFrontEndRewardsAction_C_Execute_Params Parms;
	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_FrontEndRewards_Running_bRunning                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowFrontendRewards_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndRewardsAction_C::ExecuteUbergraph_CheckFrontEndRewardsAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Is_FrontEndRewards_Running_bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool CallFunc_CanShowFrontendRewards_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFrontEndRewardsAction_C", "ExecuteUbergraph_CheckFrontEndRewardsAction");

	Params::ACheckFrontEndRewardsAction_C_ExecuteUbergraph_CheckFrontEndRewardsAction_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Is_FrontEndRewards_Running_bRunning = CallFunc_Is_FrontEndRewards_Running_bRunning;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_CanShowFrontendRewards_ReturnValue = CallFunc_CanShowFrontendRewards_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

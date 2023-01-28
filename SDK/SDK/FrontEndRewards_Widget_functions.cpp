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


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimFailed()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnMissionRewardsClaimFailed");

	Params::UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimFailed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFrontEndRewards_Widget_C::DebugPrintChoiceReward(class UObject* Object, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "DebugPrintChoiceReward");

	Params::UFrontEndRewards_Widget_C_DebugPrintChoiceReward_Params Parms;
	Parms.Object = Object;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::SafePop(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsActivated_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "SafePop");

	Params::UFrontEndRewards_Widget_C_SafePop_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::TriggerUpdateWhenDone()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "TriggerUpdateWhenDone");

	Params::UFrontEndRewards_Widget_C_TriggerUpdateWhenDone_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnMissionAlertRewardsClaimed");

	Params::UFrontEndRewards_Widget_C_HandleOnMissionAlertRewardsClaimed_Params Parms;
	Parms.Rewards = Rewards;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::ClaimMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimMissionAlertRewards");

	Params::UFrontEndRewards_Widget_C_ClaimMissionAlertRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::PopulateMissionAlertRewards()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateMissionAlertRewards");

	Params::UFrontEndRewards_Widget_C_PopulateMissionAlertRewards_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardNotificationData* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewardsIcon_C*              CallFunc_QueueReward_OutIcon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::InitRewardsQueue(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortRewardNotificationData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_QueueReward_OutIcon)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InitRewardsQueue");

	Params::UFrontEndRewards_Widget_C_InitRewardsQueue_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_QueueReward_OutIcon = CallFunc_QueueReward_OutIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition FrontEndRewards_Definition                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCollectionBookRewards  CallFunc_Array_Get_Item3                                         ()

void UFrontEndRewards_Widget_C::InitializeRewardsData(struct FFrontEndRewards_Definition& FrontEndRewards_Definition, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, class UFortExpeditionItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class UFortQuestItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable3, const struct FFortCollectionBookRewards& CallFunc_Array_Get_Item3)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InitializeRewardsData");

	Params::UFrontEndRewards_Widget_C_InitializeRewardsData_Params Parms;
	Parms.FrontEndRewards_Definition = FrontEndRewards_Definition;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                                                       (Parm, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InitAdditionalRewards");

	Params::UFrontEndRewards_Widget_C_InitAdditionalRewards_Params Parms;
	Parms.Definition = Definition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleBorderShown()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleBorderShown");

	Params::UFrontEndRewards_Widget_C_HandleBorderShown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UFrontEndRewards_Widget_C::SkipPopAnimation(const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "SkipPopAnimation");

	Params::UFrontEndRewards_Widget_C_SkipPopAnimation_Params Parms;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::SkipOpenAnimation()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "SkipOpenAnimation");

	Params::UFrontEndRewards_Widget_C_SkipOpenAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRewardEpicQuestData*    K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetClaimConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetIntroConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::PopulateVO(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue2, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateVO");

	Params::UFrontEndRewards_Widget_C_PopulateVO_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue2 = CallFunc_GetQuestDefinitionBP_ReturnValue2;
	Parms.CallFunc_GetClaimConversation_ReturnValue = CallFunc_GetClaimConversation_ReturnValue;
	Parms.CallFunc_GetIntroConversation_ReturnValue = CallFunc_GetIntroConversation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleOnNoRewardsToClaim()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnNoRewardsToClaim");

	Params::UFrontEndRewards_Widget_C_HandleOnNoRewardsToClaim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::UnbindEvents(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortMcpContext* CallFunc_GetContext_ReturnValue4)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "UnbindEvents");

	Params::UFrontEndRewards_Widget_C_UnbindEvents_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::ResetQueueState()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ResetQueueState");

	Params::UFrontEndRewards_Widget_C_ResetQueueState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::TransitionIn()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "TransitionIn");

	Params::UFrontEndRewards_Widget_C_TransitionIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OpenReward()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OpenReward");

	Params::UFrontEndRewards_Widget_C_OpenReward_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateChoiceRewardsWidgetFromCardList");

	Params::UFrontEndRewards_Widget_C_PopulateChoiceRewardsWidgetFromCardList_Params Parms;
	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleCurrentRewardTransitionOutComplete()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleCurrentRewardTransitionOutComplete");

	Params::UFrontEndRewards_Widget_C_HandleCurrentRewardTransitionOutComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleOpenAnimationFinished()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOpenAnimationFinished");

	Params::UFrontEndRewards_Widget_C_HandleOpenAnimationFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardNotificationSubWidget*K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::InitSubWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortRewardNotificationSubWidget* K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InitSubWidgets");

	Params::UFrontEndRewards_Widget_C_InitSubWidgets_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget = K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnMissionRewardsClaimed");

	Params::UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimed_Params Parms;
	Parms.Rewards = Rewards;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFrontEndRewards_Widget_C::PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateListRewardsWidgetFromCardList");

	Params::UFrontEndRewards_Widget_C_PopulateListRewardsWidgetFromCardList_Params Parms;
	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortCollectionBookRewards  RewardRequested                                                  (Parm)
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemInstanceQuantityPair>ActualRewards                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnCollectionBookRewardsClaimed");

	Params::UFrontEndRewards_Widget_C_HandleOnCollectionBookRewardsClaimed_Params Parms;
	Parms.RewardRequested = RewardRequested;
	Parms.Success = Success;
	Parms.ActualRewards = ActualRewards;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleOnQuestRewardsClaimed");

	Params::UFrontEndRewards_Widget_C_HandleOnQuestRewardsClaimed_Params Parms;
	Parms.Quest = Quest;
	Parms.Rewards = Rewards;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectionIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardCollectionBookData*K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimCollectionBookChoiceReward");

	Params::UFrontEndRewards_Widget_C_ClaimCollectionBookChoiceReward_Params Parms;
	Parms.NotificationData = NotificationData;
	Parms.SelectionIndex = SelectionIndex;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data = K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardCollectionBookData*K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::ClaimCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimCollectionBookRewards");

	Params::UFrontEndRewards_Widget_C_ClaimCollectionBookRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data = K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::ClaimQuestListReward(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimQuestListReward");

	Params::UFrontEndRewards_Widget_C_ClaimQuestListReward_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>TempCollectionBookRewards                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardCollectionBookData*K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelectableRewards_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortSelectableRewardOption CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item2                                         ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemQuantityList_Cards                   (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::PopulateCollectionBookRewards(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasSelectableRewards_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFortSelectableRewardOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemQuantityList_Cards, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateCollectionBookRewards");

	Params::UFrontEndRewards_Widget_C_PopulateCollectionBookRewards_Params Parms;
	Parms.TempCollectionBookRewards = TempCollectionBookRewards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data = K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasSelectableRewards_ReturnValue = CallFunc_HasSelectableRewards_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateCardsFromItemQuantityList_Cards = CallFunc_CreateCardsFromItemQuantityList_Cards;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardExpeditionData*   K2Node_DynamicCast_AsFort_Reward_Expedition_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFrontEndRewards_Widget_C::PopulateExpedition(class UFortRewardExpeditionData* K2Node_DynamicCast_AsFort_Reward_Expedition_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateExpedition");

	Params::UFrontEndRewards_Widget_C_PopulateExpedition_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Expedition_Data = K2Node_DynamicCast_AsFort_Reward_Expedition_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardEpicQuestData*    K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFrontEndRewards_Widget_C::PopulateNewQuest(class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateNewQuest");

	Params::UFrontEndRewards_Widget_C_PopulateNewQuest_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>CallFunc_GetPreviewAllSelectableRewards_ReturnValue              (ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestRewardType    CallFunc_GetRewardType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::PopulateQuestRewards(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewAllSelectableRewards_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateQuestRewards");

	Params::UFrontEndRewards_Widget_C_PopulateQuestRewards_Params Parms;
	Parms.Quest = Quest;
	Parms.CallFunc_GetPreviewAllSelectableRewards_ReturnValue = CallFunc_GetPreviewAllSelectableRewards_ReturnValue;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRewardType_ReturnValue = CallFunc_GetRewardType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::PopulateMissionRewards()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateMissionRewards");

	Params::UFrontEndRewards_Widget_C_PopulateMissionRewards_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::SetHeaderVisibility(bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "SetHeaderVisibility");

	Params::UFrontEndRewards_Widget_C_SetHeaderVisibility_Params Parms;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::ClaimMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimMissionRewards");

	Params::UFrontEndRewards_Widget_C_ClaimMissionRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Items                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor)
// TArray<enum class EFortInventoryType>ItemInventoryTypeList                                            (Edit, ZeroConstructor)
// TArray<class UFortItem*>           FortItemList                                                     (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemList_Cards                           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "CreateCardsFromItemInstanceQuantityList");

	Params::UFrontEndRewards_Widget_C_CreateCardsFromItemInstanceQuantityList_Params Parms;
	Parms.Items = Items;
	Parms.ItemInventoryTypeList = ItemInventoryTypeList;
	Parms.FortItemList = FortItemList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_CreateCardsFromItemList_Cards = CallFunc_CreateCardsFromItemList_Cards;

	UObject::ProcessEvent(Func, &Parms);

	if (Cards != nullptr)
		*Cards = Parms.Cards;

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>Items                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor)
// TArray<enum class EFortInventoryType>ItemInventoryTypeList                                            (Edit, ZeroConstructor)
// TArray<class UFortItem*>           FortItemList                                                     (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemList_Cards                           (ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards, const TArray<enum class EFortInventoryType>& ItemInventoryTypeList, const TArray<class UFortItem*>& FortItemList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemList_Cards, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "CreateCardsFromItemQuantityList");

	Params::UFrontEndRewards_Widget_C_CreateCardsFromItemQuantityList_Params Parms;
	Parms.Items = Items;
	Parms.ItemInventoryTypeList = ItemInventoryTypeList;
	Parms.FortItemList = FortItemList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CreateCardsFromItemList_Cards = CallFunc_CreateCardsFromItemList_Cards;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cards != nullptr)
		*Cards = Parms.Cards;

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<enum class EFortInventoryType>ItemInventoryTypeList                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor)
// TArray<class URewards_ItemCard_C*> CardList                                                         (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInventoryType      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::CreateCardsFromItemList(TArray<class UFortItem*>& Items, TArray<enum class EFortInventoryType>& ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards, const TArray<class URewards_ItemCard_C*>& CardList, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EFortInventoryType CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "CreateCardsFromItemList");

	Params::UFrontEndRewards_Widget_C_CreateCardsFromItemList_Params Parms;
	Parms.Items = Items;
	Parms.ItemInventoryTypeList = ItemInventoryTypeList;
	Parms.CardList = CardList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cards != nullptr)
		*Cards = Parms.Cards;

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectionIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item, class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ClaimQuestChoiceReward");

	Params::UFrontEndRewards_Widget_C_ClaimQuestChoiceReward_Params Parms;
	Parms.NotificationData = NotificationData;
	Parms.SelectionIndex = SelectionIndex;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RewardIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardNotificationData* NotificationData                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::HandleChoiceRewardSelected(int32 RewardIndex, class UFortItem* Item, class UFortRewardNotificationData* NotificationData, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleChoiceRewardSelected");

	Params::UFrontEndRewards_Widget_C_HandleChoiceRewardSelected_Params Parms;
	Parms.RewardIndex = RewardIndex;
	Parms.Item = Item;
	Parms.NotificationData = NotificationData;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                                                       (Parm, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::InitInitialRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InitInitialRewards");

	Params::UFrontEndRewards_Widget_C_InitInitialRewards_Params Parms;
	Parms.Definition = Definition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> CallFunc_CreateCardsFromItemInstanceQuantityList_Cards           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<class URewards_ItemCard_C*>& CallFunc_CreateCardsFromItemInstanceQuantityList_Cards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleExpeditionCompleted");

	Params::UFrontEndRewards_Widget_C_HandleExpeditionCompleted_Params Parms;
	Parms.Succeeded = Succeeded;
	Parms.Rewards = Rewards;
	Parms.CallFunc_CreateCardsFromItemInstanceQuantityList_Cards = CallFunc_CreateCardsFromItemInstanceQuantityList_Cards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::Cleanup()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "Cleanup");

	Params::UFrontEndRewards_Widget_C_Cleanup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardEpicQuestData*    K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFrontEndRewards_ChoiceRewards_C*K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::ShowCurrentReward(class UFortRewardEpicQuestData* K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data, bool K2Node_DynamicCast_bSuccess, class UFrontEndRewards_ChoiceRewards_C* K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ShowCurrentReward");

	Params::UFrontEndRewards_Widget_C_ShowCurrentReward_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards = K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>TempCollectionBookRewards                                        (Edit, ZeroConstructor)
// class UFortQuestItem*              Quest                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardNotificationData* RewardData                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::PopulateCurrentRewardWidget(const TArray<struct FFortItemQuantityPair>& TempCollectionBookRewards, class UFortQuestItem* Quest, class UFortRewardNotificationData* RewardData, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopulateCurrentRewardWidget");

	Params::UFrontEndRewards_Widget_C_PopulateCurrentRewardWidget_Params Parms;
	Parms.TempCollectionBookRewards = TempCollectionBookRewards;
	Parms.Quest = Quest;
	Parms.RewardData = RewardData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)

void UFrontEndRewards_Widget_C::AdjustCurrentRewardPadding(class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot2, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "AdjustCurrentRewardPadding");

	Params::UFrontEndRewards_Widget_C_AdjustCurrentRewardPadding_Params Parms;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOverlay_Slot2 = K2Node_DynamicCast_AsOverlay_Slot2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardNotificationSubWidget*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)

void UFrontEndRewards_Widget_C::BindEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UFortRewardNotificationSubWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "BindEvents");

	Params::UFrontEndRewards_Widget_C_BindEvents_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::HandleShowHeaderFinished(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleShowHeaderFinished");

	Params::UFrontEndRewards_Widget_C_HandleShowHeaderFinished_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NextReward                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRewardNotificationData* CallFunc_DequeueReward_OutReward                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::PopNextReward(class UFortRewardNotificationData* NextReward, bool CallFunc_IsValid_ReturnValue, class UFortRewardNotificationData* CallFunc_DequeueReward_OutReward)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "PopNextReward");

	Params::UFrontEndRewards_Widget_C_PopNextReward_Params Parms;
	Parms.NextReward = NextReward;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DequeueReward_OutReward = CallFunc_DequeueReward_OutReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InReward                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::DropReward(class UFortRewardNotificationData* InReward)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "DropReward");

	Params::UFrontEndRewards_Widget_C_DropReward_Params Parms;
	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::HandleCurrentRewardDisplayed()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HandleCurrentRewardDisplayed");

	Params::UFrontEndRewards_Widget_C_HandleCurrentRewardDisplayed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft
// (Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnNavigationLeft()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnNavigationLeft");

	Params::UFrontEndRewards_Widget_C_OnNavigationLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight
// (Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnNavigationRight()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnNavigationRight");

	Params::UFrontEndRewards_Widget_C_OnNavigationRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp
// (Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnNavigationUp()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnNavigationUp");

	Params::UFrontEndRewards_Widget_C_OnNavigationUp_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown
// (Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnNavigationDown()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnNavigationDown");

	Params::UFrontEndRewards_Widget_C_OnNavigationDown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnPrimaryActionDisabled()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnPrimaryActionDisabled");

	Params::UFrontEndRewards_Widget_C_OnPrimaryActionDisabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnPrimaryActionEnabled()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnPrimaryActionEnabled");

	Params::UFrontEndRewards_Widget_C_OnPrimaryActionEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnPrimaryActionHidden()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnPrimaryActionHidden");

	Params::UFrontEndRewards_Widget_C_OnPrimaryActionHidden_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UFrontEndRewards_Widget_C::OnPrimaryActionTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnPrimaryActionTextChanged");

	Params::UFrontEndRewards_Widget_C_OnPrimaryActionTextChanged_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	Params::UFrontEndRewards_Widget_C_BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "Construct");

	Params::UFrontEndRewards_Widget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnActivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnActivated");

	Params::UFrontEndRewards_Widget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::HideStarburst(float Delay)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "HideStarburst");

	Params::UFrontEndRewards_Widget_C_HideStarburst_Params Parms;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnDeactivated");

	Params::UFrontEndRewards_Widget_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::InspectItem(class UFortItem* ItemToInspect)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "InspectItem");

	Params::UFrontEndRewards_Widget_C_InspectItem_Params Parms;
	Parms.ItemToInspect = ItemToInspect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::IntroSequence()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "IntroSequence");

	Params::UFrontEndRewards_Widget_C_IntroSequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::Destruct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "Destruct");

	Params::UFrontEndRewards_Widget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnMatchmakingOrLobbyStarted()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnMatchmakingOrLobbyStarted");

	Params::UFrontEndRewards_Widget_C_OnMatchmakingOrLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_ItemToInspect                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectScreen_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Widget_C::ExecuteUbergraph_FrontEndRewards_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class FText K2Node_Event_Text, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue5, float K2Node_CustomEvent_Delay, bool CallFunc_IsValid_ReturnValue6, class UFortItem* K2Node_Event_ItemToInspect, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectScreen_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue8)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "ExecuteUbergraph_FrontEndRewards_Widget");

	Params::UFrontEndRewards_Widget_C_ExecuteUbergraph_FrontEndRewards_Widget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.K2Node_Event_ItemToInspect = K2Node_Event_ItemToInspect;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsIgnored__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnRewardsIgnored__DelegateSignature");

	Params::UFrontEndRewards_Widget_C_OnRewardsIgnored__DelegateSignature_Params Parms;
	Parms.RewardsWidget = RewardsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnRewardsClaimError__DelegateSignature");

	Params::UFrontEndRewards_Widget_C_OnRewardsClaimError__DelegateSignature_Params Parms;
	Parms.RewardsWidget = RewardsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C*   RewardsWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Widget_C::OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnRewardsClaimed__DelegateSignature");

	Params::UFrontEndRewards_Widget_C_OnRewardsClaimed__DelegateSignature_Params Parms;
	Parms.RewardsWidget = RewardsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Widget_C::OnComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Widget_C", "OnComplete__DelegateSignature");

	Params::UFrontEndRewards_Widget_C_OnComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

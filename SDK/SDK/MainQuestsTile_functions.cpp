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


// Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "SetScrollWidget");

	Params::UMainQuestsTile_C_SetScrollWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisibleToUser_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::PopulateFilteredObjectives(class UFortQuestItem* Quest, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, bool CallFunc_IsVisibleToUser_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "PopulateFilteredObjectives");

	Params::UMainQuestsTile_C_PopulateFilteredObjectives_Params Parms;
	Parms.Quest = Quest;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsVisibleToUser_ReturnValue = CallFunc_IsVisibleToUser_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>EmptyArray                                                       (Edit, ZeroConstructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::HandleQuestChanged(const TArray<struct FFortItemInstanceQuantityPair>& EmptyArray, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "HandleQuestChanged");

	Params::UMainQuestsTile_C_HandleQuestChanged_Params Parms;
	Parms.EmptyArray = EmptyArray;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainQuestsTile_C::Construct()
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "Construct");

	Params::UMainQuestsTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::HandleButtonClick(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "HandleButtonClick");

	Params::UMainQuestsTile_C_HandleButtonClick_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainQuestsTile_C::HandleQuestsUpdated()
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "HandleQuestsUpdated");

	Params::UMainQuestsTile_C_HandleQuestsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainQuestsTile_C::PlayDialogIfRequired()
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "PlayDialogIfRequired");

	Params::UMainQuestsTile_C_PlayDialogIfRequired_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetMainQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetIntroConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainQuestsTile_C::ExecuteUbergraph_MainQuestsTile(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, bool CallFunc_HasBeenSeenLocally_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("MainQuestsTile_C", "ExecuteUbergraph_MainQuestsTile");

	Params::UMainQuestsTile_C_ExecuteUbergraph_MainQuestsTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetMainQuest_ReturnValue = CallFunc_GetMainQuest_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue2 = CallFunc_GetQuestManager_ReturnValue2;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetIntroConversation_ReturnValue = CallFunc_GetIntroConversation_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

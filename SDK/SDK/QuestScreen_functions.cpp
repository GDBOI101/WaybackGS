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


// Function QuestScreen.QuestScreen_C.HandleAbandonQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::HandleAbandonQuest(bool* PassThrough)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandleAbandonQuest");

	Params::UQuestScreen_C_HandleAbandonQuest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.ShouldShowPlayQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldShowPlay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowsTileMatching_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFindTileForQuest_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanNavigateToQuestObjective_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::ShouldShowPlayQuest(class UFortQuestItem* Quest, bool* ShouldShowPlay, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_AllowsTileMatching_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanFindTileForQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue4)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ShouldShowPlayQuest");

	Params::UQuestScreen_C_ShouldShowPlayQuest_Params Parms;
	Parms.Quest = Quest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_AllowsTileMatching_ReturnValue = CallFunc_AllowsTileMatching_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanFindTileForQuest_ReturnValue = CallFunc_CanFindTileForQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_CanNavigateToQuestObjective_ReturnValue = CallFunc_CanNavigateToQuestObjective_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShowPlay != nullptr)
		*ShouldShowPlay = Parms.ShouldShowPlay;

}


// Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToDisable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::Toggle_Disable_Claim_Reward_Button(bool ToDisable)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "Toggle Disable Claim Reward Button");

	Params::UQuestScreen_C_Toggle_Disable_Claim_Reward_Button_Params Parms;
	Parms.ToDisable = ToDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.HandleInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::HandleInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandleInventory");

	Params::UQuestScreen_C_HandleInventory_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTreeEntry_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::Update_Category_Buttons_Bang_State(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuestTreeEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "Update Category Buttons Bang State");

	Params::UQuestScreen_C_Update_Category_Buttons_Bang_State_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::Update_Pending_Seen_Quest_Items()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "Update Pending Seen Quest Items");

	Params::UQuestScreen_C_Update_Pending_Seen_Quest_Items_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.RefreshQuestCategories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestCategory*>  CallFunc_GetCurrentQuestsCategories_Categories                   (ZeroConstructor, ReferenceParm)

void UQuestScreen_C::RefreshQuestCategories(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "RefreshQuestCategories");

	Params::UQuestScreen_C_RefreshQuestCategories_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetCurrentQuestsCategories_Categories = CallFunc_GetCurrentQuestsCategories_Categories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::HandleOnEndSpokenDialog()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandleOnEndSpokenDialog");

	Params::UQuestScreen_C_HandleOnEndSpokenDialog_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.StopConversation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::StopConversation(bool* PassThrough)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "StopConversation");

	Params::UQuestScreen_C_StopConversation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.ReplayOutroAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetClaimConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::ReplayOutroAudio(bool* PassThrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ReplayOutroAudio");

	Params::UQuestScreen_C_ReplayOutroAudio_Params Parms;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetClaimConversation_ReturnValue = CallFunc_GetClaimConversation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUINavigationOperation  CallFunc_TryGetPendingNavigationOp_NavigationOp                  (NoDestructor)
// bool                               CallFunc_TryGetPendingNavigationOp_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPendingNavigationOp_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              K2Node_DynamicCast_AsFort_Quest_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::HandlePendingNavigationOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, const struct FFortUINavigationOperation& CallFunc_TryGetPendingNavigationOp_NavigationOp, bool CallFunc_TryGetPendingNavigationOp_ReturnValue, bool CallFunc_HasPendingNavigationOp_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandlePendingNavigationOp");

	Params::UQuestScreen_C_HandlePendingNavigationOp_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_TryGetPendingNavigationOp_NavigationOp = CallFunc_TryGetPendingNavigationOp_NavigationOp;
	Parms.CallFunc_TryGetPendingNavigationOp_ReturnValue = CallFunc_TryGetPendingNavigationOp_ReturnValue;
	Parms.CallFunc_HasPendingNavigationOp_ReturnValue = CallFunc_HasPendingNavigationOp_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item = K2Node_DynamicCast_AsFort_Quest_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.SelectQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestCategory*          CallFunc_GetQuestCategory_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::SelectQuest(class UFortQuestItem* Quest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestCategory* CallFunc_GetQuestCategory_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "SelectQuest");

	Params::UQuestScreen_C_SelectQuest_Params Parms;
	Parms.Quest = Quest;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestCategory_ReturnValue = CallFunc_GetQuestCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.HandleQuestOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::HandleQuestOp(class UFortQuestItem* Quest, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandleQuestOp");

	Params::UQuestScreen_C_HandleQuestOp_Params Parms;
	Parms.Quest = Quest;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.PinQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestPinned_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetQuestPinned_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::PinQuest(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SetQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "PinQuest");

	Params::UQuestScreen_C_PinQuest_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsQuestPinned_ReturnValue = CallFunc_IsQuestPinned_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SetQuestPinned_ReturnValue = CallFunc_SetQuestPinned_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.UpdateInputHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Active_Quest                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVOEnabled_                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsQuestAudioPlaying_                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              LocalQuestReference                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingDailyQuestRerolls_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowPlayQuest_ShouldShowPlay                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetClaimConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortConversation*           CallFunc_GetIntroConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestPinned_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestVOEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::UpdateInputHandlers(class UFortQuestItem* Active_Quest, bool IsVOEnabled_, bool IsQuestAudioPlaying_, class UFortQuestItem* LocalQuestReference, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_GetRemainingDailyQuestRerolls_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ShouldShowPlayQuest_ShouldShowPlay, enum class EInputActionState Temp_byte_Variable5, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, enum class EInputActionState Temp_byte_Variable6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying, bool CallFunc_BooleanAND_ReturnValue2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue2, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue4, enum class EInputActionState K2Node_Select2_Default, bool CallFunc_IsQuestPinned_ReturnValue, bool Temp_bool_Variable3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class EInputActionState K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsQuestVOEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "UpdateInputHandlers");

	Params::UQuestScreen_C_UpdateInputHandlers_Params Parms;
	Parms.Active_Quest = Active_Quest;
	Parms.IsVOEnabled_ = IsVOEnabled_;
	Parms.IsQuestAudioPlaying_ = IsQuestAudioPlaying_;
	Parms.LocalQuestReference = LocalQuestReference;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetRemainingDailyQuestRerolls_ReturnValue = CallFunc_GetRemainingDailyQuestRerolls_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShouldShowPlayQuest_ShouldShowPlay = CallFunc_ShouldShowPlayQuest_ShouldShowPlay;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying = CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue2 = CallFunc_GetQuestDefinitionBP_ReturnValue2;
	Parms.CallFunc_GetClaimConversation_ReturnValue = CallFunc_GetClaimConversation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue3 = CallFunc_GetQuestDefinitionBP_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetIntroConversation_ReturnValue = CallFunc_GetIntroConversation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsQuestPinned_ReturnValue = CallFunc_IsQuestPinned_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsQuestVOEnabled_ReturnValue = CallFunc_IsQuestVOEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.ClaimReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::ClaimReward(bool* PassThrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ClaimReward");

	Params::UQuestScreen_C_ClaimReward_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.SelectInitialQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::SelectInitialQuest(class UObject* NewLocalVar_0)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "SelectInitialQuest");

	Params::UQuestScreen_C_SelectInitialQuest_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnAbandonQuestConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestToAbandon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbandonQuest_questAbandoned_                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::OnAbandonQuestConfirmed(class UFortQuestItem* QuestToAbandon, bool CallFunc_AbandonQuest_questAbandoned_)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnAbandonQuestConfirmed");

	Params::UQuestScreen_C_OnAbandonQuestConfirmed_Params Parms;
	Parms.QuestToAbandon = QuestToAbandon;
	Parms.CallFunc_AbandonQuest_questAbandoned_ = CallFunc_AbandonQuest_questAbandoned_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.ReplayIntroAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversation*           CallFunc_GetIntroConversation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::ReplayIntroAudio(bool* PassThrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ReplayIntroAudio");

	Params::UQuestScreen_C_ReplayIntroAudio_Params Parms;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetIntroConversation_ReturnValue = CallFunc_GetIntroConversation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.SetupInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle4                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle5                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle6                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle7                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle8                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle9                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle10                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle11                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)

void UQuestScreen_C::SetupInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "SetupInputHandlers");

	Params::UQuestScreen_C_SetupInputHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;
	Parms.K2Node_MakeStruct_DataTableRowHandle4 = K2Node_MakeStruct_DataTableRowHandle4;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeStruct_DataTableRowHandle5 = K2Node_MakeStruct_DataTableRowHandle5;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_DataTableRowHandle6 = K2Node_MakeStruct_DataTableRowHandle6;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_MakeStruct_DataTableRowHandle7 = K2Node_MakeStruct_DataTableRowHandle7;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_MakeStruct_DataTableRowHandle8 = K2Node_MakeStruct_DataTableRowHandle8;
	Parms.K2Node_MakeStruct_DataTableRowHandle9 = K2Node_MakeStruct_DataTableRowHandle9;
	Parms.K2Node_MakeStruct_DataTableRowHandle10 = K2Node_MakeStruct_DataTableRowHandle10;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_MakeStruct_DataTableRowHandle11 = K2Node_MakeStruct_DataTableRowHandle11;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.populateDetailWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::PopulateDetailWidgets()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "populateDetailWidgets");

	Params::UQuestScreen_C_PopulateDetailWidgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.PlayQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::PlayQuest(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HandleBack_PassThrough)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "PlayQuest");

	Params::UQuestScreen_C_PlayQuest_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "HandleBack");

	Params::UQuestScreen_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortQuestCategory*          K2Node_DynamicCast_AsFort_Quest_Category                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UObject*> UQuestScreen_C::OnGetChildrenForCategory(class UObject* Item, TArray<class UObject*>& K2Node_MakeArray_Array, class UFortQuestCategory* K2Node_DynamicCast_AsFort_Quest_Category, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnGetChildrenForCategory");

	Params::UQuestScreen_C_OnGetChildrenForCategory_Params Parms;
	Parms.Item = Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsFort_Quest_Category = K2Node_DynamicCast_AsFort_Quest_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestScreen.QuestScreen_C.DialogResult_CE39442C4BCACCFD8414B495A3B27A21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::DialogResult_CE39442C4BCACCFD8414B495A3B27A21(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "DialogResult_CE39442C4BCACCFD8414B495A3B27A21");

	Params::UQuestScreen_C_DialogResult_CE39442C4BCACCFD8414B495A3B27A21_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature");

	Params::UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature");

	Params::UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.Refresh Tree View
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::Refresh_Tree_View()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "Refresh Tree View");

	Params::UQuestScreen_C_Refresh_Tree_View_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnActivated");

	Params::UQuestScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnDeactivated");

	Params::UQuestScreen_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature");

	Params::UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UQuestScreen_C::PlayerPartyStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "PlayerPartyStateChanged");

	Params::UQuestScreen_C_PlayerPartyStateChanged_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPartyState         PartyState                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::OnClientPartyStateChanged(enum class EFortPartyState PartyState)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnClientPartyStateChanged");

	Params::UQuestScreen_C_OnClientPartyStateChanged_Params Parms;
	Parms.PartyState = PartyState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnMatchamkingComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::OnMatchamkingComplete(enum class EMatchmakingCompleteResult Result)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnMatchamkingComplete");

	Params::UQuestScreen_C_OnMatchamkingComplete_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::OnMatchmakingStarted()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnMatchmakingStarted");

	Params::UQuestScreen_C_OnMatchmakingStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnPartyLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::OnPartyLeft()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnPartyLeft");

	Params::UQuestScreen_C_OnPartyLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestScreen_C::Construct()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "Construct");

	Params::UQuestScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.OnItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestScreen_C::OnItemSelected(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "OnItemSelected");

	Params::UQuestScreen_C_OnItemSelected_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.ShowAbandonQuestDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestToAbandon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::ShowAbandonQuestDialog(class UFortQuestItem* QuestToAbandon)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ShowAbandonQuestDialog");

	Params::UQuestScreen_C_ShowAbandonQuestDialog_Params Parms;
	Parms.QuestToAbandon = QuestToAbandon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTreeEntry_C*           K2Node_DynamicCast_AsQuest_Tree_Entry                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_OnGetChildrenForCategory_ReturnValue                    (ZeroConstructor, ReferenceParm)
// class UQuestTreeEntry_C*           K2Node_DynamicCast_AsQuest_Tree_Entry2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         K2Node_CustomEvent_PartyState                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMatchmakingCompleteResultK2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsSelected                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              K2Node_DynamicCast_AsFort_Quest_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              K2Node_CustomEvent_QuestToAbandon                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetMainQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)

void UQuestScreen_C::ExecuteUbergraph_QuestScreen(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget2, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry, bool K2Node_DynamicCast_bSuccess, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, TArray<class UObject*>& CallFunc_OnGetChildrenForCategory_ReturnValue, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry2, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* K2Node_Select_Default, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyState K2Node_CustomEvent_PartyState, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_bIsSelected, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess4, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortQuestItem* K2Node_CustomEvent_QuestToAbandon, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "ExecuteUbergraph_QuestScreen");

	Params::UQuestScreen_C_ExecuteUbergraph_QuestScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget2 = K2Node_ComponentBoundEvent_Widget2;
	Parms.K2Node_DynamicCast_AsQuest_Tree_Entry = K2Node_DynamicCast_AsQuest_Tree_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_OnGetChildrenForCategory_ReturnValue = CallFunc_OnGetChildrenForCategory_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tree_Entry2 = K2Node_DynamicCast_AsQuest_Tree_Entry2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_PartyState = K2Node_CustomEvent_PartyState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_bIsSelected = K2Node_CustomEvent_bIsSelected;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item = K2Node_DynamicCast_AsFort_Quest_Item;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CustomEvent_QuestToAbandon = K2Node_CustomEvent_QuestToAbandon;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue2 = CallFunc_GetQuestManager_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetMainQuest_ReturnValue = CallFunc_GetMainQuest_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.AbandonQuest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestToAbandon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestScreen_C::AbandonQuest__DelegateSignature(class UFortQuestItem* QuestToAbandon)
{
	static auto Func = Class->GetFunction("QuestScreen_C", "AbandonQuest__DelegateSignature");

	Params::UQuestScreen_C_AbandonQuest__DelegateSignature_Params Parms;
	Parms.QuestToAbandon = QuestToAbandon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestScreen_C::CloseJournal__DelegateSignature()
{
	static auto Func = Class->GetFunction("QuestScreen_C", "CloseJournal__DelegateSignature");

	Params::UQuestScreen_C_CloseJournal__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

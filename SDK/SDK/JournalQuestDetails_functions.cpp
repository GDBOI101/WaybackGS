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


// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EFortQuestType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// class UFortQuestItemDefinition*    CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

class FText UJournalQuestDetails_C::Get_Streaming_Attached_Quest_Name(enum class EFortQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Get Streaming Attached Quest Name");

	Params::UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition = CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bStreamingQuest                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::Is_Streaming_Quest(bool* bStreamingQuest, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Is Streaming Quest");

	Params::UJournalQuestDetails_C_Is_Streaming_Quest_Params Parms;
	Parms.CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition = CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (bStreamingQuest != nullptr)
		*bStreamingQuest = Parms.bStreamingQuest;

}


// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition*    AsFort_Quest_Item_Definition                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    K2Node_DynamicCast_AsFort_Quest_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Get Quest Item Def");

	Params::UJournalQuestDetails_C_Get_Quest_Item_Def_Params Parms;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item_Definition = K2Node_DynamicCast_AsFort_Quest_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = Parms.AsFort_Quest_Item_Definition;

}


// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (Parm)
// class FText                        LocalQuestName                                                   (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue           ()
// bool                               CallFunc_Is_Streaming_Quest_bStreamingQuest                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        K2Node_Select_Default                                            ()

void UJournalQuestDetails_C::Set_Quest_Display_Name(class FText InText, class FText LocalQuestName, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue, bool CallFunc_Is_Streaming_Quest_bStreamingQuest, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Set Quest Display Name");

	Params::UJournalQuestDetails_C_Set_Quest_Display_Name_Params Parms;
	Parms.InText = InText;
	Parms.LocalQuestName = LocalQuestName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue = CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue;
	Parms.CallFunc_Is_Streaming_Quest_bStreamingQuest = CallFunc_Is_Streaming_Quest_bStreamingQuest;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsQuestAudioPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::IsQuestAudioPlaying(bool* IsQuestAudioPlaying)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "IsQuestAudioPlaying");

	Params::UJournalQuestDetails_C_IsQuestAudioPlaying_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (IsQuestAudioPlaying != nullptr)
		*IsQuestAudioPlaying = Parms.IsQuestAudioPlaying;

}


// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*           Conversation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              QuestItem                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOutro_                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Quest_Conversation_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::StartConversation(class UFortConversation* Conversation, class UFortQuestItem* QuestItem, bool IsOutro_, bool CallFunc_IsValid_ReturnValue, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "StartConversation");

	Params::UJournalQuestDetails_C_StartConversation_Params Parms;
	Parms.Conversation = Conversation;
	Parms.QuestItem = QuestItem;
	Parms.IsOutro_ = IsOutro_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::StopConversation(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "StopConversation");

	Params::UJournalQuestDetails_C_StopConversation_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestToAbandon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestAbandoned_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRemainingDailyQuestRerolls_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::AbandonQuest(class UFortQuestItem* QuestToAbandon, bool* QuestAbandoned_, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetRemainingDailyQuestRerolls_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "AbandonQuest");

	Params::UJournalQuestDetails_C_AbandonQuest_Params Parms;
	Parms.QuestToAbandon = QuestToAbandon;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRemainingDailyQuestRerolls_ReturnValue = CallFunc_GetRemainingDailyQuestRerolls_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestAbandoned_ != nullptr)
		*QuestAbandoned_ = Parms.QuestAbandoned_;

}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestObjectiveInfo*>CallFunc_GetFutureObjectives_FutureObjectives                    (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestObjectiveInfo*>CallFunc_GetVisibleObjectives_VisibleObjectives                  (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::UpdatePanelInfo(enum class ESlateVisibility Temp_byte_Variable, TArray<class UFortQuestObjectiveInfo*>& CallFunc_GetFutureObjectives_FutureObjectives, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable, TArray<class UFortQuestObjectiveInfo*>& CallFunc_GetVisibleObjectives_VisibleObjectives, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "UpdatePanelInfo");

	Params::UJournalQuestDetails_C_UpdatePanelInfo_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetFutureObjectives_FutureObjectives = CallFunc_GetFutureObjectives_FutureObjectives;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetVisibleObjectives_VisibleObjectives = CallFunc_GetVisibleObjectives_VisibleObjectives;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::UpdatePlayButtonState(enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "UpdatePlayButtonState");

	Params::UJournalQuestDetails_C_UpdatePlayButtonState_Params Parms;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestDetails_C::UpdateButtonStates()
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "UpdateButtonStates");

	Params::UJournalQuestDetails_C_UpdateButtonStates_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::HandleOnEndSpokenDialog(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "HandleOnEndSpokenDialog");

	Params::UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params Parms;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (Parm)
// class FText                        Subtitle                                                         (Parm)
// enum class EFortAnnouncementDisplayPreferenceDisplayPreference                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "HandleOnBeginSpokenDialog");

	Params::UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params Parms;
	Parms.Image = Image;
	Parms.Title = Title;
	Parms.Subtitle = Subtitle;
	Parms.DisplayPreference = DisplayPreference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::Setup(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Setup");

	Params::UJournalQuestDetails_C_Setup_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalQuestDetails_C::Construct()
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "Construct");

	Params::UJournalQuestDetails_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJournalQuestDetails_C::HandleCurrentQuestChangedBP()
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "HandleCurrentQuestChangedBP");

	Params::UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::ExecuteUbergraph_JournalQuestDetails(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "ExecuteUbergraph_JournalQuestDetails");

	Params::UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestDetails_C::OnSpokenDialogEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("JournalQuestDetails_C", "OnSpokenDialogEnded__DelegateSignature");

	Params::UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

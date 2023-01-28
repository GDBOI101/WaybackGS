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


// Function QuestTreeEntry.QuestTreeEntry_C.Get Streaming Attached Quest Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ModifiedName                                                     (Parm, OutParm)
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

void UQuestTreeEntry_C::Get_Streaming_Attached_Quest_Name(class FText* ModifiedName, enum class EFortQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Get Streaming Attached Quest Name");

	Params::UQuestTreeEntry_C_Get_Streaming_Attached_Quest_Name_Params Parms;
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

	if (ModifiedName != nullptr)
		*ModifiedName = Parms.ModifiedName;

}


// Function QuestTreeEntry.QuestTreeEntry_C.Is Streaming Quest
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

void UQuestTreeEntry_C::Is_Streaming_Quest(bool* bStreamingQuest, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Is Streaming Quest");

	Params::UQuestTreeEntry_C_Is_Streaming_Quest_Params Parms;
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


// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Category Display Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::Set_Quest_Category_Display_Name()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Set Quest Category Display Name");

	Params::UQuestTreeEntry_C_Set_Quest_Category_Display_Name_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Display Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LocalQuestName                                                   (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Is_Streaming_Quest_bStreamingQuest                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        K2Node_Select_Default                                            ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UQuestTreeEntry_C::Set_Quest_Display_Name(class FText LocalQuestName, bool Temp_bool_Variable, class FText CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Is_Streaming_Quest_bStreamingQuest, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Set Quest Display Name");

	Params::UQuestTreeEntry_C_Set_Quest_Display_Name_Params Parms;
	Parms.LocalQuestName = LocalQuestName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName = CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Is_Streaming_Quest_bStreamingQuest = CallFunc_Is_Streaming_Quest_bStreamingQuest;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Get Quest Item Def
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition*    AsFort_Quest_Item_Definition                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    K2Node_DynamicCast_AsFort_Quest_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Get Quest Item Def");

	Params::UQuestTreeEntry_C_Get_Quest_Item_Def_Params Parms;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item_Definition = K2Node_DynamicCast_AsFort_Quest_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = Parms.AsFort_Quest_Item_Definition;

}


// Function QuestTreeEntry.QuestTreeEntry_C.Quest Category Have Unseen Quests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasUnseen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalHasUnseen                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::Quest_Category_Have_Unseen_Quests(bool* HasUnseen, bool LocalHasUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Quest Category Have Unseen Quests");

	Params::UQuestTreeEntry_C_Quest_Category_Have_Unseen_Quests_Params Parms;
	Parms.LocalHasUnseen = LocalHasUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUnseen != nullptr)
		*HasUnseen = Parms.HasUnseen;

}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Category Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Quest_Category_Have_Unseen_Quests_HasUnseen             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::Update_Quest_Category_Bang_State(bool CallFunc_Quest_Category_Have_Unseen_Quests_HasUnseen, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Update Quest Category Bang State");

	Params::UQuestTreeEntry_C_Update_Quest_Category_Bang_State_Params Parms;
	Parms.CallFunc_Quest_Category_Have_Unseen_Quests_HasUnseen = CallFunc_Quest_Category_Have_Unseen_Quests_HasUnseen;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Seen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::Update_Quest_Item_Seen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Update Quest Item Seen");

	Params::UQuestTreeEntry_C_Update_Quest_Item_Seen_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::Update_Quest_Item_Bang_State(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Update Quest Item Bang State");

	Params::UQuestTreeEntry_C_Update_Quest_Item_Bang_State_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.SetCompletionPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPercentageComplete_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UQuestTreeEntry_C::SetCompletionPercentage(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetPercentageComplete_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "SetCompletionPercentage");

	Params::UQuestTreeEntry_C_SetCompletionPercentage_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPercentageComplete_ReturnValue = CallFunc_GetPercentageComplete_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Unpin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::Unpin()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Unpin");

	Params::UQuestTreeEntry_C_Unpin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.SetPinnedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestPinned_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::SetPinnedState(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "SetPinnedState");

	Params::UQuestTreeEntry_C_SetPinnedState_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_IsQuestPinned_ReturnValue = CallFunc_IsQuestPinned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestCategory*          Category                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTreeEntry_C::SetupAsCategory(class UFortQuestCategory* Category)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "SetupAsCategory");

	Params::UQuestTreeEntry_C_SetupAsCategory_Params Parms;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsQuest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Category                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTreeEntry_C::SetupAsQuest(class UFortQuestItem* Category)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "SetupAsQuest");

	Params::UQuestTreeEntry_C_SetupAsQuest_Params Parms;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTreeEntry_C::ExpansionChanged(bool bExpanded)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "ExpansionChanged");

	Params::UQuestTreeEntry_C_ExpansionChanged_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::OnSelected()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "OnSelected");

	Params::UQuestTreeEntry_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::OnQuestsUpdated()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "OnQuestsUpdated");

	Params::UQuestTreeEntry_C_OnQuestsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::OnHovered()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "OnHovered");

	Params::UQuestTreeEntry_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestSeen_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTreeEntry_C::OnQuestSeen_Event_0(class UFortQuestItem* Quest)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "OnQuestSeen_Event_0");

	Params::UQuestTreeEntry_C_OnQuestSeen_Event_0_Params Parms;
	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::Destruct()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "Destruct");

	Params::UQuestTreeEntry_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTreeEntry_C::OnDeselected()
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "OnDeselected");

	Params::UQuestTreeEntry_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTreeEntry.QuestTreeEntry_C.ExecuteUbergraph_QuestTreeEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestCategory*          K2Node_Event_Category2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              K2Node_Event_Category                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              K2Node_CustomEvent_Quest                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// enum class EFortQuestState         Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTreeEntry_C::ExecuteUbergraph_QuestTreeEntry(int32 EntryPoint, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, class UFortQuestCategory* K2Node_Event_Category2, class UFortQuestItem* K2Node_Event_Category, bool K2Node_Event_bExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAssetNull_ReturnValue, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_BooleanOR_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortQuestItem* K2Node_CustomEvent_Quest, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EFortQuestState Temp_byte_Variable3, int32 K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("QuestTreeEntry_C", "ExecuteUbergraph_QuestTreeEntry");

	Params::UQuestTreeEntry_C_ExecuteUbergraph_QuestTreeEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue2 = CallFunc_GetQuestManager_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetQuestManager_ReturnValue3 = CallFunc_GetQuestManager_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_Event_Category2 = K2Node_Event_Category2;
	Parms.K2Node_Event_Category = K2Node_Event_Category;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition = CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

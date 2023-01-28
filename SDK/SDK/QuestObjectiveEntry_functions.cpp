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


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.PlayAppearAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestObjectiveEntry_C::PlayAppearAnimation()
{
	static auto Func = Class->GetFunction("QuestObjectiveEntry_C", "PlayAppearAnimation");

	Params::UQuestObjectiveEntry_C_PlayAppearAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AchievedCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription2                  ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetText_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetCombinedDescription_OutDescription2, bool CallFunc_GetCombinedDescription_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestObjectiveEntry_C", "Update");

	Params::UQuestObjectiveEntry_C_Update_Params Parms;
	Parms.Objective = Objective;
	Parms.AchievedCount = AchievedCount;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue2 = CallFunc_SpawnTooltipContext_ReturnValue2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetCombinedDescription_OutDescription2 = CallFunc_GetCombinedDescription_OutDescription2;
	Parms.CallFunc_GetCombinedDescription_ReturnValue2 = CallFunc_GetCombinedDescription_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AchievedCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompleted_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestObjectiveEntry_C", "UpdateProgress");

	Params::UQuestObjectiveEntry_C_UpdateProgress_Params Parms;
	Parms.Objective = Objective;
	Parms.AchievedCount = AchievedCount;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasCompleted_ReturnValue = CallFunc_HasCompleted_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestObjectiveEntry_C::SetData(class UObject* InData)
{
	static auto Func = Class->GetFunction("QuestObjectiveEntry_C", "SetData");

	Params::UQuestObjectiveEntry_C_SetData_Params Parms;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_InData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     K2Node_DynamicCast_AsFort_Quest_Objective_Info                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestObjectiveEntry_C::ExecuteUbergraph_QuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestObjectiveEntry_C", "ExecuteUbergraph_QuestObjectiveEntry");

	Params::UQuestObjectiveEntry_C_ExecuteUbergraph_QuestObjectiveEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InData = K2Node_CustomEvent_InData;
	Parms.K2Node_DynamicCast_AsFort_Quest_Objective_Info = K2Node_DynamicCast_AsFort_Quest_Objective_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

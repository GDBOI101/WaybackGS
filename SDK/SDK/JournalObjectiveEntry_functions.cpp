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


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "Update");

	Params::UJournalObjectiveEntry_C_Update_Params Parms;
	Parms.Objective = Objective;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective)
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "UpdateProgress");

	Params::UJournalObjectiveEntry_C_UpdateProgress_Params Parms;
	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalObjectiveEntry_C::SetData(class UObject* InData)
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "SetData");

	Params::UJournalObjectiveEntry_C_SetData_Params Parms;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalObjectiveEntry_C::Construct()
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "Construct");

	Params::UJournalObjectiveEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalObjectiveEntry_C::Handle_Quests_Updated()
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "Handle Quests Updated");

	Params::UJournalObjectiveEntry_C_Handle_Quests_Updated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     K2Node_DynamicCast_AsFort_Quest_Objective_Info                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalObjectiveEntry_C::ExecuteUbergraph_JournalObjectiveEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalObjectiveEntry_C", "ExecuteUbergraph_JournalObjectiveEntry");

	Params::UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_DynamicCast_AsFort_Quest_Objective_Info = K2Node_DynamicCast_AsFort_Quest_Objective_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

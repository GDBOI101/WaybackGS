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


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.SetStylesToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestProgressBar_C::SetStylesToDefault()
{
	static auto Func = Class->GetFunction("JournalQuestProgressBar_C", "SetStylesToDefault");

	Params::UJournalQuestProgressBar_C_SetStylesToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalQuestProgressBar_C::Construct()
{
	static auto Func = Class->GetFunction("JournalQuestProgressBar_C", "Construct");

	Params::UJournalQuestProgressBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.HandleNewQuestObjectiveBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJournalQuestProgressBar_C::HandleNewQuestObjectiveBP()
{
	static auto Func = Class->GetFunction("JournalQuestProgressBar_C", "HandleNewQuestObjectiveBP");

	Params::UJournalQuestProgressBar_C_HandleNewQuestObjectiveBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Handle Quests Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestProgressBar_C::Handle_Quests_Updated()
{
	static auto Func = Class->GetFunction("JournalQuestProgressBar_C", "Handle Quests Updated");

	Params::UJournalQuestProgressBar_C_Handle_Quests_Updated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisibleToUser_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               ()
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTooltipNumericValue_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTooltipNumericValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTooltipTextFromToken_OutText                         ()
// bool                               CallFunc_GetTooltipTextFromToken_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestProgressBar_C::ExecuteUbergraph_JournalQuestProgressBar(int32 EntryPoint, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisibleToUser_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue3, float CallFunc_GetTooltipNumericValue_Value, bool CallFunc_GetTooltipNumericValue_ReturnValue, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestProgressBar_C", "ExecuteUbergraph_JournalQuestProgressBar");

	Params::UJournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue2 = CallFunc_SpawnTooltipContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsVisibleToUser_ReturnValue = CallFunc_IsVisibleToUser_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetTooltipNumericValue_Value = CallFunc_GetTooltipNumericValue_Value;
	Parms.CallFunc_GetTooltipNumericValue_ReturnValue = CallFunc_GetTooltipNumericValue_ReturnValue;
	Parms.CallFunc_GetTooltipTextFromToken_OutText = CallFunc_GetTooltipTextFromToken_OutText;
	Parms.CallFunc_GetTooltipTextFromToken_ReturnValue = CallFunc_GetTooltipTextFromToken_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

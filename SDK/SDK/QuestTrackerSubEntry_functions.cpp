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


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.GetHeightEstimate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UQuestTrackerSubEntry_C::GetHeightEstimate(class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "GetHeightEstimate");

	Params::UQuestTrackerSubEntry_C_GetHeightEstimate_Params Parms;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue = CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HandleRemoveFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::HandleRemoveFinished()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "HandleRemoveFinished");

	Params::UQuestTrackerSubEntry_C_HandleRemoveFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HideIfEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTrackerSubEntry_C::HideIfEmpty(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "HideIfEmpty");

	Params::UQuestTrackerSubEntry_C_HideIfEmpty_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.UpdateObjectiveText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ObjectiveProgressText                                            (Edit)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTextFromToken_OutText                         ()
// bool                               CallFunc_GetTooltipTextFromToken_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetOwningQuest_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestPinned_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompleted_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTrackerSubEntry_C::UpdateObjectiveText(class FText ObjectiveProgressText, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable3, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue2, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "UpdateObjectiveText");

	Params::UQuestTrackerSubEntry_C_UpdateObjectiveText_Params Parms;
	Parms.ObjectiveProgressText = ObjectiveProgressText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue2 = CallFunc_SpawnTooltipContext_ReturnValue2;
	Parms.CallFunc_GetTooltipTextFromToken_OutText = CallFunc_GetTooltipTextFromToken_OutText;
	Parms.CallFunc_GetTooltipTextFromToken_ReturnValue = CallFunc_GetTooltipTextFromToken_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetOwningQuest_ReturnValue = CallFunc_GetOwningQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsQuestPinned_ReturnValue = CallFunc_IsQuestPinned_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasCompleted_ReturnValue = CallFunc_HasCompleted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::Construct()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "Construct");

	Params::UQuestTrackerSubEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnQuestsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::OnQuestsUpdated()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnQuestsUpdated");

	Params::UQuestTrackerSubEntry_C_OnQuestsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnPlayObjectiveCompletedAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::OnPlayObjectiveCompletedAnimation()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnPlayObjectiveCompletedAnimation");

	Params::UQuestTrackerSubEntry_C_OnPlayObjectiveCompletedAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnCompletionFlashFInished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::OnCompletionFlashFInished()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnCompletionFlashFInished");

	Params::UQuestTrackerSubEntry_C_OnCompletionFlashFInished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.PostCompletionDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTrackerSubEntry_C::PostCompletionDelay()
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "PostCompletionDelay");

	Params::UQuestTrackerSubEntry_C_PostCompletionDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.ExecuteUbergraph_QuestTrackerSubEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UQuestTrackerSubEntry_C::ExecuteUbergraph_QuestTrackerSubEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("QuestTrackerSubEntry_C", "ExecuteUbergraph_QuestTrackerSubEntry");

	Params::UQuestTrackerSubEntry_C_ExecuteUbergraph_QuestTrackerSubEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

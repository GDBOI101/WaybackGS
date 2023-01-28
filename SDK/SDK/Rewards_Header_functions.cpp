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


// Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::SkipFadeInSubHeaderAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "SkipFadeInSubHeaderAnimation");

	Params::URewards_Header_C_SkipFadeInSubHeaderAnimation_Params Parms;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.SetQuestNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardQuestData*        K2Node_DynamicCast_AsFort_Reward_Quest_Data                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRewardHeaderText_ReturnValue                         ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::SetQuestNameText(class UFortRewardQuestData* K2Node_DynamicCast_AsFort_Reward_Quest_Data, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayName_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class FText CallFunc_GetRewardHeaderText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "SetQuestNameText");

	Params::URewards_Header_C_SetQuestNameText_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Reward_Quest_Data = K2Node_DynamicCast_AsFort_Reward_Quest_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRewardHeaderText_ReturnValue = CallFunc_GetRewardHeaderText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndRewardType     Selection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollectionBookRewardTypeCollectionBookRewardType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        RewardDetailText                                                 (Parm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()

void URewards_Header_C::PopulateFromRewardType(enum class EFrontEndRewardType Selection, enum class ECollectionBookRewardType CollectionBookRewardType, class FText RewardDetailText, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "PopulateFromRewardType");

	Params::URewards_Header_C_PopulateFromRewardType_Params Parms;
	Parms.Selection = Selection;
	Parms.CollectionBookRewardType = CollectionBookRewardType;
	Parms.RewardDetailText = RewardDetailText;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.ResetSubHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_Header_C::ResetSubHeader()
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "ResetSubHeader");

	Params::URewards_Header_C_ResetSubHeader_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.FadeInSubHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentAlpha                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::FadeInSubHeader(float CurrentAlpha, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "FadeInSubHeader");

	Params::URewards_Header_C_FadeInSubHeader_Params Parms;
	Parms.CurrentAlpha = CurrentAlpha;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIRewardReport*         CallFunc_GetLastMissionRewardReport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRewardedChestIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void URewards_Header_C::SetMissionLootLevelText(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, int32 CallFunc_GetRewardedChestIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "SetMissionLootLevelText");

	Params::URewards_Header_C_SetMissionLootLevelText_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLastMissionRewardReport_ReturnValue = CallFunc_GetLastMissionRewardReport_ReturnValue;
	Parms.CallFunc_GetRewardedChestIndex_ReturnValue = CallFunc_GetRewardedChestIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.PopulateFromReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InReward                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardCollectionBookData*K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::PopulateFromReward(class UFortRewardNotificationData* InReward, class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "PopulateFromReward");

	Params::URewards_Header_C_PopulateFromReward_Params Parms;
	Parms.InReward = InReward;
	Parms.K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data = K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "PreConstruct");

	Params::URewards_Header_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::ExecuteUbergraph_Rewards_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("Rewards_Header_C", "ExecuteUbergraph_Rewards_Header");

	Params::URewards_Header_C_ExecuteUbergraph_Rewards_Header_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

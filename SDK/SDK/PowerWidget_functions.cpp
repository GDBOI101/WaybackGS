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


// Function PowerWidget.PowerWidget_C.Check For Power Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayerHasTeammates_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::Check_For_Power_Change(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Check For Power Change");

	Params::UPowerWidget_C_Check_For_Power_Change_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPowerWidget_C::GetPowerRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "GetPowerRatingTooltipWidget");

	Params::UPowerWidget_C_GetPowerRatingTooltipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PowerWidget.PowerWidget_C.PlayerHasTeammates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_GetTeamMemberIDs_TeamMemberIDs                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPowerWidget_C::PlayerHasTeammates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "PlayerHasTeammates");

	Params::UPowerWidget_C_PlayerHasTeammates_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs = CallFunc_GetTeamMemberIDs_TeamMemberIDs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PowerWidget.PowerWidget_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHomebaseRating_Rating                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             ()
// class FText                        CallFunc_Conv_BoolToText_ReturnValue2                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue3                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData8                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData9                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UPowerWidget_C::Debug(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, class FText CallFunc_Conv_BoolToText_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Debug");

	Params::UPowerWidget_C_Debug_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue2 = CallFunc_Conv_BoolToText_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.CallFunc_Conv_BoolToText_ReturnValue3 = CallFunc_Conv_BoolToText_ReturnValue3;
	Parms.K2Node_MakeStruct_FormatArgumentData8 = K2Node_MakeStruct_FormatArgumentData8;
	Parms.K2Node_MakeStruct_FormatArgumentData9 = K2Node_MakeStruct_FormatArgumentData9;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.SetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayerHasTeammates_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::SetState(bool* PassThrough, bool CallFunc_PlayerHasTeammates_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "SetState");

	Params::UPowerWidget_C_SetState_Params Parms;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function PowerWidget.PowerWidget_C.Update Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIncreasing                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewProgressValue                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewRatingValue                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHomebaseRating_Rating                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHomebaseRating_Rating2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHomebaseRating_Rating3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetModifiedHomebaseRating_Rating4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHomebaseRating_Rating4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayerHasTeammates_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::Update_Rating(bool IsIncreasing, float NewProgressValue, int32 NewRatingValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating2, float CallFunc_GetModifiedHomebaseRating_ProgressFraction2, bool CallFunc_GetModifiedHomebaseRating_ReturnValue2, int32 CallFunc_GetModifiedHomebaseRating_Rating3, float CallFunc_GetModifiedHomebaseRating_ProgressFraction3, bool CallFunc_GetModifiedHomebaseRating_ReturnValue3, int32 CallFunc_GetHomebaseRating_Rating2, float CallFunc_GetHomebaseRating_ProgressFraction2, bool CallFunc_GetHomebaseRating_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating3, float CallFunc_GetHomebaseRating_ProgressFraction3, bool CallFunc_GetHomebaseRating_ReturnValue3, int32 CallFunc_GetModifiedHomebaseRating_Rating4, float CallFunc_GetModifiedHomebaseRating_ProgressFraction4, bool CallFunc_GetModifiedHomebaseRating_ReturnValue4, int32 CallFunc_GetHomebaseRating_Rating4, float CallFunc_GetHomebaseRating_ProgressFraction4, bool CallFunc_GetHomebaseRating_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Update Rating");

	Params::UPowerWidget_C_Update_Rating_Params Parms;
	Parms.IsIncreasing = IsIncreasing;
	Parms.NewProgressValue = NewProgressValue;
	Parms.NewRatingValue = NewRatingValue;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating2 = CallFunc_GetModifiedHomebaseRating_Rating2;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction2 = CallFunc_GetModifiedHomebaseRating_ProgressFraction2;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue2 = CallFunc_GetModifiedHomebaseRating_ReturnValue2;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating3 = CallFunc_GetModifiedHomebaseRating_Rating3;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction3 = CallFunc_GetModifiedHomebaseRating_ProgressFraction3;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue3 = CallFunc_GetModifiedHomebaseRating_ReturnValue3;
	Parms.CallFunc_GetHomebaseRating_Rating2 = CallFunc_GetHomebaseRating_Rating2;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction2 = CallFunc_GetHomebaseRating_ProgressFraction2;
	Parms.CallFunc_GetHomebaseRating_ReturnValue2 = CallFunc_GetHomebaseRating_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating3 = CallFunc_GetHomebaseRating_Rating3;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction3 = CallFunc_GetHomebaseRating_ProgressFraction3;
	Parms.CallFunc_GetHomebaseRating_ReturnValue3 = CallFunc_GetHomebaseRating_ReturnValue3;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating4 = CallFunc_GetModifiedHomebaseRating_Rating4;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction4 = CallFunc_GetModifiedHomebaseRating_ProgressFraction4;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue4 = CallFunc_GetModifiedHomebaseRating_ReturnValue4;
	Parms.CallFunc_GetHomebaseRating_Rating4 = CallFunc_GetHomebaseRating_Rating4;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction4 = CallFunc_GetHomebaseRating_ProgressFraction4;
	Parms.CallFunc_GetHomebaseRating_ReturnValue4 = CallFunc_GetHomebaseRating_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.Update Rating Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              New_Rating_Value                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::Update_Rating_Value(int32 New_Rating_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Update Rating Value");

	Params::UPowerWidget_C_Update_Rating_Value_Params Parms;
	Parms.New_Rating_Value = New_Rating_Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPowerWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Construct");

	Params::UPowerWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm)

void UPowerWidget_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "OnPlayerInfoChanged");

	Params::UPowerWidget_C_OnPlayerInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetState_PassThrough                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_Event_NewInfo                                             ()
// enum class EFortPartyMemberDisplayStateCallFunc_GetPartyMemberDisplayState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::ExecuteUbergraph_PowerWidget(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetState_PassThrough, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("PowerWidget_C", "ExecuteUbergraph_PowerWidget");

	Params::UPowerWidget_C_ExecuteUbergraph_PowerWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SetState_PassThrough = CallFunc_SetState_PassThrough;
	Parms.K2Node_Event_NewInfo = K2Node_Event_NewInfo;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerWidget_C::Power_Increased__DelegateSignature()
{
	static auto Func = Class->GetFunction("PowerWidget_C", "Power Increased__DelegateSignature");

	Params::UPowerWidget_C_Power_Increased__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

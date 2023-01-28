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


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 Result                                                           (Parm, OutParm)
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

void UHordeTierResultsWidget_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "OnHandleAction");

	Params::UHordeTierResultsWidget_C_OnHandleAction_Params Parms;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeTierResultsWidget_C::OnEndOfMovieReached(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "OnEndOfMovieReached");

	Params::UHordeTierResultsWidget_C_OnEndOfMovieReached_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                MediaToUse                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StringTest                                                       (Edit, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCompletionResult   Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaSource*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSource*                K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSource*                K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeTierResultsWidget_C::ChooseMediaToUse(class UMediaSource** MediaToUse, const class FString& StringTest, bool Temp_bool_Variable, enum class EFortCompletionResult Temp_byte_Variable, enum class EFortCompletionResult Temp_byte_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, class UMediaSource* K2Node_Select_Default, class UMediaSource* K2Node_Select2_Default, class UMediaSource* K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "ChooseMediaToUse");

	Params::UHordeTierResultsWidget_C_ChooseMediaToUse_Params Parms;
	Parms.StringTest = StringTest;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (MediaToUse != nullptr)
		*MediaToUse = Parms.MediaToUse;

}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void UHordeTierResultsWidget_C::Initialize(enum class EFortCompletionResult Result, enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "Initialize");

	Params::UHordeTierResultsWidget_C_Initialize_Params Parms;
	Parms.Result = Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                MediaToUse                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMediaSource*                CallFunc_ChooseMediaToUse_MediaToUse                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeTierResultsWidget_C::InitializeMovie(class UMediaSource* MediaToUse, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaSource* CallFunc_ChooseMediaToUse_MediaToUse, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "InitializeMovie");

	Params::UHordeTierResultsWidget_C_InitializeMovie_Params Parms;
	Parms.MediaToUse = MediaToUse;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ChooseMediaToUse_MediaToUse = CallFunc_ChooseMediaToUse_MediaToUse;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeTierResultsWidget_C::OnTierResultsWidgetComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("HordeTierResultsWidget_C", "OnTierResultsWidgetComplete__DelegateSignature");

	Params::UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

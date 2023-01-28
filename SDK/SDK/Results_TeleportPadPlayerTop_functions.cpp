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


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::Play_Anim_Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Play Anim Intro");

	Params::UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetID                                                      (Parm, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreReportIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               ()
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayerTop_C::Initialize(const struct FUniqueNetIdRepl& UniqueNetID, class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Initialize");

	Params::UResults_TeleportPadPlayerTop_C_Initialize_Params Parms;
	Parms.UniqueNetID = UniqueNetID;
	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::IntroName()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "IntroName");

	Params::UResults_TeleportPadPlayerTop_C_IntroName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayerTop_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "PreConstruct");

	Params::UResults_TeleportPadPlayerTop_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::Intro()
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Intro");

	Params::UResults_TeleportPadPlayerTop_C_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UResults_TeleportPadPlayerTop_C::ExecuteUbergraph_Results_TeleportPadPlayerTop(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "ExecuteUbergraph_Results_TeleportPadPlayerTop");

	Params::UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue2 = CallFunc_RandomInteger_ReturnValue2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

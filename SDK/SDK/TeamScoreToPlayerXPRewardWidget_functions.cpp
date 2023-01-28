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


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIXpInfo               XPinfo                                                           (Parm, NoDestructor)
// class FString                      Player_Name                                                      (Edit, ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::Initialize(const struct FFortUIXpInfo& XPinfo, const class FString& Player_Name, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Initialize");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Initialize_Params Parms;
	Parms.XPinfo = XPinfo;
	Parms.Player_Name = Player_Name;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LERP_Factor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              XPEarned                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentPlayerXPCount                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IntermediateXPCount                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProgressToNextLevel                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelDuringTween                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLevelProgress_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHeroManagementContext*  CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHeroLevelAtXP_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::Update_XP_LERP(float LERP_Factor, int32 XPEarned, int32 CurrentPlayerXPCount, int32 IntermediateXPCount, float ProgressToNextLevel, int32 LevelDuringTween, float CallFunc_GetLevelProgress_ReturnValue, class UFortHeroManagementContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetHeroLevelAtXP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Lerp_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue4)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Update XP LERP");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP_Params Parms;
	Parms.LERP_Factor = LERP_Factor;
	Parms.XPEarned = XPEarned;
	Parms.CurrentPlayerXPCount = CurrentPlayerXPCount;
	Parms.IntermediateXPCount = IntermediateXPCount;
	Parms.ProgressToNextLevel = ProgressToNextLevel;
	Parms.LevelDuringTween = LevelDuringTween;
	Parms.CallFunc_GetLevelProgress_ReturnValue = CallFunc_GetLevelProgress_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroLevelAtXP_ReturnValue = CallFunc_GetHeroLevelAtXP_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_FTrunc_ReturnValue2 = CallFunc_FTrunc_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamScoreToPlayerXPRewardWidget_C::OnLevelChanged()
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "OnLevelChanged");

	Params::UTeamScoreToPlayerXPRewardWidget_C_OnLevelChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTeamScoreToPlayerXPRewardWidget_C::Construct()
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Construct");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget(int32 EntryPoint, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget");

	Params::UTeamScoreToPlayerXPRewardWidget_C_ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

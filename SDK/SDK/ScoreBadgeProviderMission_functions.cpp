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


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ScoreCategory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Score                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBadgeProviderMission_C::GetTotalScore(enum class EStatCategory ScoreCategory, int32* Score)
{
	static auto Func = Class->GetFunction("ScoreBadgeProviderMission_C", "GetTotalScore");

	Params::UScoreBadgeProviderMission_C_GetTotalScore_Params Parms;
	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Score != nullptr)
		*Score = Parms.Score;

}


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ScoreCategory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCollectionMissionBadgeDisplayInfo>BadgeInfos                                                       (Parm, OutParm, ZeroConstructor)

void UScoreBadgeProviderMission_C::GetScoreBadgeInfos(enum class EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos)
{
	static auto Func = Class->GetFunction("ScoreBadgeProviderMission_C", "GetScoreBadgeInfos");

	Params::UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params Parms;
	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (BadgeInfos != nullptr)
		*BadgeInfos = Parms.BadgeInfos;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

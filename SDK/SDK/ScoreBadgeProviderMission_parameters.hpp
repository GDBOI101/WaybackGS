#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
struct UScoreBadgeProviderMission_C_GetTotalScore_Params
{
public:
	enum class EStatCategory                     ScoreCategory;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
struct UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params
{
public:
	enum class EStatCategory                     ScoreCategory;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCollectionMissionBadgeDisplayInfo> BadgeInfos;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

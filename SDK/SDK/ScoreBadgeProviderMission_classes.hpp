#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
class UScoreBadgeProviderMission_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScoreBadgeProviderMission_C");
		return Clss;
	}

	void GetTotalScore(enum class EStatCategory ScoreCategory, int32* Score);
	void GetScoreBadgeInfos(enum class EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x1D - 0x0)
// UserDefinedStruct DynamicQuestUpdateInfo.DynamicQuestUpdateInfo
struct FDynamicQuestUpdateInfo
{
public:
	int32                                        LastNotifiedCount_2_0F77AC33401CB8426EAEFE9B7A6BA3CF; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AchievedCount_4_D769733A4EAE28644D6AFDB4BC3EB027;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        QuestItem_11_3D49559C46BFAA72DF4BEBBC53D09EC3;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               QuestObjective_13_DD90737247F2659E162C58B4258EAEAF; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TweenTimeRemaining_21_BE81ABC64DF8EDBD1C0476ADDB3D4541; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasUpdateStarted_20_619FFE6348FDB23D6A4253BFCFB0DF57; // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

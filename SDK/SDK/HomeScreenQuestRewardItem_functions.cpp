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


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHomeScreenQuestRewardItem_C::Construct()
{
	static auto Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "Construct");

	Params::UHomeScreenQuestRewardItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.ExecuteUbergraph_HomeScreenQuestRewardItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenQuestRewardItem_C::ExecuteUbergraph_HomeScreenQuestRewardItem(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "ExecuteUbergraph_HomeScreenQuestRewardItem");

	Params::UHomeScreenQuestRewardItem_C_ExecuteUbergraph_HomeScreenQuestRewardItem_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

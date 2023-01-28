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


// Function CampaignMapPage_Plankerton_02.CampaignMapPage_Plankerton_02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapPage_Plankerton_02_C::Construct()
{
	static auto Func = Class->GetFunction("CampaignMapPage_Plankerton_02_C", "Construct");

	Params::UCampaignMapPage_Plankerton_02_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapPage_Plankerton_02.CampaignMapPage_Plankerton_02_C.ExecuteUbergraph_CampaignMapPage_Plankerton_02
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapPage_Plankerton_02_C::ExecuteUbergraph_CampaignMapPage_Plankerton_02(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CampaignMapPage_Plankerton_02_C", "ExecuteUbergraph_CampaignMapPage_Plankerton_02");

	Params::UCampaignMapPage_Plankerton_02_C_ExecuteUbergraph_CampaignMapPage_Plankerton_02_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

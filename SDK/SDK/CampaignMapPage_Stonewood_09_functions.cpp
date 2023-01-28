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


// Function CampaignMapPage_Stonewood_09.CampaignMapPage_Stonewood_09_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapPage_Stonewood_09_C::Construct()
{
	static auto Func = Class->GetFunction("CampaignMapPage_Stonewood_09_C", "Construct");

	Params::UCampaignMapPage_Stonewood_09_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapPage_Stonewood_09.CampaignMapPage_Stonewood_09_C.ExecuteUbergraph_CampaignMapPage_Stonewood_09
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapPage_Stonewood_09_C::ExecuteUbergraph_CampaignMapPage_Stonewood_09(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CampaignMapPage_Stonewood_09_C", "ExecuteUbergraph_CampaignMapPage_Stonewood_09");

	Params::UCampaignMapPage_Stonewood_09_C_ExecuteUbergraph_CampaignMapPage_Stonewood_09_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

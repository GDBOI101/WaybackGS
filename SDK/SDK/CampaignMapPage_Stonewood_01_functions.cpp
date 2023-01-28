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


// Function CampaignMapPage_Stonewood_01.CampaignMapPage_Stonewood_01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCampaignMapPage_Stonewood_01_C::Construct()
{
	static auto Func = Class->GetFunction("CampaignMapPage_Stonewood_01_C", "Construct");

	Params::UCampaignMapPage_Stonewood_01_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CampaignMapPage_Stonewood_01.CampaignMapPage_Stonewood_01_C.ExecuteUbergraph_CampaignMapPage_Stonewood_01
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapPage_Stonewood_01_C::ExecuteUbergraph_CampaignMapPage_Stonewood_01(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CampaignMapPage_Stonewood_01_C", "ExecuteUbergraph_CampaignMapPage_Stonewood_01");

	Params::UCampaignMapPage_Stonewood_01_C_ExecuteUbergraph_CampaignMapPage_Stonewood_01_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

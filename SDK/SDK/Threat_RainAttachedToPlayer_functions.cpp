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


// Function Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreat_RainAttachedToPlayer_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Threat_RainAttachedToPlayer_C", "UserConstructionScript");

	Params::AThreat_RainAttachedToPlayer_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

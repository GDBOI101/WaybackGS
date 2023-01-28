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


// Function Announce_ZoneModifiers.Announce_ZoneModifiers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_ZoneModifiers_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Announce_ZoneModifiers_C", "UserConstructionScript");

	Params::AAnnounce_ZoneModifiers_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

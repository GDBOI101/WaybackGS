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


// Function PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerSpawnPlacementActor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PlayerSpawnPlacementActor_C", "UserConstructionScript");

	Params::APlayerSpawnPlacementActor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

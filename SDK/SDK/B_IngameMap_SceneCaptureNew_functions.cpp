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


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureNew_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "UserConstructionScript");

	Params::AB_IngameMap_SceneCaptureNew_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureNew_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "ReceiveBeginPlay");

	Params::AB_IngameMap_SceneCaptureNew_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_IngameMap_SceneCaptureNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "ExecuteUbergraph_B_IngameMap_SceneCaptureNew");

	Params::AB_IngameMap_SceneCaptureNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureNew_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

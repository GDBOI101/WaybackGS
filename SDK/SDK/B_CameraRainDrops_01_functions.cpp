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


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "UserConstructionScript");

	Params::AB_CameraRainDrops_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");

	Params::AB_CameraRainDrops_01_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::AB_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

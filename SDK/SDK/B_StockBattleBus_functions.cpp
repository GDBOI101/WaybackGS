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


// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "UserConstructionScript");

	Params::AB_StockBattleBus_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "ReceiveBeginPlay");

	Params::AB_StockBattleBus_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Start_Audio()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "Start Audio");

	Params::AB_StockBattleBus_C_Start_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StockBattleBus_C::ExecuteUbergraph_B_StockBattleBus(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "ExecuteUbergraph_B_StockBattleBus");

	Params::AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

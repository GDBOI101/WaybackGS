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


// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_C", "ReceiveBeginPlay");

	Params::AFrontend_Lobby_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_C", "ExecuteUbergraph_Frontend_Lobby");

	Params::AFrontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

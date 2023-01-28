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


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerControllerOutpost_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "UserConstructionScript");

	Params::ABP_PlayerControllerOutpost_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GetHelp                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ServerStartExpandingOutpost(bool GetHelp)
{
	static auto Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ServerStartExpandingOutpost");

	Params::ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params Parms;
	Parms.GetHelp = GetHelp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_GetHelp                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ExecuteUbergraph_BP_PlayerControllerOutpost(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_GetHelp)
{
	static auto Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ExecuteUbergraph_BP_PlayerControllerOutpost");

	Params::ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_GetHelp = K2Node_CustomEvent_GetHelp;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

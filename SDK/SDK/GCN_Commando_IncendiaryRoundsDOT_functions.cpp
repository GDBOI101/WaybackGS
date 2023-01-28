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


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Commando_IncendiaryRoundsDOT_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "UserConstructionScript");

	Params::AGCN_Commando_IncendiaryRoundsDOT_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AGCN_Commando_IncendiaryRoundsDOT_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "ReceiveDestroyed");

	Params::AGCN_Commando_IncendiaryRoundsDOT_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Commando_IncendiaryRoundsDOT_C::ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT");

	Params::AGCN_Commando_IncendiaryRoundsDOT_C_ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

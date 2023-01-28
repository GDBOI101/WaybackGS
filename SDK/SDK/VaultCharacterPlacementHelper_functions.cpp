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


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterPlacementHelper_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultCharacterPlacementHelper_C", "UserConstructionScript");

	Params::AVaultCharacterPlacementHelper_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultCharacterPlacementHelper_C", "ReceiveBeginPlay");

	Params::AVaultCharacterPlacementHelper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCharacterPlacementHelper_C::ExecuteUbergraph_VaultCharacterPlacementHelper(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("VaultCharacterPlacementHelper_C", "ExecuteUbergraph_VaultCharacterPlacementHelper");

	Params::AVaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto Func = Class->GetFunction("VaultCharacterPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	Params::AVaultCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

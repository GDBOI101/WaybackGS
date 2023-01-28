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


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "UserConstructionScript");

	Params::AAthena_PlayerController_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveBeginPlay");

	Params::AAthena_PlayerController_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::PlayWinEffects()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "PlayWinEffects");

	Params::AAthena_PlayerController_C_PlayWinEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UAmbientControllerComponent_Athena_C*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "ExecuteUbergraph_Athena_PlayerController");

	Params::AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

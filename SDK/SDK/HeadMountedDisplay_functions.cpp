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


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::IsTracked()
{
	static auto Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::UMotionControllerComponent_IsTracked_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction HeadMountedDisplay.VRNotificationsComponent.VRNotificationsDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVRNotificationsComponent::VRNotificationsDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("VRNotificationsComponent", "VRNotificationsDelegate__DelegateSignature");

	Params::UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

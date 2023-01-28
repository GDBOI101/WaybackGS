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


// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Stop()
{
	static auto Func = Class->GetFunction("SynthComponent", "Stop");

	Params::USynthComponent_Stop_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Start()
{
	static auto Func = Class->GetFunction("SynthComponent", "Start");

	Params::USynthComponent_Start_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponent::IsPlaying()
{
	static auto Func = Class->GetFunction("SynthComponent", "IsPlaying");

	Params::USynthComponent_IsPlaying_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

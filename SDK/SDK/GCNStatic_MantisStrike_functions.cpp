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


// Function GCNStatic_MantisStrike.GCNStatic_MantisStrike_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class USoundBase*                  LocalMantisStrikeImpactCue                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             LocalP_MantisStrikeImpact                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGCNStatic_MantisStrike_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class USoundBase* LocalMantisStrikeImpactCue, class UParticleSystem* LocalP_MantisStrikeImpact, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNStatic_MantisStrike_C", "OnExecute");

	Params::UGCNStatic_MantisStrike_C_OnExecute_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.LocalMantisStrikeImpactCue = LocalMantisStrikeImpactCue;
	Parms.LocalP_MantisStrikeImpact = LocalP_MantisStrikeImpact;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

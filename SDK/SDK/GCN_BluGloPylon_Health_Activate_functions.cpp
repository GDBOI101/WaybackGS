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


// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_BluGloPylon_Health_Activate_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_BluGloPylon_Health_Activate_C", "OnStartParticleSystemSpawned");

	Params::AGCN_BluGloPylon_Health_Activate_C_OnStartParticleSystemSpawned_Params Parms;
	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_BluGloPylon_Health_Activate_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCN_BluGloPylon_Health_Activate_C", "UserConstructionScript");

	Params::AGCN_BluGloPylon_Health_Activate_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

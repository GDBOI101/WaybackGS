#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xC8 - 0x0)
// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.OnStartParticleSystemSpawned
struct AGCN_BluGloPylon_RunSpeed_Activate_C_OnStartParticleSystemSpawned_Params
{
public:
	class UParticleSystemComponent*              SpawnedParticleSysComponent;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.UserConstructionScript
struct AGCN_BluGloPylon_RunSpeed_Activate_C_UserConstructionScript_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x60 (0x60 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.GetFireLocationAndRotation
struct ATrap_Ceiling_ElectricWeak_Athena_C_GetFireLocationAndRotation_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x30)(IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.UserConstructionScript
struct ATrap_Ceiling_ElectricWeak_Athena_C_UserConstructionScript_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__FinishedFunc
struct ATrap_Ceiling_ElectricWeak_Athena_C_ScaleOutLight__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__UpdateFunc
struct ATrap_Ceiling_ElectricWeak_Athena_C_ScaleOutLight__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnPlaced
struct ATrap_Ceiling_ElectricWeak_Athena_C_OnPlaced_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnFinishedBuilding
struct ATrap_Ceiling_ElectricWeak_Athena_C_OnFinishedBuilding_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnReloadEnd
struct ATrap_Ceiling_ElectricWeak_Athena_C_OnReloadEnd_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Ceiling_ElectricWeak_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnOutOfDurability
struct ATrap_Ceiling_ElectricWeak_Athena_C_OnOutOfDurability_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnWorldReady
struct ATrap_Ceiling_ElectricWeak_Athena_C_OnWorldReady_Params
{
public:
};

// 0x564 (0x564 - 0x0)
// Function Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena
struct ATrap_Ceiling_ElectricWeak_Athena_C_ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue2;       // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x20(0x80)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X;                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xB4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue2;                  // 0xC0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue3;       // 0xCC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue4;       // 0xD8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB5[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam2;               // 0xF0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam3;               // 0x170(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam4;               // 0x1F0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam5;               // 0x270(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam6;               // 0x2F0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam7;               // 0x370(0x80)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array;                            // 0x3F0(0x10)(ZeroConstructor, ReferenceParm)
	float                                        Temp_float_Variable;                               // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x414(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x424(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x430(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x43C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x450(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x470(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue2;        // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x548(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x554(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

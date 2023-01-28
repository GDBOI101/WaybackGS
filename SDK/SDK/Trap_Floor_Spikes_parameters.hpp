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
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.GetFireLocationAndRotation
struct ATrap_Floor_Spikes_C_GetFireLocationAndRotation_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x30)(IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.MaterialSweepOnSpikes
struct ATrap_Floor_Spikes_C_MaterialSweepOnSpikes_Params
{
public:
	float                                        SweepSpeed;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SweepColor;                                        // 0x4(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepExponent;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.SetSpikePosition
struct ATrap_Floor_Spikes_C_SetSpikePosition_Params
{
public:
	float                                        NewSpikePosition;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.UserConstructionScript
struct ATrap_Floor_Spikes_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__FinishedFunc
struct ATrap_Floor_Spikes_C_Fire__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__UpdateFunc
struct ATrap_Floor_Spikes_C_Fire__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__FinishedFunc
struct ATrap_Floor_Spikes_C_Retract__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__UpdateFunc
struct ATrap_Floor_Spikes_C_Retract__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__Sounds__EventFunc
struct ATrap_Floor_Spikes_C_Retract__Sounds__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__FinishedFunc
struct ATrap_Floor_Spikes_C_ResetSpikes__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__UpdateFunc
struct ATrap_Floor_Spikes_C_ResetSpikes__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnReloadEnd
struct ATrap_Floor_Spikes_C_OnReloadEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnPlaced
struct ATrap_Floor_Spikes_C_OnPlaced_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnFinishedBuilding
struct ATrap_Floor_Spikes_C_OnFinishedBuilding_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnOutOfDurability
struct ATrap_Floor_Spikes_C_OnOutOfDurability_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnWorldReady
struct ATrap_Floor_Spikes_C_OnWorldReady_Params
{
public:
};

// 0x594 (0x594 - 0x0)
// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ExecuteUbergraph_Trap_Floor_Spikes
struct ATrap_Floor_Spikes_C_ExecuteUbergraph_Trap_Floor_Spikes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F0D[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x10(0x80)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X;                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x9C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue2;                  // 0xBC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue2;       // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue3;       // 0xD4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam2;               // 0xE0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam3;               // 0x160(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam4;               // 0x1E0(0x80)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue4;       // 0x260(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam5;               // 0x270(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam6;               // 0x2F0(0x80)(IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x375(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F0F[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam7;               // 0x380(0x80)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array;                            // 0x400(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F10[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x414(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x420(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x42C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue4;         // 0x438(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x450(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue5;         // 0x468(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue6;         // 0x474(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x488(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue3;                        // 0x54C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x55C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x578(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x584(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

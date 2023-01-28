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

// 0x2D (0x2D - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ShouldPlayPostProcess
struct AB_Prj_Pumpkin_RPG_Athena_C_ShouldPlayPostProcess_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_237C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.UserConstructionScript
struct AB_Prj_Pumpkin_RPG_Athena_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__FinishedFunc
struct AB_Prj_Pumpkin_RPG_Athena_C_PPFader__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__UpdateFunc
struct AB_Prj_Pumpkin_RPG_Athena_C_PPFader__UpdateFunc_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveTick
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnExploded
struct AB_Prj_Pumpkin_RPG_Athena_C_OnExploded_Params
{
public:
	TArray<class AActor*>                        HitActors;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                    HitResults;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.FuseTimerMax
struct AB_Prj_Pumpkin_RPG_Athena_C_FuseTimerMax_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveBeginPlay
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnStop
struct AB_Prj_Pumpkin_RPG_Athena_C_OnStop_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x88 (0x88 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnBounce
struct AB_Prj_Pumpkin_RPG_Athena_C_OnBounce_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveDestroyed
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveDestroyed_Params
{
public:
};

// 0x360 (0x360 - 0x0)
// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena
struct AB_Prj_Pumpkin_RPG_Athena_C_ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x8(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_237D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_Event_HitActors;                            // 0x30(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                    K2Node_Event_HitResults;                           // 0x40(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_237E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingKilled_ReturnValue;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_237F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x5C(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x68(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0xF0(0x8)(NoDestructor)
	struct FHitResult                            K2Node_Event_Hit2;                                 // 0xF8(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x180(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2380[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x210(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x21C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x228(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x234(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x268(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x274(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromZ_ReturnValue;                 // 0x280(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x28C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x298(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue3;           // 0x2A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2381[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2382[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x2B4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x2C0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_ShouldPlayPostProcess_ReturnValue;        // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2383[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue2;      // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue3;      // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

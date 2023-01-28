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

// 0xDC (0xDC - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ThrowAthenaGrenade
struct UGA_Athena_Grenade_C_ThrowAthenaGrenade_Params
{
public:
	struct FVector                               NewParam;                                          // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x18(0x80)()
	uint8                                        Pad_2777[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0xD0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Completed_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Completed_6845367B4931B42A6C8BF6A6664F2203_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Cancelled_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Cancelled_6845367B4931B42A6C8BF6A6664F2203_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Triggered_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Triggered_6845367B4931B42A6C8BF6A6664F2203_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Destroyed_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Destroyed_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Exploded_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Exploded_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Stopped_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Stopped_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Bounced_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Bounced_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Touched_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Touched_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Created_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Created_9688DEB14FA370B967517191C2B710DA_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.K2_ActivateAbility
struct UGA_Athena_Grenade_C_K2_ActivateAbility_Params
{
public:
};

// 0x458 (0x458 - 0x0)
// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ExecuteUbergraph_GA_Athena_Grenade
struct UGA_Athena_Grenade_C_ExecuteUbergraph_GA_Athena_Grenade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2778[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x28(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x58(0x20)()
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData6;                // 0x78(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData5;                // 0xB0(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData4;                // 0xE8(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData3;                // 0x120(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x148(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData2;                // 0x158(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x180(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0x190(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable3;                             // 0x1C8(0x28)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x1F0(0x40)(ContainsInstancedReference)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2779[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x248(0x20)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x268(0xA8)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x310(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0x320(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0x340(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAimLocationNearestPawn_ReturnValue;    // 0x348(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x354(0xC)(IsPlainOldData, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_ThrowAthenaGrenade_NewParam;              // 0x36C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ThrowAthenaGrenade_Rotation;              // 0x378(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_277C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x390(0x80)()
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue2;            // 0x41A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData3;                    // 0x420(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag3;                // 0x440(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x448(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

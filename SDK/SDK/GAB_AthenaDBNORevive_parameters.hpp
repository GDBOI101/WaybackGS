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

// 0x28 (0x28 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
struct UGAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
struct UGAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
struct UGAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
struct UGAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
struct UGAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
struct UGAB_AthenaDBNORevive_C_K2_OnEndAbility_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
struct UGAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x478 (0x478 - 0x0)
// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
struct UGAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData4;                    // 0x8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag4;                // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x48(0x20)()
	class UFortAbilityTask_WaitTargetSelection*  CallFunc_WaitTargetSelection_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData3;                    // 0x88(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag3;                // 0xA8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0xB0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0xD0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0xE8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x108(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable3;                             // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable4;                             // 0x128(0x20)()
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x148(0x80)()
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x1C8(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAbilityTargetSelection           CallFunc_Array_Get_Item;                           // 0x218(0x60)()
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x278(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x288(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_BreakVector_X;                            // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                 K2Node_MakeStruct_Vector_NetQuantize10;            // 0x2A4(0xC)(NoDestructor)
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue;            // 0x2B0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x2BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X2;                           // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y2;                           // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z2;                           // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantizeNormal             K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x2D4(0xC)(NoDestructor)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x2E0(0xA8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_MakeStruct_GameplayCueParameters;           // 0x390(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData5;                    // 0x450(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag5;                // 0x470(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

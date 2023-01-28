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

// 0x154 (0x154 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
struct UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params
{
public:
	struct FGameplayEventData                    EventHitData;                                      // 0x0(0xA8)(Parm)
	struct FVector                               CallFunc_GetImpulseData_ImpulseDirection;          // 0xA8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackMagnitude;        // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackZAngle;           // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_EffectContextGetHitResult_ReturnValue;    // 0xC0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x148(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnCancelled_4B0F8658452931EE3B297A9E70C9C496_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnInterrupted_4B0F8658452931EE3B297A9E70C9C496_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnBlendOut_4B0F8658452931EE3B297A9E70C9C496_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
struct UGAB_PlayerDBNO_C_OnCompleted_4B0F8658452931EE3B297A9E70C9C496_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x118 (0x118 - 0x0)
// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
struct UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x38(0xA8)(ConstParm)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x108(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

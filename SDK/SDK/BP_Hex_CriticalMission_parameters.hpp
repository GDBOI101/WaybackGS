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

// 0x1 (0x1 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript
struct ABP_Hex_CriticalMission_C_UserConstructionScript_Params
{
public:
	bool                                         NewLocalVar_0;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__FinishedFunc
struct ABP_Hex_CriticalMission_C_Rotate__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__UpdateFunc
struct ABP_Hex_CriticalMission_C_Rotate__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.DeactivateCriticalMission
struct ABP_Hex_CriticalMission_C_DeactivateCriticalMission_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ActivateCriticalMission
struct ABP_Hex_CriticalMission_C_ActivateCriticalMission_Params
{
public:
};

// 0x115 (0x115 - 0x0)
// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission
struct ABP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x4(0xC)(IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x14(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x30(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Hex_PARENT_C*                      CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xE0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xEC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xF8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x104(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

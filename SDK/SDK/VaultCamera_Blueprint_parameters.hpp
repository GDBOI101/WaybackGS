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

// 0x0 (0x0 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
struct AVaultCamera_Blueprint_C_UserConstructionScript_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7
struct AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6
struct AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
struct AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
struct AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
struct AVaultCamera_Blueprint_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
struct AVaultCamera_Blueprint_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
struct AVaultCamera_Blueprint_C_OnDeactivated_Params
{
public:
};

// 0x1B8 (0x1B8 - 0x0)
// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
struct AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4040[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x20(0x18)(HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key3;                         // 0x48(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4041[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaX;                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaY;                // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4042[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue2;         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key4;                         // 0x88(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key2;                         // 0xA0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable2;                             // 0xB8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4043[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xD4(0xC)(IsPlainOldData, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue3;         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x108(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4044[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x120(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4045[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

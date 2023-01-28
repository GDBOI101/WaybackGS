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
// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B96[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UAmbientControllerComponent_Athena_C*  CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

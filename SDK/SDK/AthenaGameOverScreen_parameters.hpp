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

// 0x50 (0x50 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
struct UAthenaGameOverScreen_C_On_Player_Died_Params
{
public:
	struct FFortPlayerDeathReport                DeathReport;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won
struct UAthenaGameOverScreen_C_On_Player_Won_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived
struct UAthenaGameOverScreen_C_HandleRevived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct
struct UAthenaGameOverScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen
struct UAthenaGameOverScreen_C_Clear_GameOver_Screen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won
struct UAthenaGameOverScreen_C_On_Team_Won_Params
{
public:
};

// 0xD0 (0xD0 - 0x0)
// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
struct UAthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3973[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FFortPlayerDeathReport                K2Node_CustomEvent_DeathReport;                    // 0x40(0x50)(ConstParm)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x98(0x10)(ZeroConstructor, NoDestructor)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue3;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDeathWidget_C*                  CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaWinWidget_C*                    CallFunc_Create_ReturnValue2;                      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

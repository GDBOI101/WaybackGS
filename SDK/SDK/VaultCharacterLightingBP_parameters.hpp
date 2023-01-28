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
// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
struct AVaultCharacterLightingBP_C_UserConstructionScript_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
struct AVaultCharacterLightingBP_C_LightControl_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
struct AVaultCharacterLightingBP_C_ReceiveBeginPlay_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
struct AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewParam;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4056[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

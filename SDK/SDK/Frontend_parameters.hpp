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
// Function Frontend.FrontEnd_C.OnMatchStarted
struct AFrontEnd_C_OnMatchStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend.FrontEnd_C.ReceiveBeginPlay
struct AFrontEnd_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend.FrontEnd_C.EnableTutorial
struct AFrontEnd_C_EnableTutorial_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
struct AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

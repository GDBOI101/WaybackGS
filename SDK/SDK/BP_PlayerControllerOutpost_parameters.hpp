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
// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
struct ABP_PlayerControllerOutpost_C_UserConstructionScript_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
struct ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params
{
public:
	bool                                         GetHelp;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
struct ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_GetHelp;                        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

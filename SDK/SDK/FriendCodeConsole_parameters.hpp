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
// Function FriendCodeConsole.FriendCodeConsole_C.Construct
struct UFriendCodeConsole_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
struct UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params
{
public:
	bool                                         bMessageSent;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FriendCodeConsole.FriendCodeConsole_C.OnClicked
struct UFriendCodeConsole_C_OnClicked_Params
{
public:
};

// 0x59 (0x59 - 0x0)
// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
struct UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFriendCodeDescription_ReturnValue;     // 0x28(0x18)()
	class FText                                  CallFunc_GetFriendCodeDisplayName_ReturnValue;     // 0x40(0x18)()
	bool                                         K2Node_CustomEvent_bMessageSent;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

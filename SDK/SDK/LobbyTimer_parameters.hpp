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

// 0x2A (0x2A - 0x0)
// Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated
struct ULobbyTimer_C_Handle_Lobby_Timer_Updated_Params
{
public:
	int32                                        Seconds_Remaining;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_MakeTimespan_ReturnValue;                 // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_AsTimespan_Timespan_ReturnValue;          // 0x10(0x18)()
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer
struct ULobbyTimer_C_Handle_Show_Lobby_Timer_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Bind Delegates
struct ULobbyTimer_C_Bind_Delegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue3;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Show Lobby Timer
struct ULobbyTimer_C_Show_Lobby_Timer_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Handle Lobby Disconnected
struct ULobbyTimer_C_Handle_Lobby_Disconnected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Handle Lobby Started
struct ULobbyTimer_C_Handle_Lobby_Started_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LobbyTimer.LobbyTimer_C.Construct
struct ULobbyTimer_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer
struct ULobbyTimer_C_ExecuteUbergraph_LobbyTimer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

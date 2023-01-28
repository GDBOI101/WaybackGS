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

// 0x4 (0x4 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize
struct ULobbyPlayerPadGadgets_C_Initialize_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked
struct ULobbyPlayerPadGadgets_C_OnInputClicked_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x239 (0x239 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown
struct ULobbyPlayerPadGadgets_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)()
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1BB (0x1BB - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh
struct ULobbyPlayerPadGadgets_C_Refresh_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
	class UFortItem*                             CallFunc_Array_Get_Item;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_Array_Get_Item2;                          // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItem*                        K2Node_DynamicCast_AsFort_World_Item;              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItem*                        K2Node_DynamicCast_AsFort_World_Item2;             // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue2;          // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter
struct ULobbyPlayerPadGadgets_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave
struct ULobbyPlayerPadGadgets_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x128 (0x128 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets
struct ULobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x34)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x38(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB0(0x78)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature
struct ULobbyPlayerPadGadgets_C_OnGadgetsMouseLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature
struct ULobbyPlayerPadGadgets_C_OnGadgetsMouseEntered__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

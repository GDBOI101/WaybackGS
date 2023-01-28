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

// 0x1AD (0x1AD - 0x0)
// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
struct UPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
public:
	struct FFortTeamMemberInfo                   Player_Info;                                       // 0x0(0x190)(Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerPartyLeader_ReturnValue;     // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerInfo.PlayerInfo_C.Construct
struct UPlayerInfo_C_Construct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
struct UPlayerInfo_C_HandlePlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function PlayerInfo.PlayerInfo_C.Destruct
struct UPlayerInfo_C_Destruct_Params
{
public:
};

// 0x340 (0x340 - 0x0)
// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
struct UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x10(0x190)()
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x1A0(0x190)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x330(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

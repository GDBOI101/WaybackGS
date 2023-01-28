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

// 0x1AF (0x1AF - 0x0)
// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
struct UAthenaPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
public:
	struct FFortTeamMemberInfo                   Player_Info;                                       // 0x0(0x190)(Parm, OutParm, ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_244B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_244C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerPartyLeader_ReturnValue;     // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct
struct UAthenaPlayerInfo_C_Construct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
struct UAthenaPlayerInfo_C_HandlePlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct
struct UAthenaPlayerInfo_C_Destruct_Params
{
public:
};

// 0x340 (0x340 - 0x0)
// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
struct UAthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_244D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x18(0x190)(ConstParm)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x1B0(0x190)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
struct UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
struct UResults_TeleportPadPlayerTop_C_Initialize_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueNetID;                                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScoreReportIndex;                                  // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPlayerName_ReturnValue;                // 0x30(0x18)()
	int32                                        CallFunc_GetTotalHomebaseRating_Rating;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
struct UResults_TeleportPadPlayerTop_C_IntroName_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
struct UResults_TeleportPadPlayerTop_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
struct UResults_TeleportPadPlayerTop_C_Intro_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
struct UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue2;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue2;               // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

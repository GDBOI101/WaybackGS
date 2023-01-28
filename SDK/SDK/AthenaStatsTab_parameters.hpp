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

// 0x20 (0x20 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime
struct UAthenaStatsTab_C_UpdateLastUpdatedTime_Params
{
public:
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLastUpdateTime_ReturnValue;            // 0x8(0x18)()
};

// 0xF8 (0xF8 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats
struct UAthenaStatsTab_C_UpdateStats_Params
{
public:
	int32                                        CallFunc_GetStatValue_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_MakeTimespan_ReturnValue;                 // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStatValue_ReturnValue2;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatStatValueAsElapsedTime_ReturnValue; // 0x18(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)()
	int32                                        CallFunc_GetStatValue_ReturnValue3;                // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x50(0x18)()
	class FString                                CallFunc_GetThirdTierPlaceTag_ReturnValue;         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStatValue_ReturnValue4;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSecondTierPlaceTag_ReturnValue;        // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue3;              // 0x90(0x18)()
	int32                                        CallFunc_GetStatValue_ReturnValue5;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue4;              // 0xB0(0x18)()
	class FString                                CallFunc_GetWinsTag_ReturnValue;                   // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStatValue_ReturnValue6;                // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue5;              // 0xE0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.Construct
struct UAthenaStatsTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
struct UAthenaStatsTab_C_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
struct UAthenaStatsTab_C_OnQueryFinished_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
struct UAthenaStatsTab_C_OnQueryStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
struct UAthenaStatsTab_C_OnDeactivated_Params
{
public:
};

// 0xC8 (0xC8 - 0x0)
// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
struct UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable2;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortLeaderboardContext*               CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanShowStats_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasSuccessful;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWinsTag_ReturnValue;                   // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSecondTierPlaceTag_ReturnValue;        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetThirdTierPlaceTag_ReturnValue;         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x60(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value2;                          // 0x80(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue2;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value3;                          // 0xA0(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue3;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F11[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

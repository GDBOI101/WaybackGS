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

// 0x50 (0x50 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
struct ULeaderboardRowWidget_C_Refresh_Params
{
public:
	class UFortLeaderboardRowProxyInstance*      RowObject;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x38(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
struct ULeaderboardRowWidget_C_SetDataDirect_Params
{
public:
	class UFortLeaderboardRowProxyInstance*      NewData;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
struct ULeaderboardRowWidget_C_OnLeaderboardEntryDataSet_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
struct ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2486[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLeaderboardRowProxyInstance*      K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

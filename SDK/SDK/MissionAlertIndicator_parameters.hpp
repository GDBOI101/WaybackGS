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
// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
struct UMissionAlertIndicator_C_Update_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
struct UMissionAlertIndicator_C_ToggleTimer_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.Construct
struct UMissionAlertIndicator_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator
struct UMissionAlertIndicator_C_ExecuteUbergraph_MissionAlertIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

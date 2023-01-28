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

// 0x90 (0x90 - 0x0)
// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params
{
public:
	struct FSlateBrush                           BulletIcon;                                        // 0x0(0x90)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveContentWidgetClass_Params
{
public:
	class UClass*                                Objective_WIdget_Class;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

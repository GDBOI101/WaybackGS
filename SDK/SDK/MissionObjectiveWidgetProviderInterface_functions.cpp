#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 BulletIcon                                                       (Parm, OutParm)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static auto Func = Class->GetFunction("MissionObjectiveWidgetProviderInterface_C", "GetObjectiveBulletIcon");

	Params::UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (BulletIcon != nullptr)
		*BulletIcon = Parms.BulletIcon;

}


// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Objective_WIdget_Class                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveContentWidgetClass(class UClass** Objective_WIdget_Class)
{
	static auto Func = Class->GetFunction("MissionObjectiveWidgetProviderInterface_C", "GetObjectiveContentWidgetClass");

	Params::UMissionObjectiveWidgetProviderInterface_C_GetObjectiveContentWidgetClass_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Objective_WIdget_Class != nullptr)
		*Objective_WIdget_Class = Parms.Objective_WIdget_Class;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

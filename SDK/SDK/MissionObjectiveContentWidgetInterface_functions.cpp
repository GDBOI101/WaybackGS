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


// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveContentWidgetInterface_C::GetHeightEstimate(float* Height)
{
	static auto Func = Class->GetFunction("MissionObjectiveContentWidgetInterface_C", "GetHeightEstimate");

	Params::UMissionObjectiveContentWidgetInterface_C_GetHeightEstimate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInConfigureAsHUD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionObjectiveContentWidgetInterface_C::Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD)
{
	static auto Func = Class->GetFunction("MissionObjectiveContentWidgetInterface_C", "Setup");

	Params::UMissionObjectiveContentWidgetInterface_C_Setup_Params Parms;
	Parms.Objective = Objective;
	Parms.bInConfigureAsHUD = bInConfigureAsHUD;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

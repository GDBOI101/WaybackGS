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


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeightEstimate                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHeightEstimate_Height                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgressBarsManager_C::GetHeightEstimate(float* Height, float HeightEstimate, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetHeightEstimate_Height, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "GetHeightEstimate");

	Params::UMissionObjectiveProgressBarsManager_C_GetHeightEstimate_Params Parms;
	Parms.HeightEstimate = HeightEstimate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Progress = K2Node_DynamicCast_AsMission_Objective_Progress;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetHeightEstimate_Height = CallFunc_GetHeightEstimate_Height;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgressBarsManager_C::HandleUpdate(class AFortMissionState* Objective)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "HandleUpdate");

	Params::UMissionObjectiveProgressBarsManager_C_HandleUpdate_Params Parms;
	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               New_Visibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "HandleObjectiveVisibilityChanged");

	Params::UMissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.New_Visibility = New_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortObjectiveStatus    New_Status                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus New_Status)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "HandleObjectiveStatusChanged");

	Params::UMissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.New_Status = New_Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionObjectiveProgress_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgressBarsManager_C::CreateProgressBarWidget(int32 Index, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionObjectiveProgress_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "CreateProgressBarWidget");

	Params::UMissionObjectiveProgressBarsManager_C_CreateProgressBarWidget_Params Parms;
	Parms.Index = Index;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          TrackedObjective                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInConfigureAsHUD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UMissionObjectiveProgressBarsManager_C::Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "Setup");

	Params::UMissionObjectiveProgressBarsManager_C_Setup_Params Parms;
	Parms.TrackedObjective = TrackedObjective;
	Parms.bInConfigureAsHUD = bInConfigureAsHUD;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemoveWidgetIndex                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumDesiredProgressBars                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ProgressBarBoxChildrenCount                                      (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BlueprintGetNumProgressBars_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionObjectiveProgressBarsManager_C::UpdateObjectiveProgressBars(int32 RemoveWidgetIndex, int32 NumDesiredProgressBars, int32 ProgressBarBoxChildrenCount, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue4, int32 Temp_int_Variable2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_BlueprintGetNumProgressBars_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue3, int32 CallFunc_GetChildrenCount_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionObjectiveProgressBarsManager_C", "UpdateObjectiveProgressBars");

	Params::UMissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars_Params Parms;
	Parms.RemoveWidgetIndex = RemoveWidgetIndex;
	Parms.NumDesiredProgressBars = NumDesiredProgressBars;
	Parms.ProgressBarBoxChildrenCount = ProgressBarBoxChildrenCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue4 = CallFunc_Subtract_IntInt_ReturnValue4;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Progress = K2Node_DynamicCast_AsMission_Objective_Progress;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_BlueprintGetNumProgressBars_ReturnValue = CallFunc_BlueprintGetNumProgressBars_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue5 = CallFunc_Subtract_IntInt_ReturnValue5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

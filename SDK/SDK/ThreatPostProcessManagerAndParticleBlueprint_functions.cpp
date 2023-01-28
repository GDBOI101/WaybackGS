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


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     BoxMin                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BoxMax                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumePlayerCoveragePercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SafeZoneRadius                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DistanceToSafeZone                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerCameraLoc                                                  (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue2                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage, float SafeZoneRadius, float DistanceToSafeZone, const struct FVector& PlayerCameraLoc, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_FClamp_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_FClamp_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue7)
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "CalculatePlayerPositionNearBox");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox_Params Parms;
	Parms.BoxMin = BoxMin;
	Parms.BoxMax = BoxMax;
	Parms.SafeZoneRadius = SafeZoneRadius;
	Parms.DistanceToSafeZone = DistanceToSafeZone;
	Parms.PlayerCameraLoc = PlayerCameraLoc;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_Subtract_VectorVector_ReturnValue2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue3 = CallFunc_Subtract_VectorVector_ReturnValue3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue2 = CallFunc_Divide_VectorFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue3 = CallFunc_FClamp_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_FClamp_ReturnValue4 = CallFunc_FClamp_ReturnValue4;
	Parms.CallFunc_FClamp_ReturnValue5 = CallFunc_FClamp_ReturnValue5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue5 = CallFunc_Subtract_FloatFloat_ReturnValue5;
	Parms.CallFunc_FClamp_ReturnValue6 = CallFunc_FClamp_ReturnValue6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue6 = CallFunc_Subtract_FloatFloat_ReturnValue6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.CallFunc_FClamp_ReturnValue7 = CallFunc_FClamp_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

	if (VolumePlayerCoveragePercentage != nullptr)
		*VolumePlayerCoveragePercentage = Parms.VolumePlayerCoveragePercentage;

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "UserConstructionScript");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__FinishedFunc()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__FinishedFunc");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__UpdateFunc()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__UpdateFunc");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ReceiveTick");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo> ThreatLocationInfo                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnThreatCloudsChanged");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged_Params Parms;
	Parms.ThreatLocationInfo = ThreatLocationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnWorldReady");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::VFX_RainTracePeriodic()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "VFX_RainTracePeriodic");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_VFX_RainTracePeriodic_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::StartTraceTimer()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "StartTraceTimer");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_StartTraceTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::ForceUpdateLensEffect()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ForceUpdateLensEffect");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_ForceUpdateLensEffect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue3                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FThreatLocationInfo> K2Node_Event_ThreatLocationInfo                                  (ConstParm, ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FThreatLocationInfo         CallFunc_Array_Get_Item                                          ()
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue4                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_Array_Get_Item2                                         (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitterCameraLensEffectBase*CallFunc_AddCameraLensEffect_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AThreat_RainAttachedToPlayer_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue4                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakColor_R3, float CallFunc_BreakColor_G3, float CallFunc_BreakColor_B3, float CallFunc_BreakColor_A3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_BreakColor_R4, float CallFunc_BreakColor_G4, float CallFunc_BreakColor_B4, float CallFunc_BreakColor_A4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, float CallFunc_BreakColor_R5, float CallFunc_BreakColor_G5, float CallFunc_BreakColor_B5, float CallFunc_BreakColor_A5, TArray<struct FThreatLocationInfo>& K2Node_Event_ThreatLocationInfo, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FThreatLocationInfo& CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FBox& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, float CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, class AEmitterCameraLensEffectBase* CallFunc_AddCameraLensEffect_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue3, class APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AThreat_RainAttachedToPlayer_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue3, bool CallFunc_IsValid_ReturnValue6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue8, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_SelectInt_ReturnValue2 = CallFunc_SelectInt_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BreakColor_R2 = CallFunc_BreakColor_R2;
	Parms.CallFunc_BreakColor_G2 = CallFunc_BreakColor_G2;
	Parms.CallFunc_BreakColor_B2 = CallFunc_BreakColor_B2;
	Parms.CallFunc_BreakColor_A2 = CallFunc_BreakColor_A2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakColor_R3 = CallFunc_BreakColor_R3;
	Parms.CallFunc_BreakColor_G3 = CallFunc_BreakColor_G3;
	Parms.CallFunc_BreakColor_B3 = CallFunc_BreakColor_B3;
	Parms.CallFunc_BreakColor_A3 = CallFunc_BreakColor_A3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_BreakColor_R4 = CallFunc_BreakColor_R4;
	Parms.CallFunc_BreakColor_G4 = CallFunc_BreakColor_G4;
	Parms.CallFunc_BreakColor_B4 = CallFunc_BreakColor_B4;
	Parms.CallFunc_BreakColor_A4 = CallFunc_BreakColor_A4;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue3 = CallFunc_Multiply_VectorFloat_ReturnValue3;
	Parms.CallFunc_BreakColor_R5 = CallFunc_BreakColor_R5;
	Parms.CallFunc_BreakColor_G5 = CallFunc_BreakColor_G5;
	Parms.CallFunc_BreakColor_B5 = CallFunc_BreakColor_B5;
	Parms.CallFunc_BreakColor_A5 = CallFunc_BreakColor_A5;
	Parms.K2Node_Event_ThreatLocationInfo = K2Node_Event_ThreatLocationInfo;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue4 = CallFunc_Multiply_VectorFloat_ReturnValue4;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage = CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Multiply_FloatFloat_ReturnValue6;
	Parms.CallFunc_AddCameraLensEffect_ReturnValue = CallFunc_AddCameraLensEffect_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue2 = CallFunc_GetPlayerCameraManager_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue2 = CallFunc_GetPlayerPawn_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue3 = CallFunc_GetPlayerPawn_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue4 = CallFunc_Add_VectorVector_ReturnValue4;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Multiply_FloatFloat_ReturnValue7;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Multiply_FloatFloat_ReturnValue8;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0__DelegateSignature()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "NewEventDispatcher0__DelegateSignature");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher0__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher__DelegateSignature()
{
	static auto Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "NewEventDispatcher__DelegateSignature");

	Params::AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

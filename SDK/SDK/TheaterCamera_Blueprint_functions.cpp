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


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputSuspended_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATheaterCamera_Blueprint_C::IsInputSuspended(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsInputSuspended_ReturnValue)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "IsInputSuspended");

	Params::ATheaterCamera_Blueprint_C_IsInputSuspended_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_IsInputSuspended_ReturnValue = CallFunc_IsInputSuspended_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Self2                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D ATheaterCamera_Blueprint_C::NewFunction_0(class AActor* Self2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "NewFunction_0");

	Params::ATheaterCamera_Blueprint_C_NewFunction_0_Params Parms;
	Parms.Self2 = Self2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaX                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaY                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LimitToTheater_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATheaterCamera_Blueprint_C::PanCamera(float DeltaX, float DeltaY, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_LimitToTheater_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "PanCamera");

	Params::ATheaterCamera_Blueprint_C_PanCamera_Params Parms;
	Parms.DeltaX = DeltaX;
	Parms.DeltaY = DeltaY;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_LimitToTheater_ReturnValue = CallFunc_LimitToTheater_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheaterId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::HandleTheaterSelected(const class FString& TheaterId)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "HandleTheaterSelected");

	Params::ATheaterCamera_Blueprint_C_HandleTheaterSelected_Params Parms;
	Parms.TheaterId = TheaterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Forward                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     ActorLocationPreZoom                                             (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZoomDirection                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATheaterCamera_Blueprint_C::ZoomCameraStep(bool Forward, const struct FVector& ActorLocationPreZoom, float ZoomDirection, float Temp_float_Variable, float Temp_float_Variable2, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "ZoomCameraStep");

	Params::ATheaterCamera_Blueprint_C_ZoomCameraStep_Params Parms;
	Parms.Forward = Forward;
	Parms.ActorLocationPreZoom = ActorLocationPreZoom;
	Parms.ZoomDirection = ZoomDirection;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue3 = CallFunc_Lerp_ReturnValue3;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "UserConstructionScript");

	Params::ATheaterCamera_Blueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::FocusTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "FocusTimeline__FinishedFunc");

	Params::ATheaterCamera_Blueprint_C_FocusTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::FocusTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "FocusTimeline__UpdateFunc");

	Params::ATheaterCamera_Blueprint_C_FocusTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::DebugZoomTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "DebugZoomTL__FinishedFunc");

	Params::ATheaterCamera_Blueprint_C_DebugZoomTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::DebugZoomTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "DebugZoomTL__UpdateFunc");

	Params::ATheaterCamera_Blueprint_C_DebugZoomTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::InitializeFX_TL__FinishedFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InitializeFX-TL__FinishedFunc");

	Params::ATheaterCamera_Blueprint_C_InitializeFX_TL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::InitializeFX_TL__UpdateFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InitializeFX-TL__UpdateFunc");

	Params::ATheaterCamera_Blueprint_C_InitializeFX_TL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::DEBUGFOVA__FinishedFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "DEBUGFOVA__FinishedFunc");

	Params::ATheaterCamera_Blueprint_C_DEBUGFOVA__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::DEBUGFOVA__UpdateFunc()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "DEBUGFOVA__UpdateFunc");

	Params::ATheaterCamera_Blueprint_C_DEBUGFOVA__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7");

	Params::ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_7_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6");

	Params::ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_5");

	Params::ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_5_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");

	Params::ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::OnActivated()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "OnActivated");

	Params::ATheaterCamera_Blueprint_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "OnDeactivated");

	Params::ATheaterCamera_Blueprint_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortTheaterMapTile*         TargetTile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::SetTileFocus(class AFortTheaterMapTile* TargetTile)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "SetTileFocus");

	Params::ATheaterCamera_Blueprint_C_SetTileFocus_Params Parms;
	Parms.TargetTile = TargetTile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "ReceiveTick");

	Params::ATheaterCamera_Blueprint_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
// (Event, Public, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::OnDragBegin()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "OnDragBegin");

	Params::ATheaterCamera_Blueprint_C_OnDragBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::OnDragEnd()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "OnDragEnd");

	Params::ATheaterCamera_Blueprint_C_OnDragEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::StopFocusTimeline()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "StopFocusTimeline");

	Params::ATheaterCamera_Blueprint_C_StopFocusTimeline_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HexWorldLoc                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::ForceTileFocus(const struct FVector& HexWorldLoc)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "ForceTileFocus");

	Params::ATheaterCamera_Blueprint_C_ForceTileFocus_Params Parms;
	Parms.HexWorldLoc = HexWorldLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::PingFromHex()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "PingFromHex");

	Params::ATheaterCamera_Blueprint_C_PingFromHex_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::RefreshCloudMask()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "RefreshCloudMask");

	Params::ATheaterCamera_Blueprint_C_RefreshCloudMask_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::MaskFinished()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "MaskFinished");

	Params::ATheaterCamera_Blueprint_C_MaskFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterCamera_Blueprint_C::PinnedPing()
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "PinnedPing");

	Params::ATheaterCamera_Blueprint_C_PinnedPing_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_HexWorldLoc                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Hex_PARENT_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue2                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue3                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue3                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue6                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue4                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue4                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue4                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue4                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue5                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue5                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue5                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue5                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue7                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTheaterMapTile*         K2Node_Event_TargetTile                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorArrayAverageLocation_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size2                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context2                  (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item10                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position2 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size2     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AHexmapLevelSettings_Temperate01_C*>CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// class AHexmapLevelSettings_Temperate01_C*CallFunc_Array_Get_Item11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AHexmapLevelSettings_Temperate01_C*>CallFunc_GetAllActorsOfClass_OutActors4                          (ZeroConstructor, ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHexmapLevelSettings_Temperate01_C*CallFunc_Array_Get_Item12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickX                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickY                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size3                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context3                  (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item14                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position3 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size3     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size4                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context4                  (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item15                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position4 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size4     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size5                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context5                  (NoDestructor)
// struct FVector2D                   CallFunc_Array_Get_Item16                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position5 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size5     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputSuspended_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputSuspended_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputSuspended_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheaterCamera_Blueprint_C::ExecuteUbergraph_TheaterCamera_Blueprint(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, int32 Temp_int_Array_Index_Variable, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Array_Index_Variable2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& K2Node_CustomEvent_HexWorldLoc, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_Add_FloatFloat_ReturnValue, TArray<class ABP_Hex_PARENT_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_MakeVector_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, const struct FVector2D& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, float CallFunc_Multiply_FloatFloat_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size, int32 Temp_int_Array_Index_Variable3, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue7, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue8, int32 CallFunc_Array_Length_ReturnValue9, float CallFunc_Multiply_FloatFloat_ReturnValue6, int32 Temp_int_Array_Index_Variable4, int32 Temp_int_Array_Index_Variable5, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item2, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue3, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue4, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue5, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue5, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue5, int32 Temp_int_Array_Index_Variable6, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue5, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, int32 Temp_int_Loop_Counter_Variable4, float CallFunc_Multiply_FloatFloat_ReturnValue7, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue8, const struct FVector& CallFunc_VLerp_ReturnValue, int32 Temp_int_Array_Index_Variable7, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult2, bool CallFunc_K2_SetActorLocation_ReturnValue2, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item5, int32 CallFunc_Array_Add_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, int32 Temp_int_Loop_Counter_Variable5, float CallFunc_Multiply_FloatFloat_ReturnValue9, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue5, int32 Temp_int_Loop_Counter_Variable6, float CallFunc_Multiply_FloatFloat_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue6, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, int32 Temp_int_Loop_Counter_Variable7, class ATVPostProcessBP_C* CallFunc_Array_Get_Item6, bool CallFunc_Less_IntInt_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue7, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item7, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue7, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_Add_FloatFloat_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue6, float K2Node_Event_DeltaSeconds, class AFortTheaterMapTile* K2Node_Event_TargetTile, const struct FVector& CallFunc_GetActorArrayAverageLocation_ReturnValue, int32 Temp_int_Array_Index_Variable8, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item8, int32 Temp_int_Loop_Counter_Variable8, int32 Temp_int_Loop_Counter_Variable9, int32 CallFunc_Add_IntInt_ReturnValue8, bool CallFunc_Less_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue9, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, float CallFunc_BreakVector_X6, float CallFunc_BreakVector_Y6, float CallFunc_BreakVector_Z6, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas2, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size2, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context2, int32 Temp_int_Loop_Counter_Variable10, int32 CallFunc_Add_IntInt_ReturnValue10, int32 Temp_int_Array_Index_Variable9, int32 Temp_int_Array_Index_Variable10, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item9, const struct FVector2D& CallFunc_Array_Get_Item10, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position2, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size2, int32 CallFunc_Array_Length_ReturnValue11, bool CallFunc_Less_IntInt_ReturnValue8, class APlayerController* CallFunc_GetPlayerController_ReturnValue4, int32 Temp_int_Loop_Counter_Variable11, class APlayerController* CallFunc_GetPlayerController_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue11, TArray<class AHexmapLevelSettings_Temperate01_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AHexmapLevelSettings_Temperate01_C* CallFunc_Array_Get_Item11, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class AHexmapLevelSettings_Temperate01_C*>& CallFunc_GetAllActorsOfClass_OutActors4, class APlayerController* CallFunc_GetPlayerController_ReturnValue6, class AHexmapLevelSettings_Temperate01_C* CallFunc_Array_Get_Item12, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, float CallFunc_Multiply_FloatFloat_ReturnValue11, float CallFunc_Multiply_FloatFloat_ReturnValue12, int32 Temp_int_Loop_Counter_Variable12, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue4, int32 Temp_int_Array_Index_Variable11, int32 CallFunc_Array_Add_ReturnValue5, int32 Temp_int_Array_Index_Variable12, int32 CallFunc_Array_Add_ReturnValue6, int32 Temp_int_Loop_Counter_Variable13, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas3, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size3, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context3, int32 CallFunc_Add_IntInt_ReturnValue13, int32 Temp_int_Array_Index_Variable13, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item13, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue10, int32 Temp_int_Variable, const struct FVector2D& CallFunc_Array_Get_Item14, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position3, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue14, int32 CallFunc_Array_Length_ReturnValue13, bool CallFunc_Less_IntInt_ReturnValue11, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas4, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size4, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context4, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FVector2D& CallFunc_Array_Get_Item15, int32 CallFunc_Array_Length_ReturnValue14, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position4, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size4, bool CallFunc_Less_IntInt_ReturnValue12, const struct FKey& K2Node_InputKeyEvent_Key3, const struct FKey& K2Node_InputKeyEvent_Key4, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas5, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size5, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context5, const struct FVector2D& CallFunc_Array_Get_Item16, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position5, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size5, int32 CallFunc_Array_Length_ReturnValue15, bool CallFunc_Less_IntInt_ReturnValue13, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInputSuspended_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInputSuspended_ReturnValue2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, uint8 Temp_byte_Variable, bool CallFunc_IsInputSuspended_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue7)
{
	static auto Func = Class->GetFunction("TheaterCamera_Blueprint_C", "ExecuteUbergraph_TheaterCamera_Blueprint");

	Params::ATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.K2Node_CustomEvent_HexWorldLoc = K2Node_CustomEvent_HexWorldLoc;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue6 = CallFunc_Array_Length_ReturnValue6;
	Parms.CallFunc_Array_Length_ReturnValue7 = CallFunc_Array_Length_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue8 = CallFunc_Array_Length_ReturnValue8;
	Parms.CallFunc_Array_Length_ReturnValue9 = CallFunc_Array_Length_ReturnValue9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Multiply_FloatFloat_ReturnValue6;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.Temp_int_Array_Index_Variable5 = Temp_int_Array_Index_Variable5;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue2 = CallFunc_EqualEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_Subtract_VectorVector_ReturnValue2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue3 = CallFunc_EqualEqual_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_VectorFloat_ReturnValue2 = CallFunc_Add_VectorFloat_ReturnValue2;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue2 = CallFunc_Divide_VectorFloat_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue2 = CallFunc_Conv_VectorToVector2D_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue3 = CallFunc_Subtract_VectorVector_ReturnValue3;
	Parms.CallFunc_Add_VectorFloat_ReturnValue3 = CallFunc_Add_VectorFloat_ReturnValue3;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue3 = CallFunc_Divide_VectorFloat_ReturnValue3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue6 = CallFunc_K2_GetActorLocation_ReturnValue6;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue3 = CallFunc_Conv_VectorToVector2D_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue4 = CallFunc_Subtract_VectorVector_ReturnValue4;
	Parms.CallFunc_Add_VectorFloat_ReturnValue4 = CallFunc_Add_VectorFloat_ReturnValue4;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue4 = CallFunc_Divide_VectorFloat_ReturnValue4;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue4 = CallFunc_Conv_VectorToVector2D_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue5 = CallFunc_Subtract_VectorVector_ReturnValue5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Add_VectorFloat_ReturnValue5 = CallFunc_Add_VectorFloat_ReturnValue5;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue5 = CallFunc_Divide_VectorFloat_ReturnValue5;
	Parms.Temp_int_Array_Index_Variable6 = Temp_int_Array_Index_Variable6;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue5 = CallFunc_Conv_VectorToVector2D_ReturnValue5;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetInputMouseDelta_DeltaX = CallFunc_GetInputMouseDelta_DeltaX;
	Parms.CallFunc_GetInputMouseDelta_DeltaY = CallFunc_GetInputMouseDelta_DeltaY;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Multiply_FloatFloat_ReturnValue7;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Multiply_FloatFloat_ReturnValue8;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.Temp_int_Array_Index_Variable7 = Temp_int_Array_Index_Variable7;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult2 = CallFunc_K2_SetActorLocation_SweepHitResult2;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue2 = CallFunc_K2_SetActorLocation_ReturnValue2;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable5 = Temp_int_Loop_Counter_Variable5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue9 = CallFunc_Multiply_FloatFloat_ReturnValue9;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_int_Loop_Counter_Variable6 = Temp_int_Loop_Counter_Variable6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue10 = CallFunc_Multiply_FloatFloat_ReturnValue10;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.Temp_int_Loop_Counter_Variable7 = Temp_int_Loop_Counter_Variable7;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Less_IntInt_ReturnValue5 = CallFunc_Less_IntInt_ReturnValue5;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue7 = CallFunc_K2_GetActorLocation_ReturnValue7;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue10 = CallFunc_Array_Length_ReturnValue10;
	Parms.CallFunc_Less_IntInt_ReturnValue6 = CallFunc_Less_IntInt_ReturnValue6;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_TargetTile = K2Node_Event_TargetTile;
	Parms.CallFunc_GetActorArrayAverageLocation_ReturnValue = CallFunc_GetActorArrayAverageLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable8 = Temp_int_Array_Index_Variable8;
	Parms.CallFunc_Array_Get_Item8 = CallFunc_Array_Get_Item8;
	Parms.Temp_int_Loop_Counter_Variable8 = Temp_int_Loop_Counter_Variable8;
	Parms.Temp_int_Loop_Counter_Variable9 = Temp_int_Loop_Counter_Variable9;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.CallFunc_Less_IntInt_ReturnValue7 = CallFunc_Less_IntInt_ReturnValue7;
	Parms.CallFunc_Add_IntInt_ReturnValue9 = CallFunc_Add_IntInt_ReturnValue9;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_BreakVector_X6 = CallFunc_BreakVector_X6;
	Parms.CallFunc_BreakVector_Y6 = CallFunc_BreakVector_Y6;
	Parms.CallFunc_BreakVector_Z6 = CallFunc_BreakVector_Z6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue2 = CallFunc_Abs_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas2 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size2 = CallFunc_BeginDrawCanvasToRenderTarget_Size2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context2 = CallFunc_BeginDrawCanvasToRenderTarget_Context2;
	Parms.Temp_int_Loop_Counter_Variable10 = Temp_int_Loop_Counter_Variable10;
	Parms.CallFunc_Add_IntInt_ReturnValue10 = CallFunc_Add_IntInt_ReturnValue10;
	Parms.Temp_int_Array_Index_Variable9 = Temp_int_Array_Index_Variable9;
	Parms.Temp_int_Array_Index_Variable10 = Temp_int_Array_Index_Variable10;
	Parms.CallFunc_Array_Get_Item9 = CallFunc_Array_Get_Item9;
	Parms.CallFunc_Array_Get_Item10 = CallFunc_Array_Get_Item10;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position2 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position2;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size2 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size2;
	Parms.CallFunc_Array_Length_ReturnValue11 = CallFunc_Array_Length_ReturnValue11;
	Parms.CallFunc_Less_IntInt_ReturnValue8 = CallFunc_Less_IntInt_ReturnValue8;
	Parms.CallFunc_GetPlayerController_ReturnValue4 = CallFunc_GetPlayerController_ReturnValue4;
	Parms.Temp_int_Loop_Counter_Variable11 = Temp_int_Loop_Counter_Variable11;
	Parms.CallFunc_GetPlayerController_ReturnValue5 = CallFunc_GetPlayerController_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue9 = CallFunc_Less_IntInt_ReturnValue9;
	Parms.CallFunc_Add_IntInt_ReturnValue11 = CallFunc_Add_IntInt_ReturnValue11;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.CallFunc_Array_Get_Item11 = CallFunc_Array_Get_Item11;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors4 = CallFunc_GetAllActorsOfClass_OutActors4;
	Parms.CallFunc_GetPlayerController_ReturnValue6 = CallFunc_GetPlayerController_ReturnValue6;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_GetInputAnalogStickState_StickX = CallFunc_GetInputAnalogStickState_StickX;
	Parms.CallFunc_GetInputAnalogStickState_StickY = CallFunc_GetInputAnalogStickState_StickY;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue11 = CallFunc_Multiply_FloatFloat_ReturnValue11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Multiply_FloatFloat_ReturnValue12;
	Parms.Temp_int_Loop_Counter_Variable12 = Temp_int_Loop_Counter_Variable12;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.Temp_int_Array_Index_Variable11 = Temp_int_Array_Index_Variable11;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.Temp_int_Array_Index_Variable12 = Temp_int_Array_Index_Variable12;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.Temp_int_Loop_Counter_Variable13 = Temp_int_Loop_Counter_Variable13;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas3 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas3;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size3 = CallFunc_BeginDrawCanvasToRenderTarget_Size3;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context3 = CallFunc_BeginDrawCanvasToRenderTarget_Context3;
	Parms.CallFunc_Add_IntInt_ReturnValue13 = CallFunc_Add_IntInt_ReturnValue13;
	Parms.Temp_int_Array_Index_Variable13 = Temp_int_Array_Index_Variable13;
	Parms.CallFunc_Array_Get_Item13 = CallFunc_Array_Get_Item13;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_Less_IntInt_ReturnValue10 = CallFunc_Less_IntInt_ReturnValue10;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item14 = CallFunc_Array_Get_Item14;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position3 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position3;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size3 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue14 = CallFunc_Add_IntInt_ReturnValue14;
	Parms.CallFunc_Array_Length_ReturnValue13 = CallFunc_Array_Length_ReturnValue13;
	Parms.CallFunc_Less_IntInt_ReturnValue11 = CallFunc_Less_IntInt_ReturnValue11;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas4 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas4;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size4 = CallFunc_BeginDrawCanvasToRenderTarget_Size4;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context4 = CallFunc_BeginDrawCanvasToRenderTarget_Context4;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.CallFunc_Array_Get_Item15 = CallFunc_Array_Get_Item15;
	Parms.CallFunc_Array_Length_ReturnValue14 = CallFunc_Array_Length_ReturnValue14;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position4 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position4;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size4 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size4;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas5 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas5;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size5 = CallFunc_BeginDrawCanvasToRenderTarget_Size5;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context5 = CallFunc_BeginDrawCanvasToRenderTarget_Context5;
	Parms.CallFunc_Array_Get_Item16 = CallFunc_Array_Get_Item16;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position5 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position5;
	Parms.CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size5 = CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size5;
	Parms.CallFunc_Array_Length_ReturnValue15 = CallFunc_Array_Length_ReturnValue15;
	Parms.CallFunc_Less_IntInt_ReturnValue13 = CallFunc_Less_IntInt_ReturnValue13;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsInputSuspended_ReturnValue = CallFunc_IsInputSuspended_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInputSuspended_ReturnValue2 = CallFunc_IsInputSuspended_ReturnValue2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsInputSuspended_ReturnValue3 = CallFunc_IsInputSuspended_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

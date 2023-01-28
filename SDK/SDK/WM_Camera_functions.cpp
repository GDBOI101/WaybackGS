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


// Function WM_Camera.WM_Camera_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)

void AWM_Camera_C::UserConstructionScript(const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("WM_Camera_C", "UserConstructionScript");

	Params::AWM_Camera_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::TL_CameraActivateAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "TL_CameraActivateAnim__FinishedFunc");

	Params::AWM_Camera_C_TL_CameraActivateAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::TL_CameraActivateAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "TL_CameraActivateAnim__UpdateFunc");

	Params::AWM_Camera_C_TL_CameraActivateAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::TL_CameraDeactivateAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "TL_CameraDeactivateAnim__FinishedFunc");

	Params::AWM_Camera_C_TL_CameraDeactivateAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::TL_CameraDeactivateAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "TL_CameraDeactivateAnim__UpdateFunc");

	Params::AWM_Camera_C_TL_CameraDeactivateAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.CameraNoise__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::CameraNoise__FinishedFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "CameraNoise__FinishedFunc");

	Params::AWM_Camera_C_CameraNoise__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.CameraNoise__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWM_Camera_C::CameraNoise__UpdateFunc()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "CameraNoise__UpdateFunc");

	Params::AWM_Camera_C_CameraNoise__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.CameraActivateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Camera_C::CameraActivateAnim()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "CameraActivateAnim");

	Params::AWM_Camera_C_CameraActivateAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.StopWiggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Camera_C::StopWiggle()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "StopWiggle");

	Params::AWM_Camera_C_StopWiggle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.CameraDeactivateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Camera_C::CameraDeactivateAnim()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "CameraDeactivateAnim");

	Params::AWM_Camera_C_CameraDeactivateAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.CameraWiggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Camera_C::CameraWiggle()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "CameraWiggle");

	Params::AWM_Camera_C_CameraWiggle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AWM_Camera_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "OnDeactivated");

	Params::AWM_Camera_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AWM_Camera_C::OnActivated()
{
	static auto Func = Class->GetFunction("WM_Camera_C", "OnActivated");

	Params::AWM_Camera_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Camera.WM_Camera_C.ExecuteUbergraph_WM_Camera
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult2            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWM_Lights_C*>        CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AWM_Lights_C*                CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWM_Lights_C*>        CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// class AWM_Lights_C*                CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Camera_C::ExecuteUbergraph_WM_Camera(int32 EntryPoint, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_TLerp_ReturnValue2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AWM_Lights_C* CallFunc_Array_Get_Item2, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AWM_Lights_C* CallFunc_Array_Get_Item3)
{
	static auto Func = Class->GetFunction("WM_Camera_C", "ExecuteUbergraph_WM_Camera");

	Params::AWM_Camera_C_ExecuteUbergraph_WM_Camera_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_TLerp_ReturnValue2 = CallFunc_TLerp_ReturnValue2;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult2 = CallFunc_K2_SetActorRelativeTransform_SweepHitResult2;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

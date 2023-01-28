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


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "UserConstructionScript");

	Params::AVaultCamera_Blueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7");

	Params::AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6");

	Params::AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");

	Params::AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");

	Params::AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "ReceiveTick");

	Params::AVaultCamera_Blueprint_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::OnActivated()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnActivated");

	Params::AVaultCamera_Blueprint_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnDeactivated");

	Params::AVaultCamera_Blueprint_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnByIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable2                                            (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key3, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FKey& Temp_struct_Variable2, bool CallFunc_IsValid_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_SetActorRotation_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "ExecuteUbergraph_VaultCamera_Blueprint");

	Params::AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnByIndex_ReturnValue = CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetInputMouseDelta_DeltaX = CallFunc_GetInputMouseDelta_DeltaX;
	Parms.CallFunc_GetInputMouseDelta_DeltaY = CallFunc_GetInputMouseDelta_DeltaY;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

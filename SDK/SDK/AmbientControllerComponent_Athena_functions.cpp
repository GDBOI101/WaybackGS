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


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetTargetLPFFreq(float Target)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetTargetLPFFreq");

	Params::UAmbientControllerComponent_Athena_C_SetTargetLPFFreq_Params Parms;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetIndoorMixEnabled");

	Params::UAmbientControllerComponent_Athena_C_SetIndoorMixEnabled_Params Parms;
	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Start                                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns                (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAmbientControllerComponent_Athena_C::Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Trace");

	Params::UAmbientControllerComponent_Athena_C_Trace_Params Parms;
	Parms.Start = Start;
	Parms.Direction = Direction;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  NewSound                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  NewSoundLocal                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::Crossfade(class USoundBase* NewSound, class USoundBase* NewSoundLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Crossfade");

	Params::UAmbientControllerComponent_Athena_C_Crossfade_Params Parms;
	Parms.NewSound = NewSound;
	Parms.NewSoundLocal = NewSoundLocal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue2 = CallFunc_SpawnSound2D_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::RegisterTimeOfDayCallbacks()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "RegisterTimeOfDayCallbacks");

	Params::UAmbientControllerComponent_Athena_C_RegisterTimeOfDayCallbacks_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveBeginPlay");

	Params::UAmbientControllerComponent_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveEndPlay");

	Params::UAmbientControllerComponent_Athena_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::OnCheckIfSurrounded()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "OnCheckIfSurrounded");

	Params::UAmbientControllerComponent_Athena_C_OnCheckIfSurrounded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::Evaluate_Inside_State()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Evaluate Inside State");

	Params::UAmbientControllerComponent_Athena_C_Evaluate_Inside_State_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::On_Day_Phase_Change(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Day Phase Change");

	Params::UAmbientControllerComponent_Athena_C_On_Day_Phase_Change_Params Parms;
	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveTick");

	Params::UAmbientControllerComponent_Athena_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Change(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Change");

	Params::UAmbientControllerComponent_Athena_C_On_Game_Phase_Change_Params Parms;
	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Step_Change(enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Step Change");

	Params::UAmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change_Params Parms;
	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::Set_Storm_Amb_Layer_Enabled(bool Enabled)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Set Storm Amb Layer Enabled");

	Params::UAmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_CurrentDayPhase                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_PreviousDayPhase                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAtCreation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Trace_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue5                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhase        K2Node_CustomEvent_GamePhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    K2Node_CustomEvent_GamePhaseStep                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::ExecuteUbergraph_AmbientControllerComponent_Athena(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortDayPhase Temp_byte_Variable, enum class EFortDayPhase Temp_byte_Variable2, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue4, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class USoundBase* K2Node_Select_Default, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2, class AActor* CallFunc_GetViewTarget_ReturnValue2, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, class USoundBase* K2Node_Select2_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue2, bool CallFunc_Trace_ReturnValue3, bool CallFunc_Trace_ReturnValue4, bool CallFunc_Trace_ReturnValue5, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess2, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_CustomEvent_Enabled)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ExecuteUbergraph_AmbientControllerComponent_Athena");

	Params::UAmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentDayPhase = K2Node_CustomEvent_CurrentDayPhase;
	Parms.K2Node_CustomEvent_PreviousDayPhase = K2Node_CustomEvent_PreviousDayPhase;
	Parms.K2Node_CustomEvent_bAtCreation = K2Node_CustomEvent_bAtCreation;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2 = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2;
	Parms.CallFunc_GetViewTarget_ReturnValue2 = CallFunc_GetViewTarget_ReturnValue2;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Trace_ReturnValue = CallFunc_Trace_ReturnValue;
	Parms.CallFunc_Trace_ReturnValue2 = CallFunc_Trace_ReturnValue2;
	Parms.CallFunc_Trace_ReturnValue3 = CallFunc_Trace_ReturnValue3;
	Parms.CallFunc_Trace_ReturnValue4 = CallFunc_Trace_ReturnValue4;
	Parms.CallFunc_Trace_ReturnValue5 = CallFunc_Trace_ReturnValue5;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_GamePhase = K2Node_CustomEvent_GamePhase;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_GamePhaseStep = K2Node_CustomEvent_GamePhaseStep;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

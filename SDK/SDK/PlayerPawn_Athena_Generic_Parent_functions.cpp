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


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.Teleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference)
// bool                               TeleportOut_                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Default_PlayLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADuplicateResOutMesh_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_Parent_C::Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Select_Default, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "Teleport");

	Params::APlayerPawn_Athena_Generic_Parent_C_Teleport_Params Parms;
	Parms.GameplayCueParameters = GameplayCueParameters;
	Parms.TeleportOut_ = TeleportOut_;
	Parms.Default_PlayLength = Default_PlayLength;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_Parent_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "UserConstructionScript");

	Params::APlayerPawn_Athena_Generic_Parent_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_Parent_C::GameplayCue_Teleport_Out(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "GameplayCue.Teleport.Out");

	Params::APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_Out_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_Parent_C::GameplayCue_Teleport_In(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "GameplayCue.Teleport.In");

	Params::APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_In_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");

	Params::APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

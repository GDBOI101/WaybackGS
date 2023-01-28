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


// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::NotifyTeleportFinishedTriggered(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "NotifyTeleportFinishedTriggered");

	Params::ABP_VictoryDrone_C_NotifyTeleportFinishedTriggered_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_C::PlaySpawnOutAnim(class UAnimMontage* Montage, float NewLocalVar_0, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "PlaySpawnOutAnim");

	Params::ABP_VictoryDrone_C_PlaySpawnOutAnim_Params Parms;
	Parms.Montage = Montage;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::InitDrone(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "InitDrone");

	Params::ABP_VictoryDrone_C_InitDrone_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.TriggerPlayerSpawnEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::TriggerPlayerSpawnEffects(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "TriggerPlayerSpawnEffects");

	Params::ABP_VictoryDrone_C_TriggerPlayerSpawnEffects_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VictoryDrone_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "UserConstructionScript");

	Params::ABP_VictoryDrone_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VictoryDrone_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveBeginPlay");

	Params::ABP_VictoryDrone_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "OnSpawnOutAnimEnded");

	Params::ABP_VictoryDrone_C_OnSpawnOutAnimEnded_Params Parms;
	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveTick");

	Params::ABP_VictoryDrone_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInterrupted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, float K2Node_Event_DeltaSeconds, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "ExecuteUbergraph_BP_VictoryDrone");

	Params::ABP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_bInterrupted = K2Node_CustomEvent_bInterrupted;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VictoryDrone_C*          Drone                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_C::SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_C", "SpawnOutAnimEndedDispatcher__DelegateSignature");

	Params::ABP_VictoryDrone_C_SpawnOutAnimEndedDispatcher__DelegateSignature_Params Parms;
	Parms.Drone = Drone;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

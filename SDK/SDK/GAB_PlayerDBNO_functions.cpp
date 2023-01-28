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


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventHitData                                                     (Parm)
// struct FVector                     CallFunc_GetImpulseData_ImpulseDirection                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackMagnitude                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackZAngle                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_EffectContextGetHitResult_ReturnValue                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "InitializeDeathHitDirection");

	Params::UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params Parms;
	Parms.EventHitData = EventHitData;
	Parms.CallFunc_GetImpulseData_ImpulseDirection = CallFunc_GetImpulseData_ImpulseDirection;
	Parms.CallFunc_GetImpulseData_KnockbackMagnitude = CallFunc_GetImpulseData_KnockbackMagnitude;
	Parms.CallFunc_GetImpulseData_KnockbackZAngle = CallFunc_GetImpulseData_KnockbackZAngle;
	Parms.CallFunc_EffectContextGetHitResult_ReturnValue = CallFunc_EffectContextGetHitResult_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_PlayerDBNO_C::OnCancelled_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnCancelled_4B0F8658452931EE3B297A9E70C9C496");

	Params::UGAB_PlayerDBNO_C_OnCancelled_4B0F8658452931EE3B297A9E70C9C496_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_PlayerDBNO_C::OnInterrupted_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnInterrupted_4B0F8658452931EE3B297A9E70C9C496");

	Params::UGAB_PlayerDBNO_C_OnInterrupted_4B0F8658452931EE3B297A9E70C9C496_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_PlayerDBNO_C::OnBlendOut_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnBlendOut_4B0F8658452931EE3B297A9E70C9C496");

	Params::UGAB_PlayerDBNO_C_OnBlendOut_4B0F8658452931EE3B297A9E70C9C496_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_PlayerDBNO_C::OnCompleted_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnCompleted_4B0F8658452931EE3B297A9E70C9C496");

	Params::UGAB_PlayerDBNO_C_OnCompleted_4B0F8658452931EE3B297A9E70C9C496_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_PlayerDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UGAB_PlayerDBNO_C::ExecuteUbergraph_GAB_PlayerDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("GAB_PlayerDBNO_C", "ExecuteUbergraph_GAB_PlayerDBNO");

	Params::UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

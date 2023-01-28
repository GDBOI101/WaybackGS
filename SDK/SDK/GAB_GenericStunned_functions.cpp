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


// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_GenericStunned_C::K2_OnEndAbility()
{
	static auto Func = Class->GetFunction("GAB_GenericStunned_C", "K2_OnEndAbility");

	Params::UGAB_GenericStunned_C_K2_OnEndAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_GenericStunned_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericStunned_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_GenericStunned_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStunTime_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3              (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4              (NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_GenericStunned_C::ExecuteUbergraph_GAB_GenericStunned(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetStunTime_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue4, bool CallFunc_IsValid_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess)
{
	static auto Func = Class->GetFunction("GAB_GenericStunned_C", "ExecuteUbergraph_GAB_GenericStunned");

	Params::UGAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStunTime_ReturnValue = CallFunc_GetStunTime_ReturnValue;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue = CallFunc_GetActivatingAbilityComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue2 = CallFunc_GetActivatingPawn_ReturnValue2;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue2 = CallFunc_GetActivatingAbilityComponent_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue2 = CallFunc_RemoveActiveGameplayEffect_ReturnValue2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue3 = CallFunc_GetActivatingPawn_ReturnValue3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4;
	Parms.CallFunc_GetActivatingPawn_ReturnValue4 = CallFunc_GetActivatingPawn_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_PurpleStuff_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "K2_CanActivateAbility");

	Params::UGA_Athena_PurpleStuff_C_K2_CanActivateAbility_Params Parms;
	Parms.ActorInfo = ActorInfo;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Completed_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Completed_B88CC86E452E3CEFD0EF0C961F5C2364(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Completed_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::UGA_Athena_PurpleStuff_C_Completed_B88CC86E452E3CEFD0EF0C961F5C2364_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::UGA_Athena_PurpleStuff_C_Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Triggered_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Triggered_B88CC86E452E3CEFD0EF0C961F5C2364(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Triggered_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::UGA_Athena_PurpleStuff_C_Triggered_B88CC86E452E3CEFD0EF0C961F5C2364_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "K2_ActivateAbility");

	Params::UGA_Athena_PurpleStuff_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.ExecuteUbergraph_GA_Athena_PurpleStuff
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_PurpleStuff_C::ExecuteUbergraph_GA_Athena_PurpleStuff(int32 EntryPoint, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "ExecuteUbergraph_GA_Athena_PurpleStuff");

	Params::UGA_Athena_PurpleStuff_C_ExecuteUbergraph_GA_Athena_PurpleStuff_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue2 = CallFunc_K2_CommitAbility_ReturnValue2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

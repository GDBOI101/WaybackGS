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


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Completed_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Completed_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::UGAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::UGAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::UGAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_Melee_Generic_EventGraph_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "K2_ActivateAbility");

	Params::UGAB_Melee_Generic_EventGraph_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_Generic_EventGraph_C::ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool Temp_bool_Has_Been_Initd_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue2, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "ExecuteUbergraph_GAB_Melee_Generic_EventGraph");

	Params::UGAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue2 = CallFunc_K2_CommitAbility_ReturnValue2;
	Parms.CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel = CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

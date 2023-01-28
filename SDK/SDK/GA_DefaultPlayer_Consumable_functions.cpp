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


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Consumable_C::Completed_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Consumable_C", "Completed_A3A081314405D22C4EED5CB989DC8CB1");

	Params::UGA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Consumable_C::Cancelled_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Consumable_C", "Cancelled_A3A081314405D22C4EED5CB989DC8CB1");

	Params::UGA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Consumable_C::Triggered_A3A081314405D22C4EED5CB989DC8CB1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Consumable_C", "Triggered_A3A081314405D22C4EED5CB989DC8CB1");

	Params::UGA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_DefaultPlayer_Consumable_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Consumable_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortConsumableItemDefinition*K2Node_DynamicCast_AsFort_Consumable_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetUseAnimation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimPlayRate_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_Consumable_C::ExecuteUbergraph_GA_DefaultPlayer_Consumable(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortConsumableItemDefinition* K2Node_DynamicCast_AsFort_Consumable_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, class UAnimMontage* CallFunc_GetUseAnimation_ReturnValue, float CallFunc_GetAnimPlayRate_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Consumable_C", "ExecuteUbergraph_GA_DefaultPlayer_Consumable");

	Params::UGA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Consumable_Item_Definition = K2Node_DynamicCast_AsFort_Consumable_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.CallFunc_GetUseAnimation_ReturnValue = CallFunc_GetUseAnimation_ReturnValue;
	Parms.CallFunc_GetAnimPlayRate_ReturnValue = CallFunc_GetAnimPlayRate_ReturnValue;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

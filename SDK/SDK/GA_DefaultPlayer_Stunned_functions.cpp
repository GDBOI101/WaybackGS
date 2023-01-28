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


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Completed_3C8EA97E467ED88E163FF0B4F830736D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Stunned_C::Completed_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "Completed_3C8EA97E467ED88E163FF0B4F830736D");

	Params::UGA_DefaultPlayer_Stunned_C_Completed_3C8EA97E467ED88E163FF0B4F830736D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Cancelled_3C8EA97E467ED88E163FF0B4F830736D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Stunned_C::Cancelled_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "Cancelled_3C8EA97E467ED88E163FF0B4F830736D");

	Params::UGA_DefaultPlayer_Stunned_C_Cancelled_3C8EA97E467ED88E163FF0B4F830736D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Triggered_3C8EA97E467ED88E163FF0B4F830736D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Stunned_C::Triggered_3C8EA97E467ED88E163FF0B4F830736D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "Triggered_3C8EA97E467ED88E163FF0B4F830736D");

	Params::UGA_DefaultPlayer_Stunned_C_Triggered_3C8EA97E467ED88E163FF0B4F830736D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71");

	Params::UGA_DefaultPlayer_Stunned_C_OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71");

	Params::UGA_DefaultPlayer_Stunned_C_OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF");

	Params::UGA_DefaultPlayer_Stunned_C_OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF");

	Params::UGA_DefaultPlayer_Stunned_C_OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF");

	Params::UGA_DefaultPlayer_Stunned_C_OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF");

	Params::UGA_DefaultPlayer_Stunned_C_OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "K2_ActivateAbility");

	Params::UGA_DefaultPlayer_Stunned_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::K2_OnEndAbility()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "K2_OnEndAbility");

	Params::UGA_DefaultPlayer_Stunned_C_K2_OnEndAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ResetSoulSuckLift
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::ResetSoulSuckLift()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "ResetSoulSuckLift");

	Params::UGA_DefaultPlayer_Stunned_C_ResetSoulSuckLift_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.SoulSuckCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::SoulSuckCheck()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "SoulSuckCheck");

	Params::UGA_DefaultPlayer_Stunned_C_SoulSuckCheck_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ResetSoulSuckRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::ResetSoulSuckRelease()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "ResetSoulSuckRelease");

	Params::UGA_DefaultPlayer_Stunned_C_ResetSoulSuckRelease_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.SoulSuckEndCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::SoulSuckEndCheck()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "SoulSuckEndCheck");

	Params::UGA_DefaultPlayer_Stunned_C_SoulSuckEndCheck_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ExecuteUbergraph_GA_DefaultPlayer_Stunned
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable                                             ()
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_SetNextMontageSectionAndWait*CallFunc_SetNextMontageSectionAndWait_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraAnimInst*             CallFunc_PlayCameraAnim_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self2_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self3_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue2                                (NoDestructor)

void UGA_DefaultPlayer_Stunned_C::ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AController* CallFunc_GetController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_IsValid_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, class FName K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue5, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable2, bool Temp_bool_Has_Been_Initd_Variable2, const struct FGameplayTag& Temp_struct_Variable2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue6, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UFortAbilityTask_SetNextMontageSectionAndWait* CallFunc_SetNextMontageSectionAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue2, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self2_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue3, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self3_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "ExecuteUbergraph_GA_DefaultPlayer_Stunned");

	Params::UGA_DefaultPlayer_Stunned_C_ExecuteUbergraph_GA_DefaultPlayer_Stunned_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue4 = CallFunc_Greater_FloatFloat_ReturnValue4;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue5 = CallFunc_Greater_FloatFloat_ReturnValue5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue5 = CallFunc_EqualEqual_NameName_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue6 = CallFunc_Greater_FloatFloat_ReturnValue6;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_SetNextMontageSectionAndWait_ReturnValue = CallFunc_SetNextMontageSectionAndWait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue2 = CallFunc_GetHealth_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue2 = CallFunc_RemoveActiveEffectsWithTags_ReturnValue2;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue = CallFunc_GetActivatingAbilityComponent_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_PlayCameraAnim_ReturnValue = CallFunc_PlayCameraAnim_ReturnValue;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue2 = CallFunc_GetActivatingAbilityComponent_ReturnValue2;
	Parms.CallFunc_HasMatchingGameplayTag_self2_CastInput = CallFunc_HasMatchingGameplayTag_self2_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue2 = CallFunc_HasMatchingGameplayTag_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue3 = CallFunc_GetActivatingAbilityComponent_ReturnValue3;
	Parms.CallFunc_HasMatchingGameplayTag_self3_CastInput = CallFunc_HasMatchingGameplayTag_self3_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue3 = CallFunc_HasMatchingGameplayTag_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue2 = CallFunc_K2_SetTimer_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

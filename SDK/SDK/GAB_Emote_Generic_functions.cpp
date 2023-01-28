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


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::K2_OnEndAbility(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_OnEndAbility");

	Params::UGAB_Emote_Generic_C_K2_OnEndAbility_Params Parms;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "Completed_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "Cancelled_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "Triggered_DE7019AA4E006879EDD264899869FEE2");

	Params::UGAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Emote_Generic_C::OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");

	Params::UGAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_Emote_Generic_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_ActivateAbility");

	Params::UGAB_Emote_Generic_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMontageItemDefinitionBase*K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Emote_Generic_C::ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsAssetNull_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_Emote_Generic_C", "ExecuteUbergraph_GAB_Emote_Generic");

	Params::UGAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentSourceObject_ReturnValue = CallFunc_GetCurrentSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base = K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

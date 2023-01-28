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


// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MaxNumberOfSections                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OriginalSectionName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SectionName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericDeath_C::GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "GetRandomSectionName");

	Params::UGAB_GenericDeath_C_GetRandomSectionName_Params Parms;
	Parms.MaxNumberOfSections = MaxNumberOfSections;
	Parms.OriginalSectionName = OriginalSectionName;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventHitData                                                     (Parm)
// struct FVector                     CallFunc_GetImpulseData_ImpulseDirection                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackMagnitude                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackZAngle                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_EffectContextGetHitResult_ReturnValue                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericDeath_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "InitializeDeathHitDirection");

	Params::UGAB_GenericDeath_C_InitializeDeathHitDirection_Params Parms;
	Parms.EventHitData = EventHitData;
	Parms.CallFunc_GetImpulseData_ImpulseDirection = CallFunc_GetImpulseData_ImpulseDirection;
	Parms.CallFunc_GetImpulseData_KnockbackMagnitude = CallFunc_GetImpulseData_KnockbackMagnitude;
	Parms.CallFunc_GetImpulseData_KnockbackZAngle = CallFunc_GetImpulseData_KnockbackZAngle;
	Parms.CallFunc_EffectContextGetHitResult_ReturnValue = CallFunc_EffectContextGetHitResult_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	Params::UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	Params::UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4");

	Params::UGAB_GenericDeath_C_OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4");

	Params::UGAB_GenericDeath_C_OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::K2_OnEndAbility()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "K2_OnEndAbility");

	Params::UGAB_GenericDeath_C_K2_OnEndAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "PickDeathMontageSection");

	Params::UGAB_GenericDeath_C_PickDeathMontageSection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VictoryDrone_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetRandomSectionName_SectionName                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRandomSectionName_SectionName5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomSectionName_SectionName8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDamageZone         CallFunc_GetDamageZone_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue2, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName CallFunc_GetRandomSectionName_SectionName, class FName CallFunc_GetRandomSectionName_SectionName2, class FName CallFunc_GetRandomSectionName_SectionName3, class FName CallFunc_GetRandomSectionName_SectionName4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue7, bool CallFunc_EqualEqual_NameName_ReturnValue8, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetRandomSectionName_SectionName5, class FName CallFunc_GetRandomSectionName_SectionName6, class FName CallFunc_GetRandomSectionName_SectionName7, class FName CallFunc_GetRandomSectionName_SectionName8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue3, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess2, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult2)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_C", "ExecuteUbergraph_GAB_GenericDeath");

	Params::UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue2 = CallFunc_GetActivatingPawn_ReturnValue2;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetRandomSectionName_SectionName = CallFunc_GetRandomSectionName_SectionName;
	Parms.CallFunc_GetRandomSectionName_SectionName2 = CallFunc_GetRandomSectionName_SectionName2;
	Parms.CallFunc_GetRandomSectionName_SectionName3 = CallFunc_GetRandomSectionName_SectionName3;
	Parms.CallFunc_GetRandomSectionName_SectionName4 = CallFunc_GetRandomSectionName_SectionName4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue5 = CallFunc_EqualEqual_NameName_ReturnValue5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue6 = CallFunc_EqualEqual_NameName_ReturnValue6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue7 = CallFunc_EqualEqual_NameName_ReturnValue7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue8 = CallFunc_EqualEqual_NameName_ReturnValue8;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRandomSectionName_SectionName5 = CallFunc_GetRandomSectionName_SectionName5;
	Parms.CallFunc_GetRandomSectionName_SectionName6 = CallFunc_GetRandomSectionName_SectionName6;
	Parms.CallFunc_GetRandomSectionName_SectionName7 = CallFunc_GetRandomSectionName_SectionName7;
	Parms.CallFunc_GetRandomSectionName_SectionName8 = CallFunc_GetRandomSectionName_SectionName8;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetActivatingPawn_ReturnValue3 = CallFunc_GetActivatingPawn_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetDamageZone_ReturnValue = CallFunc_GetDamageZone_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult2 = CallFunc_SetFNameBasedOnHitDirection_NameResult2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

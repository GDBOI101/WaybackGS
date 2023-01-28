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


// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Soft                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Fragment_Container_C::ForceFeedbackInteract(bool Soft, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ForceFeedbackInteract");

	Params::AB_Fragment_Container_C_ForceFeedbackInteract_Params Parms;
	Parms.Soft = Soft;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::OnRep_IsOrbTaken()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "OnRep_IsOrbTaken");

	Params::AB_Fragment_Container_C_OnRep_IsOrbTaken_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::OnRep_IsOn(const struct FTransform& Temp_struct_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_AddComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "OnRep_IsOn");

	Params::AB_Fragment_Container_C_OnRep_IsOn_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue2 = CallFunc_K2_GetRootComponent_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewOutlander                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::SetOutlander(class AActor* NewOutlander)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "SetOutlander");

	Params::AB_Fragment_Container_C_SetOutlander_Params Parms;
	Parms.NewOutlander = NewOutlander;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewAwake                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Fragment_Container_C::SetAwake(bool NewAwake)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "SetAwake");

	Params::AB_Fragment_Container_C_SetAwake_Params Parms;
	Parms.NewAwake = NewAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Fragment_Container_C::UpdateShouldTick(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "UpdateShouldTick");

	Params::AB_Fragment_Container_C_UpdateShouldTick_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText AB_Fragment_Container_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BlueprintGetFailedInteractionString");

	Params::AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params Parms;
	Parms.InteractingPawn = InteractingPawn;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander = K2Node_DynamicCast_AsPlayer_Pawn_Outlander;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::OnRep_IsOpen()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "OnRep_IsOpen");

	Params::AB_Fragment_Container_C_OnRep_IsOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::DelayedDestroy()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "DelayedDestroy");

	Params::AB_Fragment_Container_C_DelayedDestroy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData2                             ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Fragment_Container_C::OnRep_BuffType(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "OnRep_BuffType");

	Params::AB_Fragment_Container_C_OnRep_BuffType_Params Parms;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_MakeStruct_GameplayEventData2 = K2Node_MakeStruct_GameplayEventData2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText AB_Fragment_Container_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BlueprintGetInteractionString");

	Params::AB_Fragment_Container_C_BlueprintGetInteractionString_Params Parms;
	Parms.InteractingPawn = InteractingPawn;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander = K2Node_DynamicCast_AsPlayer_Pawn_Outlander;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               LocalExecuteOk                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalIsOutlander                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AB_Fragment_Container_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool LocalExecuteOk, bool LocalIsOutlander, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class AController* CallFunc_GetController_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess2, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BlueprintCanInteract");

	Params::AB_Fragment_Container_C_BlueprintCanInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;
	Parms.LocalExecuteOk = LocalExecuteOk;
	Parms.LocalIsOutlander = LocalIsOutlander;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander = K2Node_DynamicCast_AsPlayer_Pawn_Outlander;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess = CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue = CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue = CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess2 = CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess2;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue2 = CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue2;
	Parms.CallFunc_FTrunc_ReturnValue2 = CallFunc_FTrunc_ReturnValue2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Fragment_Container_C::UserConstructionScript(bool CallFunc_K2_AttachTo_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "UserConstructionScript");

	Params::AB_Fragment_Container_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::VerticalMovementTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "VerticalMovementTimeline__FinishedFunc");

	Params::AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::VerticalMovementTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "VerticalMovementTimeline__UpdateFunc");

	Params::AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::VerticalMovementTimeline__Up__EventFunc()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "VerticalMovementTimeline__Up__EventFunc");

	Params::AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::VerticalMovementTimeline__down__EventFunc()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "VerticalMovementTimeline__down__EventFunc");

	Params::AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ReceiveBeginPlay");

	Params::AB_Fragment_Container_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void AB_Fragment_Container_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "OnDeathServer");

	Params::AB_Fragment_Container_C_OnDeathServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BlueprintOnInteract");

	Params::AB_Fragment_Container_C_BlueprintOnInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::ActivateFX()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ActivateFX");

	Params::AB_Fragment_Container_C_ActivateFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature");

	Params::AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ReceiveTick");

	Params::AB_Fragment_Container_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::MoveUp()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "MoveUp");

	Params::AB_Fragment_Container_C_MoveUp_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::PowerDown()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "PowerDown");

	Params::AB_Fragment_Container_C_PowerDown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::MoveDown()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "MoveDown");

	Params::AB_Fragment_Container_C_MoveDown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::ShowOnMiniMap()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ShowOnMiniMap");

	Params::AB_Fragment_Container_C_ShowOnMiniMap_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::StartHide()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "StartHide");

	Params::AB_Fragment_Container_C_StartHide_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::Reset_Activation()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "Reset_Activation");

	Params::AB_Fragment_Container_C_Reset_Activation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::BlueprintOnBeginInteract()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "BlueprintOnBeginInteract");

	Params::AB_Fragment_Container_C_BlueprintOnBeginInteract_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::MultiFeedback()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "MultiFeedback");

	Params::AB_Fragment_Container_C_MultiFeedback_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Fragment_Container_C::SoftFeedback()
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "SoftFeedback");

	Params::AB_Fragment_Container_C_SoftFeedback_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_OutlanderFragmentTypesTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Outlander_C*     K2Node_DynamicCast_AsPlayer_Pawn_Outlander3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2               (NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerPawn*>     CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue        (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameModeDeployableBase* K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameModeOutpost*        K2Node_DynamicCast_AsFort_Game_Mode_Outpost                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           ()
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3               (NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Fragment_Container_C::ExecuteUbergraph_B_Fragment_Container(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue2, enum class E_OutlanderFragmentTypes Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue3, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn3, bool K2Node_DynamicCast_bSuccess3, float K2Node_Event_DeltaSeconds, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander2, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_HasAuthority_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander3, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_BooleanAND_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsDedicatedServer_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, float CallFunc_RandomFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue4, bool K2Node_SwitchEnum2_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2, TArray<class AFortPlayerPawn*>& CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, const struct FRotator& CallFunc_RLerp_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, bool Temp_bool_Has_Been_Initd_Variable2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFortGameModeDeployableBase* K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base, bool K2Node_DynamicCast_bSuccess8, class AFortGameModeOutpost* K2Node_DynamicCast_AsFort_Game_Mode_Outpost, bool K2Node_DynamicCast_bSuccess9, bool Temp_bool_IsClosed_Variable3, bool K2Node_SwitchEnum3_CmpSuccess, class AController* CallFunc_GetController_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess10, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, bool Temp_bool_Has_Been_Initd_Variable3, int32 Temp_int_Array_Index_Variable2, class AFortPlayerPawn* CallFunc_Array_Get_Item2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool K2Node_SwitchEnum4_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3, const struct FLinearColor& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4)
{
	static auto Func = Class->GetFunction("B_Fragment_Container_C", "ExecuteUbergraph_B_Fragment_Container");

	Params::AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent2 = K2Node_ComponentBoundEvent_OverlappedComponent2;
	Parms.K2Node_ComponentBoundEvent_OtherActor2 = K2Node_ComponentBoundEvent_OtherActor2;
	Parms.K2Node_ComponentBoundEvent_OtherComp2 = K2Node_ComponentBoundEvent_OtherComp2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex2 = K2Node_ComponentBoundEvent_OtherBodyIndex2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn2 = K2Node_DynamicCast_AsFort_Player_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn3 = K2Node_DynamicCast_AsFort_Player_Pawn3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander = K2Node_DynamicCast_AsPlayer_Pawn_Outlander;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander2 = K2Node_DynamicCast_AsPlayer_Pawn_Outlander2;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Outlander3 = K2Node_DynamicCast_AsPlayer_Pawn_Outlander3;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue4 = CallFunc_IsDedicatedServer_ReturnValue4;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2;
	Parms.CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue = CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue5 = CallFunc_IsDedicatedServer_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue2 = CallFunc_K2_GetRootComponent_ReturnValue2;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult2 = CallFunc_K2_SetRelativeLocation_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult3 = CallFunc_K2_SetRelativeLocation_SweepHitResult3;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base = K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Outpost = K2Node_DynamicCast_AsFort_Game_Mode_Outpost;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_GetController_ReturnValue2 = CallFunc_GetController_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue = CallFunc_GetTeamAffiliation_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

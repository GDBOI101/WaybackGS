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


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     LocationLocalSpace                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Cos_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GetLocationInCircle_XY(struct FVector* LocationLocalSpace, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetLocationInCircle_XY");

	Params::APlayerPawn_Athena_C_GetLocationInCircle_XY_Params Parms;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Cos_ReturnValue = CallFunc_Cos_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = Parms.LocationLocalSpace;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::InitAthenaFoleyAudio(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, bool Temp_bool_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, bool Temp_bool_Variable3, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, bool Temp_bool_Variable4, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, bool Temp_bool_Variable5, class USoundBase* Temp_object_Variable9, class USoundBase* Temp_object_Variable10, bool Temp_bool_Variable6, class USoundBase* Temp_object_Variable11, class USoundBase* Temp_object_Variable12, bool Temp_bool_Variable7, class USoundBase* Temp_object_Variable13, class USoundBase* Temp_object_Variable14, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select2_Default, class USoundBase* K2Node_Select3_Default, class USoundBase* K2Node_Select4_Default, class USoundBase* K2Node_Select5_Default, class USoundBase* K2Node_Select6_Default, class USoundBase* K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "InitAthenaFoleyAudio");

	Params::APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_object_Variable13 = Temp_object_Variable13;
	Parms.Temp_object_Variable14 = Temp_object_Variable14;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UserConstructionScript");

	Params::APlayerPawn_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::LightningFlashTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "LightningFlashTL__FinishedFunc");

	Params::APlayerPawn_Athena_C_LightningFlashTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::LightningFlashTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "LightningFlashTL__UpdateFunc");

	Params::APlayerPawn_Athena_C_LightningFlashTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Storm_Audio_Fader__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Storm Audio Fader__FinishedFunc");

	Params::APlayerPawn_Athena_C_Storm_Audio_Fader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Storm_Audio_Fader__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Storm Audio Fader__UpdateFunc");

	Params::APlayerPawn_Athena_C_Storm_Audio_Fader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceivePossessed");

	Params::APlayerPawn_Athena_C_ReceivePossessed_Params Parms;
	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Commando.Shockwave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Commando_Shockwave(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Commando.Shockwave");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SetMenuScreenClassName()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetMenuScreenClassName");

	Params::APlayerPawn_Athena_C_SetMenuScreenClassName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SelectPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               AnimInst                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SelectPawn(class UAnimInstance* AnimInst)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SelectPawn");

	Params::APlayerPawn_Athena_C_SelectPawn_Params Parms;
	Parms.AnimInst = AnimInst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveDestroyed");

	Params::APlayerPawn_Athena_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.OutsideSafeZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_OutsideSafeZone(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.OutsideSafeZone");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_OutsideSafeZone_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SafeZoneStatusChanged()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SafeZoneStatusChanged");

	Params::APlayerPawn_Athena_C_SafeZoneStatusChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Equipping(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Equipping");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void APlayerPawn_Athena_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDeathPlayEffects");

	Params::APlayerPawn_Athena_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveTick");

	Params::APlayerPawn_Athena_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ContrailCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ContrailCheck()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ContrailCheck");

	Params::APlayerPawn_Athena_C_ContrailCheck_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Player_BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Player.BeingRevivedFromDBNO");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::AddStormFX()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AddStormFX");

	Params::APlayerPawn_Athena_C_AddStormFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::RemoveStormFX()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveStormFX");

	Params::APlayerPawn_Athena_C_RemoveStormFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartRandomLightningFlashes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::StartRandomLightningFlashes()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "StartRandomLightningFlashes");

	Params::APlayerPawn_Athena_C_StartRandomLightningFlashes_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RandomLightningFlashesRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::RandomLightningFlashesRepeat()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RandomLightningFlashesRepeat");

	Params::APlayerPawn_Athena_C_RandomLightningFlashesRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ZapFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ZapCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ZapFX(int32 ZapCount)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ZapFX");

	Params::APlayerPawn_Athena_C_ZapFX_Params Parms;
	Parms.ZapCount = ZapCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOResurrect(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.DBNOResurrect");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateInvulnerableVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::UpdateInvulnerableVisuals()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UpdateInvulnerableVisuals");

	Params::APlayerPawn_Athena_C_UpdateInvulnerableVisuals_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Add Storm Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Add_Storm_Audio()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Add Storm Audio");

	Params::APlayerPawn_Athena_C_Add_Storm_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Storm Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Remove_Storm_Audio()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Remove Storm Audio");

	Params::APlayerPawn_Athena_C_Remove_Storm_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Lightning Flash Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Play_Lightning_Flash_Audio(const struct FVector& Location)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Play Lightning Flash Audio");

	Params::APlayerPawn_Athena_C_Play_Lightning_Flash_Audio_Params Parms;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Start Storm Audio Fader
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Start_Storm_Audio_Fader()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Start Storm Audio Fader");

	Params::APlayerPawn_Athena_C_Start_Storm_Audio_Fader_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPointLightComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters7                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters6                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters5                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               K2Node_CustomEvent_AnimInst                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuScreen_Commando_C*      K2Node_DynamicCast_AsMenu_Screen_Commando                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters4                              (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsParachuteForcedOpen_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsParachuteOpen_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable2                                            (ConstParm, ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VictoryDrone_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADuplicateResOutMesh_C*      CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ZapCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitterCameraLensEffectBase*CallFunc_AddCameraLensEffect_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationInCircle_XY_LocationLocalSpace               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAnimMontage*                Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnPooledFXActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALightningLsystem_C*         K2Node_DynamicCast_AsLightning_Lsystem                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayLocalAnimMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_C::ExecuteUbergraph_PlayerPawn_Athena(int32 EntryPoint, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue3, class UPointLightComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue6, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, bool Temp_bool_Variable2, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, bool Temp_bool_Variable3, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue7, bool Temp_bool_Variable4, class UAnimMontage* Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType7, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters7, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters6, bool K2Node_SwitchEnum2_CmpSuccess, int32 Temp_int_Array_Index_Variable, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AController* K2Node_Event_NewController, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum3_CmpSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UAnimInstance* K2Node_CustomEvent_AnimInst, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, bool CallFunc_IsValid_ReturnValue8, bool K2Node_SwitchEnum4_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool CallFunc_IsDedicatedServer_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, float K2Node_Event_DeltaSeconds, bool CallFunc_IsParachuteForcedOpen_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue2, bool CallFunc_IsParachuteOpen_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UParticleSystem* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_IsClosed_Variable2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, bool CallFunc_IsLocallyControlled_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue4, bool Temp_bool_IsClosed_Variable3, TArray<class AActor*>& Temp_object_Variable2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_VSize_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue3, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue9, float CallFunc_FInterpTo_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue2, bool CallFunc_IsLocallyControlled_ReturnValue5, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue6, bool CallFunc_IsValid_ReturnValue10, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue7, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, int32 K2Node_CustomEvent_ZapCount, bool CallFunc_IsValid_ReturnValue11, float CallFunc_Conv_IntToFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_AddCameraLensEffect_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable3, class UAnimMontage* Temp_object_Variable3, const struct FVector& CallFunc_GetLocationInCircle_XY_LocationLocalSpace, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UAnimMontage* Temp_object_Variable4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class AActor* CallFunc_SpawnPooledFXActor_ReturnValue, class ALightningLsystem_C* K2Node_DynamicCast_AsLightning_Lsystem, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, class UAnimMontage* K2Node_Select2_Default, int32 CallFunc_Array_Length_ReturnValue, class UAnimMontage* K2Node_Select3_Default, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_PlayLocalAnimMontage_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_Greater_FloatFloat_ReturnValue2, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue3, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue12)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ExecuteUbergraph_PlayerPawn_Athena");

	Params::APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType7 = K2Node_GameplayCueEvent_EventType7;
	Parms.K2Node_GameplayCueEvent_Parameters7 = K2Node_GameplayCueEvent_Parameters7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType6 = K2Node_GameplayCueEvent_EventType6;
	Parms.K2Node_GameplayCueEvent_Parameters6 = K2Node_GameplayCueEvent_Parameters6;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_GameplayCueEvent_EventType5 = K2Node_GameplayCueEvent_EventType5;
	Parms.K2Node_GameplayCueEvent_Parameters5 = K2Node_GameplayCueEvent_Parameters5;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_AnimInst = K2Node_CustomEvent_AnimInst;
	Parms.K2Node_DynamicCast_AsMenu_Screen_Commando = K2Node_DynamicCast_AsMenu_Screen_Commando;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.K2Node_GameplayCueEvent_EventType4 = K2Node_GameplayCueEvent_EventType4;
	Parms.K2Node_GameplayCueEvent_Parameters4 = K2Node_GameplayCueEvent_Parameters4;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsParachuteForcedOpen_ReturnValue = CallFunc_IsParachuteForcedOpen_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue2 = CallFunc_IsLocallyControlled_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue2 = CallFunc_IsSkydiving_ReturnValue2;
	Parms.CallFunc_IsParachuteOpen_ReturnValue = CallFunc_IsParachuteOpen_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue3 = CallFunc_SpawnEmitterAttached_ReturnValue3;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue4 = CallFunc_SpawnEmitterAttached_ReturnValue4;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue2 = CallFunc_MapRangeClamped_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue5 = CallFunc_SpawnEmitterAttached_ReturnValue5;
	Parms.CallFunc_IsLocallyControlled_ReturnValue3 = CallFunc_IsLocallyControlled_ReturnValue3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue4 = CallFunc_IsLocallyControlled_ReturnValue4;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue2 = CallFunc_VSize_ReturnValue2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue3 = CallFunc_MapRangeClamped_ReturnValue3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue5 = CallFunc_IsLocallyControlled_ReturnValue5;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue6 = CallFunc_SpawnEmitterAttached_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue7 = CallFunc_SpawnEmitterAttached_ReturnValue7;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.K2Node_CustomEvent_ZapCount = K2Node_CustomEvent_ZapCount;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_AddCameraLensEffect_ReturnValue = CallFunc_AddCameraLensEffect_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_GetLocationInCircle_XY_LocationLocalSpace = CallFunc_GetLocationInCircle_XY_LocationLocalSpace;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_SpawnPooledFXActor_ReturnValue = CallFunc_SpawnPooledFXActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLightning_Lsystem = K2Node_DynamicCast_AsLightning_Lsystem;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_PlayLocalAnimMontage_ReturnValue = CallFunc_PlayLocalAnimMontage_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewActive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateOrDeactivateWindParticle");

	Params::AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params Parms;
	Parms.bNewActive = bNewActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::DeactivateMuzzleFX()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateMuzzleFX");

	Params::AB_Ranged_Generic_C_DeactivateMuzzleFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateReloadSmokeFX");

	Params::AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateReloadSmokeFX");

	Params::AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bool                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateShellsFX");

	Params::AB_Ranged_Generic_C_ActivateShellsFX_Params Parms;
	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateShellsFX");

	Params::AB_Ranged_Generic_C_DeactivateShellsFX_Params Parms;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetupShellFX");

	Params::AB_Ranged_Generic_C_SetupShellFX_Params Parms;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::UpdateShellEmittersFX(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue8, bool CallFunc_BooleanAND_ReturnValue9)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UpdateShellEmittersFX");

	Params::AB_Ranged_Generic_C_UpdateShellEmittersFX_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue8 = CallFunc_BooleanAND_ReturnValue8;
	Parms.CallFunc_BooleanAND_ReturnValue9 = CallFunc_BooleanAND_ReturnValue9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      Selection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Play Reload FX");

	Params::AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params Parms;
	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingScope_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsUsingScope_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Flash FX");

	Params::AB_Ranged_Generic_C_Muzzle_Flash_FX_Params Parms;
	Parms.Persistent_Fire = Persistent_Fire;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsUsingScope_ReturnValue = CallFunc_IsUsingScope_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWpnRarity");

	Params::AB_Ranged_Generic_C_SetWpnRarity_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::AddRandomScale(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AddRandomScale");

	Params::AB_Ranged_Generic_C_AddRandomScale_Params Parms;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue3)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UserConstructionScript");

	Params::AB_Ranged_Generic_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue3 = CallFunc_K2_AttachToComponent_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__FinishedFunc");

	Params::AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__UpdateFunc");

	Params::AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_4DE6158742ED7EE528BC98A240A81632");

	Params::AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	Params::AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_83457BA843174AC6288682A342EBEAD9");

	Params::AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	Params::AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayWeaponFireFX");

	Params::AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnStopWeaponFireFX");

	Params::AB_Ranged_Generic_C_OnStopWeaponFireFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayReloadFX");

	Params::AB_Ranged_Generic_C_OnPlayReloadFX_Params Parms;
	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnSetTargeting");

	Params::AB_Ranged_Generic_C_OnSetTargeting_Params Parms;
	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "K2_OnUnEquip");

	Params::AB_Ranged_Generic_C_K2_OnUnEquip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "InitializeScopeVariables");

	Params::AB_Ranged_Generic_C_InitializeScopeVariables_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_Or_Disable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              StencilBufferValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Update Enemy Custom Depths");

	Params::AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params Parms;
	Parms.Enable_Or_Disable = Enable_Or_Disable;
	Parms.StencilBufferValue = StencilBufferValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponAttached");

	Params::AB_Ranged_Generic_C_OnWeaponAttached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*NewAlteration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitAlteration");

	Params::AB_Ranged_Generic_C_OnInitAlteration_Params Parms;
	Parms.NewAlteration = NewAlteration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification   CosmeticMod                                                      (Parm)
// class UMaterialInstanceDynamic*    DynamicMaterialInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitCosmeticAlterations");

	Params::AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params Parms;
	Parms.CosmeticMod = CosmeticMod;
	Parms.DynamicMaterialInstance = DynamicMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShellsON_(onPump)");

	Params::AB_Ranged_Generic_C_ShellsON__onPump__Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnEquippedWeaponDestory");

	Params::AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetLimit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int32 TargetLimit)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough");

	Params::AB_Ranged_Generic_C_SetWeaponPierceThrough_Params Parms;
	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetLimit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough_ClientRep");

	Params::AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params Parms;
	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ReceiveBeginPlay");

	Params::AB_Ranged_Generic_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortAIPawn*>         CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_Enable_Or_Disable                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_StencilBufferValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*K2Node_Event_NewAlteration                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCosmeticModification   K2Node_Event_CosmeticMod                                         ()
// class UMaterialInstanceDynamic*    K2Node_Event_DynamicMaterialInstance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeToNextFire_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalMagazineAmmoCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_UseScopeTargeting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TargetLimit2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TargetLimit                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWindManager*            CallFunc_GetWindManager_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseScopeTargeting_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue3                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class AFortAIPawn*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue4                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue5                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue2, bool K2Node_Event_bNewIsTargeting, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue3, bool CallFunc_IsAssetNull_ReturnValue4, float CallFunc_GetTimeToNextFire_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess3, class UObject* Temp_object_Variable2, class UParticleSystem* K2Node_DynamicCast_AsParticle_System2, bool K2Node_DynamicCast_bSuccess4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_CustomEvent_Enable2, int32 K2Node_CustomEvent_TargetLimit2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded2, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, int32 CallFunc_SelectInt_ReturnValue2, class UObject* Temp_object_Variable3, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System3, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class AController* CallFunc_GetInstigatorController_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue2, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess6, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone2, bool K2Node_DynamicCast_bSuccess7, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess8, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_UseScopeTargeting_ReturnValue2, class APawn* CallFunc_GetInstigator_ReturnValue3, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn3, bool K2Node_DynamicCast_bSuccess9, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class APawn* CallFunc_GetInstigator_ReturnValue4, class APawn* CallFunc_GetInstigator_ReturnValue5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn4, bool K2Node_DynamicCast_bSuccess10, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn5, bool K2Node_DynamicCast_bSuccess11, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, bool CallFunc_UseScopeTargeting_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsDedicatedServer_ReturnValue2, class UObject* K2Node_CustomEvent_Loaded3, class UObject* Temp_object_Variable4, class UParticleSystem* K2Node_DynamicCast_AsParticle_System4, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_CustomEvent_Loaded4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AFortAIPawn* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue3, bool CallFunc_DoesSocketExist_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ExecuteUbergraph_B_Ranged_Generic");

	Params::AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue2 = K2Node_MathExpression_ReturnValue2;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_Enable_Or_Disable = K2Node_CustomEvent_Enable_Or_Disable;
	Parms.K2Node_CustomEvent_StencilBufferValue = K2Node_CustomEvent_StencilBufferValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.K2Node_Event_NewAlteration = K2Node_Event_NewAlteration;
	Parms.K2Node_Event_CosmeticMod = K2Node_Event_CosmeticMod;
	Parms.K2Node_Event_DynamicMaterialInstance = K2Node_Event_DynamicMaterialInstance;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue2 = CallFunc_IsAssetNull_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue3 = CallFunc_IsAssetNull_ReturnValue3;
	Parms.CallFunc_IsAssetNull_ReturnValue4 = CallFunc_IsAssetNull_ReturnValue4;
	Parms.CallFunc_GetTimeToNextFire_ReturnValue = CallFunc_GetTimeToNextFire_ReturnValue;
	Parms.CallFunc_GetLocalMagazineAmmoCount_ReturnValue = CallFunc_GetLocalMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_UseScopeTargeting_ReturnValue = CallFunc_UseScopeTargeting_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsParticle_System = K2Node_DynamicCast_AsParticle_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_DynamicCast_AsParticle_System2 = K2Node_DynamicCast_AsParticle_System2;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_CustomEvent_Enable2 = K2Node_CustomEvent_Enable2;
	Parms.K2Node_CustomEvent_TargetLimit2 = K2Node_CustomEvent_TargetLimit2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded2 = K2Node_CustomEvent_Loaded2;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CustomEvent_TargetLimit = K2Node_CustomEvent_TargetLimit;
	Parms.CallFunc_SelectInt_ReturnValue2 = CallFunc_SelectInt_ReturnValue2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	Parms.K2Node_DynamicCast_AsParticle_System3 = K2Node_DynamicCast_AsParticle_System3;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue = CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue2 = CallFunc_GetInstigatorController_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone2 = K2Node_DynamicCast_AsFort_Player_Controller_Zone2;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_GetWindManager_ReturnValue = CallFunc_GetWindManager_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue2 = CallFunc_GetInstigator_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Pawn2 = K2Node_DynamicCast_AsFort_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_UseScopeTargeting_ReturnValue2 = CallFunc_UseScopeTargeting_ReturnValue2;
	Parms.CallFunc_GetInstigator_ReturnValue3 = CallFunc_GetInstigator_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsFort_Pawn3 = K2Node_DynamicCast_AsFort_Pawn3;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue2 = CallFunc_GetLocalViewingPlayerController_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetInstigator_ReturnValue4 = CallFunc_GetInstigator_ReturnValue4;
	Parms.CallFunc_GetInstigator_ReturnValue5 = CallFunc_GetInstigator_ReturnValue5;
	Parms.K2Node_DynamicCast_AsFort_Pawn4 = K2Node_DynamicCast_AsFort_Pawn4;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_DynamicCast_AsFort_Pawn5 = K2Node_DynamicCast_AsFort_Pawn5;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue3 = CallFunc_GetLocalViewingPlayerController_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetSocketLocation_ReturnValue2 = CallFunc_GetSocketLocation_ReturnValue2;
	Parms.CallFunc_GetSocketLocation_ReturnValue3 = CallFunc_GetSocketLocation_ReturnValue3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_UseScopeTargeting_ReturnValue3 = CallFunc_UseScopeTargeting_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.K2Node_CustomEvent_Loaded3 = K2Node_CustomEvent_Loaded3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_DynamicCast_AsParticle_System4 = K2Node_DynamicCast_AsParticle_System4;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded4 = K2Node_CustomEvent_Loaded4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue4 = CallFunc_GetSocketLocation_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue5 = CallFunc_GetSocketLocation_ReturnValue5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue5 = CallFunc_Divide_FloatFloat_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_DoesSocketExist_ReturnValue2 = CallFunc_DoesSocketExist_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AmmoValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 LocalDefenderPawn                                                (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteraction_DefenderBeacon_C::CheckAmmoValid(bool* AmmoValid, class AFortAIPawn* LocalDefenderPawn, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "CheckAmmoValid");

	Params::UInteraction_DefenderBeacon_C_CheckAmmoValid_Params Parms;
	Parms.LocalDefenderPawn = LocalDefenderPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoValid != nullptr)
		*AmmoValid = Parms.AmmoValid;

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 LocalDefenderPawn                                                (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagMelee                                                         (Edit, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagPistol                                                        (Edit, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagSniper                                                        (Edit, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagShotgun                                                       (Edit, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagAssault                                                       (Edit, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteraction_DefenderBeacon_C::DisplayWeaponType(class AFortAIPawn* LocalDefenderPawn, const struct FGameplayTag& TagMelee, const struct FGameplayTag& TagPistol, const struct FGameplayTag& TagSniper, const struct FGameplayTag& TagShotgun, const struct FGameplayTag& TagAssault, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "DisplayWeaponType");

	Params::UInteraction_DefenderBeacon_C_DisplayWeaponType_Params Parms;
	Parms.LocalDefenderPawn = LocalDefenderPawn;
	Parms.TagMelee = TagMelee;
	Parms.TagPistol = TagPistol;
	Parms.TagSniper = TagSniper;
	Parms.TagShotgun = TagShotgun;
	Parms.TagAssault = TagAssault;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInteraction_DefenderBeacon_C::Construct()
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "Construct");

	Params::UInteraction_DefenderBeacon_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInteraction_DefenderBeacon_C::UpdateDefenderBeaconWidget()
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "UpdateDefenderBeaconWidget");

	Params::UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInteraction_DefenderBeacon_C::Destruct()
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "Destruct");

	Params::UInteraction_DefenderBeacon_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 OldWeapon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteraction_DefenderBeacon_C::OnDefenderEquippedWeapon(class AFortWeapon* NewWeapon, class AFortWeapon* OldWeapon)
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "OnDefenderEquippedWeapon");

	Params::UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.OldWeapon = OldWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetLastInteractErrorText_ReturnValue                    ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_K2_FindExistingItemForDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_K2_FindExistingItemForDefinition_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAmmoValid_AmmoValid                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAmmoValid_AmmoValid2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortWeapon*                 K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_OldWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UInteraction_DefenderBeacon_C::ExecuteUbergraph_Interaction_DefenderBeacon(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLastInteractErrorText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UFortItem* CallFunc_K2_FindExistingItemForDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, class UFortItem* CallFunc_K2_FindExistingItemForDefinition_ReturnValue2, bool CallFunc_CheckAmmoValid_AmmoValid, bool CallFunc_CheckAmmoValid_AmmoValid2, int32 CallFunc_GetRemainingAmmo_ReturnValue, class UFortWorldItemDefinition* CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, bool CallFunc_IsValid_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_OldWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("Interaction_DefenderBeacon_C", "ExecuteUbergraph_Interaction_DefenderBeacon");

	Params::UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLastInteractErrorText_ReturnValue = CallFunc_GetLastInteractErrorText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_K2_FindExistingItemForDefinition_ReturnValue = CallFunc_K2_FindExistingItemForDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_K2_FindExistingItemForDefinition_ReturnValue2 = CallFunc_K2_FindExistingItemForDefinition_ReturnValue2;
	Parms.CallFunc_CheckAmmoValid_AmmoValid = CallFunc_CheckAmmoValid_AmmoValid;
	Parms.CallFunc_CheckAmmoValid_AmmoValid2 = CallFunc_CheckAmmoValid_AmmoValid2;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue = CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_OldWeapon = K2Node_CustomEvent_OldWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

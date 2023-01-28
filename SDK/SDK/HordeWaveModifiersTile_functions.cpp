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


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveModifiersTile_C::PlayIntro()
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "PlayIntro");

	Params::UHordeWaveModifiersTile_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ModifierItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UHordeWaveModifiersTile_C::SetModifierItem(class UFortItem* ModifierItem, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "SetModifierItem");

	Params::UHordeWaveModifiersTile_C_SetModifierItem_Params Parms;
	Parms.ModifierItem = ModifierItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnAnimReadyForNextModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveModifiersTile_C::OnAnimReadyForNextModifier()
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "OnAnimReadyForNextModifier");

	Params::UHordeWaveModifiersTile_C_OnAnimReadyForNextModifier_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeWaveModifiersTile_C::SetData(class UObject* InData)
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "SetData");

	Params::UHordeWaveModifiersTile_C_SetData_Params Parms;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_InData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UHordeWaveModifiersTile_C::ExecuteUbergraph_HordeWaveModifiersTile(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "ExecuteUbergraph_HordeWaveModifiersTile");

	Params::UHordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InData = K2Node_CustomEvent_InData;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeWaveModifiersTile_C::OnReadyForNextModifierPresentation__DelegateSignature()
{
	static auto Func = Class->GetFunction("HordeWaveModifiersTile_C", "OnReadyForNextModifierPresentation__DelegateSignature");

	Params::UHordeWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

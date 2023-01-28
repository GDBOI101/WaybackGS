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


// Function WaveModifiersTile.WaveModifiersTile_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWaveModifiersTile_C::PlayIntro()
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "PlayIntro");

	Params::UWaveModifiersTile_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ModifierItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UWaveModifiersTile_C::SetModifierItem(class UFortItem* ModifierItem, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "SetModifierItem");

	Params::UWaveModifiersTile_C_SetModifierItem_Params Parms;
	Parms.ModifierItem = ModifierItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaveModifiersTile.WaveModifiersTile_C.OnAnimReadyForNextModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWaveModifiersTile_C::OnAnimReadyForNextModifier()
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "OnAnimReadyForNextModifier");

	Params::UWaveModifiersTile_C_OnAnimReadyForNextModifier_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaveModifiersTile.WaveModifiersTile_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWaveModifiersTile_C::SetData(class UObject* InData)
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "SetData");

	Params::UWaveModifiersTile_C_SetData_Params Parms;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_InData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UWaveModifiersTile_C::ExecuteUbergraph_WaveModifiersTile(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "ExecuteUbergraph_WaveModifiersTile");

	Params::UWaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InData = K2Node_CustomEvent_InData;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaveModifiersTile.WaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWaveModifiersTile_C::OnReadyForNextModifierPresentation__DelegateSignature()
{
	static auto Func = Class->GetFunction("WaveModifiersTile_C", "OnReadyForNextModifierPresentation__DelegateSignature");

	Params::UWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

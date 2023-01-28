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


// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                 AbilityPerk                                                      (Parm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// TArray<class UFortGadgetItemDefinition*>CallFunc_BP_GetGadgets_GadgetItemDefinitions                     (ZeroConstructor, ReferenceParm)
// class UFortGadgetItemDefinition*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// class UFortAbilityKit*             CallFunc_GetGrantedAbilityKit_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilitiesPageTile_C::SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "SetAbilityPerkInfo");

	Params::UAbilitiesPageTile_C_SetAbilityPerkInfo_Params Parms;
	Parms.AbilityPerk = AbilityPerk;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_BP_GetGadgets_GadgetItemDefinitions = CallFunc_BP_GetGadgets_GadgetItemDefinitions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetGrantedAbilityKit_ReturnValue = CallFunc_GetGrantedAbilityKit_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPageTile_C::UpdateKeyBinding(bool K2Node_SwitchInteger_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "UpdateKeyBinding");

	Params::UAbilitiesPageTile_C_UpdateKeyBinding_Params Parms;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SlottedAbilityItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGadgetItemDefinition*   K2Node_DynamicCast_AsFort_Gadget_Item_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()

void UAbilitiesPageTile_C::SetAbilityItemInfo(class UFortItem* SlottedAbilityItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGadgetItemDefinition* K2Node_DynamicCast_AsFort_Gadget_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "SetAbilityItemInfo");

	Params::UAbilitiesPageTile_C_SetAbilityItemInfo_Params Parms;
	Parms.SlottedAbilityItem = SlottedAbilityItem;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Gadget_Item_Definition = K2Node_DynamicCast_AsFort_Gadget_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPageTile.AbilitiesPageTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAbilitiesPageTile_C::Construct()
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "Construct");

	Params::UAbilitiesPageTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPageTile_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "HandleInputMethodChanged");

	Params::UAbilitiesPageTile_C_HandleInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPageTile_C::ExecuteUbergraph_AbilitiesPageTile(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad)
{
	static auto Func = Class->GetFunction("AbilitiesPageTile_C", "ExecuteUbergraph_AbilitiesPageTile");

	Params::UAbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

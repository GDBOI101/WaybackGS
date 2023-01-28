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


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.GetToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UItemCraftingIngredientListEntryHaveNeed_C::GetToolTipWidget(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "GetToolTipWidget");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_GetToolTipWidget_Params Parms;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::Refresh(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "Refresh");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_Refresh_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.DoDesignTimeRandomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_MakeItemQuantityPair_ReturnValue                        ()

void UItemCraftingIngredientListEntryHaveNeed_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "DoDesignTimeRandomization");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_DoDesignTimeRandomization_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue2 = CallFunc_RandomInteger_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeItemQuantityPair_ReturnValue = CallFunc_MakeItemQuantityPair_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "PreConstruct");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_HandleDifferentItemOrQuantitySetBP_Params Parms;
	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed(int32 EntryPoint, bool K2Node_Event_IsBeingReset, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed");

	Params::UItemCraftingIngredientListEntryHaveNeed_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

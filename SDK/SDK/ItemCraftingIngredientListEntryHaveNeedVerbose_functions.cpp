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


// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UItemCraftingIngredientListEntryHaveNeedVerbose_C::Refresh(enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_C", "Refresh");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_C_Refresh_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.DoDesignTimeRandomization
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

void UItemCraftingIngredientListEntryHaveNeedVerbose_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_C", "DoDesignTimeRandomization");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_C_DoDesignTimeRandomization_Params Parms;
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


// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_C", "PreConstruct");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_C_HandleDifferentItemOrQuantitySetBP_Params Parms;
	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_C::ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose(int32 EntryPoint, bool K2Node_Event_IsBeingReset, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_C", "ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

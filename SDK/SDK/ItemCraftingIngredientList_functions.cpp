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


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>ReturnIngredients                                                (Parm, OutParm, ZeroConstructor)
// TArray<struct FFortItemQuantityPair>Ingredients                                                      (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSchematicRequirement>CallFunc_GetSchematicRequirements_Requirements                   (ZeroConstructor, ReferenceParm)
// struct FSchematicRequirement       CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_MakeItemQuantityPair_ReturnValue                        ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCraftingIngredientList_C::GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients, const TArray<struct FFortItemQuantityPair>& Ingredients, int32 Temp_int_Array_Index_Variable, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "GetIngredients");

	Params::UItemCraftingIngredientList_C_GetIngredients_Params Parms;
	Parms.Item = Item;
	Parms.Ingredients = Ingredients;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicRequirements_Requirements = CallFunc_GetSchematicRequirements_Requirements;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeItemQuantityPair_ReturnValue = CallFunc_MakeItemQuantityPair_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnIngredients != nullptr)
		*ReturnIngredients = Parms.ReturnIngredients;

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToCompare                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetIngredients_ReturnIngredients                        (ZeroConstructor, ReferenceParm)

void UItemCraftingIngredientList_C::SetItemToCompare(class UFortItem* ItemToCompare, TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "SetItemToCompare");

	Params::UItemCraftingIngredientList_C_SetItemToCompare_Params Parms;
	Parms.ItemToCompare = ItemToCompare;
	Parms.CallFunc_GetIngredients_ReturnIngredients = CallFunc_GetIngredients_ReturnIngredients;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NeedsTracking                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientList_C::ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "ItemNeedsInventoryTracking");

	Params::UItemCraftingIngredientList_C_ItemNeedsInventoryTracking_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedsTracking != nullptr)
		*NeedsTracking = Parms.NeedsTracking;

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ItemChanged                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AmmoChanged                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IngredientsChanged                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientList_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "HandleItemChanged");

	Params::UItemCraftingIngredientList_C_HandleItemChanged_Params Parms;
	Parms.ItemChanged = ItemChanged;
	Parms.AmmoChanged = AmmoChanged;
	Parms.IngredientsChanged = IngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemCraftingIngredientListEntryHaveNeedVerbose_C*K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemCraftingIngredientListEntryHaveNeed_C*K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCraftingIngredientList_C::RefreshInventoryTracking(int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UItemCraftingIngredientListEntryHaveNeedVerbose_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose, bool K2Node_DynamicCast_bSuccess, class UItemCraftingIngredientListEntryHaveNeed_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "RefreshInventoryTracking");

	Params::UItemCraftingIngredientList_C_RefreshInventoryTracking_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose = K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need = K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemCraftingIngredientList_C::HandleWorldItemsChanged()
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "HandleWorldItemsChanged");

	Params::UItemCraftingIngredientList_C_HandleWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemCraftingIngredientList_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "HandleWorldItemListChanged");

	Params::UItemCraftingIngredientList_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>CallFunc_GetIngredients_ReturnIngredients                        (ZeroConstructor, ReferenceParm)

void UItemCraftingIngredientList_C::Refresh(TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "Refresh");

	Params::UItemCraftingIngredientList_C_Refresh_Params Parms;
	Parms.CallFunc_GetIngredients_ReturnIngredients = CallFunc_GetIngredients_ReturnIngredients;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ItemNeedsInventoryTracking_NeedsTracking                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemNeedsInventoryTracking_NeedsTracking2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UItemCraftingIngredientList_C::SetItemToRepresent(class UFortItem* Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "SetItemToRepresent");

	Params::UItemCraftingIngredientList_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_ItemNeedsInventoryTracking_NeedsTracking = CallFunc_ItemNeedsInventoryTracking_NeedsTracking;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ItemNeedsInventoryTracking_NeedsTracking2 = CallFunc_ItemNeedsInventoryTracking_NeedsTracking2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCraftingIngredientList_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, class UFortItemDefinition* K2Node_Select_Default, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "DoDesignTimeRandomization");

	Params::UItemCraftingIngredientList_C_DoDesignTimeRandomization_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientList_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "PreConstruct");

	Params::UItemCraftingIngredientList_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCraftingIngredientList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "AddListEntry");

	Params::UItemCraftingIngredientList_C_AddListEntry_Params Parms;
	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCraftingIngredientList_C::ExecuteUbergraph_ItemCraftingIngredientList(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientList_C", "ExecuteUbergraph_ItemCraftingIngredientList");

	Params::UItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

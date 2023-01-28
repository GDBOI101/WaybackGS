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


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.ShowHaveNeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HaveNeed                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ShowHaveNeed(bool* HaveNeed, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "ShowHaveNeed");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_ShowHaveNeed_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HaveNeed != nullptr)
		*HaveNeed = Parms.HaveNeed;

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.RefreshPreviewData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemEntryPreviewData   CallFunc_GetPreviewData_OutPreviewData                           (NoDestructor)
// bool                               CallFunc_IsBeingPreviewed_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::RefreshPreviewData(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "RefreshPreviewData");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_RefreshPreviewData_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetPreviewData_OutPreviewData = CallFunc_GetPreviewData_OutPreviewData;
	Parms.CallFunc_IsBeingPreviewed_ReturnValue = CallFunc_IsBeingPreviewed_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.RefreshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowHaveNeed_HaveNeed                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::RefreshVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_ShowHaveNeed_HaveNeed, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "RefreshVisibility");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_RefreshVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_ShowHaveNeed_HaveNeed = CallFunc_ShowHaveNeed_HaveNeed;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowHaveNeed_HaveNeed                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::Refresh(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, bool CallFunc_ShowHaveNeed_HaveNeed, enum class ESlateVisibility K2Node_Select_Default, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "Refresh");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_Refresh_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_ShowHaveNeed_HaveNeed = CallFunc_ShowHaveNeed_HaveNeed;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.DoDesignTimeRandomization
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

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "DoDesignTimeRandomization");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_DoDesignTimeRandomization_Params Parms;
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


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "PreConstruct");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_HandleDifferentItemOrQuantitySetBP_Params Parms;
	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreviewStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::PreviewStarted()
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "PreviewStarted");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_PreviewStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreviewEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::PreviewEnded()
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "PreviewEnded");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_PreviewEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C", "ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK");

	Params::UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

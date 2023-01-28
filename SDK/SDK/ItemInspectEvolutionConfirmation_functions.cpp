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


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemEvolutionRestrictionReasonTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEvolveRestrictionReasonText_ReturnValue              ()
// enum class EItemEvolutionRestrictionReasonTemp_byte_Variable2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemEvolutionRestrictionReason>CallFunc_CanEvolve_OutRestrictionReasons                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanEvolve_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEvolveRestrictionReasonText_ReturnValue2             ()
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionConfirmation_C::SetEvolutionRestrictions(enum class EItemEvolutionRestrictionReason Temp_byte_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue, enum class EItemEvolutionRestrictionReason Temp_byte_Variable2, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanEvolve_OutRestrictionReasons, bool CallFunc_CanEvolve_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "SetEvolutionRestrictions");

	Params::UItemInspectEvolutionConfirmation_C_SetEvolutionRestrictions_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEvolveRestrictionReasonText_ReturnValue = CallFunc_GetEvolveRestrictionReasonText_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_CanEvolve_OutRestrictionReasons = CallFunc_CanEvolve_OutRestrictionReasons;
	Parms.CallFunc_CanEvolve_ReturnValue = CallFunc_CanEvolve_ReturnValue;
	Parms.CallFunc_GetEvolveRestrictionReasonText_ReturnValue2 = CallFunc_GetEvolveRestrictionReasonText_ReturnValue2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue2 = CallFunc_Array_Contains_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionConfirmation_C::ClearEvolutionRepresented()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "ClearEvolutionRepresented");

	Params::UItemInspectEvolutionConfirmation_C_ClearEvolutionRepresented_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumEvolutionOptions_NumRecipes                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectEvolutionChoiceEntry_C*K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionConfirmation_C::OnShow(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "OnShow");

	Params::UItemInspectEvolutionConfirmation_C_OnShow_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetNumEvolutionOptions_NumRecipes = CallFunc_GetNumEvolutionOptions_NumRecipes;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry = K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionConfirmation_C::HideEvolutionOptions()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "HideEvolutionOptions");

	Params::UItemInspectEvolutionConfirmation_C_HideEvolutionOptions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionConfirmation_C::ShowEvolutionOptions()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "ShowEvolutionOptions");

	Params::UItemInspectEvolutionConfirmation_C_ShowEvolutionOptions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumRecipes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::GetNumEvolutionOptions(int32* NumRecipes, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "GetNumEvolutionOptions");

	Params::UItemInspectEvolutionConfirmation_C_GetNumEvolutionOptions_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumRecipes != nullptr)
		*NumRecipes = Parms.NumRecipes;

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   TemporaryEvolutionItem                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectEvolutionChoiceEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipe                     CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item2                                         ()
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllowedConversionIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionConfirmation_C::SetupEvolutionOptions(class UFortItem* TemporaryEvolutionItem, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsAllowedConversionIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "SetupEvolutionOptions");

	Params::UItemInspectEvolutionConfirmation_C_SetupEvolutionOptions_Params Parms;
	Parms.TemporaryEvolutionItem = TemporaryEvolutionItem;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsAllowedConversionIndex_ReturnValue = CallFunc_IsAllowedConversionIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::HandleEvolutionOptionSelected(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "HandleEvolutionOptionSelected");

	Params::UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionSelected_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EvolutionIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   EvolutionItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Ingredients                                                      (Edit, ZeroConstructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// struct FRecipe                     CallFunc_Array_Get_Item                                          ()
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item2                                         ()
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UItemInspectEvolutionConfirmation_C::SetEvolutionToRepresent(int32 EvolutionIndex, class UFortItem* EvolutionItem, const TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "SetEvolutionToRepresent");

	Params::UItemInspectEvolutionConfirmation_C_SetEvolutionToRepresent_Params Parms;
	Parms.EvolutionIndex = EvolutionIndex;
	Parms.EvolutionItem = EvolutionItem;
	Parms.Ingredients = Ingredients;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanEvolve                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoEvolutions                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumEvolutionOptions_NumRecipes                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemEvolutionRestrictionReason>CallFunc_CanEvolve_OutRestrictionReasons                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanEvolve_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemEvolutionRestrictionReasonCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionConfirmation_C::SetItemToRepresent(class UFortItem* Item, bool CanEvolve, bool NoEvolutions, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanEvolve_OutRestrictionReasons, bool CallFunc_CanEvolve_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EItemEvolutionRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "SetItemToRepresent");

	Params::UItemInspectEvolutionConfirmation_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.CanEvolve = CanEvolve;
	Parms.NoEvolutions = NoEvolutions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumEvolutionOptions_NumRecipes = CallFunc_GetNumEvolutionOptions_NumRecipes;
	Parms.CallFunc_CanEvolve_OutRestrictionReasons = CallFunc_CanEvolve_OutRestrictionReasons;
	Parms.CallFunc_CanEvolve_ReturnValue = CallFunc_CanEvolve_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectEvolutionConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionConfirmation_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "Construct");

	Params::UItemInspectEvolutionConfirmation_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::ExecuteUbergraph_ItemInspectEvolutionConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "ExecuteUbergraph_ItemInspectEvolutionConfirmation");

	Params::UItemInspectEvolutionConfirmation_C_ExecuteUbergraph_ItemInspectEvolutionConfirmation_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectEvolutionConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "OnEvolutionOptionUnhovered__DelegateSignature");

	Params::UItemInspectEvolutionConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionConfirmation_C::OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "OnEvolutionOptionHovered__DelegateSignature");

	Params::UItemInspectEvolutionConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionConfirmation_C::OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionConfirmation_C", "OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectEvolutionConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

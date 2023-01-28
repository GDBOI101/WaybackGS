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


// Function ItemInspectScreen.ItemInspectScreen_C.PassThrough
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::PassThrough(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "PassThrough");

	Params::UItemInspectScreen_C_PassThrough_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectModeForChildPanels");

	Params::UItemInspectScreen_C_SetInspectModeForChildPanels_Params Parms;
	Parms.NewInspectMode = NewInspectMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetTabButtonStyle");

	Params::UItemInspectScreen_C_SetTabButtonStyle_Params Parms;
	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowPreviewLabel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowPreviewHeader");

	Params::UItemInspectScreen_C_ShowPreviewHeader_Params Parms;
	Parms.ShowPreviewLabel = ShowPreviewLabel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshCallout(bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshCallout");

	Params::UItemInspectScreen_C_RefreshCallout_Params Parms;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematicOrCraftedWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEvolutions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable5, enum class EInputActionState Temp_byte_Variable6, bool Temp_bool_Variable3, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasEvolutions_ReturnValue, bool CallFunc_IsInZone_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EInputActionState K2Node_Select2_Default, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class EInputActionState K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshActionHandlers");

	Params::UItemInspectScreen_C_RefreshActionHandlers_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsSchematicOrCraftedWeapon_ReturnValue = CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_HasEvolutions_ReturnValue = CallFunc_HasEvolutions_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ResultingItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionComplete");

	Params::UItemInspectScreen_C_HandleEvolutionComplete_Params Parms;
	Parms.ResultingItems = ResultingItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshOnUpgrade");

	Params::UItemInspectScreen_C_RefreshOnUpgrade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleCursorModeChanging");

	Params::UItemInspectScreen_C_HandleCursorModeChanging_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowUpgrading                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowEvolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowFavoriting                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldShowPreviewDisplay                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OpenItemInspect__Function_(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavoriting, bool ShouldShowPreviewDisplay)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OpenItemInspect (Function)");

	Params::UItemInspectScreen_C_OpenItemInspect__Function__Params Parms;
	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavoriting = ShouldAllowFavoriting;
	Parms.ShouldShowPreviewDisplay = ShouldShowPreviewDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ResetDetailsPanel");

	Params::UItemInspectScreen_C_ResetDetailsPanel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle4                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle5                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle6                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle7                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle8                            (NoDestructor)

void UItemInspectScreen_C::SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle8)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetupActionHandlers");

	Params::UItemInspectScreen_C_SetupActionHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeStruct_DataTableRowHandle4 = K2Node_MakeStruct_DataTableRowHandle4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_DataTableRowHandle5 = K2Node_MakeStruct_DataTableRowHandle5;
	Parms.K2Node_MakeStruct_DataTableRowHandle6 = K2Node_MakeStruct_DataTableRowHandle6;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_MakeStruct_DataTableRowHandle7 = K2Node_MakeStruct_DataTableRowHandle7;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_MakeStruct_DataTableRowHandle8 = K2Node_MakeStruct_DataTableRowHandle8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   EvolutionItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Results                                                          (Edit, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipe                     CallFunc_Array_Get_Item2                                         ()
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetFirstEvolutionOption");

	Params::UItemInspectScreen_C_GetFirstEvolutionOption_Params Parms;
	Parms.Results = Results;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionItem != nullptr)
		*EvolutionItem = Parms.EvolutionItem;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceSelected");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceUnhovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceHovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetInspectMode(enum class EFortItemInspectionMode NewInspectMode, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectMode");

	Params::UItemInspectScreen_C_SetInspectMode_Params Parms;
	Parms.NewInspectMode = NewInspectMode;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleUpgrade(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgrade");

	Params::UItemInspectScreen_C_HandleUpgrade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolution(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolution");

	Params::UItemInspectScreen_C_HandleEvolution_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleView(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleView");

	Params::UItemInspectScreen_C_HandleView_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleFavorite(bool* PassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleFavorite");

	Params::UItemInspectScreen_C_HandleFavorite_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleBack(bool* PassThrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleBack");

	Params::UItemInspectScreen_C_HandleBack_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAlterationItemDefinition*>CallFunc_GetAlterations_ReturnValue                              (ZeroConstructor, ReferenceParm)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo2                        ()
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo3                        ()
// bool                               CallFunc_RegisterFortTab_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo4                        ()
// bool                               CallFunc_RegisterFortTab_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterFortTab_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetItemToRepresent(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess2, class UFortHero* K2Node_DynamicCast_AsFort_Hero2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo3, bool CallFunc_RegisterFortTab_ReturnValue2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo4, bool CallFunc_RegisterFortTab_ReturnValue3, bool CallFunc_RegisterFortTab_ReturnValue4)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetItemToRepresent");

	Params::UItemInspectScreen_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.CallFunc_GetAlterations_ReturnValue = CallFunc_GetAlterations_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Hero2 = K2Node_DynamicCast_AsFort_Hero2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo2 = K2Node_MakeStruct_FortTabButtonLabelInfo2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo3 = K2Node_MakeStruct_FortTabButtonLabelInfo3;
	Parms.CallFunc_RegisterFortTab_ReturnValue2 = CallFunc_RegisterFortTab_ReturnValue2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo4 = K2Node_MakeStruct_FortTabButtonLabelInfo4;
	Parms.CallFunc_RegisterFortTab_ReturnValue3 = CallFunc_RegisterFortTab_ReturnValue3;
	Parms.CallFunc_RegisterFortTab_ReturnValue4 = CallFunc_RegisterFortTab_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203");

	Params::UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Construct");

	Params::UItemInspectScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnActivated");

	Params::UItemInspectScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowUpgrading                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowEvolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowFavorite                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTemporaryItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OpenItemInspect");

	Params::UItemInspectScreen_C_OpenItemInspect_Params Parms;
	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavorite = ShouldAllowFavorite;
	Parms.IsTemporaryItem = IsTemporaryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Destruct");

	Params::UItemInspectScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnDeactivated");

	Params::UItemInspectScreen_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnInputModeChanged");

	Params::UItemInspectScreen_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bItemChanged                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bAmmoChanged                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIngredientsChanged                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_ItemToInspect                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode K2Node_Event_Mode                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShouldAllowUpgrading                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShouldAllowEvolution                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShouldAllowFavorite                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsTemporaryItem                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleUpgrade_PassThrough                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleEvolution_PassThrough                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPanelOnStack_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemView_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_MCPContextUpgradeItem*CallFunc_UpgradeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_HandleBack_PassThrough, bool K2Node_ComponentBoundEvent_bItemChanged, bool K2Node_ComponentBoundEvent_bAmmoChanged, bool K2Node_ComponentBoundEvent_bIngredientsChanged, bool CallFunc_HandleBack_PassThrough2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortItem* K2Node_Event_ItemToInspect, enum class EFortItemInspectionMode K2Node_Event_Mode, bool K2Node_Event_ShouldAllowUpgrading, bool K2Node_Event_ShouldAllowEvolution, bool K2Node_Event_ShouldAllowFavorite, bool K2Node_Event_IsTemporaryItem, class UFortMcpContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleUpgrade_PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_HandleEvolution_PassThrough, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortMcpContext* CallFunc_GetContext_ReturnValue9, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_IsPanelOnStack_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue10, class UItemView_C* CallFunc_Create_ReturnValue, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_Event_bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ExecuteUbergraph_ItemInspectScreen");

	Params::UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.K2Node_ComponentBoundEvent_bItemChanged = K2Node_ComponentBoundEvent_bItemChanged;
	Parms.K2Node_ComponentBoundEvent_bAmmoChanged = K2Node_ComponentBoundEvent_bAmmoChanged;
	Parms.K2Node_ComponentBoundEvent_bIngredientsChanged = K2Node_ComponentBoundEvent_bIngredientsChanged;
	Parms.CallFunc_HandleBack_PassThrough2 = CallFunc_HandleBack_PassThrough2;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex = K2Node_ComponentBoundEvent_RecipeIndex;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_Event_ItemToInspect = K2Node_Event_ItemToInspect;
	Parms.K2Node_Event_Mode = K2Node_Event_Mode;
	Parms.K2Node_Event_ShouldAllowUpgrading = K2Node_Event_ShouldAllowUpgrading;
	Parms.K2Node_Event_ShouldAllowEvolution = K2Node_Event_ShouldAllowEvolution;
	Parms.K2Node_Event_ShouldAllowFavorite = K2Node_Event_ShouldAllowFavorite;
	Parms.K2Node_Event_IsTemporaryItem = K2Node_Event_IsTemporaryItem;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HandleUpgrade_PassThrough = CallFunc_HandleUpgrade_PassThrough;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_HandleEvolution_PassThrough = CallFunc_HandleEvolution_PassThrough;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.CallFunc_IsPanelOnStack_ReturnValue = CallFunc_IsPanelOnStack_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_UpgradeItem_ReturnValue = CallFunc_UpgradeItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

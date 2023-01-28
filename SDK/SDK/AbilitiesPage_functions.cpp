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


// Function AbilitiesPage.AbilitiesPage_C.HandleInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilitiesPage_C::HandleInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "HandleInventory");

	Params::UAbilitiesPage_C_HandleInventory_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGadgetItemDefinition*   InGadgetItemDef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPage_C::UpdateAbilityMovie(class UFortGadgetItemDefinition* InGadgetItemDef, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "UpdateAbilityMovie");

	Params::UAbilitiesPage_C_UpdateAbilityMovie_Params Parms;
	Parms.InGadgetItemDef = InGadgetItemDef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGadgetItemDefinition*>SlottedGadgets                                                   (Edit, ZeroConstructor)
// TArray<class UAbilitiesPageTile_C*>AvailableSlots                                                   (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitiesPageTile_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHeroManagementContext*  CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHeroUIData                 CallFunc_GetHeroData_HeroData                                    (NoDestructor)
// bool                               CallFunc_GetHeroData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortUIPerk>         CallFunc_GetHeroAbilityPerks_HeroAbilityPerks                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetHeroAbilityPerks_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUIPerk                 CallFunc_Array_Get_Item2                                         ()
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetGrantedAbilityKit_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortGadgetItemDefinition*>CallFunc_BP_GetGadgets_GadgetItemDefinitions                     (ZeroConstructor, ReferenceParm)
// class UFortGadgetItemDefinition*   CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPage_C::InitializeAbilityTiles(const TArray<class UFortGadgetItemDefinition*>& SlottedGadgets, const TArray<class UAbilitiesPageTile_C*>& AvailableSlots, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAbilitiesPageTile_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, class UFortHeroManagementContext* CallFunc_GetContext_ReturnValue, const struct FHeroUIData& CallFunc_GetHeroData_HeroData, bool CallFunc_GetHeroData_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, bool CallFunc_Array_RemoveItem_ReturnValue2, bool CallFunc_Array_RemoveItem_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, TArray<struct FFortUIPerk>& CallFunc_GetHeroAbilityPerks_HeroAbilityPerks, bool CallFunc_GetHeroAbilityPerks_ReturnValue, const struct FFortUIPerk& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item3, bool CallFunc_Array_Contains_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue4, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue5, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "InitializeAbilityTiles");

	Params::UAbilitiesPage_C_InitializeAbilityTiles_Params Parms;
	Parms.SlottedGadgets = SlottedGadgets;
	Parms.AvailableSlots = AvailableSlots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroData_HeroData = CallFunc_GetHeroData_HeroData;
	Parms.CallFunc_GetHeroData_ReturnValue = CallFunc_GetHeroData_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_RemoveItem_ReturnValue2 = CallFunc_Array_RemoveItem_ReturnValue2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue3 = CallFunc_Array_RemoveItem_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetHeroAbilityPerks_HeroAbilityPerks = CallFunc_GetHeroAbilityPerks_HeroAbilityPerks;
	Parms.CallFunc_GetHeroAbilityPerks_ReturnValue = CallFunc_GetHeroAbilityPerks_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGrantedAbilityKit_ReturnValue = CallFunc_GetGrantedAbilityKit_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BP_GetGadgets_GadgetItemDefinitions = CallFunc_BP_GetGadgets_GadgetItemDefinitions;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue = CallFunc_GetQuickBarSlottedItem_ReturnValue;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue2 = CallFunc_GetQuickBarSlottedItem_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue3 = CallFunc_GetQuickBarSlottedItem_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue4 = CallFunc_GetQuickBarSlottedItem_ReturnValue4;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue5 = CallFunc_GetQuickBarSlottedItem_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                ButtonContainer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitiesPageTile_C*        K2Node_DynamicCast_AsAbilities_Page_Tile                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilitiesPage_C::AddTilesToButtonGroup(class UVerticalBox* ButtonContainer, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitiesPageTile_C* K2Node_DynamicCast_AsAbilities_Page_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "AddTilesToButtonGroup");

	Params::UAbilitiesPage_C_AddTilesToButtonGroup_Params Parms;
	Parms.ButtonContainer = ButtonContainer;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbilities_Page_Tile = K2Node_DynamicCast_AsAbilities_Page_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               InSelectedButton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilitiesPage_C::HandleSelectedButtonChanged(class UCommonButton* InSelectedButton, int32 InSelectedButtonIndex, class UCommonButton* NewLocalVar_0)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "HandleSelectedButtonChanged");

	Params::UAbilitiesPage_C_HandleSelectedButtonChanged_Params Parms;
	Parms.InSelectedButton = InSelectedButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               AbilityButton                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitiesPageTile_C*        K2Node_DynamicCast_AsAbilities_Page_Tile                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTextFromToken_OutText                         ()
// bool                               CallFunc_GetTooltipTextFromToken_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTooltipTextFromToken_OutText2                        ()
// bool                               CallFunc_GetTooltipTextFromToken_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()

void UAbilitiesPage_C::OnAbilitySelected(class UCommonButton* AbilityButton, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UAbilitiesPageTile_C* K2Node_DynamicCast_AsAbilities_Page_Tile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, class FText CallFunc_GetTooltipTextFromToken_OutText2, bool CallFunc_GetTooltipTextFromToken_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "OnAbilitySelected");

	Params::UAbilitiesPage_C_OnAbilitySelected_Params Parms;
	Parms.AbilityButton = AbilityButton;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbilities_Page_Tile = K2Node_DynamicCast_AsAbilities_Page_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue = CallFunc_GetTier_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue2 = CallFunc_Conv_ByteToInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetTooltipTextFromToken_OutText = CallFunc_GetTooltipTextFromToken_OutText;
	Parms.CallFunc_GetTooltipTextFromToken_ReturnValue = CallFunc_GetTooltipTextFromToken_ReturnValue;
	Parms.CallFunc_GetTooltipTextFromToken_OutText2 = CallFunc_GetTooltipTextFromToken_OutText2;
	Parms.CallFunc_GetTooltipTextFromToken_ReturnValue2 = CallFunc_GetTooltipTextFromToken_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilitiesPage_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "HandleBack");

	Params::UAbilitiesPage_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AbilitiesPage.AbilitiesPage_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbilitiesPage_C::OnActivated()
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "OnActivated");

	Params::UAbilitiesPage_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilitiesPage_C::OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "OnQuickbarContentsChanged");

	Params::UAbilitiesPage_C_OnQuickbarContentsChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAbilitiesPage_C::Construct()
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "Construct");

	Params::UAbilitiesPage_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbilitiesPage_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "OnDeactivated");

	Params::UAbilitiesPage_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)

void UAbilitiesPage_C::ExecuteUbergraph_AbilitiesPage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue2, bool CallFunc_HasAnyUserFocus_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3)
{
	static auto Func = Class->GetFunction("AbilitiesPage_C", "ExecuteUbergraph_AbilitiesPage");

	Params::UAbilitiesPage_C_ExecuteUbergraph_AbilitiesPage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue2 = CallFunc_GetButtonAtIndex_ReturnValue2;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

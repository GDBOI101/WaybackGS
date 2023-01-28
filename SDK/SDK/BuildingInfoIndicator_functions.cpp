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


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::RefreshBuildingInfo()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "RefreshBuildingInfo");

	Params::UBuildingInfoIndicator_C_RefreshBuildingInfo_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBar                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              QuickBarSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleQuickbarFocusChanged(enum class EFortQuickBars QuickBar, int32 QuickBarSlot)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleQuickbarFocusChanged");

	Params::UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params Parms;
	Parms.QuickBar = QuickBar;
	Parms.QuickBarSlot = QuickBarSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*               BuildingTrap                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleAttachedTrapChanged(class ABuildingTrap* BuildingTrap)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleAttachedTrapChanged");

	Params::UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params Parms;
	Parms.BuildingTrap = BuildingTrap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanBePlayerEdited                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAnyTrapAttached                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTrapAttachedFacingPlayer                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPreviewTrapAttached                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuildingInteractionInteractionType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InteractionCost                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       BuildingMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BuildKeybindAction                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlaceTrapAvailable                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TopTrapActive                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TrapAvailable                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EditAvailable                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuildingInteractionTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingInteractionTemp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTrapAvailableForBuilding_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerBuilt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTrapReadyForBuilding_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTrapAttachTypeName_ReturnValue                       ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UWidget*                     K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::UpdateBuildingInfo_InteractionWidgets(bool Interactable, bool CanBePlayerEdited, bool IsAnyTrapAttached, bool IsTrapAttachedFacingPlayer, bool IsPreviewTrapAttached, enum class EFortBuildingInteraction InteractionType, int32 InteractionCost, enum class EFortResourceType BuildingMaterial, class FName BuildKeybindAction, bool PlaceTrapAvailable, bool TopTrapActive, bool TrapAvailable, bool EditAvailable, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortBuildingInteraction Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortBuildingInteraction Temp_byte_Variable10, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, bool Temp_bool_Variable3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue5, enum class ESlateVisibility Temp_byte_Variable13, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable14, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue4, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor2, bool K2Node_DynamicCast_bSuccess2, bool Temp_bool_Variable4, bool CallFunc_IsTrapAvailableForBuilding_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_IsPlayerBuilt_ReturnValue, bool Temp_bool_Variable5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, const struct FLinearColor& K2Node_Select5_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable15, enum class ESlateVisibility Temp_byte_Variable16, bool Temp_bool_Variable6, enum class ESlateVisibility K2Node_Select6_Default, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_HasTrapReadyForBuilding_ReturnValue, class FText CallFunc_GetTrapAttachTypeName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UWidget* K2Node_Select7_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue5, class FText CallFunc_Format_ReturnValue2, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar2, int32 CallFunc_GetQuickbarFocus_OutSlot2, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot2, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot2, class FText K2Node_Select8_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue8)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingInfo_InteractionWidgets");

	Params::UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params Parms;
	Parms.Interactable = Interactable;
	Parms.CanBePlayerEdited = CanBePlayerEdited;
	Parms.IsAnyTrapAttached = IsAnyTrapAttached;
	Parms.IsTrapAttachedFacingPlayer = IsTrapAttachedFacingPlayer;
	Parms.IsPreviewTrapAttached = IsPreviewTrapAttached;
	Parms.InteractionType = InteractionType;
	Parms.InteractionCost = InteractionCost;
	Parms.BuildingMaterial = BuildingMaterial;
	Parms.BuildKeybindAction = BuildKeybindAction;
	Parms.PlaceTrapAvailable = PlaceTrapAvailable;
	Parms.TopTrapActive = TopTrapActive;
	Parms.TrapAvailable = TrapAvailable;
	Parms.EditAvailable = EditAvailable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.CallFunc_GetResourceItemDefinition_ReturnValue = CallFunc_GetResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor2 = K2Node_DynamicCast_AsBuilding_SMActor2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_IsTrapAvailableForBuilding_ReturnValue = CallFunc_IsTrapAvailableForBuilding_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_IsPlayerBuilt_ReturnValue = CallFunc_IsPlayerBuilt_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Get_Theme_Color_Theme_Color = CallFunc_Get_Theme_Color_Theme_Color;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_byte_Variable16 = Temp_byte_Variable16;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_HasTrapReadyForBuilding_ReturnValue = CallFunc_HasTrapReadyForBuilding_ReturnValue;
	Parms.CallFunc_GetTrapAttachTypeName_ReturnValue = CallFunc_GetTrapAttachTypeName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar2 = CallFunc_GetQuickbarFocus_OutQuickBar2;
	Parms.CallFunc_GetQuickbarFocus_OutSlot2 = CallFunc_GetQuickbarFocus_OutSlot2;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot2 = CallFunc_GetQuickbarFocus_OutSecondarySlot2;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot2 = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot2;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue8 = CallFunc_BooleanAND_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBuildingInfoIndicator_C::IsCurrentBuildingBeingRepaired(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "IsCurrentBuildingBeingRepaired");

	Params::UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewInteractionCost                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UBuildingInfoIndicator_C::UpdateBuildingRepairCost(int32 NewInteractionCost, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingRepairCost");

	Params::UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params Parms;
	Parms.NewInteractionCost = NewInteractionCost;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTargeting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::HandlePlayerTargetingChanged(bool bIsTargeting, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandlePlayerTargetingChanged");

	Params::UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params Parms;
	Parms.bIsTargeting = bIsTargeting;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::HideHealth()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HideHealth");

	Params::UBuildingInfoIndicator_C_HideHealth_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::Update_Keybinds(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable2, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "Update Keybinds");

	Params::UBuildingInfoIndicator_C_Update_Keybinds_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentDurability                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDurability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleTrapDurabilityChanged(float CurrentDurability, float MaxDurability)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleTrapDurabilityChanged");

	Params::UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params Parms;
	Parms.CurrentDurability = CurrentDurability;
	Parms.MaxDurability = MaxDurability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::HandleBuildingHealthChanged(float Health, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleBuildingHealthChanged");

	Params::UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params Parms;
	Parms.Health = Health;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              FocusedBuilding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::HandleBuildingFocused(class ABuildingActor* FocusedBuilding, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleBuildingFocused");

	Params::UBuildingInfoIndicator_C_HandleBuildingFocused_Params Parms;
	Parms.FocusedBuilding = FocusedBuilding;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortFocusedBuildingInfo    NewBuildingInfo                                                  (Parm, OutParm, ReferenceParm)
// enum class EFortBuildingInteractionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuildingHealthDisplayRuleTemp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::UpdateBuildingInfo(struct FFortFocusedBuildingInfo& NewBuildingInfo, enum class EFortBuildingInteraction Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class EFortBuildingHealthDisplayRule Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingInfo");

	Params::UBuildingInfoIndicator_C_UpdateBuildingInfo_Params Parms;
	Parms.NewBuildingInfo = NewBuildingInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "Construct");

	Params::UBuildingInfoIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::ExecuteUbergraph_BuildingInfoIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "ExecuteUbergraph_BuildingInfoIndicator");

	Params::UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

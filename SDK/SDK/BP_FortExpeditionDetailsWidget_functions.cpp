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


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Bonus Display Name and Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             Rarity                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 OutBrush_Brush_M                                                 (Parm, OutParm)
// class FText                        OutDisplayName                                                   (Parm, OutParm)
// struct FLinearColor                OutRarityColor                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RarityColor                                                      (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 TagBrush                                                         (Edit)
// class FText                        DisplayName                                                      (Edit)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName        ()
// struct FFortMultiSizeBrush         CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush              ()
// bool                               CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBP_FortExpeditionDetailsWidget_C::Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, enum class EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor, const struct FLinearColor& RarityColor, const struct FSlateBrush& TagBrush, class FText DisplayName, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName, const struct FFortMultiSizeBrush& CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush, bool CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Get Bonus Display Name and Brush");

	Params::UBP_FortExpeditionDetailsWidget_C_Get_Bonus_Display_Name_and_Brush_Params Parms;
	Parms.Tag = Tag;
	Parms.Condition = Condition;
	Parms.Rarity = Rarity;
	Parms.RarityColor = RarityColor;
	Parms.TagBrush = TagBrush;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName = CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush = CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue = CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBrush_Brush_M != nullptr)
		*OutBrush_Brush_M = Parms.OutBrush_Brush_M;

	if (OutDisplayName != nullptr)
		*OutDisplayName = Parms.OutDisplayName;

	if (OutRarityColor != nullptr)
		*OutRarityColor = Parms.OutRarityColor;

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Bonus Criteria
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortCriteriaRequirementData>CallFunc_GetBonusCriteriaBP_OutBonusCriteria                     (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCriteriaRequirementDataCallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M       ()
// class FText                        CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName         ()
// struct FLinearColor                CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconAndNameWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionDetailsWidget_C::Set_Bonus_Criteria(class UFortExpeditionItem* Item, TArray<struct FFortCriteriaRequirementData>& CallFunc_GetBonusCriteriaBP_OutBonusCriteria, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFortCriteriaRequirementData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, const struct FSlateBrush& CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M, class FText CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName, const struct FLinearColor& CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Bonus Criteria");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Bonus_Criteria_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetBonusCriteriaBP_OutBonusCriteria = CallFunc_GetBonusCriteriaBP_OutBonusCriteria;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M = CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName = CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor = CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Returns Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetExpeditionSquadId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVehicleTagFromSquadId_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTagUIData              CallFunc_GetUIDataForTag_OutData                                 ()
// bool                               CallFunc_GetUIDataForTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)
// float                              CallFunc_CalculateTotalPower_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* Item, class FName CallFunc_GetExpeditionSquadId_ReturnValue, bool CallFunc_IsExpeditionInProgress_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag, bool CallFunc_GetVehicleTagFromSquadId_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_CalculateTotalPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Expedition Returns Data");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Returns_Data_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetExpeditionSquadId_ReturnValue = CallFunc_GetExpeditionSquadId_ReturnValue;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag = CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag;
	Parms.CallFunc_GetVehicleTagFromSquadId_ReturnValue = CallFunc_GetVehicleTagFromSquadId_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUIDataForTag_OutData = CallFunc_GetUIDataForTag_OutData;
	Parms.CallFunc_GetUIDataForTag_ReturnValue = CallFunc_GetUIDataForTag_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;
	Parms.CallFunc_CalculateTotalPower_ReturnValue = CallFunc_CalculateTotalPower_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue = CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set In Progress State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Self2                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_In_Progress_State(class UFortExpeditionItem* Self2, bool Temp_bool_Variable, bool CallFunc_IsExpeditionInProgress_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set In Progress State");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_In_Progress_State_Params Parms;
	Parms.Self2 = Self2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Remaining Expiration Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Remaining Expiration Time");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Remaining_Expiration_Time_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Requirements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetRequiredTags_ReturnValue                             ()
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFortTagUIData              CallFunc_GetUIDataForTag_OutData                                 ()
// bool                               CallFunc_GetUIDataForTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconAndNameWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_Requirements(class UFortExpeditionItemDefinition* ItemDef, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Requirements");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Requirements_Params Parms;
	Parms.ItemDef = ItemDef;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetRequiredTags_ReturnValue = CallFunc_GetRequiredTags_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUIDataForTag_OutData = CallFunc_GetUIDataForTag_OutData;
	Parms.CallFunc_GetUIDataForTag_ReturnValue = CallFunc_GetUIDataForTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Open Build Expedition Squad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionBuildSquadWidget*K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionDetailsWidget_C::Open_Build_Expedition_Squad(bool CallFunc_IsValidClass_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortExpeditionBuildSquadWidget* K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Open Build Expedition Squad");

	Params::UBP_FortExpeditionDetailsWidget_C_Open_Build_Expedition_Squad_Params Parms;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget = K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTargetPowerLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Rating");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Rating_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetTargetPowerLevel_ReturnValue = CallFunc_GetTargetPowerLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*Item_Def                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCardPackItemDefinition*>CallFunc_GetAllRewards_OutRewards                                (ZeroConstructor, ReferenceParm)
// class UFortCardPackItemDefinition* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewardsListEntry_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Set_Rewards(class UFortExpeditionItemDefinition* Item_Def, int32 Temp_int_Array_Index_Variable, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Rewards");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Rewards_Params Parms;
	Parms.Item_Def = Item_Def;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllRewards_OutRewards = CallFunc_GetAllRewards_OutRewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Duration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*Item_Def                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromMinutes_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBP_FortExpeditionDetailsWidget_C::Set_Expedition_Duration(class UFortExpeditionItemDefinition* Item_Def, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Expedition Duration");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Duration_Params Parms;
	Parms.Item_Def = Item_Def;
	Parms.CallFunc_FromMinutes_ReturnValue = CallFunc_FromMinutes_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*Item_Def                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*K2Node_DynamicCast_AsFort_Expedition_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionDetailsWidget_C::Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Get Expedition Item Definition");

	Params::UBP_FortExpeditionDetailsWidget_C_Get_Expedition_Item_Definition_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item_Definition = K2Node_DynamicCast_AsFort_Expedition_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Def != nullptr)
		*Item_Def = Parms.Item_Def;

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()

void UBP_FortExpeditionDetailsWidget_C::Set_Description(class UFortItem* Item, class FText CallFunc_GetDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Description");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Description_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UBP_FortExpeditionDetailsWidget_C::Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Rarity");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Rarity_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UBP_FortExpeditionDetailsWidget_C::Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Set Name");

	Params::UBP_FortExpeditionDetailsWidget_C_Set_Name_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Refresh Item Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_Item_Def                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::Refresh_Item_Data(bool CallFunc_IsValid_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Refresh Item Data");

	Params::UBP_FortExpeditionDetailsWidget_C_Refresh_Item_Data_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Expedition_Item_Definition_Item_Def = CallFunc_Get_Expedition_Item_Definition_Item_Def;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.DialogResult_11B7688B48FDD9A59A2D55A7B4F60124
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWaitingForLatentActionCompletion                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                              (Parm, NoDestructor)

void UBP_FortExpeditionDetailsWidget_C::DialogResult_11B7688B48FDD9A59A2D55A7B4F60124(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "DialogResult_11B7688B48FDD9A59A2D55A7B4F60124");

	Params::UBP_FortExpeditionDetailsWidget_C_DialogResult_11B7688B48FDD9A59A2D55A7B4F60124_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	Parms.WaitingDialogHandle = WaitingDialogHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "SetData");

	Params::UBP_FortExpeditionDetailsWidget_C_SetData_Params Parms;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleOnExpeditionCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::HandleOnExpeditionCompleted(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "HandleOnExpeditionCompleted");

	Params::UBP_FortExpeditionDetailsWidget_C_HandleOnExpeditionCompleted_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionDetailsWidget_C::BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature");

	Params::UBP_FortExpeditionDetailsWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionDetailsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "Construct");

	Params::UBP_FortExpeditionDetailsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleAbandonExpedition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionDetailsWidget_C::HandleAbandonExpedition()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "HandleAbandonExpedition");

	Params::UBP_FortExpeditionDetailsWidget_C_HandleAbandonExpedition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.OnAbandonExpeditionCompleted
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionDetailsWidget_C::OnAbandonExpeditionCompleted()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "OnAbandonExpeditionCompleted");

	Params::UBP_FortExpeditionDetailsWidget_C_OnAbandonExpeditionCompleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.ExecuteUbergraph_BP_FortExpeditionDetailsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWaitingForLatentActionCompletion             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleK2Node_CustomEvent_WaitingDialogHandle                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFortDialogExternalLatentActionHandleTemp_struct_Variable                                             (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInfoWindow_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_Item_Def                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCardPackItemDefinition*>CallFunc_GetAllRewards_OutRewards                                (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI*CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionDetailsWidget_C::ExecuteUbergraph_BP_FortExpeditionDetailsWidget(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortExpeditionItem* K2Node_Event_InItem, class UFortExpeditionItem* K2Node_CustomEvent_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UInfoWindow_C* CallFunc_Create_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class FText CallFunc_GetText_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionDetailsWidget_C", "ExecuteUbergraph_BP_FortExpeditionDetailsWidget");

	Params::UBP_FortExpeditionDetailsWidget_C_ExecuteUbergraph_BP_FortExpeditionDetailsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CustomEvent_bWaitingForLatentActionCompletion = K2Node_CustomEvent_bWaitingForLatentActionCompletion;
	Parms.K2Node_CustomEvent_WaitingDialogHandle = K2Node_CustomEvent_WaitingDialogHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Expedition_Item_Definition_Item_Def = CallFunc_Get_Expedition_Item_Definition_Item_Def;
	Parms.CallFunc_GetAllRewards_OutRewards = CallFunc_GetAllRewards_OutRewards;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue = CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

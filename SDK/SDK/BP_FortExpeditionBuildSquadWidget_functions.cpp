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


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   UtcNow                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetMcpRelativeUtcNow_ReturnValue                        (NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Mcp Relative Utc Now");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Mcp_Relative_Utc_Now_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMcpRelativeUtcNow_ReturnValue = CallFunc_GetMcpRelativeUtcNow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UtcNow != nullptr)
		*UtcNow = Parms.UtcNow;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSuccessChanceTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_FortExpeditionBuildSquadWidget_C::GetSuccessChanceTooltipWidget(class FText Temp_text_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "GetSuccessChanceTooltipWidget");

	Params::UBP_FortExpeditionBuildSquadWidget_C_GetSuccessChanceTooltipWidget_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSquadRatingTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_FortExpeditionBuildSquadWidget_C::GetSquadRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "GetSquadRatingTooltipWidget");

	Params::UBP_FortExpeditionBuildSquadWidget_C_GetSquadRatingTooltipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Bonus Display Name and Brush
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
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName        ()
// struct FFortMultiSizeBrush         CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush              ()
// bool                               CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, enum class EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor, const struct FLinearColor& RarityColor, const struct FSlateBrush& TagBrush, class FText DisplayName, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName, const struct FFortMultiSizeBrush& CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush, bool CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Bonus Display Name and Brush");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Bonus_Display_Name_and_Brush_Params Parms;
	Parms.Tag = Tag;
	Parms.Condition = Condition;
	Parms.Rarity = Rarity;
	Parms.RarityColor = RarityColor;
	Parms.TagBrush = TagBrush;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName = CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush = CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush;
	Parms.CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue = CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBrush_Brush_M != nullptr)
		*OutBrush_Brush_M = Parms.OutBrush_Brush_M;

	if (OutDisplayName != nullptr)
		*OutDisplayName = Parms.OutDisplayName;

	if (OutRarityColor != nullptr)
		*OutRarityColor = Parms.OutRarityColor;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Item In Selected Squad Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Selected_Slot__SAFE__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExpeditionSquadSlotButton_C*K2Node_DynamicCast_AsExpedition_Squad_Slot_Button                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortItem* UBP_FortExpeditionBuildSquadWidget_C::Get_Item_In_Selected_Squad_Slot(class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Item In Selected Squad Slot");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Item_In_Selected_Squad_Slot_Params Parms;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_Get_Selected_Slot__SAFE__ReturnValue = CallFunc_Get_Selected_Slot__SAFE__ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsExpedition_Squad_Slot_Button = K2Node_DynamicCast_AsExpedition_Squad_Slot_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::HACK_SetCursorToSquadPicker(bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "HACK_SetCursorToSquadPicker");

	Params::UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadPicker_Params Parms;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Inspect Item for Squad Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Determine_Inspect_Item_for_Squad_Slot(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Inspect Item for Squad Slot");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Inspect_Item_for_Squad_Slot_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue = CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Inspect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Inspect(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Inspect");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Inspect_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Slot (SAFE)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_FortExpeditionBuildSquadWidget_C::Get_Selected_Slot__SAFE_(int32 CallFunc_Max_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Selected Slot (SAFE)");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Slot__SAFE__Params Parms;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Purchase Slot State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSquadSlotLocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EInputActionState UBP_FortExpeditionBuildSquadWidget_C::Get_Purchase_Slot_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Purchase Slot State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Purchase_Slot_State_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsSquadSlotLocked_ReturnValue = CallFunc_IsSquadSlotLocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Purchase Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquadSlotLocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Purchase_Slot(bool* PassThrough, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Purchase Slot");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Purchase_Slot_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsSquadSlotLocked_ReturnValue = CallFunc_IsSquadSlotLocked_ReturnValue;
	Parms.CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue = CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Angle for Preview State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Angle_for_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Buff Arrow Angle for Preview State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Angle_for_Preview_State_Params Parms;
	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Color for Preview State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Color_for_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Buff Arrow Color for Preview State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Color_for_Preview_State_Params Parms;
	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Chance Buff Arrow for Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Chance_Buff_Arrow_for_Preview(enum class EFortBuffState Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, enum class ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Chance Buff Arrow for Preview");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Chance_Buff_Arrow_for_Preview_Params Parms;
	Parms.Index = Index;
	Parms.CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue;
	Parms.CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue;
	Parms.CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Rating Buff Arrow for Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Rating_Buff_Arrow_for_Preview(enum class EFortBuffState Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, enum class ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Rating Buff Arrow for Preview");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Rating_Buff_Arrow_for_Preview_Params Parms;
	Parms.Index = Index;
	Parms.CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue;
	Parms.CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue;
	Parms.CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue = CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Visiblity From Preview State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Visiblity_From_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Buff Arrow Visiblity From Preview State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Visiblity_From_Preview_State_Params Parms;
	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Text Style from Preview State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortBuffState          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UClass* UBP_FortExpeditionBuildSquadWidget_C::Determine_Text_Style_from_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Text Style from Preview State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Text_Style_from_Preview_State_Params Parms;
	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Power and Rating for Preview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SlottedItems1                                                    (Parm, OutParm, ZeroConstructor)
// class UFortItem*                   NullItem                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SlottedItems                                                     (Edit, ZeroConstructor)
// float                              PreviewRating                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PreviewChance                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentRating                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentChance                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CurrentItem                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          CallFunc_Determine_Preview_State_State                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          CallFunc_Determine_Preview_State_State2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateTotalPower_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Get_Current_Rating_CurrentNumericValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Power_and_Rating_for_Preview(class UFortItem* Item, TArray<class UFortItem*>* SlottedItems1, class UFortItem* NullItem, const TArray<class UFortItem*>& SlottedItems, float PreviewRating, float PreviewChance, float CurrentRating, float CurrentChance, class UFortItem* CurrentItem, enum class EFortBuffState CallFunc_Determine_Preview_State_State, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, enum class EFortBuffState CallFunc_Determine_Preview_State_State2, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateTotalPower_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_Get_Current_Rating_CurrentNumericValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Power and Rating for Preview");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Power_and_Rating_for_Preview_Params Parms;
	Parms.Item = Item;
	Parms.NullItem = NullItem;
	Parms.SlottedItems = SlottedItems;
	Parms.PreviewRating = PreviewRating;
	Parms.PreviewChance = PreviewChance;
	Parms.CurrentRating = CurrentRating;
	Parms.CurrentChance = CurrentChance;
	Parms.CurrentItem = CurrentItem;
	Parms.CallFunc_Determine_Preview_State_State = CallFunc_Determine_Preview_State_State;
	Parms.CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue = CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue2 = CallFunc_FFloor_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Determine_Preview_State_State2 = CallFunc_Determine_Preview_State_State2;
	Parms.CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2 = CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue = CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculateTotalPower_ReturnValue = CallFunc_CalculateTotalPower_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;
	Parms.CallFunc_Get_Current_Rating_CurrentNumericValue = CallFunc_Get_Current_Rating_CurrentNumericValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlottedItems1 != nullptr)
		*SlottedItems1 = Parms.SlottedItems1;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Preview State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Preview                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Determine_Preview_State(float Preview, float Current, enum class EFortBuffState* State, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Determine Preview State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Determine_Preview_State_Params Parms;
	Parms.Preview = Preview;
	Parms.Current = Current;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update For Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1       (ZeroConstructor, ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Update_For_Preview(class UFortItem* Item, TArray<class UFortItem*>& CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update For Preview");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_For_Preview_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1 = CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back with Squad Clear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Back_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Back_with_Squad_Clear(bool* PassThrough, bool CallFunc_Handle_Back_PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Back with Squad Clear");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_with_Squad_Clear_Params Parms;
	Parms.CallFunc_Handle_Back_PassThrough = CallFunc_Handle_Back_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Slot Item State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanItemBeComitted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EInputActionState UBP_FortExpeditionBuildSquadWidget_C::Get_Slot_Item_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_CanItemBeComitted_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Slot Item State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Slot_Item_State_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_CanItemBeComitted_ReturnValue = CallFunc_CanItemBeComitted_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Vehicle Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentSquadId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Selected_Slot__SAFE__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Selected_Slot__SAFE__ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Close_Picker_Action_PassThrough                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Vehicle_Selected(class FName CurrentSquadId, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Handle_Close_Picker_Action_PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Vehicle Selected");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Vehicle_Selected_Params Parms;
	Parms.CurrentSquadId = CurrentSquadId;
	Parms.CallFunc_Get_Selected_Slot__SAFE__ReturnValue = CallFunc_Get_Selected_Slot__SAFE__ReturnValue;
	Parms.CallFunc_Get_Selected_Slot__SAFE__ReturnValue2 = CallFunc_Get_Selected_Slot__SAFE__ReturnValue2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Handle_Close_Picker_Action_PassThrough = CallFunc_Handle_Close_Picker_Action_PassThrough;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Open Picker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Open_Picker(bool* PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Open Picker");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Open_Picker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Start Expedition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Start_Expedition(bool* PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Start Expedition");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Start_Expedition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Picker Closed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Purchase_Slot_State_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionValidToStart_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Squad_Picker_Closed(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, bool CallFunc_IsExpeditionValidToStart_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Squad Picker Closed");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Picker_Closed_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Get_Purchase_Slot_State_ReturnValue = CallFunc_Get_Purchase_Slot_State_ReturnValue;
	Parms.CallFunc_IsExpeditionValidToStart_ReturnValue = CallFunc_IsExpeditionValidToStart_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Slot Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       CallFunc_Get_Slot_Item_State_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Squad_Slot_Selected(enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Squad Slot Selected");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Slot_Selected_Params Parms;
	Parms.CallFunc_Get_Slot_Item_State_ReturnValue = CallFunc_Get_Slot_Item_State_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Selected Item Committed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Selected_Item_Committed(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Selected Item Committed");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Selected_Item_Committed_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Close Picker Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Close_Picker_Action(bool* PassThrough, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Close Picker Action");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Close_Picker_Action_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Slot Item Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Slot_Item_Action(bool* PassThrough, bool CallFunc_TryCommitSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Slot Item Action");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Slot_Item_Action_Params Parms;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Start Expedition Widget State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionValidToStart_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Start_Expedition_Widget_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_IsExpeditionValidToStart_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Start Expedition Widget State");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Start_Expedition_Widget_State_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsExpeditionValidToStart_ReturnValue = CallFunc_IsExpeditionValidToStart_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Expedition Expired
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Handle_Back_with_Squad_Clear_PassThrough                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasExpeditionExpired_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Expedition_Expired(const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, bool CallFunc_Handle_Back_with_Squad_Clear_PassThrough, bool CallFunc_HasExpeditionExpired_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Expedition Expired");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Expedition_Expired_Params Parms;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_Handle_Back_with_Squad_Clear_PassThrough = CallFunc_Handle_Back_with_Squad_Clear_PassThrough;
	Parms.CallFunc_HasExpeditionExpired_ReturnValue = CallFunc_HasExpeditionExpired_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Try to Auto Select First Vehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_ItemDef                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetRequiredTags_ReturnValue                             ()
// TArray<class FName>                CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds(ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquadOnExpedition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Try_to_Auto_Select_First_Vehicle(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<class FName>& CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds, bool CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, class FName CallFunc_Array_Get_Item, bool CallFunc_IsSquadOnExpedition_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Try to Auto Select First Vehicle");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Try_to_Auto_Select_First_Vehicle_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Expedition_Item_Definition_ItemDef = CallFunc_Get_Expedition_Item_Definition_ItemDef;
	Parms.CallFunc_GetRequiredTags_ReturnValue = CallFunc_GetRequiredTags_ReturnValue;
	Parms.CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds = CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds;
	Parms.CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue = CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsSquadOnExpedition_ReturnValue = CallFunc_IsSquadOnExpedition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SelectedItem                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBP_FortExpeditionBuildSquadWidget_C::Get_Selected_Item(class UObject* SelectedItem, class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Selected Item");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Item_Params Parms;
	Parms.SelectedItem = SelectedItem;
	Parms.CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue = CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Picker List View
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemTileView*           PickerTileView                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Picker_List_View(class UFortItemTileView** PickerTileView)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Picker List View");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Picker_List_View_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PickerTileView != nullptr)
		*PickerTileView = Parms.PickerTileView;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadSlotSlotted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Selected_Slot__SAFE__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Selected_Slot__SAFE__ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExpeditionSquadSlotButton_C*K2Node_DynamicCast_AsExpedition_Squad_Slot_Button                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::HACK_SetCursorToSquadSlotSlotted(int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "HACK_SetCursorToSquadSlotSlotted");

	Params::UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadSlotSlotted_Params Parms;
	Parms.CallFunc_Get_Selected_Slot__SAFE__ReturnValue = CallFunc_Get_Selected_Slot__SAFE__ReturnValue;
	Parms.CallFunc_Get_Selected_Slot__SAFE__ReturnValue2 = CallFunc_Get_Selected_Slot__SAFE__ReturnValue2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsExpedition_Squad_Slot_Button = K2Node_DynamicCast_AsExpedition_Squad_Slot_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Bonus Criteria
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SlottedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTag                LoopCriteriaTag                                                  (Edit, NoDestructor, HasGetValueTypeHash)
// int32                              FoundIndex                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        MatchedCriteriaTags                                              (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria               (ZeroConstructor, ReferenceParm)
// TArray<struct FFortCriteriaRequirementData>CallFunc_GetBonusCriteriaBP_OutBonusCriteria                     (ZeroConstructor, ReferenceParm)
// struct FFortCriteriaRequirementDataCallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconAndNameWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M       ()
// class FText                        CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName         ()
// struct FLinearColor                CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Bonus_Criteria(class UFortExpeditionItem* Item, TArray<class UFortItem*>& SlottedItems, const struct FGameplayTag& LoopCriteriaTag, int32 FoundIndex, const TArray<struct FGameplayTag>& MatchedCriteriaTags, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria, TArray<struct FFortCriteriaRequirementData>& CallFunc_GetBonusCriteriaBP_OutBonusCriteria, const struct FFortCriteriaRequirementData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, int32 CallFunc_Array_Find_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateBrush& CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M, class FText CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName, const struct FLinearColor& CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Bonus Criteria");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Bonus_Criteria_Params Parms;
	Parms.Item = Item;
	Parms.SlottedItems = SlottedItems;
	Parms.LoopCriteriaTag = LoopCriteriaTag;
	Parms.FoundIndex = FoundIndex;
	Parms.MatchedCriteriaTags = MatchedCriteriaTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria = CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria;
	Parms.CallFunc_GetBonusCriteriaBP_OutBonusCriteria = CallFunc_GetBonusCriteriaBP_OutBonusCriteria;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M = CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName = CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName;
	Parms.CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor = CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Expedition Power
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)
// float                              CallFunc_CalculateTotalPower_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Expedition_Power(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_CalculateTotalPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Expedition Power");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Expedition_Power_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;
	Parms.CallFunc_CalculateTotalPower_ReturnValue = CallFunc_CalculateTotalPower_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue = CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Squad Slot Pickers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedSquadIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquadSlotLocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Squad_Slot_Pickers(int32 SelectedSquadIndex, bool CallFunc_IsSquadSlotLocked_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Update Squad Slot Pickers");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Update_Squad_Slot_Pickers_Params Parms;
	Parms.SelectedSquadIndex = SelectedSquadIndex;
	Parms.CallFunc_IsSquadSlotLocked_ReturnValue = CallFunc_IsSquadSlotLocked_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Expedition Costs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemAndCount>       CallFunc_GetExpeditionCosts_OutExpeditionCosts                   (ZeroConstructor, ReferenceParm)
// struct FItemAndCount               CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UItemCountOverCost_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Expedition_Costs(class UFortExpeditionItemDefinition* ItemDef, int32 Temp_int_Array_Index_Variable, TArray<struct FItemAndCount>& CallFunc_GetExpeditionCosts_OutExpeditionCosts, const struct FItemAndCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UItemCountOverCost_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Expedition Costs");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Expedition_Costs_Params Parms;
	Parms.ItemDef = ItemDef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetExpeditionCosts_OutExpeditionCosts = CallFunc_GetExpeditionCosts_OutExpeditionCosts;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Requirements
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
// class UIconAndNameWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Requirements(class UFortExpeditionItemDefinition* ItemDef, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Requirements");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Requirements_Params Parms;
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
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Remaining Expiration Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Remaining Expiration Time");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Remaining_Expiration_Time_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Clear Vehicle Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::Clear_Vehicle_Widgets()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Clear Vehicle Widgets");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Clear_Vehicle_Widgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Vehicle Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHomebaseSquad              HomebaseSquad                                                    (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Vehicle_Name(struct FHomebaseSquad& HomebaseSquad)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Vehicle Name");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Vehicle_Name_Params Parms;
	Parms.HomebaseSquad = HomebaseSquad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Squad Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush         CallFunc_GetSquadIcon_ReturnValue                                ()

void UBP_FortExpeditionBuildSquadWidget_C::Refresh_Squad_Widgets(bool NewLocalVar_0, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Refresh Squad Widgets");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Refresh_Squad_Widgets_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSquadIcon_ReturnValue = CallFunc_GetSquadIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Change Vehicle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionPickVehicleWidget_C*K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Change_Vehicle(bool* PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBP_FortExpeditionPickVehicleWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Change Vehicle");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Change_Vehicle_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget = K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCardPackItemDefinition*>CallFunc_GetAllRewards_OutRewards                                (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCardPackItemDefinition* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewardsListEntry_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rewards(class UFortExpeditionItemDefinition* ItemDef, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Rewards");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Rewards_Params Parms;
	Parms.ItemDef = ItemDef;
	Parms.CallFunc_GetAllRewards_OutRewards = CallFunc_GetAllRewards_OutRewards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Rarity");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Rarity_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Duration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTimespan                   CallFunc_FromMinutes_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           ()
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBP_FortExpeditionBuildSquadWidget_C::Set_Duration(class UFortExpeditionItemDefinition* ItemDef, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Duration");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Duration_Params Parms;
	Parms.ItemDef = ItemDef;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FromMinutes_ReturnValue = CallFunc_FromMinutes_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*ItemDef                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*K2Node_DynamicCast_AsFort_Expedition_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Get Expedition Item Definition");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Get_Expedition_Item_Definition_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item_Definition = K2Node_DynamicCast_AsFort_Expedition_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDef != nullptr)
		*ItemDef = Parms.ItemDef;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Item Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_ItemDef                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Refresh_Item_Data(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Refresh Item Data");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Refresh_Item_Data_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;
	Parms.CallFunc_Get_Expedition_Item_Definition_ItemDef = CallFunc_Get_Expedition_Item_Definition_ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTargetPowerLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Rating");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Rating_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetTargetPowerLevel_ReturnValue = CallFunc_GetTargetPowerLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()

void UBP_FortExpeditionBuildSquadWidget_C::Set_Description(class UFortItem* Item, class FText CallFunc_GetDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Description");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Description_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UBP_FortExpeditionBuildSquadWidget_C::Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Set Name");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Set_Name_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Setup Input Action Handlers");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Setup_Input_Action_Handlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Handle Back");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.DialogResult_B738291040F33B805332A7B633B3ACBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWaitingForLatentActionCompletion                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                              (Parm, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::DialogResult_B738291040F33B805332A7B633B3ACBD(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "DialogResult_B738291040F33B805332A7B633B3ACBD");

	Params::UBP_FortExpeditionBuildSquadWidget_C_DialogResult_B738291040F33B805332A7B633B3ACBD_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	Parms.WaitingDialogHandle = WaitingDialogHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Construct");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "SetData");

	Params::UBP_FortExpeditionBuildSquadWidget_C_SetData_Params Parms;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HandleVechicleSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::HandleVechicleSelected(class FName SquadId)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "HandleVechicleSelected");

	Params::UBP_FortExpeditionBuildSquadWidget_C_HandleVechicleSelected_Params Parms;
	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "Destruct");

	Params::UBP_FortExpeditionBuildSquadWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnActivated");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK Select Item in Picker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::HACK_Select_Item_in_Picker()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "HACK Select Item in Picker");

	Params::UBP_FortExpeditionBuildSquadWidget_C_HACK_Select_Item_in_Picker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRefreshBuildSquadWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::OnRefreshBuildSquadWidget()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnRefreshBuildSquadWidget");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnRefreshBuildSquadWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpedition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::OnStartExpedition()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnStartExpedition");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnStartExpedition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnGamepadStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::OnGamepadStateChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnGamepadStateChanged");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnGamepadStateChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpeditionCompleted
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::OnStartExpeditionCompleted()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnStartExpeditionCompleted");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnStartExpeditionCompleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature");

	Params::UBP_FortExpeditionBuildSquadWidget_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRequestClosePicker
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionBuildSquadWidget_C::OnRequestClosePicker()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "OnRequestClosePicker");

	Params::UBP_FortExpeditionBuildSquadWidget_C_OnRequestClosePicker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Handle_Close_Picker_Action_PassThrough                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SquadId                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartExpedition_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// TArray<struct FConfirmationDialogAction>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI*CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionValidToStart_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemTileView*           CallFunc_Get_Picker_List_View_PickerTileView                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemTileView*           CallFunc_Get_Picker_List_View_PickerTileView2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Get_Selected_Item_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleTemp_struct_Variable                                             (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInfoWindow_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWaitingForLatentActionCompletion             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleK2Node_CustomEvent_WaitingDialogHandle                           (NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_ItemDef                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<class UFortCardPackItemDefinition*>CallFunc_GetAllRewards_OutRewards                                (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              K2Node_ComponentBoundEvent_SquadSlotIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Slot_Item_State_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Slot_Item_State_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Handle_Back_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Purchase_Slot_State_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Purchase_Slot_State_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_Get_Purchase_Slot_State_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ExpeditionSquadSlotsView_C*K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USquadSlotItemPicker_C*      K2Node_DynamicCast_AsSquad_Slot_Item_Picker                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionBuildSquadWidget_C::ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget(int32 EntryPoint, bool CallFunc_Handle_Close_Picker_Action_PassThrough, enum class EFortDialogResult Temp_byte_Variable, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UFortExpeditionItem* K2Node_Event_InItem, class FName K2Node_CustomEvent_SquadId, bool CallFunc_StartExpedition_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsExpeditionValidToStart_ReturnValue, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView2, class UObject* CallFunc_Get_Selected_Item_ReturnValue, class FName Temp_name_Variable, bool CallFunc_SetSelectedItem_ReturnValue, bool Temp_bool_Variable2, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UInfoWindow_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, class FText CallFunc_GetText_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class FText CallFunc_Format_ReturnValue, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_Handle_Back_PassThrough, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue2, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue3, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, class UBP_ExpeditionSquadSlotsView_C* K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, class USquadSlotItemPicker_C* K2Node_DynamicCast_AsSquad_Slot_Item_Picker, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionBuildSquadWidget_C", "ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget");

	Params::UBP_FortExpeditionBuildSquadWidget_C_ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Handle_Close_Picker_Action_PassThrough = CallFunc_Handle_Close_Picker_Action_PassThrough;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.K2Node_CustomEvent_SquadId = K2Node_CustomEvent_SquadId;
	Parms.CallFunc_StartExpedition_ReturnValue = CallFunc_StartExpedition_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue = CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsExpeditionValidToStart_ReturnValue = CallFunc_IsExpeditionValidToStart_ReturnValue;
	Parms.CallFunc_Get_Picker_List_View_PickerTileView = CallFunc_Get_Picker_List_View_PickerTileView;
	Parms.CallFunc_Get_Picker_List_View_PickerTileView2 = CallFunc_Get_Picker_List_View_PickerTileView2;
	Parms.CallFunc_Get_Selected_Item_ReturnValue = CallFunc_Get_Selected_Item_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CustomEvent_bWaitingForLatentActionCompletion = K2Node_CustomEvent_bWaitingForLatentActionCompletion;
	Parms.K2Node_CustomEvent_WaitingDialogHandle = K2Node_CustomEvent_WaitingDialogHandle;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Get_Expedition_Item_Definition_ItemDef = CallFunc_Get_Expedition_Item_Definition_ItemDef;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAllRewards_OutRewards = CallFunc_GetAllRewards_OutRewards;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SquadSlotIndex = K2Node_ComponentBoundEvent_SquadSlotIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Slot_Item_State_ReturnValue = CallFunc_Get_Slot_Item_State_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.CallFunc_Get_Slot_Item_State_ReturnValue2 = CallFunc_Get_Slot_Item_State_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Handle_Back_PassThrough = CallFunc_Handle_Back_PassThrough;
	Parms.CallFunc_Get_Purchase_Slot_State_ReturnValue = CallFunc_Get_Purchase_Slot_State_ReturnValue;
	Parms.CallFunc_Get_Purchase_Slot_State_ReturnValue2 = CallFunc_Get_Purchase_Slot_State_ReturnValue2;
	Parms.CallFunc_Get_Purchase_Slot_State_ReturnValue3 = CallFunc_Get_Purchase_Slot_State_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View = K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSquad_Slot_Item_Picker = K2Node_DynamicCast_AsSquad_Slot_Item_Picker;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemType           Item_Type_To_Show                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, enum class EFortItemType K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue2, enum class EFortItemType K2Node_Select2_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateItemBoxSize");

	Params::UQuickbarSlot_C_UpdateItemBoxSize_Params Parms;
	Parms.Item_Type_To_Show = Item_Type_To_Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue2 = CallFunc_GetCardSize_ReturnValue2;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue2 = CallFunc_SlotAsOverlaySlot_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetCardDimensions_ReturnValue2 = CallFunc_GetCardDimensions_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::UpdateItemCardsVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateItemCardsVisibility");

	Params::UQuickbarSlot_C_UpdateItemCardsVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue2 = CallFunc_GetCardSize_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStopped");

	Params::UQuickbarSlot_C_OnCooldownStopped_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStarted");

	Params::UQuickbarSlot_C_OnCooldownStarted_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UQuickbarSlot_C::InitializeCooldowns(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "InitializeCooldowns");

	Params::UQuickbarSlot_C_InitializeCooldowns_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        KeyBindingAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnlyShowBuildingPieceNextPrevKeybinds                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FocusedSlotIndex                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPreviousSlot                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFocusedSlot                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger3_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::GetKeyBindingAction_Gamepad(class FName* KeyBindingAction, bool OnlyShowBuildingPieceNextPrevKeybinds, int32 FocusedSlotIndex, bool IsPreviousSlot, bool IsFocusedSlot, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action, bool K2Node_SwitchInteger_CmpSuccess, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue, bool K2Node_SwitchInteger2_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger3_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "GetKeyBindingAction_Gamepad");

	Params::UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params Parms;
	Parms.OnlyShowBuildingPieceNextPrevKeybinds = OnlyShowBuildingPieceNextPrevKeybinds;
	Parms.FocusedSlotIndex = FocusedSlotIndex;
	Parms.IsPreviousSlot = IsPreviousSlot;
	Parms.IsFocusedSlot = IsFocusedSlot;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue5 = CallFunc_EqualEqual_IntInt_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue = CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchInteger3_CmpSuccess = K2Node_SwitchInteger3_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = Parms.KeyBindingAction;

}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Key_Binding_Action                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::GetKeyBindingAction_Keyboard(class FName* Key_Binding_Action, enum class EFortQuickBars Temp_byte_Variable, const class FString& Temp_string_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "GetKeyBindingAction_Keyboard");

	Params::UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Key_Binding_Action != nullptr)
		*Key_Binding_Action = Parms.Key_Binding_Action;

}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        KeyBindingAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Gamepad_KeyBindingAction            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::GetKeyBindingAction(class FName* KeyBindingAction, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FName CallFunc_GetKeyBindingAction_Gamepad_KeyBindingAction)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "GetKeyBindingAction");

	Params::UQuickbarSlot_C_GetKeyBindingAction_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetKeyBindingAction_Gamepad_KeyBindingAction = CallFunc_GetKeyBindingAction_Gamepad_KeyBindingAction;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = Parms.KeyBindingAction;

}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHoldKeybind_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::UpdateKeyBindingVisibility(enum class ESlateVisibility Temp_byte_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool Temp_bool_Variable3, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable7, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_IsHoldKeybind_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue5, bool K2Node_SwitchEnum2_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateKeyBindingVisibility");

	Params::UQuickbarSlot_C_UpdateKeyBindingVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue = CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_IsHoldKeybind_ReturnValue = CallFunc_IsHoldKeybind_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHoldKeybind_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_KeyBindingAction                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_KeyBindingAction2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::UpdateKeyBindingText(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsHoldKeybind_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_GetKeyBindingAction_KeyBindingAction, bool CallFunc_BooleanAND_ReturnValue2, class FName CallFunc_GetKeyBindingAction_KeyBindingAction2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateKeyBindingText");

	Params::UQuickbarSlot_C_UpdateKeyBindingText_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsHoldKeybind_ReturnValue = CallFunc_IsHoldKeybind_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetKeyBindingAction_KeyBindingAction = CallFunc_GetKeyBindingAction_KeyBindingAction;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetKeyBindingAction_KeyBindingAction2 = CallFunc_GetKeyBindingAction_KeyBindingAction2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCardSize       Card_Size                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::Resize(enum class EFortItemCardSize Card_Size)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Resize");

	Params::UQuickbarSlot_C_Resize_Params Parms;
	Parms.Card_Size = Card_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkipAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::Maximize(bool ShouldSkipAnimation, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Maximize");

	Params::UQuickbarSlot_C_Maximize_Params Parms;
	Parms.ShouldSkipAnimation = ShouldSkipAnimation;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkipAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::Minimize(bool ShouldSkipAnimation, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Minimize");

	Params::UQuickbarSlot_C_Minimize_Params Parms;
	Parms.ShouldSkipAnimation = ShouldSkipAnimation;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::SetSelected(bool Selected, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select3_Default, float CallFunc_GetEndTime_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetSelected");

	Params::UQuickbarSlot_C_SetSelected_Params Parms;
	Parms.Selected = Selected;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeStarted");

	Params::UQuickbarSlot_C_HandleMaximizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeFinished");

	Params::UQuickbarSlot_C_HandleMinimizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeFinished");

	Params::UQuickbarSlot_C_HandleMaximizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeStarted");

	Params::UQuickbarSlot_C_HandleMinimizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Tick");

	Params::UQuickbarSlot_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "PreConstruct");

	Params::UQuickbarSlot_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::RefreshItem()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "RefreshItem");

	Params::UQuickbarSlot_C_RefreshItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Construct");

	Params::UQuickbarSlot_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnimatedBoxScaleFactor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetAnimatedBoxScaleFactor");

	Params::UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params Parms;
	Parms.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotHidden_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemDisplayStyle       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_AnimatedBoxScaleFactor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, class UTexture2D* Temp_object_Variable5, class UTexture2D* Temp_object_Variable6, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UTexture2D* Temp_object_Variable7, bool CallFunc_IsSlotHidden_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, enum class EItemDisplayStyle Temp_byte_Variable, class UTexture2D* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, float K2Node_CustomEvent_AnimatedBoxScaleFactor, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "ExecuteUbergraph_QuickbarSlot");

	Params::UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.CallFunc_IsSlotHidden_ReturnValue = CallFunc_IsSlotHidden_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue2 = CallFunc_GetCardSize_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_AnimatedBoxScaleFactor = K2Node_CustomEvent_AnimatedBoxScaleFactor;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue = CallFunc_GetQuickBarSlottedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

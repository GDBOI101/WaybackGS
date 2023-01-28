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


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText_SpecialCases
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsConfigE                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConfigF                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ConfigE                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ConfigF                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// bool                               ShowDoubleKeysTop                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDoubleKeysBottom                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPreviousSlot                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFocusedSlot                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FocusedSlotIndex                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue2                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickBarSlot_C::UpdateKeyBindingText_SpecialCases(bool IsConfigE, bool IsConfigF, const class FString& ConfigE, const class FString& ConfigF, bool ShowDoubleKeysTop, bool ShowDoubleKeysBottom, bool IsPreviousSlot, bool IsFocusedSlot, int32 FocusedSlotIndex, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue3, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue4, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger2_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, bool K2Node_SwitchEnum4_CmpSuccess, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "UpdateKeyBindingText_SpecialCases");

	Params::UAthenaQuickBarSlot_C_UpdateKeyBindingText_SpecialCases_Params Parms;
	Parms.IsConfigE = IsConfigE;
	Parms.IsConfigF = IsConfigF;
	Parms.ConfigE = ConfigE;
	Parms.ConfigF = ConfigF;
	Parms.ShowDoubleKeysTop = ShowDoubleKeysTop;
	Parms.ShowDoubleKeysBottom = ShowDoubleKeysBottom;
	Parms.IsPreviousSlot = IsPreviousSlot;
	Parms.IsFocusedSlot = IsFocusedSlot;
	Parms.FocusedSlotIndex = FocusedSlotIndex;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue2 = CallFunc_GetVisibility_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue3 = CallFunc_GetVisibility_ReturnValue3;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue5 = CallFunc_EqualEqual_IntInt_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue2 = CallFunc_GetCurrentInputPresetName_ReturnValue2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        KeyBindingAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnlyShowBuildingPieceNextPrevKeybinds                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FocusedSlotIndex                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPreviousSlot                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFocusedSlot                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void UAthenaQuickBarSlot_C::GetKeyBindingAction_Gamepad(class FName* KeyBindingAction, bool OnlyShowBuildingPieceNextPrevKeybinds, int32 FocusedSlotIndex, bool IsPreviousSlot, bool IsFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue3, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue, bool K2Node_SwitchInteger2_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger3_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "GetKeyBindingAction_Gamepad");

	Params::UAthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad_Params Parms;
	Parms.OnlyShowBuildingPieceNextPrevKeybinds = OnlyShowBuildingPieceNextPrevKeybinds;
	Parms.FocusedSlotIndex = FocusedSlotIndex;
	Parms.IsPreviousSlot = IsPreviousSlot;
	Parms.IsFocusedSlot = IsFocusedSlot;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3;
	Parms.CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4 = CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4;
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


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickBarSlot_C::UpdateKeyBindingText()
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "UpdateKeyBindingText");

	Params::UAthenaQuickBarSlot_C_UpdateKeyBindingText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickBarSlot_C::ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "ExecuteUbergraph_AthenaQuickBarSlot");

	Params::UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

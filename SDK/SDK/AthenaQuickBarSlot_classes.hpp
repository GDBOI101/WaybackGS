#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x388 - 0x37F)
// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
	uint8                                        Pad_1889[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaQuickBarSlot_C");
		return Clss;
	}

	void UpdateKeyBindingText_SpecialCases(bool IsConfigE, bool IsConfigF, const class FString& ConfigE, const class FString& ConfigF, bool ShowDoubleKeysTop, bool ShowDoubleKeysBottom, bool IsPreviousSlot, bool IsFocusedSlot, int32 FocusedSlotIndex, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue3, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue4, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger2_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, bool K2Node_SwitchEnum4_CmpSuccess, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue2);
	void GetKeyBindingAction_Gamepad(class FName* KeyBindingAction, bool OnlyShowBuildingPieceNextPrevKeybinds, int32 FocusedSlotIndex, bool IsPreviousSlot, bool IsFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue3, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3, class FName CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue, bool K2Node_SwitchInteger2_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger3_CmpSuccess);
	void UpdateKeyBindingText();
	void ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

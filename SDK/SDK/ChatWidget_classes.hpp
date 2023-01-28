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

// 0x80 (0x488 - 0x408)
// WidgetBlueprintGeneratedClass ChatWidget.ChatWidget_C
class UChatWidget_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_32C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ConsoleChatShortcut;                               // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CursorModeSwitcher;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortChatWidget*                       FortChat;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HudContentHBox;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CloseUserListAction;                               // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OpenUserListAction;                                // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CurrentUserListAction;                             // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bEnteringChat;                                     // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  AboutToEnterChat;                                  // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChatWidget_C");
		return Clss;
	}

	void InitializeChat(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* K2Node_Select2_Default);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortHUDContext* CallFunc_GetContext_ReturnValue3);
	void HandleCursorModeChanged(bool bEnabled, class FName ActionName, class UUserWidget* Widget, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);
	void HandleShowChatWindow(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class EFortUIFeatureState Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default);
	void HandeChatEnteredEvent(bool bEnteringChat, bool NewLocalVar_0, enum class ESlateVisibility Temp_byte_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default);
	void UpdateChatUserListIcon(bool Open, bool Temp_bool_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, const struct FDataTableRowHandle& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetInputActionButtonIcon_ReturnValue);
	void Set_Chat_Shortcut_Visibility(enum class ESlateVisibility New_Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Chat_Visibility(enum class ESlateVisibility New_Visibility);
	void BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature(bool bEnteringChat);
	void BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature(bool bOpen);
	void Construct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_ChatWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bEnteringChat, bool K2Node_ComponentBoundEvent_bOpen, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default);
	void AboutToEnterChat__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

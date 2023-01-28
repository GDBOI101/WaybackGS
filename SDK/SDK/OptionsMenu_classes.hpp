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

// 0xB0 (0x4C0 - 0x410)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderBackground;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CurrentTabSwitcher;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LanguageOk;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MESSAGE;                                           // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OverlayText;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultNo;                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultYes;                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultNo;                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultYes;                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  SettingsTabs;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsAccept;                               // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsCancel;                               // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Current_Tab;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Accept_Input;                                      // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Video_Tab_Selected;                                // 0x4A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x4AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void DoResetHUDOptionsToDefault(int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void DoResetGameOptionsToDefault(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleTabGameOptionsActionHandlerStates();
	void HandleTabAccountLinkageActionHandlerStates();
	void HandleTabGamepadConfigActionHandlerStates();
	void HandleTabFortAudioOptionsActionHandlerStates();
	void HandleTabVideoOptionsActionHandlerStates();
	void HandleTabBrightnessOptionsActionHandlerStates();
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsResetActionHandlerStates(int32 ActiveWidgetIndex, enum class EInputActionState Temp_byte_Variable, int32 Temp_int_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState Temp_byte_Variable4, int32 Temp_int_Variable2, enum class EInputActionState K2Node_Select2_Default);
	void HandleResetGameOptionsToDefault(bool* PassThrough);
	void CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess);
	void Handle_Reset_HUD_Default(bool* PassThrough);
	void SetBackground(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue);
	void AddTab(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Handle_Toggle_Mode(bool* PassThrough, int32 Temp_int_Variable, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7);
	void HandleBack(bool* PassThrough);
	void Handle_Reset(bool* PassThrough, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Handle_Reset_Default(bool* PassThrough, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Handle_Apply(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize(bool CallFunc_IsAccountLinkingEnabled_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_ShowGameOptions_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText Temp_text_Variable, bool CallFunc_HasWidgets_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable2, bool Temp_bool_Variable, bool CallFunc_ShowInputOptions_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_ShowVideoOptions_ReturnValue);
	void DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Enable_Overlay_Input(bool Accept_Input, class FText Overlay_Text);
	void Enable_Overlay_Video(bool Accept_Input);
	void Disable_Overlay();
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetGameOptionsToDefaultMessage();
	void ShowResetHUDOptionToDefaultMessage();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabBrightnessOptions_C* K2Node_DynamicCast_AsTab_Brightness_Options, bool K2Node_DynamicCast_bSuccess2, class UFortAudioOptions* K2Node_DynamicCast_AsFort_Audio_Options, bool K2Node_DynamicCast_bSuccess3, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess4, class UTabAccountLinkage_C* K2Node_DynamicCast_AsTab_Account_Linkage, bool K2Node_DynamicCast_bSuccess5, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess6, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options, bool K2Node_DynamicCast_bSuccess7, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess8, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Accept_Input2, class FText K2Node_CustomEvent_Overlay_Text, bool K2Node_CustomEvent_Accept_Input, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortVideoOptions* K2Node_DynamicCast_AsFort_Video_Options, bool K2Node_DynamicCast_bSuccess9, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UWidget* CallFunc_GetChildAt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab2, bool K2Node_DynamicCast_bSuccess10, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options2, bool K2Node_DynamicCast_bSuccess11, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options2, bool K2Node_DynamicCast_bSuccess12, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options2, bool K2Node_DynamicCast_bSuccess13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_Gamepad_Enabled, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName CallFunc_GetActiveTab_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess14, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInZone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_IsVisible_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_Handle_Reset_PassThrough, bool CallFunc_Handle_Reset_PassThrough2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_Handle_Reset_PassThrough3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, int32 Temp_int_Array_Index_Variable, class UFortOptionsTab* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UWidget* K2Node_CustomEvent_ActiveWidget, int32 K2Node_CustomEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

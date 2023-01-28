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

// 0x50 (0x2D0 - 0x280)
// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         OverlayBorder;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Currently_Selected_Input;                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Currently_Primary;                              // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Using_Gamepad;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Gamepad_Changed;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabInputOptions_C");
		return Clss;
	}

	void NewFunction_0();
	void Set_Input_Enabled(int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess);
	void Overlay_Key_Pressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Construct();
	void Input_Clicked(int32 Number_in_List, bool Is_Primary_Button);
	void CenterOnTab();
	void UpdateOptionsTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(bool bUsingGamepad);
	void UnbindClicked(int32 Number_in_List);
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Number_In_List2, bool K2Node_CustomEvent_Is_Primary_Button, enum class ESlateVisibility Temp_byte_Variable2, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_Event_bUsingGamepad, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input2, bool K2Node_DynamicCast_bSuccess2, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_Not_PreBool_ReturnValue2, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 K2Node_CustomEvent_Number_in_List, enum class ESlateVisibility K2Node_Select2_Default, const struct FKey& K2Node_MakeStruct_Key, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, class FText Overlay_Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

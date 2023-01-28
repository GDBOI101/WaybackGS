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

// 0x783 (0xB8B - 0x408)
// WidgetBlueprintGeneratedClass QuantitySelector.QuantitySelector_C
class UQuantitySelector_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_363C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AdditionalInfo;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               CurrentAmount;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               MaxAmount;                                         // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MaxButton;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         ValueSlider;                                       // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WindowTitle;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxValue;                                          // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnButtonClickedDispatcher;                         // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnStackValueChangedDispatcher;                     // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             Item;                                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSliderStyle                          SliderStyle_MouseKeyboard;                         // 0x498(0x250)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                          SliderStyle_XboxOne;                               // 0x6E8(0x250)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                          SliderStyle_PS4;                                   // 0x938(0x250)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bShowConfirmButton;                                // 0xB88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bShowCancelButton;                                 // 0xB89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowZeroQuantity;                                // 0xB8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuantitySelector_C");
		return Clss;
	}

	void SetCurrentValue(int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough);
	void GetCurrentValue(int32* CurrentValue);
	void SetupForInputMode(bool IsUsingGamepad, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SliderValueChanged(float CallFunc_Conv_IntToFloat_ReturnValue);
	void HandleCancelPressed(bool* PassThrough);
	void HandleTransferPressed(bool* PassThrough);
	void HandleMaxPressed(bool* PassThrough);
	void CloseSelector(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetAdditionalText(class FText AdditionalInfoText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetSplitData(int32 StartingCount, int32 MaximumCount, class UFortItem* Item, class FText TitleText, class FText ButtonText, class FText AdditionalInfoText, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnDeactivated();
	void Construct();
	void HandleChangeInputMode(bool bUsingGamepad);
	void ExecuteUbergraph_QuantitySelector(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, float K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough, bool CallFunc_HandleTransferPressed_PassThrough, bool CallFunc_HandleCancelPressed_PassThrough, bool K2Node_CustomEvent_bUsingGamepad, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_IntFloat_ReturnValue2, int32 CallFunc_Round_ReturnValue2);
	void OnStackValueChangedDispatcher__DelegateSignature(int32 NewValue, class UFortItem* FortItem);
	void OnButtonClickedDispatcher__DelegateSignature(int32 ChosenValue, class UFortItem* FortItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

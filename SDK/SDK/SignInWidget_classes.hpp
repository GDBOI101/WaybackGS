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

// 0x68 (0x478 - 0x410)
// WidgetBlueprintGeneratedClass SignInWidget.SignInWidget_C
class USignInWidget_C : public UFortSignInWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UNamedSlot*                            ButtonSlot;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      CommonLazyImage_0;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ContentBox;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EmailBorder;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PasswordBorder;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LoginInputAction;                                  // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                HighlightBorderStyle;                              // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NormalBorderStyle;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignInWidget_C");
		return Clss;
	}

	void HandleTextCommited(enum class ETextCommit TextCommitType, class UCommonBorder* HighlightBorder, class UCommonBorder* NormalBorder, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue2, class UClass* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select2_Default);
	void BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void OnActivated();
	void BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_SignInWidget(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text4, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod2, class FText K2Node_ComponentBoundEvent_Text3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FText K2Node_ComponentBoundEvent_Text2, class FText K2Node_ComponentBoundEvent_Text, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

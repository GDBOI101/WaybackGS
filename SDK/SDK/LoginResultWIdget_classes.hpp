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

// 0x38 (0x418 - 0x3E0)
// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
class ULoginResultWIdget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UCommonLazyImage*                      CommonLazyImage_0;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ContinueButton;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleText;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnResultConfirmed;                                 // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginResultWIdget_C");
		return Clss;
	}

	void SetResultsData(class FText Title, bool bShowError, class FText Description);
	void SetDescription(class FText Description);
	void SetTitle(class FText Title, bool bShowError, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, class UClass* K2Node_Select_Default);
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void OnResultConfirmed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

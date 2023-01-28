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

// 0x90 (0x4B0 - 0x420)
// WidgetBlueprintGeneratedClass BannerSelectionWidget.BannerSelectionWidget_C
class UBannerSelectionWidget_C : public UFortBannerSelectorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*         BP_LocalPlayerBannerEditor;                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConfirmHomebaseNameButton;                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EntryVbox;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainIcon;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ProgressSizeBox;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ProgressText;                                      // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ProgressVBox;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               PatternPadding;                                    // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   PreviousCategoryAction;                            // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NextCategoryAction;                                // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BannerSelectionWidget_C");
		return Clss;
	}

	void HandleNextCategoryAction(bool* bPassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandlePreviousCategoryAction(bool* bPassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void OnActivated();
	void BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnHomebaseNameCommitFailed();
	void OnHomebaseNameCommitSucceeded();
	void GainFocusOfTextBox();
	void ExecuteUbergraph_BannerSelectionWidget(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsPlayerNameValid_OutIsValid, class FText CallFunc_IsPlayerNameValid_OutErrorText, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Attempt_Leave_Picker_Left, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller3, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_GetAtNameHomeBaseScreen_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, bool CallFunc_IsUsingGamepad_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller5, bool K2Node_DynamicCast_bSuccess5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

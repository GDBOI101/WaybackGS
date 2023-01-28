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

// 0x1E8 (0x628 - 0x440)
// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
class UAccountLinkingWindow_C : public UFortAccountLinkingWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLogIn;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonLogInFromPurchase;                           // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonNoThanks;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchasePack;                                // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSignUp;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInLogIn;                             // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInNoThanks;                          // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInSignup;                            // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobberArtificialDelay;                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextSignInText;                              // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       HaveEpicAccountBlur;                               // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLowerSpacer;                                  // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 MainWidgetSwitcher;                                // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       PurchasePackBlur;                                  // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RedeemCodeButton;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       SkipSignInBlur;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxBuyAccess;                              // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxHaveEpicAccount;                        // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxSkipSignIn;                             // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherNoThanksSwitcher;                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  OpeningStoreText;                                  // 0x4F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CheckingPurchasesText;                             // 0x508(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PurchasePackText;                                  // 0x520(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PurchaseFreePackText;                              // 0x538(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CreatingAccountText;                               // 0x550(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CreateHeadlessAccountFailedText;                   // 0x568(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ProceedingWithoutLinkingAccountsText;              // 0x580(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnRequestAutoLogin;                                // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnAccountLinkingComplete;                          // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnRequestSignIn;                                   // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnAccountLinkingFailed;                            // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnPushStatus;                                      // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnPopStatus;                                       // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnViewEula;                                        // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bLinkedAccountNeedsPurchase;                       // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OpeningCodeRedemption;                             // 0x610(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AccountLinkingWindow_C");
		return Clss;
	}

	void SetupLinkText(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2);
	void HideLinkOptions(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetLinkedAccountNeedsPurchase(bool bInLinkedAccountNeedsPurchase);
	void OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF();
	void OnPurchased_3B76089F4EB5000544C7BD8B10E707CF();
	void OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D();
	void OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D();
	void OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654();
	void OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654();
	void BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowBuyAccessScreen();
	void ShowHaveEpicAccountScreen();
	void ShowSkipSignInScreen();
	void ArtificialDelayExpired();
	void StartSignup();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void HandleNewPurchaseReceipt();
	void Construct();
	void BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AccountLinkingWindow(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAsyncAction_WebCreateEpicAccountAndLink* CallFunc_WebCreateEpicAccountAndLink_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortAsyncAction_CreateHeadlessAccount* CallFunc_CreateHeadlessAccount_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortAsyncAction_ShowPlatformStoreForPurchase* CallFunc_ShowPlatformStoreForPurchase_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortAsyncAction_ShowPlatformRedeemCode* CallFunc_ShowPlatformRedeemCode_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, bool CallFunc_IsValid_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortAsyncAction_CheckHasRedeemForAccess* CallFunc_CheckHasRedeemForAccess_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue5, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, bool CallFunc_IsPurchaseFree_ReturnValue, class FText K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue4, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* K2Node_Select2_Default);
	void OnViewEula__DelegateSignature();
	void OnPopStatus__DelegateSignature();
	void OnPushStatus__DelegateSignature(class FText StatusText);
	void OnAccountLinkingFailed__DelegateSignature(class FText FailReason);
	void OnRequestSignIn__DelegateSignature();
	void OnAccountLinkingComplete__DelegateSignature();
	void OnRequestAutoLogin__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

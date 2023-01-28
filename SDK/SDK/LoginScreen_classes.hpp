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

// 0xF0 (0x520 - 0x430)
// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
class ULoginScreen_C : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BackBorder;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BackButton;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoginBackground_C*                    LoginBackground;                                   // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    LoginFlowStack;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     Widget_BuildWatermark;                             // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            Sound_Login_Clicked;                               // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Login_Failed;                                // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Login_Music;                                 // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Login_Quit;                                  // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     FrontEnd_Music_Controller;                         // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusWidget_C*                       StatusWindow;                                      // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USignInWidget_C*                       SignInWindow;                                      // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     AccountLinkWindow;                                 // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoginMenuVisible;                                 // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2428[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoginResultWIdget_C*                  LoginResultWindow;                                 // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEulaWidget_C*                         EulaWindow;                                        // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BenchmarkDialogTitle;                              // 0x4D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BenchmarkDialogMessage;                            // 0x4E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                               LoginMenuWidget;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplashScreenWidget_C*                 SplashScreenWindow;                                // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     Test;                                              // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoginAccountSelect_C*                 AccountSelectWindow;                               // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginScreen_C");
		return Clss;
	}

	void SafePopContent(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ShowAccountSelectWindow(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULoginAccountSelect_C* CallFunc_Create_ReturnValue);
	void CheckSkipSplashScreen(bool CallFunc_ShouldBypassSplashScreen_ReturnValue);
	void EmptyLoginStack(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void HideNonSplashScreenContent();
	void RollbackToSplashScreen(class UWidget* CallFunc_PopWigdet_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void ShowSplashScreen(bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USplashScreenWidget_C* CallFunc_Create_ReturnValue);
	class UWidget* GetLoginMenu();
	struct FEventReply OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SkipBenchmark(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void RunBenchmark(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void ShouldShowBenchmark(bool* Return_Value, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldRunInitialBenchmark_ReturnValue);
	void ShowEulaWindow(class FText Text, bool ViewOnly, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEulaWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetResultsDescription(class FText Description, bool CallFunc_IsValid_ReturnValue);
	void SetResultTitle(class FText Title, bool bShowError, bool CallFunc_IsValid_ReturnValue);
	void ShowResultWindow(class FText Title, class FText Description, bool bShowError, bool bLoggedOut, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULoginResultWIdget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ToggleLoginMenu(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateStatusTitle(class FText Title, bool CallFunc_IsValid_ReturnValue);
	void ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAccountLinkingWindow_C* CallFunc_Create_ReturnValue, class UAccountLinkingWindow_C* K2Node_DynamicCast_AsAccount_Linking_Window, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ShowStatusWindow(class FText StatusText, class FText LocalStatusText, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStatusWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShowSignInWindow(bool DirectSignIn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USignInWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DialogResult_EE7DC32F44B9651770AED08101A03510(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_B952A8754B3836D2151B4981F531542E(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void OnPatchingComplete(bool bProceed);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void OnExitState(enum class EFortUIState NextUIState);
	void HandleOnStartLogin(const class FString& LoginEmail, const class FString& LoginPassword);
	void OnLoginFailed(class FText& Reason);
	void OnLoginSuceeded();
	void OnEulaAvailable(class FText& EulaText);
	void HandleEulaResponse(bool Accepted);
	void HandleResultConfirmed();
	void HandlerBenchmarkFlow();
	void AccountLinking_PushStatus(class FText StatusText);
	void AccountLinking_PopStatus();
	void AccountLinking_LinkingFailed(class FText FailReason);
	void AccountLinking_RequestSignIn();
	void AccountLinking_RequestAutoLogin();
	void OnSplashScreenClosed();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnLogoutComplete();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AccountLinking_ViewEula();
	void HandleViewOnlyClose();
	void OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase);
	void HandleOnLoginAccountTypeSelected(enum class EFortLoginAccountType LoginAccountType);
	void OnPostLoginLogoutComplete(class FText& Reason);
	void OnShowLoginMessage(bool bShow, class FText& Tile, class FText& Body);
	void HandleLoggedOutErrorDismissed();
	void OnLoggedOutWithError(class FText& ErrorText);
	void ExecuteUbergraph_LoginScreen(int32 EntryPoint, class FText K2Node_Event_ErrorText, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsMobileApp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_bProceed, bool CallFunc_StartAutoLogin_ReturnValue, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, const class FString& K2Node_CustomEvent_LoginEmail, const class FString& K2Node_CustomEvent_LoginPassword, class FText K2Node_Event_Reason2, bool CallFunc_StartManualLogin_ReturnValue, class FText K2Node_Event_EulaText, int32 Temp_int_Array_Index_Variable, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Accepted, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_ShouldShowBenchmark_Return_Value, bool K2Node_SwitchEnum2_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_CustomEvent_StatusText, class FText K2Node_CustomEvent_FailReason, bool CallFunc_StartAutoLogin_ReturnValue2, class FName Temp_name_Variable2, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, bool CallFunc_IsLoggingOut_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsLoggedIn_ReturnValue, class FText CallFunc_GetEULAText_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool K2Node_Event_bLinkedAccountNeedsPurchase, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, bool CallFunc_CheckNetworkError_ReturnValue, bool CallFunc_CheckNetworkError_ReturnValue2, enum class EFortLoginAccountType K2Node_CustomEvent_LoginAccountType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue2, class FText K2Node_Event_Reason, bool K2Node_Event_bShow, class FText K2Node_Event_Tile, class FText K2Node_Event_Body, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

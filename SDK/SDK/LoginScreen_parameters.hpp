#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x11 - 0x0)
// Function LoginScreen.LoginScreen_C.SafePopContent
struct ULoginScreen_C_SafePopContent_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
struct ULoginScreen_C_ShowAccountSelectWindow_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2408[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoginAccountSelect_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
struct ULoginScreen_C_CheckSkipSplashScreen_Params
{
public:
	bool                                         CallFunc_ShouldBypassSplashScreen_ReturnValue;     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function LoginScreen.LoginScreen_C.EmptyLoginStack
struct ULoginScreen_C_EmptyLoginStack_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2409[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
struct ULoginScreen_C_HideNonSplashScreenContent_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
struct ULoginScreen_C_RollbackToSplashScreen_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
struct ULoginScreen_C_PopContentWidgetInternal_Params
{
public:
	struct FContentPushState                     State;                                             // 0x0(0x3)(Parm, NoDestructor)
	uint8                                        Pad_240A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowSplashScreen
struct ULoginScreen_C_ShowSplashScreen_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplashScreenWidget_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LoginScreen.LoginScreen_C.GetLoginMenu
struct ULoginScreen_C_GetLoginMenu_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
struct ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
};

// 0x8 (0x8 - 0x0)
// Function LoginScreen.LoginScreen_C.SkipBenchmark
struct ULoginScreen_C_SkipBenchmark_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LoginScreen.LoginScreen_C.RunBenchmark
struct ULoginScreen_C_RunBenchmark_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
struct ULoginScreen_C_ShouldShowBenchmark_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldRunInitialBenchmark_ReturnValue;    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowEulaWindow
struct ULoginScreen_C_ShowEulaWindow_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	bool                                         ViewOnly;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEulaWidget_C*                         CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function LoginScreen.LoginScreen_C.SetResultsDescription
struct ULoginScreen_C_SetResultsDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function LoginScreen.LoginScreen_C.SetResultTitle
struct ULoginScreen_C_SetResultTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
	bool                                         bShowError;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowResultWindow
struct ULoginScreen_C_ShowResultWindow_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
	class FText                                  Description;                                       // 0x18(0x18)(Parm)
	bool                                         bShowError;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLoggedOut;                                        // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoginResultWIdget_C*                  CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
struct ULoginScreen_C_ToggleLoginMenu_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
struct ULoginScreen_C_UpdateStatusTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
struct ULoginScreen_C_ShowAccountLinkingWindow_Params
{
public:
	bool                                         InLinkedAccountNeedsPurchase;                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2410[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetPlatformDisplayName_ReturnValue;       // 0x18(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccountLinkingWindow_C*               CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccountLinkingWindow_C*               K2Node_DynamicCast_AsAccount_Linking_Window;       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowStatusWindow
struct ULoginScreen_C_ShowStatusWindow_Params
{
public:
	class FText                                  StatusText;                                        // 0x0(0x18)(Parm)
	class FText                                  LocalStatusText;                                   // 0x18(0x18)(Edit)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2411[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusWidget_C*                       CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function LoginScreen.LoginScreen_C.ShowSignInWindow
struct ULoginScreen_C_ShowSignInWindow_Params
{
public:
	bool                                         DirectSignIn;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2412[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USignInWidget_C*                       CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
struct ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2413[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
struct ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2414[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.OnPatchingComplete
struct ULoginScreen_C_OnPatchingComplete_Params
{
public:
	bool                                         bProceed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.OnExitState
struct ULoginScreen_C_OnExitState_Params
{
public:
	enum class EFortUIState                      NextUIState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
struct ULoginScreen_C_HandleOnStartLogin_Params
{
public:
	class FString                                LoginEmail;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                LoginPassword;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.OnLoginFailed
struct ULoginScreen_C_OnLoginFailed_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
struct ULoginScreen_C_OnLoginSuceeded_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.OnEulaAvailable
struct ULoginScreen_C_OnEulaAvailable_Params
{
public:
	class FText                                  EulaText;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleEulaResponse
struct ULoginScreen_C_HandleEulaResponse_Params
{
public:
	bool                                         Accepted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
struct ULoginScreen_C_HandleResultConfirmed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
struct ULoginScreen_C_HandlerBenchmarkFlow_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
struct ULoginScreen_C_AccountLinking_PushStatus_Params
{
public:
	class FText                                  StatusText;                                        // 0x0(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
struct ULoginScreen_C_AccountLinking_PopStatus_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
struct ULoginScreen_C_AccountLinking_LinkingFailed_Params
{
public:
	class FText                                  FailReason;                                        // 0x0(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
struct ULoginScreen_C_AccountLinking_RequestSignIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
struct ULoginScreen_C_AccountLinking_RequestAutoLogin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
struct ULoginScreen_C_OnSplashScreenClosed_Params
{
public:
};

// 0xB (0xB - 0x0)
// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
struct ULoginScreen_C_PushContentWidgetInternal_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     State;                                             // 0x8(0x3)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.OnLogoutComplete
struct ULoginScreen_C_OnLogoutComplete_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
struct ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
struct ULoginScreen_C_AccountLinking_ViewEula_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
struct ULoginScreen_C_HandleViewOnlyClose_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
struct ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params
{
public:
	bool                                         bLinkedAccountNeedsPurchase;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
struct ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params
{
public:
	enum class EFortLoginAccountType             LoginAccountType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
struct ULoginScreen_C_OnPostLoginLogoutComplete_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
struct ULoginScreen_C_OnShowLoginMessage_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2415[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tile;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	class FText                                  Body;                                              // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function LoginScreen.LoginScreen_C.HandleLoggedOutErrorDismissed
struct ULoginScreen_C_HandleLoggedOutErrorDismissed_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LoginScreen.LoginScreen_C.OnLoggedOutWithError
struct ULoginScreen_C_OnLoggedOutWithError_Params
{
public:
	class FText                                  ErrorText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x221 (0x221 - 0x0)
// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2416[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_ErrorText;                            // 0x8(0x18)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2417[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2418[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2419[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bProceed;                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StartAutoLogin_ReturnValue;               // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      K2Node_Event_PreviousUIState;                      // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      K2Node_Event_NextUIState;                          // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_241A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_LoginEmail;                     // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_LoginPassword;                  // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Reason2;                              // 0xA8(0x18)(ConstParm)
	bool                                         CallFunc_StartManualLogin_ReturnValue;             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_241B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_EulaText;                             // 0xC8(0x18)(ConstParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_241C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFort_Entry_Music_Controller_BP_C*     CallFunc_Array_Get_Item;                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Accepted;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 Temp_byte_Variable2;                               // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldShowBenchmark_Return_Value;         // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_241D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue4;                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_241E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_StatusText;                     // 0x110(0x18)()
	class FText                                  K2Node_CustomEvent_FailReason;                     // 0x128(0x18)()
	bool                                         CallFunc_StartAutoLogin_ReturnValue2;              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_241F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable2;                               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Event_Widget;                               // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     K2Node_Event_State;                                // 0x158(0x3)(NoDestructor)
	bool                                         CallFunc_IsLoggingOut_ReturnValue;                 // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2420[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2421[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEULAText_ReturnValue;                  // 0x170(0x18)()
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2422[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue2;            // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue2;              // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bLinkedAccountNeedsPurchase;          // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result2;                        // 0x196(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2423[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName2;                    // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckNetworkError_ReturnValue;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckNetworkError_ReturnValue2;           // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortLoginAccountType             K2Node_CustomEvent_LoginAccountType;               // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2424[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2425[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoggedIn_ReturnValue2;                  // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2426[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Reason;                               // 0x1C8(0x18)(ConstParm)
	bool                                         K2Node_Event_bShow;                                // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2427[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Tile;                                 // 0x1E8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Body;                                 // 0x200(0x18)(ConstParm)
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2; // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

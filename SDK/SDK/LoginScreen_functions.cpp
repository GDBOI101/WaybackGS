#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function LoginScreen.LoginScreen_C.SafePopContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::SafePopContent(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "SafePopContent");

	Params::ULoginScreen_C_SafePopContent_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoginAccountSelect_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::ShowAccountSelectWindow(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULoginAccountSelect_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowAccountSelectWindow");

	Params::ULoginScreen_C_ShowAccountSelectWindow_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldBypassSplashScreen_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::CheckSkipSplashScreen(bool CallFunc_ShouldBypassSplashScreen_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "CheckSkipSplashScreen");

	Params::ULoginScreen_C_CheckSkipSplashScreen_Params Parms;
	Parms.CallFunc_ShouldBypassSplashScreen_ReturnValue = CallFunc_ShouldBypassSplashScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.EmptyLoginStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::EmptyLoginStack(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "EmptyLoginStack");

	Params::ULoginScreen_C_EmptyLoginStack_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HideNonSplashScreenContent()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HideNonSplashScreenContent");

	Params::ULoginScreen_C_HideNonSplashScreenContent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::RollbackToSplashScreen(class UWidget* CallFunc_PopWigdet_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "RollbackToSplashScreen");

	Params::ULoginScreen_C_RollbackToSplashScreen_Params Parms;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULoginScreen_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "PopContentWidgetInternal");

	Params::ULoginScreen_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginScreen.LoginScreen_C.ShowSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplashScreenWidget_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::ShowSplashScreen(bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USplashScreenWidget_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowSplashScreen");

	Params::ULoginScreen_C_ShowSplashScreen_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.GetLoginMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULoginScreen_C::GetLoginMenu()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "GetLoginMenu");

	Params::ULoginScreen_C_GetLoginMenu_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply ULoginScreen_C::OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnMouseButtonUp_MenuBorder");

	Params::ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginScreen.LoginScreen_C.SkipBenchmark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::SkipBenchmark(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "SkipBenchmark");

	Params::ULoginScreen_C_SkipBenchmark_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.RunBenchmark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::RunBenchmark(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "RunBenchmark");

	Params::ULoginScreen_C_RunBenchmark_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRunInitialBenchmark_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShouldShowBenchmark(bool* Return_Value, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldRunInitialBenchmark_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShouldShowBenchmark");

	Params::ULoginScreen_C_ShouldShowBenchmark_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ShouldRunInitialBenchmark_ReturnValue = CallFunc_ShouldRunInitialBenchmark_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function LoginScreen.LoginScreen_C.ShowEulaWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// bool                               ViewOnly                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEulaWidget_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowEulaWindow(class FText Text, bool ViewOnly, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEulaWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowEulaWindow");

	Params::ULoginScreen_C_ShowEulaWindow_Params Parms;
	Parms.Text = Text;
	Parms.ViewOnly = ViewOnly;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.SetResultsDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::SetResultsDescription(class FText Description, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "SetResultsDescription");

	Params::ULoginScreen_C_SetResultsDescription_Params Parms;
	Parms.Description = Description;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.SetResultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::SetResultTitle(class FText Title, bool bShowError, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "SetResultTitle");

	Params::ULoginScreen_C_SetResultTitle_Params Parms;
	Parms.Title = Title;
	Parms.bShowError = bShowError;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowResultWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// class FText                        Description                                                      (Parm)
// bool                               bShowError                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoggedOut                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoginResultWIdget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowResultWindow(class FText Title, class FText Description, bool bShowError, bool bLoggedOut, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULoginResultWIdget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowResultWindow");

	Params::ULoginScreen_C_ShowResultWindow_Params Parms;
	Parms.Title = Title;
	Parms.Description = Description;
	Parms.bShowError = bShowError;
	Parms.bLoggedOut = bLoggedOut;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ToggleLoginMenu(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ToggleLoginMenu");

	Params::ULoginScreen_C_ToggleLoginMenu_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::UpdateStatusTitle(class FText Title, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "UpdateStatusTitle");

	Params::ULoginScreen_C_UpdateStatusTitle_Params Parms;
	Parms.Title = Title;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InLinkedAccountNeedsPurchase                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetPlatformDisplayName_ReturnValue                      ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAccountLinkingWindow_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAccountLinkingWindow_C*     K2Node_DynamicCast_AsAccount_Linking_Window                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAccountLinkingWindow_C* CallFunc_Create_ReturnValue, class UAccountLinkingWindow_C* K2Node_DynamicCast_AsAccount_Linking_Window, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowAccountLinkingWindow");

	Params::ULoginScreen_C_ShowAccountLinkingWindow_Params Parms;
	Parms.InLinkedAccountNeedsPurchase = InLinkedAccountNeedsPurchase;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlatformDisplayName_ReturnValue = CallFunc_GetPlatformDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsAccount_Linking_Window = K2Node_DynamicCast_AsAccount_Linking_Window;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowStatusWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (Parm)
// class FText                        LocalStatusText                                                  (Edit)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusWidget_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowStatusWindow(class FText StatusText, class FText LocalStatusText, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStatusWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowStatusWindow");

	Params::ULoginScreen_C_ShowStatusWindow_Params Parms;
	Parms.StatusText = StatusText;
	Parms.LocalStatusText = LocalStatusText;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowSignInWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DirectSignIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USignInWidget_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowSignInWindow(bool DirectSignIn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USignInWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowSignInWindow");

	Params::ULoginScreen_C_ShowSignInWindow_Params Parms;
	Parms.DirectSignIn = DirectSignIn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::DialogResult_EE7DC32F44B9651770AED08101A03510(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "DialogResult_EE7DC32F44B9651770AED08101A03510");

	Params::ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::DialogResult_B952A8754B3836D2151B4981F531542E(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "DialogResult_B952A8754B3836D2151B4981F531542E");

	Params::ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginScreen_C::Construct()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "Construct");

	Params::ULoginScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnPatchingComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bProceed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::OnPatchingComplete(bool bProceed)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnPatchingComplete");

	Params::ULoginScreen_C_OnPatchingComplete_Params Parms;
	Parms.bProceed = bProceed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnEnterState");

	Params::ULoginScreen_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            NextUIState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::OnExitState(enum class EFortUIState NextUIState)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnExitState");

	Params::ULoginScreen_C_OnExitState_Params Parms;
	Parms.NextUIState = NextUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LoginEmail                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LoginPassword                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void ULoginScreen_C::HandleOnStartLogin(const class FString& LoginEmail, const class FString& LoginPassword)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleOnStartLogin");

	Params::ULoginScreen_C_HandleOnStartLogin_Params Parms;
	Parms.LoginEmail = LoginEmail;
	Parms.LoginPassword = LoginPassword;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnLoginFailed
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnLoginFailed(class FText& Reason)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnLoginFailed");

	Params::ULoginScreen_C_OnLoginFailed_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::OnLoginSuceeded()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnLoginSuceeded");

	Params::ULoginScreen_C_OnLoginSuceeded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnEulaAvailable
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        EulaText                                                         (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnEulaAvailable(class FText& EulaText)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnEulaAvailable");

	Params::ULoginScreen_C_OnEulaAvailable_Params Parms;
	Parms.EulaText = EulaText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleEulaResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::HandleEulaResponse(bool Accepted)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleEulaResponse");

	Params::ULoginScreen_C_HandleEulaResponse_Params Parms;
	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HandleResultConfirmed()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleResultConfirmed");

	Params::ULoginScreen_C_HandleResultConfirmed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HandlerBenchmarkFlow()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandlerBenchmarkFlow");

	Params::ULoginScreen_C_HandlerBenchmarkFlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (Parm)

void ULoginScreen_C::AccountLinking_PushStatus(class FText StatusText)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_PushStatus");

	Params::ULoginScreen_C_AccountLinking_PushStatus_Params Parms;
	Parms.StatusText = StatusText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_PopStatus()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_PopStatus");

	Params::ULoginScreen_C_AccountLinking_PopStatus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FailReason                                                       (Parm)

void ULoginScreen_C::AccountLinking_LinkingFailed(class FText FailReason)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_LinkingFailed");

	Params::ULoginScreen_C_AccountLinking_LinkingFailed_Params Parms;
	Parms.FailReason = FailReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_RequestSignIn()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_RequestSignIn");

	Params::ULoginScreen_C_AccountLinking_RequestSignIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_RequestAutoLogin()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_RequestAutoLogin");

	Params::ULoginScreen_C_AccountLinking_RequestAutoLogin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::OnSplashScreenClosed()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnSplashScreenClosed");

	Params::ULoginScreen_C_OnSplashScreenClosed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void ULoginScreen_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "PushContentWidgetInternal");

	Params::ULoginScreen_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnLogoutComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void ULoginScreen_C::OnLogoutComplete()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnLogoutComplete");

	Params::ULoginScreen_C_OnLogoutComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	Params::ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_ViewEula()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_ViewEula");

	Params::ULoginScreen_C_AccountLinking_ViewEula_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HandleViewOnlyClose()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleViewOnlyClose");

	Params::ULoginScreen_C_HandleViewOnlyClose_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bLinkedAccountNeedsPurchase                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnNeedsPurchaseOrAccountLinking");

	Params::ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params Parms;
	Parms.bLinkedAccountNeedsPurchase = bLinkedAccountNeedsPurchase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortLoginAccountType   LoginAccountType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::HandleOnLoginAccountTypeSelected(enum class EFortLoginAccountType LoginAccountType)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleOnLoginAccountTypeSelected");

	Params::ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params Parms;
	Parms.LoginAccountType = LoginAccountType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnPostLoginLogoutComplete(class FText& Reason)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnPostLoginLogoutComplete");

	Params::ULoginScreen_C_OnPostLoginLogoutComplete_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Tile                                                             (ConstParm, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnShowLoginMessage(bool bShow, class FText& Tile, class FText& Body)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnShowLoginMessage");

	Params::ULoginScreen_C_OnShowLoginMessage_Params Parms;
	Parms.bShow = bShow;
	Parms.Tile = Tile;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HandleLoggedOutErrorDismissed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HandleLoggedOutErrorDismissed()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HandleLoggedOutErrorDismissed");

	Params::ULoginScreen_C_HandleLoggedOutErrorDismissed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnLoggedOutWithError
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorText                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnLoggedOutWithError(class FText& ErrorText)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnLoggedOutWithError");

	Params::ULoginScreen_C_OnLoggedOutWithError_Params Parms;
	Parms.ErrorText = ErrorText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ErrorText                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bProceed                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartAutoLogin_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            K2Node_Event_NextUIState                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_LoginEmail                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_LoginPassword                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Reason2                                             (ConstParm)
// bool                               CallFunc_StartManualLogin_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_EulaText                                            (ConstParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Accepted                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowBenchmark_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_StatusText                                    ()
// class FText                        K2Node_CustomEvent_FailReason                                    ()
// bool                               CallFunc_StartAutoLogin_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// bool                               CallFunc_IsLoggingOut_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEULAText_ReturnValue                                 ()
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bLinkedAccountNeedsPurchase                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckNetworkError_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckNetworkError_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortLoginAccountType   K2Node_CustomEvent_LoginAccountType                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Reason                                              (ConstParm)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Tile                                                (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int32 EntryPoint, class FText K2Node_Event_ErrorText, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsMobileApp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_bProceed, bool CallFunc_StartAutoLogin_ReturnValue, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, const class FString& K2Node_CustomEvent_LoginEmail, const class FString& K2Node_CustomEvent_LoginPassword, class FText K2Node_Event_Reason2, bool CallFunc_StartManualLogin_ReturnValue, class FText K2Node_Event_EulaText, int32 Temp_int_Array_Index_Variable, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Accepted, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_ShouldShowBenchmark_Return_Value, bool K2Node_SwitchEnum2_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_CustomEvent_StatusText, class FText K2Node_CustomEvent_FailReason, bool CallFunc_StartAutoLogin_ReturnValue2, class FName Temp_name_Variable2, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, bool CallFunc_IsLoggingOut_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsLoggedIn_ReturnValue, class FText CallFunc_GetEULAText_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool K2Node_Event_bLinkedAccountNeedsPurchase, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, bool CallFunc_CheckNetworkError_ReturnValue, bool CallFunc_CheckNetworkError_ReturnValue2, enum class EFortLoginAccountType K2Node_CustomEvent_LoginAccountType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue2, class FText K2Node_Event_Reason, bool K2Node_Event_bShow, class FText K2Node_Event_Tile, class FText K2Node_Event_Body, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ExecuteUbergraph_LoginScreen");

	Params::ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ErrorText = K2Node_Event_ErrorText;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_bProceed = K2Node_Event_bProceed;
	Parms.CallFunc_StartAutoLogin_ReturnValue = CallFunc_StartAutoLogin_ReturnValue;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.K2Node_Event_NextUIState = K2Node_Event_NextUIState;
	Parms.K2Node_CustomEvent_LoginEmail = K2Node_CustomEvent_LoginEmail;
	Parms.K2Node_CustomEvent_LoginPassword = K2Node_CustomEvent_LoginPassword;
	Parms.K2Node_Event_Reason2 = K2Node_Event_Reason2;
	Parms.CallFunc_StartManualLogin_ReturnValue = CallFunc_StartManualLogin_ReturnValue;
	Parms.K2Node_Event_EulaText = K2Node_Event_EulaText;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_Accepted = K2Node_CustomEvent_Accepted;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_ShouldShowBenchmark_Return_Value = CallFunc_ShouldShowBenchmark_Return_Value;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_StatusText = K2Node_CustomEvent_StatusText;
	Parms.K2Node_CustomEvent_FailReason = K2Node_CustomEvent_FailReason;
	Parms.CallFunc_StartAutoLogin_ReturnValue2 = CallFunc_StartAutoLogin_ReturnValue2;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_IsLoggingOut_ReturnValue = CallFunc_IsLoggingOut_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_GetEULAText_ReturnValue = CallFunc_GetEULAText_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_Event_bLinkedAccountNeedsPurchase = K2Node_Event_bLinkedAccountNeedsPurchase;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.CallFunc_CheckNetworkError_ReturnValue = CallFunc_CheckNetworkError_ReturnValue;
	Parms.CallFunc_CheckNetworkError_ReturnValue2 = CallFunc_CheckNetworkError_ReturnValue2;
	Parms.K2Node_CustomEvent_LoginAccountType = K2Node_CustomEvent_LoginAccountType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsLoggedIn_ReturnValue2 = CallFunc_IsLoggedIn_ReturnValue2;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;
	Parms.K2Node_Event_Tile = K2Node_Event_Tile;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

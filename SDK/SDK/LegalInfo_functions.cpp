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


// Function LegalInfo.LegalInfo_C.On Scroll Down
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegalInfo_C::On_Scroll_Down(bool* PassThrough)
{
	static auto Func = Class->GetFunction("LegalInfo_C", "On Scroll Down");

	Params::ULegalInfo_C_On_Scroll_Down_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("LegalInfo_C", "BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature");

	Params::ULegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LegalInfo_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");

	Params::ULegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("LegalInfo_C", "BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature");

	Params::ULegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegalInfo.LegalInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegalInfo_C::Construct()
{
	static auto Func = Class->GetFunction("LegalInfo_C", "Construct");

	Params::ULegalInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEulaTab_C*                  K2Node_DynamicCast_AsEula_Tab                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UThirdPartyTab_C*            K2Node_DynamicCast_AsThird_Party_Tab                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::ExecuteUbergraph_LegalInfo(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UEulaTab_C* K2Node_DynamicCast_AsEula_Tab, bool K2Node_DynamicCast_bSuccess, class UThirdPartyTab_C* K2Node_DynamicCast_AsThird_Party_Tab, bool K2Node_DynamicCast_bSuccess2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("LegalInfo_C", "ExecuteUbergraph_LegalInfo");

	Params::ULegalInfo_C_ExecuteUbergraph_LegalInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_DynamicCast_AsEula_Tab = K2Node_DynamicCast_AsEula_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsThird_Party_Tab = K2Node_DynamicCast_AsThird_Party_Tab;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

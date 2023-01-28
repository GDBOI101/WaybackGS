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


// Function TabGameOptions.TabGameOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "Construct");

	Params::UTabGameOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "UpdateOptionsTab");

	Params::UTabGameOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "CenterOnTab");

	Params::UTabGameOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.Tab Settings Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptions_C::Tab_Settings_Changed()
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "Tab Settings Changed");

	Params::UTabGameOptions_C_Tab_Settings_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptions_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature");

	Params::UTabGameOptions_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptions_C::BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature");

	Params::UTabGameOptions_C_BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptions.TabGameOptions_C.ExecuteUbergraph_TabGameOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumWidgets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptionsMain_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo2                        ()
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptionsHud_C*        CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterFortTab_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptionsMain_C*       CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTabGameOptions_C*           K2Node_DynamicCast_AsTab_Game_Options4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGameOptions_C::ExecuteUbergraph_TabGameOptions(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options3, bool K2Node_DynamicCast_bSuccess3, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class UTabGameOptionsHud_C* CallFunc_Create_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue3, class UPanelSlot* CallFunc_AddChild_ReturnValue3, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess4, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options4, bool K2Node_DynamicCast_bSuccess5, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGameOptions_C", "ExecuteUbergraph_TabGameOptions");

	Params::UTabGameOptions_C_ExecuteUbergraph_TabGameOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Game_Options = K2Node_DynamicCast_AsTab_Game_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsTab_Game_Options2 = K2Node_DynamicCast_AsTab_Game_Options2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_DynamicCast_AsTab_Game_Options3 = K2Node_DynamicCast_AsTab_Game_Options3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo2 = K2Node_MakeStruct_FortTabButtonLabelInfo2;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_RegisterFortTab_ReturnValue2 = CallFunc_RegisterFortTab_ReturnValue2;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_AddChild_ReturnValue3 = CallFunc_AddChild_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTab_Game_Options4 = K2Node_DynamicCast_AsTab_Game_Options4;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

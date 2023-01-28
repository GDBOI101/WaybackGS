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


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::HandleMgmtMenuTabChangeRequested(class FName TabName, bool CallFunc_SelectTabByID_ReturnValue)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "HandleMgmtMenuTabChangeRequested");

	Params::UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params Parms;
	Parms.TabName = TabName;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCursorMode_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::HandleDamageReceived(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "HandleDamageReceived");

	Params::UMgmtTabsScreen_C_HandleDamageReceived_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInCursorMode_ReturnValue = CallFunc_IsInCursorMode_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentCustomWidget                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_SelectTabByID_ReturnValue)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "HandleCursorModeChanged");

	Params::UMgmtTabsScreen_C_HandleCursorModeChanged_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMgmtTabsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "OnActivated");

	Params::UMgmtTabsScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	Params::UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMgmtTabsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "Construct");

	Params::UMgmtTabsScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMgmtTabsScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "Destruct");

	Params::UMgmtTabsScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          ChangedFeature                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::HandleShowQuests(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "HandleShowQuests");

	Params::UMgmtTabsScreen_C_HandleShowQuests_Params Parms;
	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          ChangedFeature                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::HandleShowObjectives(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "HandleShowObjectives");

	Params::UMgmtTabsScreen_C_HandleShowObjectives_Params Parms;
	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemManagementScreen*   K2Node_DynamicCast_AsFort_Item_Management_Screen                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// enum class EFortUIFeatureState     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeature          K2Node_CustomEvent_ChangedFeature2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     K2Node_CustomEvent_NewState2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeature          K2Node_CustomEvent_ChangedFeature                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMgmtTabsScreen_C::ExecuteUbergraph_MgmtTabsScreen(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UFortHUDContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemManagementScreen* K2Node_DynamicCast_AsFort_Item_Management_Screen, bool K2Node_DynamicCast_bSuccess, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EFortUIFeatureState Temp_byte_Variable2, enum class EFortUIFeature K2Node_CustomEvent_ChangedFeature2, enum class EFortUIFeatureState K2Node_CustomEvent_NewState2, bool K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, enum class EFortUIFeature K2Node_CustomEvent_ChangedFeature, enum class EFortUIFeatureState K2Node_CustomEvent_NewState, bool K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("MgmtTabsScreen_C", "ExecuteUbergraph_MgmtTabsScreen");

	Params::UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item_Management_Screen = K2Node_DynamicCast_AsFort_Item_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_CustomEvent_ChangedFeature2 = K2Node_CustomEvent_ChangedFeature2;
	Parms.K2Node_CustomEvent_NewState2 = K2Node_CustomEvent_NewState2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CustomEvent_ChangedFeature = K2Node_CustomEvent_ChangedFeature;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

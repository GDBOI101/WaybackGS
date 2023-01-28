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


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CenterPermissionsWidget()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "CenterPermissionsWidget");

	Params::UOutpostScreenStormShield_C_CenterPermissionsWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CenterStormShieldWidget()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "CenterStormShieldWidget");

	Params::UOutpostScreenStormShield_C_CenterStormShieldWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "HandleBack");

	Params::UOutpostScreenStormShield_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UOutpostScreenStormShield_C::AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "AddInputHandlers");

	Params::UOutpostScreenStormShield_C_AddInputHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortOutpostBuilding*        NewCoreBuilding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenStormShieldContent_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutpostScreenStormShieldPermissions_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShield_C::SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue2, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "SetCoreBuilding");

	Params::UOutpostScreenStormShield_C_SetCoreBuilding_Params Parms;
	Parms.NewCoreBuilding = NewCoreBuilding;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue2 = CallFunc_GetWidgetAtIndex_ReturnValue2;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::Construct()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "Construct");

	Params::UOutpostScreenStormShield_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature");

	Params::UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenStormShieldPermissions_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutpostScreenStormShieldContent_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::ExecuteUbergraph_OutpostScreenStormShield(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId2, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue2, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "ExecuteUbergraph_OutpostScreenStormShield");

	Params::UOutpostScreenStormShield_C_ExecuteUbergraph_OutpostScreenStormShield_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue2 = CallFunc_GetWidgetAtIndex_ReturnValue2;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CloseOutpostScreen__DelegateSignature()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShield_C", "CloseOutpostScreen__DelegateSignature");

	Params::UOutpostScreenStormShield_C_CloseOutpostScreen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

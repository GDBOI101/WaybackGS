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


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabSelected(class FName TabName, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabSelected");

	Params::UAthenaTabsScreen_C_HandleTabSelected_Params Parms;
	Parms.TabName = TabName;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               LocalTab                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalTabId                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UAthenaTabsScreen_C::HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabCreated");

	Params::UAthenaTabsScreen_C_HandleTabCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;
	Parms.LocalTab = LocalTab;
	Parms.LocalTabId = LocalTabId;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "OnActivated");

	Params::UAthenaTabsScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "Construct");

	Params::UAthenaTabsScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "OnDeactivated");

	Params::UAthenaTabsScreen_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           TabWidget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabContentCreated");

	Params::UAthenaTabsScreen_C_HandleTabContentCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           K2Node_CustomEvent_TabWidget                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_Root_C*           K2Node_DynamicCast_AsStore_Main_Root                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTabsScreen_C::ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName K2Node_ComponentBoundEvent_TabId, TArray<class FString>& K2Node_MakeArray_Array, class FName K2Node_CustomEvent_TabId, class UCommonUserWidget* K2Node_CustomEvent_TabWidget, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "ExecuteUbergraph_AthenaTabsScreen");

	Params::UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;
	Parms.K2Node_CustomEvent_TabWidget = K2Node_CustomEvent_TabWidget;
	Parms.K2Node_DynamicCast_AsStore_Main_Root = K2Node_DynamicCast_AsStore_Main_Root;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

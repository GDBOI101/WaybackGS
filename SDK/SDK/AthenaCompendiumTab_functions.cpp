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


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleTabButtonCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               LocalTab                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalTabId                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UAthenaCompendiumTab_C::HandleTabButtonCreated(class FName TabId, class UCommonButton* Button, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "HandleTabButtonCreated");

	Params::UAthenaCompendiumTab_C_HandleTabButtonCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.Button = Button;
	Parms.LocalTab = LocalTab;
	Parms.LocalTabId = LocalTabId;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompendiumTab_C::HandleTabSelected(class FName TabId, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "HandleTabSelected");

	Params::UAthenaCompendiumTab_C_HandleTabSelected_Params Parms;
	Parms.TabId = TabId;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ResetTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCompendiumTab_C::ResetTabs()
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "ResetTabs");

	Params::UAthenaCompendiumTab_C_ResetTabs_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.CreateTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCompendiumBundleDefinition*CompendiumBundleDefinition                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ContentWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompendiumTab_C::CreateTab(class UFortCompendiumBundleDefinition* CompendiumBundleDefinition, class UWidget* ContentWidget, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "CreateTab");

	Params::UAthenaCompendiumTab_C_CreateTab_Params Parms;
	Parms.CompendiumBundleDefinition = CompendiumBundleDefinition;
	Parms.ContentWidget = ContentWidget;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.UpdateCompendiumViews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortCompendiumBundle*>CompendiumBundles                                                (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCompendiumBundleDefinition*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompendiumBundleUpsellPage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCompendiumBundle*       CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCompendiumBundleDefinition*CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompendiumBundle_C*         CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCompendiumBundle*>CallFunc_GetCompendiumBundles_OutActiveBundles                   (ZeroConstructor, ReferenceParm)
// TArray<class UFortCompendiumBundleDefinition*>CallFunc_GetCompendiumBundles_OutUnlockableBundles               (ZeroConstructor, ReferenceParm)

void UAthenaCompendiumTab_C::UpdateCompendiumViews(const TArray<class UFortCompendiumBundle*>& CompendiumBundles, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, class UFortCompendiumBundleDefinition* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCompendiumBundleUpsellPage_C* CallFunc_Create_ReturnValue, class UFortCompendiumBundle* CallFunc_Array_Get_Item2, class UFortCompendiumBundleDefinition* CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UCompendiumBundle_C* CallFunc_Create_ReturnValue2, TArray<class UFortCompendiumBundle*>& CallFunc_GetCompendiumBundles_OutActiveBundles, TArray<class UFortCompendiumBundleDefinition*>& CallFunc_GetCompendiumBundles_OutUnlockableBundles)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "UpdateCompendiumViews");

	Params::UAthenaCompendiumTab_C_UpdateCompendiumViews_Params Parms;
	Parms.CompendiumBundles = CompendiumBundles;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue = CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetCompendiumBundles_OutActiveBundles = CallFunc_GetCompendiumBundles_OutActiveBundles;
	Parms.CallFunc_GetCompendiumBundles_OutUnlockableBundles = CallFunc_GetCompendiumBundles_OutUnlockableBundles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleCompendiumChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCompendiumTab_C::HandleCompendiumChanged()
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "HandleCompendiumChanged");

	Params::UAthenaCompendiumTab_C_HandleCompendiumChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.RegisterEventListeners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaCompendiumTab_C::RegisterEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "RegisterEventListeners");

	Params::UAthenaCompendiumTab_C_RegisterEventListeners_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCompendiumTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "Construct");

	Params::UAthenaCompendiumTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCompendiumTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "OnActivated");

	Params::UAthenaCompendiumTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCompendiumTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "OnDeactivated");

	Params::UAthenaCompendiumTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompendiumTab_C::BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature");

	Params::UAthenaCompendiumTab_C_BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompendiumTab_C::BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaCompendiumTab_C_BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ExecuteUbergraph_AthenaCompendiumTab
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompendiumTab_C::ExecuteUbergraph_AthenaCompendiumTab(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton)
{
	static auto Func = Class->GetFunction("AthenaCompendiumTab_C", "ExecuteUbergraph_AthenaCompendiumTab");

	Params::UAthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

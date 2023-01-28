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


// Function CompendiumBundle.CompendiumBundle_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::HandleTabSelected(class FName TabId, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "HandleTabSelected");

	Params::UCompendiumBundle_C_HandleTabSelected_Params Parms;
	Parms.TabId = TabId;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               LocalTab                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalTabId                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UCompendiumBundle_C::HandleTabCreated(class FName TabId, class UCommonButton* Button, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "HandleTabCreated");

	Params::UCompendiumBundle_C_HandleTabCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.Button = Button;
	Parms.LocalTab = LocalTab;
	Parms.LocalTabId = LocalTabId;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.CreateTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCompendiumItemDefinition*CompendiumItemDefinition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ContentWidget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::CreateTab(class UFortCompendiumItemDefinition* CompendiumItemDefinition, class UWidget* ContentWidget, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "CreateTab");

	Params::UCompendiumBundle_C_CreateTab_Params Parms;
	Parms.CompendiumItemDefinition = CompendiumItemDefinition;
	Parms.ContentWidget = ContentWidget;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.ResetTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCompendiumBundle_C::ResetTabs()
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "ResetTabs");

	Params::UCompendiumBundle_C_ResetTabs_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.UpdateTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCompendiumItem*> CallFunc_GetCompendiumItems_OutActiveItems                       (ZeroConstructor, ReferenceParm)
// TArray<class UFortCompendiumItemDefinition*>CallFunc_GetCompendiumItems_OutUnlockableItems                   (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompendiumUpsellPage_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompendiumPage_C*           CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCompendiumItem*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCompendiumItemDefinition*CallFunc_GetCompendiumDefinitionBP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCompendiumItemDefinition*CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCompendiumBundle_C::UpdateTabs(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UFortCompendiumItem*>& CallFunc_GetCompendiumItems_OutActiveItems, TArray<class UFortCompendiumItemDefinition*>& CallFunc_GetCompendiumItems_OutUnlockableItems, int32 Temp_int_Array_Index_Variable2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UCompendiumUpsellPage_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UCompendiumPage_C* CallFunc_Create_ReturnValue2, class UFortCompendiumItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortCompendiumItemDefinition* CallFunc_GetCompendiumDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class UFortCompendiumItemDefinition* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "UpdateTabs");

	Params::UCompendiumBundle_C_UpdateTabs_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCompendiumItems_OutActiveItems = CallFunc_GetCompendiumItems_OutActiveItems;
	Parms.CallFunc_GetCompendiumItems_OutUnlockableItems = CallFunc_GetCompendiumItems_OutUnlockableItems;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCompendiumDefinitionBP_ReturnValue = CallFunc_GetCompendiumDefinitionBP_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.SetBundle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCompendiumBundle*       CompendiumBundle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::SetBundle(class UFortCompendiumBundle* CompendiumBundle)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "SetBundle");

	Params::UCompendiumBundle_C_SetBundle_Params Parms;
	Parms.CompendiumBundle = CompendiumBundle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCompendiumBundle_C::Construct()
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "Construct");

	Params::UCompendiumBundle_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature");

	Params::UCompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature");

	Params::UCompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCompendiumBundle_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "OnDeactivated");

	Params::UCompendiumBundle_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCompendiumBundle_C::OnActivated()
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "OnActivated");

	Params::UCompendiumBundle_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumBundle.CompendiumBundle_C.ExecuteUbergraph_CompendiumBundle
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundle_C::ExecuteUbergraph_CompendiumBundle(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton)
{
	static auto Func = Class->GetFunction("CompendiumBundle_C", "ExecuteUbergraph_CompendiumBundle");

	Params::UCompendiumBundle_C_ExecuteUbergraph_CompendiumBundle_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

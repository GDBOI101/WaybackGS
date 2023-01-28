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


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Center on Play Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::Center_on_Play_Button(bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "Center on Play Button");

	Params::UHomeScreenNextQuest_C_Center_on_Play_Button_Params Parms;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeScreenNextQuest_C::HandleBeyondCutOffQuest(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "HandleBeyondCutOffQuest");

	Params::UHomeScreenNextQuest_C_HandleBeyondCutOffQuest_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         CallFunc_GetFrontEndCamera_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeScreenNextQuest_C::ConfigureScreenForEvent(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "ConfigureScreenForEvent");

	Params::UHomeScreenNextQuest_C_ConfigureScreenForEvent_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetFrontEndCamera_ReturnValue = CallFunc_GetFrontEndCamera_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::UpdateSceenBasedOnQuestMapShown(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "UpdateSceenBasedOnQuestMapShown");

	Params::UHomeScreenNextQuest_C_UpdateSceenBasedOnQuestMapShown_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EventIsActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEventFlagActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeScreenNextQuest_C::UpdateButtonBasedOnEventStatus(bool* EventIsActive, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, bool CallFunc_IsEventFlagActive_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "UpdateButtonBasedOnEventStatus");

	Params::UHomeScreenNextQuest_C_UpdateButtonBasedOnEventStatus_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue2 = CallFunc_GetQuestManager_ReturnValue2;
	Parms.CallFunc_IsEventFlagActive_ReturnValue = CallFunc_IsEventFlagActive_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (EventIsActive != nullptr)
		*EventIsActive = Parms.EventIsActive;

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature");

	Params::UHomeScreenNextQuest_C_BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ActiveEventFlags                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHomeScreenNextQuest_C::Handle_Event_Flags_Changed(TArray<class FString>& ActiveEventFlags)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "Handle Event Flags Changed");

	Params::UHomeScreenNextQuest_C_Handle_Event_Flags_Changed_Params Parms;
	Parms.ActiveEventFlags = ActiveEventFlags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHomeScreenNextQuest_C::Construct()
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "Construct");

	Params::UHomeScreenNextQuest_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHomeScreenNextQuest_C::HandleTabSwitch()
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "HandleTabSwitch");

	Params::UHomeScreenNextQuest_C_HandleTabSwitch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHomeScreenNextQuest_C::OnActivated()
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "OnActivated");

	Params::UHomeScreenNextQuest_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    InFinalQuestItemDef                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::CustomEvent_0(class UFortQuestItemDefinition* InFinalQuestItemDef)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "CustomEvent_0");

	Params::UHomeScreenNextQuest_C_CustomEvent_0_Params Parms;
	Parms.InFinalQuestItemDef = InFinalQuestItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_ActiveEventFlags                              (ConstParm, ZeroConstructor, ReferenceParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive2           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortQuestItemDefinition*    K2Node_CustomEvent_inFinalQuestItemDef                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::ExecuteUbergraph_HomeScreenNextQuest(int32 EntryPoint, TArray<class FString>& K2Node_CustomEvent_ActiveEventFlags, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive, bool CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestItemDefinition* K2Node_CustomEvent_inFinalQuestItemDef, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2)
{
	static auto Func = Class->GetFunction("HomeScreenNextQuest_C", "ExecuteUbergraph_HomeScreenNextQuest");

	Params::UHomeScreenNextQuest_C_ExecuteUbergraph_HomeScreenNextQuest_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActiveEventFlags = K2Node_CustomEvent_ActiveEventFlags;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive = CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive;
	Parms.CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive2 = CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_inFinalQuestItemDef = K2Node_CustomEvent_inFinalQuestItemDef;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetQuestManager_ReturnValue2 = CallFunc_GetQuestManager_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

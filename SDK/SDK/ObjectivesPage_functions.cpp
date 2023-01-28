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


// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MissionHasModifiers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActiveGameplayModifiers_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::MissionHasModifiers(bool* MissionHasModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActiveGameplayModifiers_ReturnValue)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "MissionHasModifiers");

	Params::UObjectivesPage_C_MissionHasModifiers_Params Parms;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasActiveGameplayModifiers_ReturnValue = CallFunc_HasActiveGameplayModifiers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MissionHasModifiers != nullptr)
		*MissionHasModifiers = Parms.MissionHasModifiers;

}


// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowModifiers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortGameplayModifierItemDefinition*>CallFunc_GetActiveModifiers_OutActiveModifiers                   (ZeroConstructor, ReferenceParm)

void UObjectivesPage_C::ConfigureModifiersView(bool ShowModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "ConfigureModifiersView");

	Params::UObjectivesPage_C_ConfigureModifiersView_Params Parms;
	Parms.ShowModifiers = ShowModifiers;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveModifiers_OutActiveModifiers = CallFunc_GetActiveModifiers_OutActiveModifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectivesPage_C::HandleInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "HandleInventory");

	Params::UObjectivesPage_C_HandleInventory_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               InButton                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InButtonIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectivesPage_C::HandleSelectedButtonChanged(class UCommonButton* InButton, int32 InButtonIndex)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "HandleSelectedButtonChanged");

	Params::UObjectivesPage_C_HandleSelectedButtonChanged_Params Parms;
	Parms.InButton = InButton;
	Parms.InButtonIndex = InButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectivesPage_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "HandleBack");

	Params::UObjectivesPage_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ObjectivesPage.ObjectivesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UObjectivesPage_C::Construct()
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "Construct");

	Params::UObjectivesPage_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UObjectivesPage_C::OnActivated()
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "OnActivated");

	Params::UObjectivesPage_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UObjectivesPage_C::Destruct()
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "Destruct");

	Params::UObjectivesPage_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>AppliedModifiers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UObjectivesPage_C::OnActiveGameplayModifiersChanged_Event_0(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "OnActiveGameplayModifiersChanged_Event_0");

	Params::UObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0_Params Parms;
	Parms.AppliedModifiers = AppliedModifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetSelectedButtonIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)
// bool                               CallFunc_MissionHasModifiers_MissionHasModifiers                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortGameplayModifierItemDefinition*>K2Node_CustomEvent_AppliedModifiers                              (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::ExecuteUbergraph_ObjectivesPage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, bool CallFunc_MissionHasModifiers_MissionHasModifiers, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_AppliedModifiers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ObjectivesPage_C", "ExecuteUbergraph_ObjectivesPage");

	Params::UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;
	Parms.CallFunc_MissionHasModifiers_MissionHasModifiers = CallFunc_MissionHasModifiers_MissionHasModifiers;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_AppliedModifiers = K2Node_CustomEvent_AppliedModifiers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

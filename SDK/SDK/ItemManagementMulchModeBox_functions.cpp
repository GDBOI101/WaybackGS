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


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementMulchModeBox_C::HandleLeaveInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleLeaveInventory");

	Params::UItemManagementMulchModeBox_C_HandleLeaveInventory_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleCursorModeChanging");

	Params::UItemManagementMulchModeBox_C_HandleCursorModeChanging_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           CallFunc_GetItemsToMulch_ReturnValue                             (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleMulchListChanged(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleMulchListChanged");

	Params::UItemManagementMulchModeBox_C_HandleMulchListChanged_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetItemsToMulch_ReturnValue = CallFunc_GetItemsToMulch_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pass_Through                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<class UFortItemDefinition*> CallFunc_GetItemDefinitions_ReturnValue                          (ZeroConstructor, ReferenceParm)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementMulchModeBox_C::HandleInfo(bool* Pass_Through, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleInfo");

	Params::UItemManagementMulchModeBox_C_HandleInfo_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetItemDefinitions_ReturnValue = CallFunc_GetItemDefinitions_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pass_Through != nullptr)
		*Pass_Through = Parms.Pass_Through;

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleBack");

	Params::UItemManagementMulchModeBox_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementMulchModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleDifferentItemToDetailSetBP");

	Params::UItemManagementMulchModeBox_C_HandleDifferentItemToDetailSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementMulchModeBox_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "Construct");

	Params::UItemManagementMulchModeBox_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementMulchModeBox_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "OnActivated");

	Params::UItemManagementMulchModeBox_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementMulchModeBox_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "Destruct");

	Params::UItemManagementMulchModeBox_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UItemWindow_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementMulchDetailsPanel_C*K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UItemManagementMulchDetailsPanel_C*K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::ExecuteUbergraph_ItemManagementMulchModeBox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UItemWindow_C* CallFunc_Create_ReturnValue, class UItemManagementMulchDetailsPanel_C* K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UItemManagementMulchDetailsPanel_C* K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementMulchModeBox_C", "ExecuteUbergraph_ItemManagementMulchModeBox");

	Params::UItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel = K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2 = K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

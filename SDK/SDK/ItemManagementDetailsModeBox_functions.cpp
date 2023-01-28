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


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleDestroy(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleDestroy");

	Params::UItemManagementDetailsModeBox_C_HandleDestroy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWithdrawAll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerDeployableBase*K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleWithdrawAll(bool* PassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleWithdrawAll");

	Params::UItemManagementDetailsModeBox_C_HandleWithdrawAll_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base = K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.IsWritableWIFEAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               WritableWIFE                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::IsWritableWIFEAvailable(bool* WritableWIFE, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "IsWritableWIFEAvailable");

	Params::UItemManagementDetailsModeBox_C_IsWritableWIFEAvailable_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WritableWIFE != nullptr)
		*WritableWIFE = Parms.WritableWIFE;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshSwitchPanelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDeposit                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSwitchPanelAvailable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::RefreshSwitchPanelAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSwitchPanelAvailable_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RefreshSwitchPanelAction");

	Params::UItemManagementDetailsModeBox_C_RefreshSwitchPanelAction_Params Parms;
	Parms.Item = Item;
	Parms.IsDeposit = IsDeposit;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsSwitchPanelAvailable_ReturnValue = CallFunc_IsSwitchPanelAvailable_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSwitchPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleSwitchPanel(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleSwitchPanel");

	Params::UItemManagementDetailsModeBox_C_HandleSwitchPanel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UItemManagementDetailsModeBox_C::UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "UnbindEvents");

	Params::UItemManagementDetailsModeBox_C_UnbindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshTransferAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDeposit                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxTransferCount_Count                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::RefreshTransferAction(class UFortWorldItem* Item, bool IsDeposit, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, enum class EInputActionState K2Node_Select_Default, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_Greater_IntInt_ReturnValue2, enum class EInputActionState K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RefreshTransferAction");

	Params::UItemManagementDetailsModeBox_C_RefreshTransferAction_Params Parms;
	Parms.Item = Item;
	Parms.IsDeposit = IsDeposit;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMaxTransferCount_Count = CallFunc_GetMaxTransferCount_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTransfer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleTransfer(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleTransfer");

	Params::UItemManagementDetailsModeBox_C_HandleTransfer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTransferActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerDeployableBase*K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterTransferActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterTransferActions");

	Params::UItemManagementDetailsModeBox_C_RegisterTransferActions_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base = K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspectUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterInspectUpgrade(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterInspectUpgrade");

	Params::UItemManagementDetailsModeBox_C_RegisterInspectUpgrade_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleQuickbarContentsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleQuickbarContentsChanged");

	Params::UItemManagementDetailsModeBox_C_HandleQuickbarContentsChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterLeaveInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterLeaveInventory(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterLeaveInventory");

	Params::UItemManagementDetailsModeBox_C_RegisterLeaveInventory_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshMulchAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CanItemBeMulched_OutRestrictionReason                   ()
// bool                               CallFunc_CanItemBeMulched_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::RefreshMulchAction(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RefreshMulchAction");

	Params::UItemManagementDetailsModeBox_C_RefreshMulchAction_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_CanItemBeMulched_OutRestrictionReason = CallFunc_CanItemBeMulched_OutRestrictionReason;
	Parms.CallFunc_CanItemBeMulched_ReturnValue = CallFunc_CanItemBeMulched_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftAndSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleCraftAndSlot(bool* PassThrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleCraftAndSlot");

	Params::UItemManagementDetailsModeBox_C_HandleCraftAndSlot_Params Parms;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraftAndSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterCraftAndSlot(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterCraftAndSlot");

	Params::UItemManagementDetailsModeBox_C_RegisterCraftAndSlot_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshCraftActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCraftFailCause     CallFunc_CanCraftSchematic_FailCause                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCraftSchematic_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetSchematicResultType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::RefreshCraftActions(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess2, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, enum class EInputActionState K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RefreshCraftActions");

	Params::UItemManagementDetailsModeBox_C_RefreshCraftActions_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_CanCraftSchematic_FailCause = CallFunc_CanCraftSchematic_FailCause;
	Parms.CallFunc_CanCraftSchematic_ReturnValue = CallFunc_CanCraftSchematic_ReturnValue;
	Parms.CallFunc_GetSchematicResultType_ReturnValue = CallFunc_GetSchematicResultType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::HandleWorldItemsChanged()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleWorldItemsChanged");

	Params::UItemManagementDetailsModeBox_C_HandleWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementDetailsModeBox_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleWorldItemListChanged");

	Params::UItemManagementDetailsModeBox_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInventoryInspect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterInventoryInspect(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortItemType CallFunc_GetType_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterInventoryInspect");

	Params::UItemManagementDetailsModeBox_C_RegisterInventoryInspect_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetTabStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::SetTabStyling(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "SetTabStyling");

	Params::UItemManagementDetailsModeBox_C_SetTabStyling_Params Parms;
	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetItemVisualization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::SetItemVisualization()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "SetItemVisualization");

	Params::UItemManagementDetailsModeBox_C_SetItemVisualization_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UpdateConsumeItemButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortConsumableAccountItem*  K2Node_DynamicCast_AsFort_Consumable_Account_Item                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateOnSelf_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateOnOthers_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::UpdateConsumeItemButtonState(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnSelf_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "UpdateConsumeItemButtonState");

	Params::UItemManagementDetailsModeBox_C_UpdateConsumeItemButtonState_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Consumable_Account_Item = K2Node_DynamicCast_AsFort_Consumable_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanActivateOnSelf_ReturnValue = CallFunc_CanActivateOnSelf_ReturnValue;
	Parms.CallFunc_CanActivateOnOthers_ReturnValue = CallFunc_CanActivateOnOthers_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetupDetailPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::SetupDetailPanels(class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "SetupDetailPanels");

	Params::UItemManagementDetailsModeBox_C_SetupDetailPanels_Params Parms;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleEquip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleEquip(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleEquip");

	Params::UItemManagementDetailsModeBox_C_HandleEquip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsEquipAvailable_EquipAvailable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_IsSlotted_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterEquip(enum class EInputActionState Temp_byte_Variable, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsEquipAvailable_EquipAvailable, enum class EInputActionState Temp_byte_Variable2, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EInputActionState K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsSlotted_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterEquip");

	Params::UItemManagementDetailsModeBox_C_RegisterEquip_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsEquipAvailable_EquipAvailable = CallFunc_IsEquipAvailable_EquipAvailable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_IsSlotted_ReturnValue = CallFunc_IsSlotted_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTrack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSchematicPinned_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSchematicPinned_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematicPinned_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleTrack(bool* PassThrough, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSchematicPinned_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue2, bool CallFunc_IsSchematicPinned_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleTrack");

	Params::UItemManagementDetailsModeBox_C_HandleTrack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetSchematicPinned_ReturnValue = CallFunc_SetSchematicPinned_ReturnValue;
	Parms.CallFunc_SetSchematicPinned_ReturnValue2 = CallFunc_SetSchematicPinned_ReturnValue2;
	Parms.CallFunc_IsSchematicPinned_ReturnValue = CallFunc_IsSchematicPinned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTrack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterTrack(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterTrack");

	Params::UItemManagementDetailsModeBox_C_RegisterTrack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCompare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterCompare(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterCompare");

	Params::UItemManagementDetailsModeBox_C_RegisterCompare_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterConsumeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterConsumeItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterConsumeItem");

	Params::UItemManagementDetailsModeBox_C_RegisterConsumeItem_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterSort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InGame                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterSort(bool InGame, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterSort");

	Params::UItemManagementDetailsModeBox_C_RegisterSort_Params Parms;
	Parms.InGame = InGame;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterBack");

	Params::UItemManagementDetailsModeBox_C_RegisterBack_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterInspect(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterInspect");

	Params::UItemManagementDetailsModeBox_C_RegisterInspect_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterRetire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterRetire(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterRetire");

	Params::UItemManagementDetailsModeBox_C_RegisterRetire_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMulch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterMulch(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterMulch");

	Params::UItemManagementDetailsModeBox_C_RegisterMulch_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterCraft(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterCraft");

	Params::UItemManagementDetailsModeBox_C_RegisterCraft_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterDropOrDestroy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)

void UItemManagementDetailsModeBox_C::RegisterDropOrDestroy(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "RegisterDropOrDestroy");

	Params::UItemManagementDetailsModeBox_C_RegisterDropOrDestroy_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDrop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleDrop(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleDrop");

	Params::UItemManagementDetailsModeBox_C_HandleDrop_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ShowSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::ShowSelection(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "ShowSelection");

	Params::UItemManagementDetailsModeBox_C_ShowSelection_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleCraft(bool* PassThrough, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleCraft");

	Params::UItemManagementDetailsModeBox_C_HandleCraft_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConsumableAccountItem*  K2Node_DynamicCast_AsFort_Consumable_Account_Item                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateOnOthers_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateOnSelf_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleConsumeItem(bool* PassThrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UBoostsRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_CanActivateOnSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleConsumeItem");

	Params::UItemManagementDetailsModeBox_C_HandleConsumeItem_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Consumable_Account_Item = K2Node_DynamicCast_AsFort_Consumable_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanActivateOnOthers_ReturnValue = CallFunc_CanActivateOnOthers_ReturnValue;
	Parms.CallFunc_CanActivateOnSelf_ReturnValue = CallFunc_CanActivateOnSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.TrySetupInputHandling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWritableWIFEAvailable_WritableWIFE                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCommonInputActionHandlerData>CallFunc_GetInputActions_InputActionDataRows                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetInputActions_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::TrySetupInputHandling(bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWritableWIFEAvailable_WritableWIFE, TArray<struct FCommonInputActionHandlerData>& CallFunc_GetInputActions_InputActionDataRows, bool CallFunc_GetInputActions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "TrySetupInputHandling");

	Params::UItemManagementDetailsModeBox_C_TrySetupInputHandling_Params Parms;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsWritableWIFEAvailable_WritableWIFE = CallFunc_IsWritableWIFEAvailable_WritableWIFE;
	Parms.CallFunc_GetInputActions_InputActionDataRows = CallFunc_GetInputActions_InputActionDataRows;
	Parms.CallFunc_GetInputActions_ReturnValue = CallFunc_GetInputActions_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleSort(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleSort");

	Params::UItemManagementDetailsModeBox_C_HandleSort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMulch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleMulch(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleMulch");

	Params::UItemManagementDetailsModeBox_C_HandleMulch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCompare
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleCompare(bool* PassThrough, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleCompare");

	Params::UItemManagementDetailsModeBox_C_HandleCompare_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInspect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleInspect(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleInspect");

	Params::UItemManagementDetailsModeBox_C_HandleInspect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::HandleBack(bool* PassThrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleBack");

	Params::UItemManagementDetailsModeBox_C_HandleBack_Params Parms;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.DialogResult_475B18A9452A639A04116D83A8B1CC22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::DialogResult_475B18A9452A639A04116D83A8B1CC22(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "DialogResult_475B18A9452A639A04116D83A8B1CC22");

	Params::UItemManagementDetailsModeBox_C_DialogResult_475B18A9452A639A04116D83A8B1CC22_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature");

	Params::UItemManagementDetailsModeBox_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleDifferentItemToDetailSetBP");

	Params::UItemManagementDetailsModeBox_C_HandleDifferentItemToDetailSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "OnActivated");

	Params::UItemManagementDetailsModeBox_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature");

	Params::UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature");

	Params::UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature");

	Params::UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItemProgressChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::HandleConsumeItemProgressChangedBP()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "HandleConsumeItemProgressChangedBP");

	Params::UItemManagementDetailsModeBox_C_HandleConsumeItemProgressChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature");

	Params::UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "OnDeactivated");

	Params::UItemManagementDetailsModeBox_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "Construct");

	Params::UItemManagementDetailsModeBox_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "OnInputModeChanged");

	Params::UItemManagementDetailsModeBox_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDestroyItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementDetailsModeBox_C::OnDestroyItem()
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "OnDestroyItem");

	Params::UItemManagementDetailsModeBox_C_OnDestroyItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ExecuteUbergraph_ItemManagementDetailsModeBox
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMulchConfirmationItem_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDetailsHostPanel*   K2Node_DynamicCast_AsFort_Item_Details_Host_Panel                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDetailsHostPanel*   K2Node_DynamicCast_AsFort_Item_Details_Host_Panel2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementDetailsModeBox_C::ExecuteUbergraph_ItemManagementDetailsModeBox(int32 EntryPoint, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMulchConfirmationItem_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel2, bool K2Node_DynamicCast_bSuccess2, class FName K2Node_ComponentBoundEvent_TabId4, class UCommonButton* K2Node_ComponentBoundEvent_TabButton4, class FName K2Node_ComponentBoundEvent_TabId3, class UCommonButton* K2Node_ComponentBoundEvent_TabButton3, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton2, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemManagementDetailsModeBox_C", "ExecuteUbergraph_ItemManagementDetailsModeBox");

	Params::UItemManagementDetailsModeBox_C_ExecuteUbergraph_ItemManagementDetailsModeBox_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item_Details_Host_Panel = K2Node_DynamicCast_AsFort_Item_Details_Host_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item_Details_Host_Panel2 = K2Node_DynamicCast_AsFort_Item_Details_Host_Panel2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_ComponentBoundEvent_TabId4 = K2Node_ComponentBoundEvent_TabId4;
	Parms.K2Node_ComponentBoundEvent_TabButton4 = K2Node_ComponentBoundEvent_TabButton4;
	Parms.K2Node_ComponentBoundEvent_TabId3 = K2Node_ComponentBoundEvent_TabId3;
	Parms.K2Node_ComponentBoundEvent_TabButton3 = K2Node_ComponentBoundEvent_TabButton3;
	Parms.K2Node_ComponentBoundEvent_TabId2 = K2Node_ComponentBoundEvent_TabId2;
	Parms.K2Node_ComponentBoundEvent_TabButton2 = K2Node_ComponentBoundEvent_TabButton2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

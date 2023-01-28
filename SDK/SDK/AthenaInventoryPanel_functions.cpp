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


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               HandlingInput_Local                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ConfigF_Local                                                    (Edit, ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleClose_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FEventReply                 K2Node_Select_Default                                            ()

struct FEventReply UAthenaInventoryPanel_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool HandlingInput_Local, const class FString& ConfigF_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HandleClose_PassThrough, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "OnKeyUp");

	Params::UAthenaInventoryPanel_C_OnKeyUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.HandlingInput_Local = HandlingInput_Local;
	Parms.ConfigF_Local = ConfigF_Local;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HandleClose_PassThrough = CallFunc_HandleClose_PassThrough;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChosenQuantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::HandleDropItemConfirmationCallback(int32 ChosenQuantity, class UFortItem* Item, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "HandleDropItemConfirmationCallback");

	Params::UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params Parms;
	Parms.ChosenQuantity = ChosenQuantity;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::DestroyQuantitySelectorWidget(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "DestroyQuantitySelectorWidget");

	Params::UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ConfirmationText                                                 (Parm)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuantitySelector_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::CreateQuantitySelectorWidget(class UFortWorldItem* Item, class FText ConfirmationText, int32 CallFunc_GetNumInStack_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "CreateQuantitySelectorWidget");

	Params::UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params Parms;
	Parms.Item = Item;
	Parms.ConfirmationText = ConfirmationText;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefocusOnInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::RefocusOnInventory(class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RefocusOnInventory");

	Params::UAthenaInventoryPanel_C_RefocusOnInventory_Params Parms;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::DropItem(class UFortWorldItem* Item, int32 Quantity, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "DropItem");

	Params::UAthenaInventoryPanel_C_DropItem_Params Parms;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::HandleDrop(bool* PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "HandleDrop");

	Params::UAthenaInventoryPanel_C_HandleDrop_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue = CallFunc_GetSelectedInventoryItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::RegisterDrop(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RegisterDrop");

	Params::UAthenaInventoryPanel_C_RegisterDrop_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue = CallFunc_GetSelectedInventoryItem_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.PerformEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleClose_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotted_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemFromQuickBar_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::PerformEquip(class UFortItem* Item, bool CallFunc_HandleClose_PassThrough, bool CallFunc_IsSlotted_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_RemoveItemFromQuickBar_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "PerformEquip");

	Params::UAthenaInventoryPanel_C_PerformEquip_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_HandleClose_PassThrough = CallFunc_HandleClose_PassThrough;
	Parms.CallFunc_IsSlotted_ReturnValue = CallFunc_IsSlotted_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_RemoveItemFromQuickBar_ReturnValue = CallFunc_RemoveItemFromQuickBar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaInventoryPanel_C::RegisterLeaveInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RegisterLeaveInventory");

	Params::UAthenaInventoryPanel_C_RegisterLeaveInventory_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaInventoryPanel_C::TrySetupInputHandling()
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "TrySetupInputHandling");

	Params::UAthenaInventoryPanel_C_TrySetupInputHandling_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleEquip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::HandleEquip(bool* PassThrough, class UFortItem* Item, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "HandleEquip");

	Params::UAthenaInventoryPanel_C_HandleEquip_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesMatchSearchString_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotted_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)

void UAthenaInventoryPanel_C::RegisterEquip(enum class EInputActionState Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_DoesMatchSearchString_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSlotted_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RegisterEquip");

	Params::UAthenaInventoryPanel_C_RegisterEquip_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue = CallFunc_GetSelectedInventoryItem_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue2 = CallFunc_GetSelectedInventoryItem_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_DoesMatchSearchString_ReturnValue = CallFunc_DoesMatchSearchString_ReturnValue;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue3 = CallFunc_GetSelectedInventoryItem_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsSlotted_ReturnValue = CallFunc_IsSlotted_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_IsEquipable_ReturnValue = CallFunc_IsEquipable_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue4 = CallFunc_GetSelectedInventoryItem_ReturnValue4;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaInventoryPanel_C::RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RegisterBack");

	Params::UAthenaInventoryPanel_C_RegisterBack_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::HandleClose(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "HandleClose");

	Params::UAthenaInventoryPanel_C_HandleClose_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.GetSelectedEquipSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaInventoryEquipSlot_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UAthenaInventoryEquipSlot_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelected_Selected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::GetSelectedEquipSlot(int32* Slot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, TArray<class UAthenaInventoryEquipSlot_C*>& K2Node_MakeArray_Array, class UAthenaInventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSelected_Selected, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "GetSelectedEquipSlot");

	Params::UAthenaInventoryPanel_C_GetSelectedEquipSlot_Params Parms;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsSelected_Selected = CallFunc_IsSelected_Selected;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ProcessSlotAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedSlot                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedEquipSlot_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropItemOnQuickBar_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::ProcessSlotAction(int32 SelectedSlot, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, int32 CallFunc_GetSelectedEquipSlot_Slot, bool CallFunc_DropItemOnQuickBar_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "ProcessSlotAction");

	Params::UAthenaInventoryPanel_C_ProcessSlotAction_Params Parms;
	Parms.SelectedSlot = SelectedSlot;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue = CallFunc_GetSelectedInventoryItem_ReturnValue;
	Parms.CallFunc_GetSelectedEquipSlot_Slot = CallFunc_GetSelectedEquipSlot_Slot;
	Parms.CallFunc_DropItemOnQuickBar_ReturnValue = CallFunc_DropItemOnQuickBar_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.UpdateEquipSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaInventoryPanel_C::UpdateEquipSlots()
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "UpdateEquipSlots");

	Params::UAthenaInventoryPanel_C_UpdateEquipSlots_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBarType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryPanel_C::HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "HandleQuickBarChangedBP");

	Params::UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params Parms;
	Parms.QuickBarType = QuickBarType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaInventoryPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "OnActivated");

	Params::UAthenaInventoryPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaInventoryPanel_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "OnDeactivated");

	Params::UAthenaInventoryPanel_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::RequestEquip(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "RequestEquip");

	Params::UAthenaInventoryPanel_C_RequestEquip_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnInventoryItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::OnInventoryItemSelected(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "OnInventoryItemSelected");

	Params::UAthenaInventoryPanel_C_OnInventoryItemSelected_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryPanel_C_BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryPanel_C_BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryPanel_C_BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryPanel_C_BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryPanel_C_BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_Event_QuickBarType                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedInventoryItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_SlotIndex5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SlotIndex4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SlotIndex3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SlotIndex2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SlotIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryPanel_C::ExecuteUbergraph_AthenaInventoryPanel(int32 EntryPoint, enum class EFortQuickBars K2Node_Event_QuickBarType, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortItem* K2Node_Event_Item2, class UFortItem* K2Node_Event_Item, bool CallFunc_IsValid_ReturnValue, int32 K2Node_ComponentBoundEvent_SlotIndex5, int32 K2Node_ComponentBoundEvent_SlotIndex4, int32 K2Node_ComponentBoundEvent_SlotIndex3, int32 K2Node_ComponentBoundEvent_SlotIndex2, int32 K2Node_ComponentBoundEvent_SlotIndex, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaInventoryPanel_C", "ExecuteUbergraph_AthenaInventoryPanel");

	Params::UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_QuickBarType = K2Node_Event_QuickBarType;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelectedInventoryItem_ReturnValue = CallFunc_GetSelectedInventoryItem_ReturnValue;
	Parms.K2Node_Event_Item2 = K2Node_Event_Item2;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SlotIndex5 = K2Node_ComponentBoundEvent_SlotIndex5;
	Parms.K2Node_ComponentBoundEvent_SlotIndex4 = K2Node_ComponentBoundEvent_SlotIndex4;
	Parms.K2Node_ComponentBoundEvent_SlotIndex3 = K2Node_ComponentBoundEvent_SlotIndex3;
	Parms.K2Node_ComponentBoundEvent_SlotIndex2 = K2Node_ComponentBoundEvent_SlotIndex2;
	Parms.K2Node_ComponentBoundEvent_SlotIndex = K2Node_ComponentBoundEvent_SlotIndex;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

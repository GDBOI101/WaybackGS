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


// Function ItemManagementScreen.ItemManagementScreen_C.SizeScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::SizeScreen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "SizeScreen");

	Params::UItemManagementScreen_C_SizeScreen_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.IsEquipAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EquipAvailable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::IsEquipAvailable(class UFortItem* Item, bool* EquipAvailable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "IsEquipAvailable");

	Params::UItemManagementScreen_C_IsEquipAvailable_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEquipable_ReturnValue = CallFunc_IsEquipable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipAvailable != nullptr)
		*EquipAvailable = Parms.EquipAvailable;

}


// Function ItemManagementScreen.ItemManagementScreen_C.IsWritableWIFEAvailable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWritable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::IsWritableWIFEAvailable(bool* bWritable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "IsWritableWIFEAvailable");

	Params::UItemManagementScreen_C_IsWritableWIFEAvailable_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWritable != nullptr)
		*bWritable = Parms.bWritable;

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::HandleMulchItemsCallback(int32 Quantity, class UFortItem* Item, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleMulchItemsCallback");

	Params::UItemManagementScreen_C_HandleMulchItemsCallback_Params Parms;
	Parms.Quantity = Quantity;
	Parms.Item = Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              WorldItem                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageOverflowFromAddingItem_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerDeployableBase*K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::GetMaxTransferCount(class UFortItem* Item, int32* Count, class UFortWorldItem* WorldItem, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetNumInStack_ReturnValue2, int32 CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetStorageOverflowFromAddingItem_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool CallFunc_ContainsItem_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "GetMaxTransferCount");

	Params::UItemManagementScreen_C_GetMaxTransferCount_Params Parms;
	Parms.Item = Item;
	Parms.WorldItem = WorldItem;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetNumInStack_ReturnValue2 = CallFunc_GetNumInStack_ReturnValue2;
	Parms.CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue = CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue3 = CallFunc_GetNumInStack_ReturnValue3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue = CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetStorageOverflowFromAddingItem_ReturnValue = CallFunc_GetStorageOverflowFromAddingItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base = K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_ContainsItem_ReturnValue = CallFunc_ContainsItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::CompleteItemDrop(class UFortItem* Item, int32 Quantity, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "CompleteItemDrop");

	Params::UItemManagementScreen_C_CompleteItemDrop_Params Parms;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleDropItemsCallback(int32 Quantity, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleDropItemsCallback");

	Params::UItemManagementScreen_C_HandleDropItemsCallback_Params Parms;
	Parms.Quantity = Quantity;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UItemManagementScreen_C::HandleDrop(class UFortItem* Item, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleDrop");

	Params::UItemManagementScreen_C_HandleDrop_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDeposit                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetItemGuid_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerDeployableBase*K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::CompleteItemTransfer(class UFortItem* Item, int32 Quantity, bool IsDeposit, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetItemGuid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess3)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "CompleteItemTransfer");

	Params::UItemManagementScreen_C_CompleteItemTransfer_Params Parms;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.IsDeposit = IsDeposit;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemGuid_ReturnValue = CallFunc_GetItemGuid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base = K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleTransferItemsCallback(int32 Quantity, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransferItemsCallback");

	Params::UItemManagementScreen_C_HandleTransferItemsCallback_Params Parms;
	Parms.Quantity = Quantity;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.DestroyQuantitySelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::DestroyQuantitySelector(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "DestroyQuantitySelector");

	Params::UItemManagementScreen_C_DestroyQuantitySelector_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (Parm)
// class FText                        ConfirmText                                                      (Parm)
// int32                              InitialQuantity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxQuantity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuantitySelector_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::CreateQuantitySelector(class UFortItem* Item, class FText Title, class FText ConfirmText, int32 InitialQuantity, int32 MaxQuantity, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "CreateQuantitySelector");

	Params::UItemManagementScreen_C_CreateQuantitySelector_Params Parms;
	Parms.Item = Item;
	Parms.Title = Title;
	Parms.ConfirmText = ConfirmText;
	Parms.InitialQuantity = InitialQuantity;
	Parms.MaxQuantity = MaxQuantity;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToTransfer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTransferCount_Count                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UItemManagementScreen_C::HandleTransfer(class UFortItem* ItemToTransfer, class UFortItem* Item, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransfer");

	Params::UItemManagementScreen_C_HandleTransfer_Params Parms;
	Parms.ItemToTransfer = ItemToTransfer;
	Parms.Item = Item;
	Parms.CallFunc_GetMaxTransferCount_Count = CallFunc_GetMaxTransferCount_Count;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCraftFailCause     FailCause                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::ShowCraftError(enum class EFortCraftFailCause FailCause)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "ShowCraftError");

	Params::UItemManagementScreen_C_ShowCraftError_Params Parms;
	Parms.FailCause = FailCause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetSchematicResultType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCraftFailCause     CallFunc_CraftSchematic_FailCause                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CraftSchematic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCraftFailCause     CallFunc_CanCraftSchematic_FailCause                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCraftSchematic_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCraftFailCause     CallFunc_CraftAndSlotSchematic_FailCause                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CraftAndSlotSchematic_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::CraftAndSlot(class UFortSchematicItem* SchematicItem, class UFortSchematicItem* Item, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, enum class EFortCraftFailCause CallFunc_CraftAndSlotSchematic_FailCause, bool CallFunc_CraftAndSlotSchematic_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "CraftAndSlot");

	Params::UItemManagementScreen_C_CraftAndSlot_Params Parms;
	Parms.SchematicItem = SchematicItem;
	Parms.Item = Item;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetSchematicResultType_ReturnValue = CallFunc_GetSchematicResultType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_CraftSchematic_FailCause = CallFunc_CraftSchematic_FailCause;
	Parms.CallFunc_CraftSchematic_ReturnValue = CallFunc_CraftSchematic_ReturnValue;
	Parms.CallFunc_CanCraftSchematic_FailCause = CallFunc_CanCraftSchematic_FailCause;
	Parms.CallFunc_CanCraftSchematic_ReturnValue = CallFunc_CanCraftSchematic_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CraftAndSlotSchematic_FailCause = CallFunc_CraftAndSlotSchematic_FailCause;
	Parms.CallFunc_CraftAndSlotSchematic_ReturnValue = CallFunc_CraftAndSlotSchematic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipAvailable_EquipAvailable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotted_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemFromQuickBar_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::HandleEquip(class UFortItem* Item, bool CallFunc_IsEquipAvailable_EquipAvailable, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsSlotted_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_RemoveItemFromQuickBar_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleEquip");

	Params::UItemManagementScreen_C_HandleEquip_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_IsEquipAvailable_EquipAvailable = CallFunc_IsEquipAvailable_EquipAvailable;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_IsSlotted_ReturnValue = CallFunc_IsSlotted_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_RemoveItemFromQuickBar_ReturnValue = CallFunc_RemoveItemFromQuickBar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::SizeInventoryPanel(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "SizeInventoryPanel");

	Params::UItemManagementScreen_C_SizeInventoryPanel_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (Parm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveItemFromQuickBar_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemManagementScreen_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_RemoveItemFromQuickBar_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "OnDrop");

	Params::UItemManagementScreen_C_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_RemoveItemFromQuickBar_ReturnValue = CallFunc_RemoveItemFromQuickBar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ItemDescription                                                  (Parm, OutParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()

void UItemManagementScreen_C::GetDescriptionText(class FText* ItemDescription, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "GetDescriptionText");

	Params::UItemManagementScreen_C_GetDescriptionText_Params Parms;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDescription != nullptr)
		*ItemDescription = Parms.ItemDescription;

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowFavoriting                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementScreen_C::HandleInspect(class UFortItem* ItemToInspect, bool AllowFavoriting, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleInspect");

	Params::UItemManagementScreen_C_HandleInspect_Params Parms;
	Parms.ItemToInspect = ItemToInspect;
	Parms.AllowFavoriting = AllowFavoriting;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedEquipSlot_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleClose(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedEquipSlot_Slot, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleClose");

	Params::UItemManagementScreen_C_HandleClose_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSelectedEquipSlot_Slot = CallFunc_GetSelectedEquipSlot_Slot;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40");

	Params::UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementScreen_C::OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA()
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA");

	Params::UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementScreen_C::HandleDifferentItemManagementModeSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleDifferentItemManagementModeSetBP");

	Params::UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleEquipItemBP(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleEquipItemBP");

	Params::UItemManagementScreen_C_HandleEquipItemBP_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleCraftItemBP(class UFortSchematicItem* SchematicItem)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleCraftItemBP");

	Params::UItemManagementScreen_C_HandleCraftItemBP_Params Parms;
	Parms.SchematicItem = SchematicItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementScreen_C::DefaultActionRefresh()
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "DefaultActionRefresh");

	Params::UItemManagementScreen_C_DefaultActionRefresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "OnActivated");

	Params::UItemManagementScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem*  ConsumableItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleConsumeItemBP");

	Params::UItemManagementScreen_C_HandleConsumeItemBP_Params Parms;
	Parms.ConsumableItem = ConsumableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleInspectItemBP(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleInspectItemBP");

	Params::UItemManagementScreen_C_HandleInspectItemBP_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleTransferItemBP(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleTransferItemBP");

	Params::UItemManagementScreen_C_HandleTransferItemBP_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleDropItemBP(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleDropItemBP");

	Params::UItemManagementScreen_C_HandleDropItemBP_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementScreen_C::HandleMulchQuantitySelection(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "HandleMulchQuantitySelection");

	Params::UItemManagementScreen_C_HandleMulchQuantitySelection_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescriptionText_ItemDescription                      ()
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_Event_SchematicItem                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManangementItemTileButton_C*K2Node_DynamicCast_AsItem_Manangement_Item_Tile_Button           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemIconWidget_C*           CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCraftFailCause     CallFunc_CraftSchematic_FailCause                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CraftSchematic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortConsumableAccountItem*  K2Node_Event_ConsumableItem                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_MCPContextConsumeItem*CallFunc_ConsumeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActivateOnOthers_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateOnSelf_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_Item3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_Item                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedEquipSlot_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UItemManagementScreen_C::ExecuteUbergraph_ItemManagementScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class FText CallFunc_GetDescriptionText_ItemDescription, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, class UFortItem* K2Node_Event_Item5, class UFortSchematicItem* K2Node_Event_SchematicItem, class UCommonUIContext* CallFunc_GetContext_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemManangementItemTileButton_C* K2Node_DynamicCast_AsItem_Manangement_Item_Tile_Button, bool K2Node_DynamicCast_bSuccess, class UBoostsRoot_C* CallFunc_Create_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue8, class UItemIconWidget_C* CallFunc_Create_ReturnValue2, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortConsumableAccountItem* K2Node_Event_ConsumableItem, class UFortItem* K2Node_Event_Item4, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_CanActivateOnSelf_ReturnValue, class UFortItem* K2Node_Event_Item3, class UFortItem* K2Node_Event_Item2, class UFortItem* K2Node_Event_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_GetNumInStack_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetSelectedEquipSlot_Slot, bool CallFunc_NotEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("ItemManagementScreen_C", "ExecuteUbergraph_ItemManagementScreen");

	Params::UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetDescriptionText_ItemDescription = CallFunc_GetDescriptionText_ItemDescription;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_Event_Item5 = K2Node_Event_Item5;
	Parms.K2Node_Event_SchematicItem = K2Node_Event_SchematicItem;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Manangement_Item_Tile_Button = K2Node_DynamicCast_AsItem_Manangement_Item_Tile_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_CraftSchematic_FailCause = CallFunc_CraftSchematic_FailCause;
	Parms.CallFunc_CraftSchematic_ReturnValue = CallFunc_CraftSchematic_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_ConsumableItem = K2Node_Event_ConsumableItem;
	Parms.K2Node_Event_Item4 = K2Node_Event_Item4;
	Parms.CallFunc_ConsumeItem_ReturnValue = CallFunc_ConsumeItem_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_CanActivateOnOthers_ReturnValue = CallFunc_CanActivateOnOthers_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_CanActivateOnSelf_ReturnValue = CallFunc_CanActivateOnSelf_ReturnValue;
	Parms.K2Node_Event_Item3 = K2Node_Event_Item3;
	Parms.K2Node_Event_Item2 = K2Node_Event_Item2;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetSelectedEquipSlot_Slot = CallFunc_GetSelectedEquipSlot_Slot;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

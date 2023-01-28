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


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Type                                                             (Parm, OutParm)
// enum class EFortInventoryFilter    CallFunc_GetFilterCategory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookItemPicker_C::Get_Type_Text(class UFortItem* Item, class FText* Type, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue5)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "Get Type Text");

	Params::UCollectionBookItemPicker_C_Get_Type_Text_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue5 = CallFunc_EqualEqual_ByteByte_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookItemPicker_C::HandleCommitAction(bool* PassThrough, bool CallFunc_TryCommitSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "HandleCommitAction");

	Params::UCollectionBookItemPicker_C_HandleCommitAction_Params Parms;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ItemSelected                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookItemPicker_C::HandleItemSelected(class UObject* ItemSelected, bool IsSelected)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "HandleItemSelected");

	Params::UCollectionBookItemPicker_C_HandleItemSelected_Params Parms;
	Parms.ItemSelected = ItemSelected;
	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWaitingForLatentActionCompletion                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                              (Parm, NoDestructor)

void UCollectionBookItemPicker_C::DialogResult_C897FB8741239C9DAE2430AD3D91A030(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "DialogResult_C897FB8741239C9DAE2430AD3D91A030");

	Params::UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	Parms.WaitingDialogHandle = WaitingDialogHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookItemPicker_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "Construct");

	Params::UCollectionBookItemPicker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookItemPicker_C::ShowSlotItemConfirmation(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "ShowSlotItemConfirmation");

	Params::UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDialogExternalLatentActionHandleTemp_struct_Variable                                             (NoDestructor)
// class FText                        CallFunc_Get_Type_Text_Type                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortItem*                   K2Node_CustomEvent_SelectedItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDONOTUSE_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionData      CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// TArray<struct FConfirmationDialogAction>K2Node_MakeArray_Array2                                          (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWaitingForLatentActionCompletion             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleK2Node_CustomEvent_WaitingDialogHandle                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UCollectionBookRecycleSlotResultsWidget_C*CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetCurrentSlottedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetCurrentSlottedItem_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI*CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Type_Text_Type2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UCollectionBookItemPicker_C::ExecuteUbergraph_CollectionBookItemPicker(int32 EntryPoint, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, class FText CallFunc_Get_Type_Text_Type, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FName Temp_name_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class EFortDialogResult Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortItem* K2Node_CustomEvent_SelectedItem, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDONOTUSE_C* CallFunc_Create_ReturnValue, const struct FCommonInputActionData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array2, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCollectionBookRecycleSlotResultsWidget_C* CallFunc_Create_ReturnValue2, class UFortAccountItem* CallFunc_GetCurrentSlottedItem_ReturnValue, class UFortAccountItem* CallFunc_GetCurrentSlottedItem_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue2, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, class FText CallFunc_Get_Type_Text_Type2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("CollectionBookItemPicker_C", "ExecuteUbergraph_CollectionBookItemPicker");

	Params::UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Get_Type_Text_Type = CallFunc_Get_Type_Text_Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SelectedItem = K2Node_CustomEvent_SelectedItem;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CustomEvent_bWaitingForLatentActionCompletion = K2Node_CustomEvent_bWaitingForLatentActionCompletion;
	Parms.K2Node_CustomEvent_WaitingDialogHandle = K2Node_CustomEvent_WaitingDialogHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetCurrentSlottedItem_ReturnValue = CallFunc_GetCurrentSlottedItem_ReturnValue;
	Parms.CallFunc_GetCurrentSlottedItem_ReturnValue2 = CallFunc_GetCurrentSlottedItem_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue2 = CallFunc_GetSelectedItem_ReturnValue2;
	Parms.CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue = CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue;
	Parms.CallFunc_Get_Type_Text_Type2 = CallFunc_Get_Type_Text_Type2;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

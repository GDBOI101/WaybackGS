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


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxCount                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCount                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_ItemsCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_MaxItemsCount               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_ItemsCount2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageNumItems_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageCapacity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UItemManagementInventoryLimitStatusIndicator_C::RefreshStorageInventoryStatus(int32 MaxCount, int32 CurrentCount, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount2, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2, int32 CallFunc_GetStorageNumItems_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 K2Node_Select_Default, int32 K2Node_Select2_Default, bool Temp_bool_Variable3, const struct FLinearColor& K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "RefreshStorageInventoryStatus");

	Params::UItemManagementInventoryLimitStatusIndicator_C_RefreshStorageInventoryStatus_Params Parms;
	Parms.MaxCount = MaxCount;
	Parms.CurrentCount = CurrentCount;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetDeployableBaseItemCounts_ItemsCount = CallFunc_GetDeployableBaseItemCounts_ItemsCount;
	Parms.CallFunc_GetDeployableBaseItemCounts_MaxItemsCount = CallFunc_GetDeployableBaseItemCounts_MaxItemsCount;
	Parms.CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount = CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount;
	Parms.CallFunc_GetDeployableBaseItemCounts_ItemsCount2 = CallFunc_GetDeployableBaseItemCounts_ItemsCount2;
	Parms.CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2 = CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2;
	Parms.CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2 = CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2;
	Parms.CallFunc_GetStorageNumItems_ReturnValue = CallFunc_GetStorageNumItems_ReturnValue;
	Parms.CallFunc_GetStorageCapacity_ReturnValue = CallFunc_GetStorageCapacity_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Theme_Color_Theme_Color = CallFunc_Get_Theme_Color_Theme_Color;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDeployableBaseManager*  CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UItemManagementInventoryLimitStatusIndicator_C::TrackStorageInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "TrackStorageInventory");

	Params::UItemManagementInventoryLimitStatusIndicator_C_TrackStorageInventory_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_ItemsCount                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_MaxItemsCount                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_OverflowItemsCount                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UItemManagementInventoryLimitStatusIndicator_C::RefreshWorldInventoryStatus(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "RefreshWorldInventoryStatus");

	Params::UItemManagementInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Get_Theme_Color_Theme_Color = CallFunc_Get_Theme_Color_Theme_Color;
	Parms.CallFunc_GetBackpackItemCounts_ItemsCount = CallFunc_GetBackpackItemCounts_ItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_MaxItemsCount = CallFunc_GetBackpackItemCounts_MaxItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_OverflowItemsCount = CallFunc_GetBackpackItemCounts_OverflowItemsCount;
	Parms.CallFunc_Get_Theme_Color_Theme_Color2 = CallFunc_Get_Theme_Color_Theme_Color2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackAccountInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryLimitStatusIndicator_C::TrackAccountInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "TrackAccountInventory");

	Params::UItemManagementInventoryLimitStatusIndicator_C_TrackAccountInventory_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryLimitStatusIndicator_C::TrackWorldInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "TrackWorldInventory");

	Params::UItemManagementInventoryLimitStatusIndicator_C_TrackWorldInventory_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVaultItemLimitStatus   CallFunc_GetVaultItemLimitStatus_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCountOfVaultLimitedItems_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVaultItemLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVaultItemLimitStatus   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UItemManagementInventoryLimitStatusIndicator_C::HandleVaultItemLimitStateChanged(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, enum class EVaultItemLimitStatus CallFunc_GetVaultItemLimitStatus_ReturnValue, int32 CallFunc_GetCountOfVaultLimitedItems_ReturnValue, int32 CallFunc_GetVaultItemLimit_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, const struct FLinearColor& Temp_struct_Variable3, enum class EVaultItemLimitStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "HandleVaultItemLimitStateChanged");

	Params::UItemManagementInventoryLimitStatusIndicator_C_HandleVaultItemLimitStateChanged_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetVaultItemLimitStatus_ReturnValue = CallFunc_GetVaultItemLimitStatus_ReturnValue;
	Parms.CallFunc_GetCountOfVaultLimitedItems_ReturnValue = CallFunc_GetCountOfVaultLimitedItems_ReturnValue;
	Parms.CallFunc_GetVaultItemLimit_ReturnValue = CallFunc_GetVaultItemLimit_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementInventoryLimitStatusIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "Construct");

	Params::UItemManagementInventoryLimitStatusIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementInventoryLimitStatusIndicator_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "Destruct");

	Params::UItemManagementInventoryLimitStatusIndicator_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementInventoryLimitStatusIndicator_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "HandleWorldItemListChanged");

	Params::UItemManagementInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementInventoryLimitStatusIndicator_C::HandleOutpostItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "HandleOutpostItemListChanged");

	Params::UItemManagementInventoryLimitStatusIndicator_C_HandleOutpostItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleDeployableBaseInventoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeployableBasePlot*         Plot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryLimitStatusIndicator_C::HandleDeployableBaseInventoryChanged(class ADeployableBasePlot* Plot)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "HandleDeployableBaseInventoryChanged");

	Params::UItemManagementInventoryLimitStatusIndicator_C_HandleDeployableBaseInventoryChanged_Params Parms;
	Parms.Plot = Plot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployableBasePlot*         K2Node_CustomEvent_Plot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded2                                   (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved2                                 (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded                                    (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved                                  (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryLimitStatusIndicator_C::ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator(int32 EntryPoint, class ADeployableBasePlot* K2Node_CustomEvent_Plot, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded2, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, bool K2Node_SwitchEnum_CmpSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryLimitStatusIndicator_C", "ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator");

	Params::UItemManagementInventoryLimitStatusIndicator_C_ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Plot = K2Node_CustomEvent_Plot;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ItemsAdded2 = K2Node_CustomEvent_ItemsAdded2;
	Parms.K2Node_CustomEvent_ItemsRemoved2 = K2Node_CustomEvent_ItemsRemoved2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_ItemsAdded = K2Node_CustomEvent_ItemsAdded;
	Parms.K2Node_CustomEvent_ItemsRemoved = K2Node_CustomEvent_ItemsRemoved;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

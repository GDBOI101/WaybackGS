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


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
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

void UAthenaInventoryLimitStatusIndicator_C::RefreshWorldInventoryStatus(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "RefreshWorldInventoryStatus");

	Params::UAthenaInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params Parms;
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


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.TrackWorldInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryLimitStatusIndicator_C::TrackWorldInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "TrackWorldInventory");

	Params::UAthenaInventoryLimitStatusIndicator_C_TrackWorldInventory_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryLimitStatusIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "Construct");

	Params::UAthenaInventoryLimitStatusIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryLimitStatusIndicator_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "Destruct");

	Params::UAthenaInventoryLimitStatusIndicator_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaInventoryLimitStatusIndicator_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "HandleWorldItemListChanged");

	Params::UAthenaInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.ExecuteUbergraph_AthenaInventoryLimitStatusIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded                                    (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved                                  (ConstParm, ZeroConstructor, ReferenceParm)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaInventoryLimitStatusIndicator_C::ExecuteUbergraph_AthenaInventoryLimitStatusIndicator(int32 EntryPoint, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaInventoryLimitStatusIndicator_C", "ExecuteUbergraph_AthenaInventoryLimitStatusIndicator");

	Params::UAthenaInventoryLimitStatusIndicator_C_ExecuteUbergraph_AthenaInventoryLimitStatusIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ItemsAdded = K2Node_CustomEvent_ItemsAdded;
	Parms.K2Node_CustomEvent_ItemsRemoved = K2Node_CustomEvent_ItemsRemoved;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

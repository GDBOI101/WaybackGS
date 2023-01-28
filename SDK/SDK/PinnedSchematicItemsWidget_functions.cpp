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


// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          PinnedItem                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSchematicItem*>  PinnedSchematics                                                 (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPinnedSchematicItemWidget_C*K2Node_DynamicCast_AsPinned_Schematic_Item_Widget                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSchematicItem*>  CallFunc_GetPinnedSchematicList_PinnedItems                      (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPinnedSchematicItemWidget_C*K2Node_DynamicCast_AsPinned_Schematic_Item_Widget2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemsWidget_C::Refresh(class UFortSchematicItem* PinnedItem, int32 Index, const TArray<class UFortSchematicItem*>& PinnedSchematics, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UPinnedSchematicItemWidget_C* K2Node_DynamicCast_AsPinned_Schematic_Item_Widget, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* CallFunc_Array_Get_Item, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortSchematicItem*>& CallFunc_GetPinnedSchematicList_PinnedItems, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UPinnedSchematicItemWidget_C* K2Node_DynamicCast_AsPinned_Schematic_Item_Widget2, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemsWidget_C", "Refresh");

	Params::UPinnedSchematicItemsWidget_C_Refresh_Params Parms;
	Parms.PinnedItem = PinnedItem;
	Parms.Index = Index;
	Parms.PinnedSchematics = PinnedSchematics;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPinned_Schematic_Item_Widget = K2Node_DynamicCast_AsPinned_Schematic_Item_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPinnedSchematicList_PinnedItems = CallFunc_GetPinnedSchematicList_PinnedItems;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsPinned_Schematic_Item_Widget2 = K2Node_DynamicCast_AsPinned_Schematic_Item_Widget2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPinnedSchematicItemsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PinnedSchematicItemsWidget_C", "Construct");

	Params::UPinnedSchematicItemsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C.ExecuteUbergraph_PinnedSchematicItemsWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemsWidget_C::ExecuteUbergraph_PinnedSchematicItemsWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemsWidget_C", "ExecuteUbergraph_PinnedSchematicItemsWidget");

	Params::UPinnedSchematicItemsWidget_C_ExecuteUbergraph_PinnedSchematicItemsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

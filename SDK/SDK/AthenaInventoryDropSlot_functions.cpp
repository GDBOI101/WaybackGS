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


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (Parm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAthenaInventoryDragDrop_C*  K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputEvent                 CallFunc_GetInputEventFromPointerEvent_ReturnValue               ()
// bool                               CallFunc_InputEvent_IsShiftDown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeDropped_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAthenaInventoryDropSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue2, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_CanBeDropped_ReturnValue, int32 CallFunc_Max_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaInventoryDropSlot_C", "OnDrop");

	Params::UAthenaInventoryDropSlot_C_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop = K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInputEventFromPointerEvent_ReturnValue = CallFunc_GetInputEventFromPointerEvent_ReturnValue;
	Parms.CallFunc_InputEvent_IsShiftDown_ReturnValue = CallFunc_InputEvent_IsShiftDown_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue2 = CallFunc_GetNumInStack_ReturnValue2;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_CanBeDropped_ReturnValue = CallFunc_CanBeDropped_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryDropSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaInventoryDropSlot_C", "Tick");

	Params::UAthenaInventoryDropSlot_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_GetDragDroppingContent_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_GetDragDroppingContent_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDropSlot_C::ExecuteUbergraph_AthenaInventoryDropSlot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaInventoryDropSlot_C", "ExecuteUbergraph_AthenaInventoryDropSlot");

	Params::UAthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDragDroppingContent_ReturnValue = CallFunc_GetDragDroppingContent_ReturnValue;
	Parms.CallFunc_GetDragDroppingContent_ReturnValue2 = CallFunc_GetDragDroppingContent_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnEquipRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryDropSlot_C::OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryDropSlot_C", "OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryDropSlot_C_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

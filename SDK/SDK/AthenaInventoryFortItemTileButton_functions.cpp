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


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (Parm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               ValidDrop                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaInventoryFortItemTileButton_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ValidDrop, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "OnDrop");

	Params::UAthenaInventoryFortItemTileButton_C_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.ValidDrop = ValidDrop;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()

struct FEventReply UAthenaInventoryFortItemTileButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "OnFocusReceived");

	Params::UAthenaInventoryFortItemTileButton_C_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_DetectDrag_ReturnValue                                  ()
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue2                                  ()

struct FEventReply UAthenaInventoryFortItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_DetectDrag_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "On_ItemWidgetHolder_MouseButtonDown");

	Params::UAthenaInventoryFortItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_DetectDrag_ReturnValue = CallFunc_DetectDrag_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue2 = CallFunc_Unhandled_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateInteractionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesMatchSearchString_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryFortItemTileButton_C::UpdateInteractionWidgetVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UObject* CallFunc_GetData_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_DoesMatchSearchString_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "UpdateInteractionWidgetVisibility");

	Params::UAthenaInventoryFortItemTileButton_C_UpdateInteractionWidgetVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_DoesMatchSearchString_ReturnValue = CallFunc_DoesMatchSearchString_ReturnValue;
	Parms.CallFunc_IsEquipable_ReturnValue = CallFunc_IsEquipable_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.SetEquipSlotOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EquipSlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryFortItemTileButton_C::SetEquipSlotOverlay(int32 EquipSlot, int32 Temp_int_Variable, bool K2Node_MathExpression_ReturnValue, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, class UTexture2D* Temp_object_Variable5, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "SetEquipSlotOverlay");

	Params::UAthenaInventoryFortItemTileButton_C_SetEquipSlotOverlay_Params Parms;
	Parms.EquipSlot = EquipSlot;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragDrop_C*  CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputEvent                 CallFunc_GetInputEventFromPointerEvent_ReturnValue               ()
// bool                               CallFunc_InputEvent_IsShiftDown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragVisual_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryFortItemTileButton_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UAthenaInventoryDragDrop_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaInventoryDragVisual_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "OnDragDetected");

	Params::UAthenaInventoryFortItemTileButton_C_OnDragDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_GetInputEventFromPointerEvent_ReturnValue = CallFunc_GetInputEventFromPointerEvent_ReturnValue;
	Parms.CallFunc_InputEvent_IsShiftDown_ReturnValue = CallFunc_InputEvent_IsShiftDown_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaInventoryFortItemTileButton_C::UpdateStyle()
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "UpdateStyle");

	Params::UAthenaInventoryFortItemTileButton_C_UpdateStyle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              EquipSlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryFortItemTileButton_C::HandleEquipSlotChanged(int32 EquipSlot)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "HandleEquipSlotChanged");

	Params::UAthenaInventoryFortItemTileButton_C_HandleEquipSlotChanged_Params Parms;
	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnInventoryItemSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryFortItemTileButton_C::OnInventoryItemSelected_Event_0(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "OnInventoryItemSelected_Event_0");

	Params::UAthenaInventoryFortItemTileButton_C_OnInventoryItemSelected_Event_0_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryFortItemTileButton_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "Construct");

	Params::UAthenaInventoryFortItemTileButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryFortItemTileButton_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "Destruct");

	Params::UAthenaInventoryFortItemTileButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaInventoryFortItemTileButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "OnSelected");

	Params::UAthenaInventoryFortItemTileButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.ExecuteUbergraph_AthenaInventoryFortItemTileButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_EquipSlot                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryFortItemTileButton_C::ExecuteUbergraph_AthenaInventoryFortItemTileButton(int32 EntryPoint, int32 K2Node_Event_EquipSlot, class UFortItem* K2Node_CustomEvent_Item)
{
	static auto Func = Class->GetFunction("AthenaInventoryFortItemTileButton_C", "ExecuteUbergraph_AthenaInventoryFortItemTileButton");

	Params::UAthenaInventoryFortItemTileButton_C_ExecuteUbergraph_AthenaInventoryFortItemTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EquipSlot = K2Node_Event_EquipSlot;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

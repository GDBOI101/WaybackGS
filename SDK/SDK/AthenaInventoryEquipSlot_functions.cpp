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


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.TryAndShowDropTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          CallFunc_GetDragDroppingContent_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_GetDragDroppingContent_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::TryAndShowDropTarget(class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "TryAndShowDropTarget");

	Params::UAthenaInventoryEquipSlot_C_TryAndShowDropTarget_Params Parms;
	Parms.CallFunc_GetDragDroppingContent_ReturnValue = CallFunc_GetDragDroppingContent_ReturnValue;
	Parms.CallFunc_GetDragDroppingContent_ReturnValue2 = CallFunc_GetDragDroppingContent_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::IsSelected(bool* Selected, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "IsSelected");

	Params::UAthenaInventoryEquipSlot_C_IsSelected_Params Parms;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaInventoryEquipSlot_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnFocusReceived");

	Params::UAthenaInventoryEquipSlot_C_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::SetSelected(bool Selected, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "SetSelected");

	Params::UAthenaInventoryEquipSlot_C_SetSelected_Params Parms;
	Parms.Selected = Selected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragDrop_C*  CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragVisual_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UAthenaInventoryDragDrop_C* CallFunc_CreateDragDropOperation_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaInventoryDragVisual_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnDragDetected");

	Params::UAthenaInventoryEquipSlot_C_OnDragDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         ()
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UAthenaInventoryEquipSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnMouseButtonDown");

	Params::UAthenaInventoryEquipSlot_C_OnMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (Parm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropItemOnQuickBar_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaInventoryEquipSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_DropItemOnQuickBar_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnDrop");

	Params::UAthenaInventoryEquipSlot_C_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_DropItemOnQuickBar_ReturnValue = CallFunc_DropItemOnQuickBar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.RefreshItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::RefreshItem(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "RefreshItem");

	Params::UAthenaInventoryEquipSlot_C_RefreshItem_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue = CallFunc_GetQuickBarSlottedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaInventoryEquipSlot_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "Construct");

	Params::UAthenaInventoryEquipSlot_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor)

void UAthenaInventoryEquipSlot_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnFocusLost");

	Params::UAthenaInventoryEquipSlot_C_OnFocusLost_Params Parms;
	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature");

	Params::UAthenaInventoryEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryEquipSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "Tick");

	Params::UAthenaInventoryEquipSlot_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnQuickbarContentsChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::OnQuickbarContentsChanged_Event_0(enum class EFortQuickBars QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnQuickbarContentsChanged_Event_0");

	Params::UAthenaInventoryEquipSlot_C_OnQuickbarContentsChanged_Event_0_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.ExecuteUbergraph_AthenaInventoryEquipSlot
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSelected_Selected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryEquipSlot_C::ExecuteUbergraph_AthenaInventoryEquipSlot(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_IsSelected_Selected, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "ExecuteUbergraph_AthenaInventoryEquipSlot");

	Params::UAthenaInventoryEquipSlot_C_ExecuteUbergraph_AthenaInventoryEquipSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_IsSelected_Selected = CallFunc_IsSelected_Selected;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnEquipRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryEquipSlot_C::OnEquipRequested__DelegateSignature(int32 SlotIndex)
{
	static auto Func = Class->GetFunction("AthenaInventoryEquipSlot_C", "OnEquipRequested__DelegateSignature");

	Params::UAthenaInventoryEquipSlot_C_OnEquipRequested__DelegateSignature_Params Parms;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function PickupManager.PickupManager_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupManager_C::UpdateKeybinds()
{
	static auto Func = Class->GetFunction("PickupManager_C", "UpdateKeybinds");

	Params::UPickupManager_C_UpdateKeybinds_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.RefreshCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BackpackFullPct                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 BackpackColor                                                    (Edit)
// int32                              Overflow_Items_Count                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max_Items_Count                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Items_Count                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentUpdateTime                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_ItemsCount                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_MaxItemsCount                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_OverflowItemsCount                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupManager_C::RefreshCounts(float BackpackFullPct, const struct FSlateColor& BackpackColor, int32 Overflow_Items_Count, int32 Max_Items_Count, int32 Items_Count, float CurrentUpdateTime, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color2, bool Temp_bool_Variable2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Less_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("PickupManager_C", "RefreshCounts");

	Params::UPickupManager_C_RefreshCounts_Params Parms;
	Parms.BackpackFullPct = BackpackFullPct;
	Parms.BackpackColor = BackpackColor;
	Parms.Overflow_Items_Count = Overflow_Items_Count;
	Parms.Max_Items_Count = Max_Items_Count;
	Parms.Items_Count = Items_Count;
	Parms.CurrentUpdateTime = CurrentUpdateTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetBackpackItemCounts_ItemsCount = CallFunc_GetBackpackItemCounts_ItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_MaxItemsCount = CallFunc_GetBackpackItemCounts_MaxItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_OverflowItemsCount = CallFunc_GetBackpackItemCounts_OverflowItemsCount;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue2 = CallFunc_GetVisibility_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_Get_Theme_Color_Theme_Color = CallFunc_Get_Theme_Color_Theme_Color;
	Parms.CallFunc_Get_Theme_Color_Theme_Color2 = CallFunc_Get_Theme_Color_Theme_Color2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.HandleItemPickedUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              NewItem                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIMessageItemWidget*    CallFunc_AddMessageItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPickupMessageItem_C*        K2Node_DynamicCast_AsPickup_Message_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupManager_C::HandleItemPickedUp(class UFortWorldItem* NewItem, int32 Count, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UFortUIMessageItemWidget* CallFunc_AddMessageItem_ReturnValue, class UPickupMessageItem_C* K2Node_DynamicCast_AsPickup_Message_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PickupManager_C", "HandleItemPickedUp");

	Params::UPickupManager_C_HandleItemPickedUp_Params Parms;
	Parms.NewItem = NewItem;
	Parms.Count = Count;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_AddMessageItem_ReturnValue = CallFunc_AddMessageItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsPickup_Message_Item = K2Node_DynamicCast_AsPickup_Message_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.HandleMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*    Message_Item                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupManager_C::HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item)
{
	static auto Func = Class->GetFunction("PickupManager_C", "HandleMessageExpired");

	Params::UPickupManager_C_HandleMessageExpired_Params Parms;
	Parms.Message_Item = Message_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.TryGetNextItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIMessageItemWidget*    CallFunc_GetNextMessageInQueue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumDisplayedItems_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupManager_C::TryGetNextItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIMessageItemWidget* CallFunc_GetNextMessageInQueue_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_GetNumDisplayedItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PickupManager_C", "TryGetNextItem");

	Params::UPickupManager_C_TryGetNextItem_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNextMessageInQueue_ReturnValue = CallFunc_GetNextMessageInQueue_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetNumDisplayedItems_ReturnValue = CallFunc_GetNumDisplayedItems_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPickupManager_C::Construct()
{
	static auto Func = Class->GetFunction("PickupManager_C", "Construct");

	Params::UPickupManager_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupManager_C::HandleWorldItemsChanged()
{
	static auto Func = Class->GetFunction("PickupManager_C", "HandleWorldItemsChanged");

	Params::UPickupManager_C_HandleWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickupManager_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("PickupManager_C", "HandleWorldItemListChanged");

	Params::UPickupManager_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPickupManager_C::Destruct()
{
	static auto Func = Class->GetFunction("PickupManager_C", "Destruct");

	Params::UPickupManager_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.HandleBuildingMaterialChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupManager_C::HandleBuildingMaterialChanged()
{
	static auto Func = Class->GetFunction("PickupManager_C", "HandleBuildingMaterialChanged");

	Params::UPickupManager_C_HandleBuildingMaterialChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupManager.PickupManager_C.ExecuteUbergraph_PickupManager
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded                                    (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved                                  (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMessageManager_bCreatedNew                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIMessageManager*       CallFunc_GetMessageManager_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)

void UPickupManager_C::ExecuteUbergraph_PickupManager(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_GetMessageManager_bCreatedNew, class UFortUIMessageManager* CallFunc_GetMessageManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6)
{
	static auto Func = Class->GetFunction("PickupManager_C", "ExecuteUbergraph_PickupManager");

	Params::UPickupManager_C_ExecuteUbergraph_PickupManager_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_ItemsAdded = K2Node_CustomEvent_ItemsAdded;
	Parms.K2Node_CustomEvent_ItemsRemoved = K2Node_CustomEvent_ItemsRemoved;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetMessageManager_bCreatedNew = CallFunc_GetMessageManager_bCreatedNew;
	Parms.CallFunc_GetMessageManager_ReturnValue = CallFunc_GetMessageManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

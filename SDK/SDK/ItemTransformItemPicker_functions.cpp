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


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   OutItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::Return_Item_to_Detail(class UFortItem* InItem, class UFortItem** OutItem, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, class UFortItem* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "Return Item to Detail");

	Params::UItemTransformItemPicker_C_Return_Item_to_Detail_Params Parms;
	Parms.InItem = InItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItem != nullptr)
		*OutItem = Parms.OutItem;

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThru                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::OpenInspectionScreen(bool* PassThru, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "OpenInspectionScreen");

	Params::UItemTransformItemPicker_C_OpenInspectionScreen_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThru != nullptr)
		*PassThru = Parms.PassThru;

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThru                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::CommitSelectedItem(bool* PassThru, bool CallFunc_TryCommitSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "CommitSelectedItem");

	Params::UItemTransformItemPicker_C_CommitSelectedItem_Params Parms;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThru != nullptr)
		*PassThru = Parms.PassThru;

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              SelectedSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::OpenPicker(TArray<class UFortItem*>& SacrificeItems, int32 SelectedSlot, bool CallFunc_SelectTabByID_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "OpenPicker");

	Params::UItemTransformItemPicker_C_OpenPicker_Params Parms;
	Parms.SacrificeItems = SacrificeItems;
	Parms.SelectedSlot = SelectedSlot;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FilterName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemTransformFilterTabLabelInfoCallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::SetFilter(class FName FilterName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemTransformFilterTabLabelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "SetFilter");

	Params::UItemTransformItemPicker_C_SetFilter_Params Parms;
	Parms.FilterName = FilterName;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemTransformFilterTabLabelInfoCallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::SetupFilterTabList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemTransformFilterTabLabelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "SetupFilterTabList");

	Params::UItemTransformItemPicker_C_SetupFilterTabList_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::HandleItemCommitted(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "HandleItemCommitted");

	Params::UItemTransformItemPicker_C_HandleItemCommitted_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>    UnrefinedItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>           CurrentSacrificeItems                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortAccountItem*>    RefinedItems                                                     (Parm, OutParm, ZeroConstructor)
// TArray<class UFortAccountItem*>    TempItemArray                                                    (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRecycleValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsRecyclable_Reason                                     ()
// bool                               CallFunc_IsRecyclable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::RemoveInvalidItems(TArray<class UFortAccountItem*>& UnrefinedItems, TArray<class UFortItem*>& CurrentSacrificeItems, TArray<class UFortAccountItem*>* RefinedItems, const TArray<class UFortAccountItem*>& TempItemArray, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_GetRecycleValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_IsRecyclable_Reason, bool CallFunc_IsRecyclable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "RemoveInvalidItems");

	Params::UItemTransformItemPicker_C_RemoveInvalidItems_Params Parms;
	Parms.UnrefinedItems = UnrefinedItems;
	Parms.CurrentSacrificeItems = CurrentSacrificeItems;
	Parms.TempItemArray = TempItemArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetRecycleValue_ReturnValue = CallFunc_GetRecycleValue_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsRecyclable_Reason = CallFunc_IsRecyclable_Reason;
	Parms.CallFunc_IsRecyclable_ReturnValue = CallFunc_IsRecyclable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (RefinedItems != nullptr)
		*RefinedItems = Parms.RefinedItems;

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Return_Item_to_Detail_OutItem                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::HandleItemSelected(class UFortItem* Item, class UFortItem* CallFunc_Return_Item_to_Detail_OutItem, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "HandleItemSelected");

	Params::UItemTransformItemPicker_C_HandleItemSelected_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_Return_Item_to_Detail_OutItem = CallFunc_Return_Item_to_Detail_OutItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UItemTransformItemPicker_C::SetupItemPicker(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "SetupItemPicker");

	Params::UItemTransformItemPicker_C_SetupItemPicker_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformItemPicker_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "Construct");

	Params::UItemTransformItemPicker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "PreConstruct");

	Params::UItemTransformItemPicker_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UItemTransformItemPicker_C_BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::ExecuteUbergraph_ItemTransformItemPicker(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_ComponentBoundEvent_TabId)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "ExecuteUbergraph_ItemTransformItemPicker");

	Params::UItemTransformItemPicker_C_ExecuteUbergraph_ItemTransformItemPicker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformItemPicker_C", "OnItemSelected__DelegateSignature");

	Params::UItemTransformItemPicker_C_OnItemSelected__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

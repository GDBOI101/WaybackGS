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


// Function ItemEntry.ItemEntry_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemEntry_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "DoesItemHaveChildren");

	Params::UItemEntry_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemEntry.ItemEntry_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemEntry_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "GetIndentLevel");

	Params::UItemEntry_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemEntry.ItemEntry_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemEntry_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "IsItemExpanded");

	Params::UItemEntry_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemEntry.ItemEntry_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UItemEntry_C::GetData()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "GetData");

	Params::UItemEntry_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemEntry.ItemEntry_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemEntry_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "OnAcquireFromPool");

	Params::UItemEntry_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemEntry_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "OnReleaseToPool");

	Params::UItemEntry_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemEntry_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "Private_OnExpanderArrowShiftClicked");

	Params::UItemEntry_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UItemEntry_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "RegisterOnClicked");

	Params::UItemEntry_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemEntry_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "SetExpanded");

	Params::UItemEntry_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "SetIndexInList");

	Params::UItemEntry_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemEntry_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "SetSelected");

	Params::UItemEntry_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemEntry_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "ToggleExpansion");

	Params::UItemEntry_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemEntry_C::Reset()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "Reset");

	Params::UItemEntry_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "SetData");

	Params::UItemEntry_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemEntry_C::Construct()
{
	static auto Func = Class->GetFunction("ItemEntry_C", "Construct");

	Params::UItemEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::ExecuteUbergraph_ItemEntry(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "ExecuteUbergraph_ItemEntry");

	Params::UItemEntry_C_ExecuteUbergraph_ItemEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         Items_Definition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition)
{
	static auto Func = Class->GetFunction("ItemEntry_C", "Entry Selected__DelegateSignature");

	Params::UItemEntry_C_Entry_Selected__DelegateSignature_Params Parms;
	Parms.Items_Definition = Items_Definition;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function InfoEntry.InfoEntry_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UInfoEntry_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "DoesItemHaveChildren");

	Params::UInfoEntry_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InfoEntry.InfoEntry_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UInfoEntry_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "GetIndentLevel");

	Params::UInfoEntry_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InfoEntry.InfoEntry_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInfoEntry_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "IsItemExpanded");

	Params::UInfoEntry_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InfoEntry.InfoEntry_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UInfoEntry_C::GetData()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "GetData");

	Params::UInfoEntry_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InfoEntry.InfoEntry_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInfoEntry_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "OnAcquireFromPool");

	Params::UInfoEntry_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInfoEntry_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "OnReleaseToPool");

	Params::UInfoEntry_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfoEntry_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "Private_OnExpanderArrowShiftClicked");

	Params::UInfoEntry_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UInfoEntry_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "RegisterOnClicked");

	Params::UInfoEntry_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInfoEntry_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "SetExpanded");

	Params::UInfoEntry_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "SetIndexInList");

	Params::UInfoEntry_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInfoEntry_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "SetSelected");

	Params::UInfoEntry_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfoEntry_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "ToggleExpansion");

	Params::UInfoEntry_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfoEntry_C::Reset()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "Reset");

	Params::UInfoEntry_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInfoEntry_C::Construct()
{
	static auto Func = Class->GetFunction("InfoEntry_C", "Construct");

	Params::UInfoEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "SetData");

	Params::UInfoEntry_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");

	Params::UInfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UInfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.ExecuteUbergraph_InfoEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_DynamicCast_AsFort_Item_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::ExecuteUbergraph_InfoEntry(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "ExecuteUbergraph_InfoEntry");

	Params::UInfoEntry_C_ExecuteUbergraph_InfoEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_Item_Definition = K2Node_DynamicCast_AsFort_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoEntry.InfoEntry_C.Entry Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         Entry_Item_Definition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::Entry_Selected__DelegateSignature(class UFortItemDefinition* Entry_Item_Definition)
{
	static auto Func = Class->GetFunction("InfoEntry_C", "Entry Selected__DelegateSignature");

	Params::UInfoEntry_C_Entry_Selected__DelegateSignature_Params Parms;
	Parms.Entry_Item_Definition = Entry_Item_Definition;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

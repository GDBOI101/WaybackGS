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


// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMessageCenterListItem_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "DoesItemHaveChildren");

	Params::UMessageCenterListItem_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMessageCenterListItem_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "GetIndentLevel");

	Params::UMessageCenterListItem_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMessageCenterListItem_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "IsItemExpanded");

	Params::UMessageCenterListItem_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MessageCenterListItem.MessageCenterListItem_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UMessageCenterListItem_C::GetData()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "GetData");

	Params::UMessageCenterListItem_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// class UCommonTextBlock*            TextBlock                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "ShowText");

	Params::UMessageCenterListItem_C_ShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         MESSAGE                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetMessage(class UFortUINotification* MESSAGE)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetMessage");

	Params::UMessageCenterListItem_C_SetMessage_Params Parms;
	Parms.MESSAGE = MESSAGE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "OnAcquireFromPool");

	Params::UMessageCenterListItem_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "OnReleaseToPool");

	Params::UMessageCenterListItem_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "Private_OnExpanderArrowShiftClicked");

	Params::UMessageCenterListItem_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UMessageCenterListItem_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "RegisterOnClicked");

	Params::UMessageCenterListItem_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetExpanded");

	Params::UMessageCenterListItem_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetIndexInList");

	Params::UMessageCenterListItem_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "ToggleExpansion");

	Params::UMessageCenterListItem_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::Reset()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "Reset");

	Params::UMessageCenterListItem_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetData");

	Params::UMessageCenterListItem_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::Construct()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "Construct");

	Params::UMessageCenterListItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetSelected");

	Params::UMessageCenterListItem_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_DynamicCast_AsFort_UINotification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::ExecuteUbergraph_MessageCenterListItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bSelected, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "ExecuteUbergraph_MessageCenterListItem");

	Params::UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_UINotification = K2Node_DynamicCast_AsFort_UINotification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

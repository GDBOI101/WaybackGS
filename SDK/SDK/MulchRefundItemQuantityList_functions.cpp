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


// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityList_C", "AddListEntry");

	Params::UMulchRefundItemQuantityList_C_AddListEntry_Params Parms;
	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityList_C::ExecuteUbergraph_MulchRefundItemQuantityList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityList_C", "ExecuteUbergraph_MulchRefundItemQuantityList");

	Params::UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

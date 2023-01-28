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


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DirectlySetQuantity                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityListEntry_C::UpdateItemAndQuantity(bool DirectlySetQuantity, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "UpdateItemAndQuantity");

	Params::UMulchRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params Parms;
	Parms.DirectlySetQuantity = DirectlySetQuantity;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UMulchRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params Parms;
	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMulchRefundItemQuantityListEntry_C::Construct()
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "Construct");

	Params::UMulchRefundItemQuantityListEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.ExecuteUbergraph_MulchRefundItemQuantityListEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::ExecuteUbergraph_MulchRefundItemQuantityListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset)
{
	static auto Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "ExecuteUbergraph_MulchRefundItemQuantityListEntry");

	Params::UMulchRefundItemQuantityListEntry_C_ExecuteUbergraph_MulchRefundItemQuantityListEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

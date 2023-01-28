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


// Function MulchConfirmationItem.MulchConfirmationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMulchConfirmationItem_C::Construct()
{
	static auto Func = Class->GetFunction("MulchConfirmationItem_C", "Construct");

	Params::UMulchConfirmationItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchConfirmationItem.MulchConfirmationItem_C.ExecuteUbergraph_MulchConfirmationItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchConfirmationItem_C::ExecuteUbergraph_MulchConfirmationItem(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MulchConfirmationItem_C", "ExecuteUbergraph_MulchConfirmationItem");

	Params::UMulchConfirmationItem_C_ExecuteUbergraph_MulchConfirmationItem_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function BRCurrency.BRCurrency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBRCurrency_C::Construct()
{
	static auto Func = Class->GetFunction("BRCurrency_C", "Construct");

	Params::UBRCurrency_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BRCurrency.BRCurrency_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBRCurrency_C::Destruct()
{
	static auto Func = Class->GetFunction("BRCurrency_C", "Destruct");

	Params::UBRCurrency_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BRCurrency.BRCurrency_C.ExecuteUbergraph_BRCurrency
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBRCurrency_C::ExecuteUbergraph_BRCurrency(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BRCurrency_C", "ExecuteUbergraph_BRCurrency");

	Params::UBRCurrency_C_ExecuteUbergraph_BRCurrency_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

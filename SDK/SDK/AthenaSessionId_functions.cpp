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


// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionId_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaSessionId_C::UpdateSessionId(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSessionId_C", "UpdateSessionId");

	Params::UAthenaSessionId_C_UpdateSessionId_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSessionId_ReturnValue = CallFunc_GetSessionId_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSessionId.AthenaSessionId_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSessionId_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSessionId_C", "Construct");

	Params::UAthenaSessionId_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSessionId_C::ExecuteUbergraph_AthenaSessionId(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaSessionId_C", "ExecuteUbergraph_AthenaSessionId");

	Params::UAthenaSessionId_C_ExecuteUbergraph_AthenaSessionId_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

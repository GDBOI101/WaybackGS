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


// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void AFrontEnd_C::OnMatchStarted()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnMatchStarted");

	Params::AFrontEnd_C_OnMatchStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontEnd_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "ReceiveBeginPlay");

	Params::AFrontEnd_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontEnd_C::EnableTutorial()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "EnableTutorial");

	Params::AFrontEnd_C_EnableTutorial_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "ExecuteUbergraph_FrontEnd");

	Params::AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

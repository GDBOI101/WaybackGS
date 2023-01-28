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


// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWatermark_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UBuildWatermark_C::Update_Watermark(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetWatermark_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Update Watermark");

	Params::UBuildWatermark_C_Update_Watermark_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetWatermark_ReturnValue = CallFunc_GetWatermark_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::Construct()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Construct");

	Params::UBuildWatermark_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

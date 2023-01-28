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


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Death_C::PickDeathMontageSection()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "PickDeathMontageSection");

	Params::UGA_DefaultPlayer_Death_C_PickDeathMontageSection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_Death_C::ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "ExecuteUbergraph_GA_DefaultPlayer_Death");

	Params::UGA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

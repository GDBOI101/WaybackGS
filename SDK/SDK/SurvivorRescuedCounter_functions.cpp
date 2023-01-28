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


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SurvivorsRescued                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void USurvivorRescuedCounter_C::UpdateSurvivorsRescued(int32 SurvivorsRescued, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("SurvivorRescuedCounter_C", "UpdateSurvivorsRescued");

	Params::USurvivorRescuedCounter_C_UpdateSurvivorsRescued_Params Parms;
	Parms.SurvivorsRescued = SurvivorsRescued;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USurvivorRescuedCounter_C::Construct()
{
	static auto Func = Class->GetFunction("SurvivorRescuedCounter_C", "Construct");

	Params::USurvivorRescuedCounter_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumSurvivorsRescued_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorRescuedCounter_C::ExecuteUbergraph_SurvivorRescuedCounter(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumSurvivorsRescued_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("SurvivorRescuedCounter_C", "ExecuteUbergraph_SurvivorRescuedCounter");

	Params::USurvivorRescuedCounter_C_ExecuteUbergraph_SurvivorRescuedCounter_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumSurvivorsRescued_ReturnValue = CallFunc_GetNumSurvivorsRescued_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

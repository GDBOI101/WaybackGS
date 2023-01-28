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


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_TakerMarkedForDeath_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCN_TakerMarkedForDeath_C", "UserConstructionScript");

	Params::AGCN_TakerMarkedForDeath_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCN_TakerMarkedForDeath_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCN_TakerMarkedForDeath_C", "ReceiveBeginPlay");

	Params::AGCN_TakerMarkedForDeath_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_TakerMarkedForDeath_C::SoulSuckCheck()
{
	static auto Func = Class->GetFunction("GCN_TakerMarkedForDeath_C", "SoulSuckCheck");

	Params::AGCN_TakerMarkedForDeath_C_SoulSuckCheck_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCN_TakerMarkedForDeath_C::ExecuteUbergraph_GCN_TakerMarkedForDeath(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess2, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_TakerMarkedForDeath_C", "ExecuteUbergraph_GCN_TakerMarkedForDeath");

	Params::AGCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Pawn2 = K2Node_DynamicCast_AsFort_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

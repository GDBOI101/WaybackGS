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


// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerRankEmblem_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "Construct");

	Params::UPlayerRankEmblem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "ExecuteUbergraph_PlayerRankEmblem");

	Params::UPlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

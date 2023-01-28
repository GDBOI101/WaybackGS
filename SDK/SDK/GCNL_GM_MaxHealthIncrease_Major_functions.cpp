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


// Function GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AEnemyPawn_Parent_C*         K2Node_DynamicCast_AsEnemy_Pawn_Parent                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCNL_GM_MaxHealthIncrease_Major_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GCNL_GM_MaxHealthIncrease_Major_C", "OnActive");

	Params::AGCNL_GM_MaxHealthIncrease_Major_C_OnActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsEnemy_Pawn_Parent = K2Node_DynamicCast_AsEnemy_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_GM_MaxHealthIncrease_Major_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCNL_GM_MaxHealthIncrease_Major_C", "UserConstructionScript");

	Params::AGCNL_GM_MaxHealthIncrease_Major_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Default_KilledEnemy_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Default_KilledEnemy_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.ExecuteUbergraph_GA_Default_KilledEnemy
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)

void UGA_Default_KilledEnemy_C::ExecuteUbergraph_GA_Default_KilledEnemy(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Default_KilledEnemy_C", "ExecuteUbergraph_GA_Default_KilledEnemy");

	Params::UGA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAT_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GAT_TriggeredAbility_C", "ExecuteUbergraph_GAT_TriggeredAbility");

	Params::UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

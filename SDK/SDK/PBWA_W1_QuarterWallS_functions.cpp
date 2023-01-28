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


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APBWA_W1_QuarterWallS_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "UserConstructionScript");

	Params::APBWA_W1_QuarterWallS_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APBWA_W1_QuarterWallS_C::GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "GameplayCue.Abilities.Activation.Generic.BannerWallBuff1");

	Params::APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APBWA_W1_QuarterWallS_C::GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "GameplayCue.Abilities.Activation.Generic.BannerWallBuff2");

	Params::APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.ExecuteUbergraph_PBWA_W1_QuarterWallS
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void APBWA_W1_QuarterWallS_C::ExecuteUbergraph_PBWA_W1_QuarterWallS(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue3, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue2)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "ExecuteUbergraph_PBWA_W1_QuarterWallS");

	Params::APBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimatingMID_ReturnValue = CallFunc_GetAnimatingMID_ReturnValue;
	Parms.CallFunc_GetAnimatingMID_ReturnValue2 = CallFunc_GetAnimatingMID_ReturnValue2;
	Parms.CallFunc_GetAnimatingMID_ReturnValue3 = CallFunc_GetAnimatingMID_ReturnValue3;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

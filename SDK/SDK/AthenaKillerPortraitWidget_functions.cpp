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


// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.GetOwningPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      AsFort_Player_State_Athena                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaKillerPortraitWidget_C::GetOwningPlayerState(class AFortPlayerStateAthena** AsFort_Player_State_Athena, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaKillerPortraitWidget_C", "GetOwningPlayerState");

	Params::UAthenaKillerPortraitWidget_C_GetOwningPlayerState_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_State_Athena != nullptr)
		*AsFort_Player_State_Athena = Parms.AsFort_Player_State_Athena;

}


// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (Parm, OutParm, ReferenceParm)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortKillerVisualInfo       CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue          ()
// class AFortPlayerStateAthena*      CallFunc_GetOwningPlayerState_AsFort_Player_State_Athena         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaKillerPortraitWidget_C::Init(struct FFortPlayerDeathReport& DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortKillerVisualInfo& CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue, class AFortPlayerStateAthena* CallFunc_GetOwningPlayerState_AsFort_Player_State_Athena, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue2, bool CallFunc_HasTag_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaKillerPortraitWidget_C", "Init");

	Params::UAthenaKillerPortraitWidget_C_Init_Params Parms;
	Parms.DeathReport = DeathReport;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue = CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_AsFort_Player_State_Athena = CallFunc_GetOwningPlayerState_AsFort_Player_State_Athena;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue2 = CallFunc_HasTag_ReturnValue2;
	Parms.CallFunc_HasTag_ReturnValue3 = CallFunc_HasTag_ReturnValue3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

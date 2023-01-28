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


// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATODM_Disabled_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "UserConstructionScript");

	Params::ATODM_Disabled_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATODM_Disabled_C::DisableLightAndFog(bool Enable)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "DisableLightAndFog");

	Params::ATODM_Disabled_C_DisableLightAndFog_Params Parms;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATODM_Disabled_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "ReceiveBeginPlay");

	Params::ATODM_Disabled_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATODM_Disabled_C::ExecuteUbergraph_TODM_Disabled(int32 EntryPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool K2Node_CustomEvent_Enable, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "ExecuteUbergraph_TODM_Disabled");

	Params::ATODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

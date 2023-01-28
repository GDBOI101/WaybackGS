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


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "UserConstructionScript");

	Params::AVaultCharacterLightingBP_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::LightControl(bool NewParam)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "LightControl");

	Params::AVaultCharacterLightingBP_C_LightControl_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "ReceiveBeginPlay");

	Params::AVaultCharacterLightingBP_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint, bool K2Node_CustomEvent_NewParam, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("VaultCharacterLightingBP_C", "ExecuteUbergraph_VaultCharacterLightingBP");

	Params::AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

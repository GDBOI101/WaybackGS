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


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaGameOverScreen_C::On_Player_Died(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "On Player Died");

	Params::UAthenaGameOverScreen_C_On_Player_Died_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGameOverScreen_C::On_Player_Won()
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "On Player Won");

	Params::UAthenaGameOverScreen_C_On_Player_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGameOverScreen_C::HandleRevived()
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "HandleRevived");

	Params::UAthenaGameOverScreen_C_HandleRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaGameOverScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "Construct");

	Params::UAthenaGameOverScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGameOverScreen_C::Clear_GameOver_Screen()
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "Clear GameOver Screen");

	Params::UAthenaGameOverScreen_C_Clear_GameOver_Screen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGameOverScreen_C::On_Team_Won()
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "On Team Won");

	Params::UAthenaGameOverScreen_C_On_Team_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDeathWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaWinWidget_C*          CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGameOverScreen_C::ExecuteUbergraph_AthenaGameOverScreen(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaDeathWidget_C* CallFunc_Create_ReturnValue, class UAthenaWinWidget_C* CallFunc_Create_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaGameOverScreen_C", "ExecuteUbergraph_AthenaGameOverScreen");

	Params::UAthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

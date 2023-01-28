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


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.UpdateBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamSubtotalScore_C::UpdateBackground(class UTexture2D* Texture, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("Results_TeamSubtotalScore_C", "UpdateBackground");

	Params::UResults_TeamSubtotalScore_C_UpdateBackground_Params Parms;
	Parms.Texture = Texture;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamSubtotalScore_C::SetScore(int32 Score, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamSubtotalScore_C", "SetScore");

	Params::UResults_TeamSubtotalScore_C_SetScore_Params Parms;
	Parms.Score = Score;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamSubtotalScore_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_TeamSubtotalScore_C", "PreConstruct");

	Params::UResults_TeamSubtotalScore_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_TeamSubtotalScore_C::Construct()
{
	static auto Func = Class->GetFunction("Results_TeamSubtotalScore_C", "Construct");

	Params::UResults_TeamSubtotalScore_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.ExecuteUbergraph_Results_TeamSubtotalScore
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamSubtotalScore_C::ExecuteUbergraph_Results_TeamSubtotalScore(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamSubtotalScore_C", "ExecuteUbergraph_Results_TeamSubtotalScore");

	Params::UResults_TeamSubtotalScore_C_ExecuteUbergraph_Results_TeamSubtotalScore_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

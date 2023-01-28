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


// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         Xpboostitem                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpBoostInfoText_C::Update_Available_Boosts(class UFortItemDefinition* Xpboostitem, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("XpBoostInfoText_C", "Update Available Boosts");

	Params::UXpBoostInfoText_C_Update_Available_Boosts_Params Parms;
	Parms.Xpboostitem = Xpboostitem;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostInfoText.XpBoostInfoText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpBoostInfoText_C::Construct()
{
	static auto Func = Class->GetFunction("XpBoostInfoText_C", "Construct");

	Params::UXpBoostInfoText_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      NewInfo                                                          (Parm, NoDestructor)

void UXpBoostInfoText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto Func = Class->GetFunction("XpBoostInfoText_C", "HandleAccountUpdate");

	Params::UXpBoostInfoText_C_HandleAccountUpdate_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostInfoText_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static auto Func = Class->GetFunction("XpBoostInfoText_C", "Xp Boost Changed");

	Params::UXpBoostInfoText_C_Xp_Boost_Changed_Params Parms;
	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_CustomEvent_NewInfo                                       (NoDestructor)
// int32                              K2Node_CustomEvent_BoostAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostInfoText_C::ExecuteUbergraph_XpBoostInfoText(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, int32 K2Node_CustomEvent_BoostAmount)
{
	static auto Func = Class->GetFunction("XpBoostInfoText_C", "ExecuteUbergraph_XpBoostInfoText");

	Params::UXpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_NewInfo = K2Node_CustomEvent_NewInfo;
	Parms.K2Node_CustomEvent_BoostAmount = K2Node_CustomEvent_BoostAmount;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

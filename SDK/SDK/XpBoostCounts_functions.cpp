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


// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue2                             ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()

void UXpBoostCounts_C::Update_Available_Boosts(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("XpBoostCounts_C", "Update Available Boosts");

	Params::UXpBoostCounts_C_Update_Available_Boosts_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue2 = CallFunc_GetAccountItemWithDefinition_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostCounts.XpBoostCounts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpBoostCounts_C::Construct()
{
	static auto Func = Class->GetFunction("XpBoostCounts_C", "Construct");

	Params::UXpBoostCounts_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      NewInfo                                                          (Parm, NoDestructor)

void UXpBoostCounts_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto Func = Class->GetFunction("XpBoostCounts_C", "HandleAccountUpdate");

	Params::UXpBoostCounts_C_HandleAccountUpdate_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostCounts_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static auto Func = Class->GetFunction("XpBoostCounts_C", "Xp Boost Changed");

	Params::UXpBoostCounts_C_Xp_Boost_Changed_Params Parms;
	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_CustomEvent_NewInfo                                       (NoDestructor)
// int32                              K2Node_CustomEvent_BoostAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostCounts_C::ExecuteUbergraph_XpBoostCounts(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, int32 K2Node_CustomEvent_BoostAmount)
{
	static auto Func = Class->GetFunction("XpBoostCounts_C", "ExecuteUbergraph_XpBoostCounts");

	Params::UXpBoostCounts_C_ExecuteUbergraph_XpBoostCounts_Params Parms;
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

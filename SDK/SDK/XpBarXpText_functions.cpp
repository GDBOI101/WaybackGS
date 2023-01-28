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


// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Next_Level_Skill_Points                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPrivateAccountInfo     CallFunc_GetLocalAccountInfo_Result                              (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetAccountLevelUpRewards_Rewards                        (ZeroConstructor, ReferenceParm)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()

void UXpBarXpText_C::Get_Skill_Points_For_Next_Level(int32* Next_Level_Skill_Points, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("XpBarXpText_C", "Get Skill Points For Next Level");

	Params::UXpBarXpText_C_Get_Skill_Points_For_Next_Level_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetLocalAccountInfo_Result = CallFunc_GetLocalAccountInfo_Result;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAccountLevelUpRewards_Rewards = CallFunc_GetAccountLevelUpRewards_Rewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Next_Level_Skill_Points != nullptr)
		*Next_Level_Skill_Points = Parms.Next_Level_Skill_Points;

}


// Function XpBarXpText.XpBarXpText_C.Update Xp Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Account_Info                                                     (Parm, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// int32                              CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UXpBarXpText_C::Update_Xp_Text(const struct FFortPublicAccountInfo& Account_Info, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("XpBarXpText_C", "Update Xp Text");

	Params::UXpBarXpText_C_Update_Xp_Text_Params Parms;
	Parms.Account_Info = Account_Info;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points = CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBarXpText.XpBarXpText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpBarXpText_C::Construct()
{
	static auto Func = Class->GetFunction("XpBarXpText_C", "Construct");

	Params::UXpBarXpText_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      NewInfo                                                          (Parm, NoDestructor)

void UXpBarXpText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto Func = Class->GetFunction("XpBarXpText_C", "HandleAccountUpdate");

	Params::UXpBarXpText_C_HandleAccountUpdate_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_CustomEvent_NewInfo                                       (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      CallFunc_GetCurrentlyViewedAccountInfo_Result                    (NoDestructor)

void UXpBarXpText_C::ExecuteUbergraph_XpBarXpText(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result)
{
	static auto Func = Class->GetFunction("XpBarXpText_C", "ExecuteUbergraph_XpBarXpText");

	Params::UXpBarXpText_C_ExecuteUbergraph_XpBarXpText_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewInfo = K2Node_CustomEvent_NewInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentlyViewedAccountInfo_Result = CallFunc_GetCurrentlyViewedAccountInfo_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

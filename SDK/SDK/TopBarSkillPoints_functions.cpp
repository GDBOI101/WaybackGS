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


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMissionRewardBadgeTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit)
// class FText                        TooltipDescription                                               (Edit)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRewardBoostBadgeTooltip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBarSkillPoints_C::GetMissionRewardBadgeTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UMissionRewardBoostBadgeTooltip_C* CallFunc_Create_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetMissionRewardBadgeTooltipWidget");

	Params::UTopBarSkillPoints_C_GetMissionRewardBadgeTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Mission Reward Boost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_Mission_Reward_Boost(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has Mission Reward Boost");

	Params::UTopBarSkillPoints_C_Has_Mission_Reward_Boost_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetFounderBadgetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit)
// class FText                        TooltipDescription                                               (Edit)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFounderBadgeTooltip_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBarSkillPoints_C::GetFounderBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFounderBadgeTooltip_C* CallFunc_Create_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetFounderBadgetTooltipWidget");

	Params::UTopBarSkillPoints_C_GetFounderBadgetTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMonthlyVIPBadgetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit)
// class FText                        TooltipDescription                                               (Edit)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMonthlyVIPBadgeTooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBarSkillPoints_C::GetMonthlyVIPBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UMonthlyVIPBadgeTooltip_C* CallFunc_Create_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetMonthlyVIPBadgetTooltipWidget");

	Params::UTopBarSkillPoints_C_GetMonthlyVIPBadgetTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has VIP Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_VIP_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has VIP Badge");

	Params::UTopBarSkillPoints_C_Has_VIP_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Founder Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_Founder_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has Founder Badge");

	Params::UTopBarSkillPoints_C_Has_Founder_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemovedIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::HandleRemotePlayerRemoved(int32 RemovedIndex)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleRemotePlayerRemoved");

	Params::UTopBarSkillPoints_C_HandleRemotePlayerRemoved_Params Parms;
	Parms.RemovedIndex = RemovedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleOnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberState                                                   (Parm)

void UTopBarSkillPoints_C::HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleOnTeamMemberStateChanged");

	Params::UTopBarSkillPoints_C_HandleOnTeamMemberStateChanged_Params Parms;
	Parms.NewMemberState = NewMemberState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Unbind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Unbind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Unbind Party Delegates");

	Params::UTopBarSkillPoints_C_Unbind_Party_Delegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Bind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Bind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Bind Party Delegates");

	Params::UTopBarSkillPoints_C_Bind_Party_Delegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.BoostExperiencePercentOfLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpBoostBalance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTopBarSkillPoints_C::BoostExperiencePercentOfLevel(float CallFunc_Conv_IntToFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "BoostExperiencePercentOfLevel");

	Params::UTopBarSkillPoints_C_BoostExperiencePercentOfLevel_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetXpBoostBalance_ReturnValue = CallFunc_GetXpBoostBalance_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.RestExperencePercentOfLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTopBarSkillPoints_C::RestExperencePercentOfLevel(float CallFunc_Conv_IntToFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "RestExperencePercentOfLevel");

	Params::UTopBarSkillPoints_C_RestExperencePercentOfLevel_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue3                                     ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue4                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue5                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData8                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue6                                     ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue7                                     ()
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::GetBonusExperienceDescription(class FText* Result, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue3, class FText CallFunc_Format_ReturnValue, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Format_ReturnValue2, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, class FText CallFunc_Format_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, class FText CallFunc_Format_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array5, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue3, class FText CallFunc_Format_ReturnValue5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, class FText CallFunc_Format_ReturnValue6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array7, class FText CallFunc_Format_ReturnValue7, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue7)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetBonusExperienceDescription");

	Params::UTopBarSkillPoints_C_GetBonusExperienceDescription_Params Parms;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue = CallFunc_RestExperencePercentOfLevel_ReturnValue;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue = CallFunc_BoostExperiencePercentOfLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue2 = CallFunc_RestExperencePercentOfLevel_ReturnValue2;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue2 = CallFunc_BoostExperiencePercentOfLevel_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue3 = CallFunc_BoostExperiencePercentOfLevel_ReturnValue3;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_Format_ReturnValue4 = CallFunc_Format_ReturnValue4;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue3 = CallFunc_RestExperencePercentOfLevel_ReturnValue3;
	Parms.CallFunc_Format_ReturnValue5 = CallFunc_Format_ReturnValue5;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.K2Node_MakeStruct_FormatArgumentData8 = K2Node_MakeStruct_FormatArgumentData8;
	Parms.CallFunc_Format_ReturnValue6 = CallFunc_Format_ReturnValue6;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.CallFunc_Format_ReturnValue7 = CallFunc_Format_ReturnValue7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue5 = CallFunc_EqualEqual_NameName_ReturnValue5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue6 = CallFunc_EqualEqual_NameName_ReturnValue6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue7 = CallFunc_EqualEqual_NameName_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetSkillPointsTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBarSkillPoints_C::GetSkillPointsTooltipWidget(class FText CallFunc_MakeLiteralText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetSkillPointsTooltipWidget");

	Params::UTopBarSkillPoints_C_GetSkillPointsTooltipWidget_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit)
// class FText                        TooltipDescription                                               (Edit)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpBonusToolTip_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTopBarSkillPoints_C::GetBonusExperienceTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UXpBonusToolTip_C* CallFunc_Create_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetBonusExperienceTooltipWidget");

	Params::UTopBarSkillPoints_C_GetBonusExperienceTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Update Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpBoostBalance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Mission_Reward_Boost_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_VIP_Badge_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Founder_Badge_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Update_Boosts(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetRestXpBalance_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, bool CallFunc_Has_Mission_Reward_Boost_Result, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Has_VIP_Badge_Result, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_Has_Founder_Badge_Result, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, enum class ESlateVisibility K2Node_Select5_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select6_Default, enum class ESlateVisibility Temp_byte_Variable13, enum class ESlateVisibility Temp_byte_Variable14, bool Temp_bool_Variable7, enum class ESlateVisibility K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Update Boosts");

	Params::UTopBarSkillPoints_C_Update_Boosts_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.CallFunc_GetXpBoostBalance_ReturnValue = CallFunc_GetXpBoostBalance_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	Parms.CallFunc_Has_Mission_Reward_Boost_Result = CallFunc_Has_Mission_Reward_Boost_Result;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Has_VIP_Badge_Result = CallFunc_Has_VIP_Badge_Result;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Has_Founder_Badge_Result = CallFunc_Has_Founder_Badge_Result;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.UpdateAccountInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Info                                                             (Parm, NoDestructor)

void UTopBarSkillPoints_C::UpdateAccountInfo(const struct FFortPublicAccountInfo& Info)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "UpdateAccountInfo");

	Params::UTopBarSkillPoints_C_UpdateAccountInfo_Params Parms;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Construct()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Construct");

	Params::UTopBarSkillPoints_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Xp Boost Changed");

	Params::UTopBarSkillPoints_C_Xp_Boost_Changed_Params Parms;
	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	Params::UTopBarSkillPoints_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::On_Party_Left()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "On Party Left");

	Params::UTopBarSkillPoints_C_On_Party_Left_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::On_Party_Joined()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "On Party Joined");

	Params::UTopBarSkillPoints_C_On_Party_Joined_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Founder Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Founder_Changed()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Founder Changed");

	Params::UTopBarSkillPoints_C_Founder_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Destruct()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Destruct");

	Params::UTopBarSkillPoints_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopBarSkillPoints.TopBarSkillPoints_C.ExecuteUbergraph_TopBarSkillPoints
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BoostAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPrivateAccountInfo     CallFunc_GetLocalAccountInfo_Result                              (NoDestructor)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::ExecuteUbergraph_TopBarSkillPoints(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, int32 K2Node_CustomEvent_BoostAmount, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class UBoostsRoot_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortMcpContext* CallFunc_GetContext_ReturnValue5)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "ExecuteUbergraph_TopBarSkillPoints");

	Params::UTopBarSkillPoints_C_ExecuteUbergraph_TopBarSkillPoints_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CustomEvent_BoostAmount = K2Node_CustomEvent_BoostAmount;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLocalAccountInfo_Result = CallFunc_GetLocalAccountInfo_Result;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

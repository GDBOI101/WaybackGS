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


// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalTeamHomebaseRating_Rating                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalTeamHomebaseRating_ProgressFraction             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalTeamHomebaseRating_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPowerRequirement_C::GenerateToolTipWidget(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetLocalTeamHomebaseRating_Rating, float CallFunc_GetLocalTeamHomebaseRating_ProgressFraction, bool CallFunc_GetLocalTeamHomebaseRating_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output2)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "GenerateToolTipWidget");

	Params::UPowerRequirement_C_GenerateToolTipWidget_Params Parms;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLocalTeamHomebaseRating_Rating = CallFunc_GetLocalTeamHomebaseRating_Rating;
	Parms.CallFunc_GetLocalTeamHomebaseRating_ProgressFraction = CallFunc_GetLocalTeamHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetLocalTeamHomebaseRating_ReturnValue = CallFunc_GetLocalTeamHomebaseRating_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output2 = CallFunc_Create_Basic_Tooltip_Output2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyPower                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()

void UPowerRequirement_C::SetUIForRequired(int32 PartyPower, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "SetUIForRequired");

	Params::UPowerRequirement_C_SetUIForRequired_Params Parms;
	Parms.PartyPower = PartyPower;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyPower                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPowerRequirement_C::SetUIForRecommended(int32 PartyPower, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "SetUIForRecommended");

	Params::UPowerRequirement_C_SetUIForRecommended_Params Parms;
	Parms.PartyPower = PartyPower;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::Update(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "Update");

	Params::UPowerRequirement_C_Update_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.SetRequirements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RequiredPower                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecommendedPower                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRequirement_C::SetRequirements(int32 RequiredPower, int32 RecommendedPower)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "SetRequirements");

	Params::UPowerRequirement_C_SetRequirements_Params Parms;
	Parms.RequiredPower = RequiredPower;
	Parms.RecommendedPower = RecommendedPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPowerRequirement_C::Construct()
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "Construct");

	Params::UPowerRequirement_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPowerRequirement_C::PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "PlayerInfoChanged");

	Params::UPowerRequirement_C_PlayerInfoChanged_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)

void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId)
{
	static auto Func = Class->GetFunction("PowerRequirement_C", "ExecuteUbergraph_PowerRequirement");

	Params::UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

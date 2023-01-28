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


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Container                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  RewardText                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMultiSizeItemCard*      RewardItemCard                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasReward                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemInstanceQuantityPairRewardItem                                                       (Parm, NoDestructor)
// int32                              LevelRewarded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerEmblemAndXp_C::SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UFortMultiSizeItemCard* RewardItemCard, bool HasReward, const struct FFortItemInstanceQuantityPair& RewardItem, int32 LevelRewarded, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PlayerEmblemAndXp_C", "SetupReward");

	Params::UPlayerEmblemAndXp_C_SetupReward_Params Parms;
	Parms.Container = Container;
	Parms.RewardText = RewardText;
	Parms.RewardItemCard = RewardItemCard;
	Parms.HasReward = HasReward;
	Parms.RewardItem = RewardItem;
	Parms.LevelRewarded = LevelRewarded;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      FortPublicAccountInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemInstanceQuantityPairCallFunc_GetNextSeasonChaseReward_Reward                         (NoDestructor)
// int32                              CallFunc_GetNextSeasonChaseReward_RewardLevel                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextSeasonChaseReward_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFortItemInstanceQuantityPairCallFunc_GetNextSeasonChaseReward_Reward2                        (NoDestructor)
// int32                              CallFunc_GetNextSeasonChaseReward_RewardLevel2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextSeasonChaseReward_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerEmblemAndXp_C::Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue3, bool Temp_bool_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_GetNextSeasonChaseReward_Reward, int32 CallFunc_GetNextSeasonChaseReward_RewardLevel, bool CallFunc_GetNextSeasonChaseReward_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetNextSeasonChaseReward_Reward2, int32 CallFunc_GetNextSeasonChaseReward_RewardLevel2, bool CallFunc_GetNextSeasonChaseReward_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerEmblemAndXp_C", "Refresh");

	Params::UPlayerEmblemAndXp_C_Refresh_Params Parms;
	Parms.FortPublicAccountInfo = FortPublicAccountInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetNextSeasonChaseReward_Reward = CallFunc_GetNextSeasonChaseReward_Reward;
	Parms.CallFunc_GetNextSeasonChaseReward_RewardLevel = CallFunc_GetNextSeasonChaseReward_RewardLevel;
	Parms.CallFunc_GetNextSeasonChaseReward_ReturnValue = CallFunc_GetNextSeasonChaseReward_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetNextSeasonChaseReward_Reward2 = CallFunc_GetNextSeasonChaseReward_Reward2;
	Parms.CallFunc_GetNextSeasonChaseReward_RewardLevel2 = CallFunc_GetNextSeasonChaseReward_RewardLevel2;
	Parms.CallFunc_GetNextSeasonChaseReward_ReturnValue2 = CallFunc_GetNextSeasonChaseReward_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerEmblemAndXp_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerEmblemAndXp_C", "Construct");

	Params::UPlayerEmblemAndXp_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerEmblemAndXp_C::OnAccountInfoChanged(struct FFortPublicAccountInfo& Result)
{
	static auto Func = Class->GetFunction("PlayerEmblemAndXp_C", "OnAccountInfoChanged");

	Params::UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_Event_Result                                              (ConstParm, NoDestructor)

void UPlayerEmblemAndXp_C::ExecuteUbergraph_PlayerEmblemAndXp(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result)
{
	static auto Func = Class->GetFunction("PlayerEmblemAndXp_C", "ExecuteUbergraph_PlayerEmblemAndXp");

	Params::UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Result = K2Node_Event_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

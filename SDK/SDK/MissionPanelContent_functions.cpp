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


// Function MissionPanelContent.MissionPanelContent_C.Setup Mission Rewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Array                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class ERewardListEntryType    RewardType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewardsListEntry_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionPanelContent_C::Setup_Mission_Rewards(TArray<class UFortItem*>& Array, enum class ERewardListEntryType RewardType, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "Setup Mission Rewards");

	Params::UMissionPanelContent_C_Setup_Mission_Rewards_Params Parms;
	Parms.Array = Array;
	Parms.RewardType = RewardType;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionPanelContent.MissionPanelContent_C.UpdateOverviewObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionOverviewObjective_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FZoneLoadingScreenHeadingConfig>CallFunc_GetMissionOverviewObjectives_ReturnValue                (ZeroConstructor, ReferenceParm)
// struct FZoneLoadingScreenHeadingConfigCallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionPanelContent_C::UpdateOverviewObjectives(int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionOverviewObjective_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FZoneLoadingScreenHeadingConfig>& CallFunc_GetMissionOverviewObjectives_ReturnValue, const struct FZoneLoadingScreenHeadingConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "UpdateOverviewObjectives");

	Params::UMissionPanelContent_C_UpdateOverviewObjectives_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMissionOverviewObjectives_ReturnValue = CallFunc_GetMissionOverviewObjectives_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetMissionRewards_MissionRewards                        (ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>           CallFunc_GetMissionRewards_MissionAlertRewards                   (ZeroConstructor, ReferenceParm)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionPanelContent_C::UpdateMissionRewards(class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetMissionRewards_MissionRewards, TArray<class UFortItem*>& CallFunc_GetMissionRewards_MissionAlertRewards, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "UpdateMissionRewards");

	Params::UMissionPanelContent_C_UpdateMissionRewards_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetMissionRewards_MissionRewards = CallFunc_GetMissionRewards_MissionRewards;
	Parms.CallFunc_GetMissionRewards_MissionAlertRewards = CallFunc_GetMissionRewards_MissionAlertRewards;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UMissionPanelContent_C::UpdateMissionDisplay(class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "UpdateMissionDisplay");

	Params::UMissionPanelContent_C_UpdateMissionDisplay_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionPanelContent.MissionPanelContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionPanelContent_C::Construct()
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "Construct");

	Params::UMissionPanelContent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionPanelContent.MissionPanelContent_C.ExecuteUbergraph_MissionPanelContent
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UMissionPanelContent_C::ExecuteUbergraph_MissionPanelContent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static auto Func = Class->GetFunction("MissionPanelContent_C", "ExecuteUbergraph_MissionPanelContent");

	Params::UMissionPanelContent_C_ExecuteUbergraph_MissionPanelContent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

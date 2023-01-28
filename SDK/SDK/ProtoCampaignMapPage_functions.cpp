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


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TargetQuestFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetQuestPageIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuestPageIndex                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestFound                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestMiniTile_C*            K2Node_DynamicCast_AsQuest_Mini_Tile                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStateAndFindIncompleteQuest_QuestFound               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetState_QuestFound                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHalloweenMapPage_05_C*      K2Node_DynamicCast_AsHalloween_Map_Page_05                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHalloweenMapPage_04_C*      K2Node_DynamicCast_AsHalloween_Map_Page_04                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHalloweenMapPage_03_C*      K2Node_DynamicCast_AsHalloween_Map_Page_03                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHalloweenMapPage_02_C*      K2Node_DynamicCast_AsHalloween_Map_Page_02                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHalloweenMapPage_01_C*      K2Node_DynamicCast_AsHalloween_Map_Page_01                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProtoCampaignMapPage_C::CheckForIncompleteQuest_Halloween_Event(bool* TargetQuestFound, int32* TargetQuestPageIndex, int32 QuestPageIndex, bool QuestFound, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestMiniTile_C* K2Node_DynamicCast_AsQuest_Mini_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetStateAndFindIncompleteQuest_QuestFound, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SetState_QuestFound, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UHalloweenMapPage_05_C* K2Node_DynamicCast_AsHalloween_Map_Page_05, bool K2Node_DynamicCast_bSuccess2, class UHalloweenMapPage_04_C* K2Node_DynamicCast_AsHalloween_Map_Page_04, bool K2Node_DynamicCast_bSuccess3, class UHalloweenMapPage_03_C* K2Node_DynamicCast_AsHalloween_Map_Page_03, bool K2Node_DynamicCast_bSuccess4, class UHalloweenMapPage_02_C* K2Node_DynamicCast_AsHalloween_Map_Page_02, bool K2Node_DynamicCast_bSuccess5, class UHalloweenMapPage_01_C* K2Node_DynamicCast_AsHalloween_Map_Page_01, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_HasAnyChildren_ReturnValue)
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "CheckForIncompleteQuest-Halloween Event");

	Params::UProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event_Params Parms;
	Parms.QuestPageIndex = QuestPageIndex;
	Parms.QuestFound = QuestFound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Mini_Tile = K2Node_DynamicCast_AsQuest_Mini_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetStateAndFindIncompleteQuest_QuestFound = CallFunc_SetStateAndFindIncompleteQuest_QuestFound;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SetState_QuestFound = CallFunc_SetState_QuestFound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsHalloween_Map_Page_05 = K2Node_DynamicCast_AsHalloween_Map_Page_05;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsHalloween_Map_Page_04 = K2Node_DynamicCast_AsHalloween_Map_Page_04;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsHalloween_Map_Page_03 = K2Node_DynamicCast_AsHalloween_Map_Page_03;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsHalloween_Map_Page_02 = K2Node_DynamicCast_AsHalloween_Map_Page_02;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsHalloween_Map_Page_01 = K2Node_DynamicCast_AsHalloween_Map_Page_01;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = Parms.TargetQuestFound;

	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = Parms.TargetQuestPageIndex;

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UProtoCampaignMapPage_C::SetBackgroundImage()
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "SetBackgroundImage");

	Params::UProtoCampaignMapPage_C_SetBackgroundImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TargetQuestFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetQuestPageIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuestPageIndex                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestFound                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestMiniTile_C*            K2Node_DynamicCast_AsQuest_Mini_Tile                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetMainQuest_outCurentMainQuest                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetState_QuestFound                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCampaignMapPage_Plankerton_13_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_07_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_12_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_11_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_10_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_09_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_08_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_06_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_05_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_04_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_03_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_02_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Plankerton_01_C*K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_10_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess15                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_09_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess16                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_08_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess17                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_07_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess18                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_06_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess19                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_05_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess20                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_04_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess21                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_03_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess22                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_02_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess23                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCampaignMapPage_Stonewood_01_C*K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess24                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProtoCampaignMapPage_C::CheckForMainQuest(bool* TargetQuestFound, int32* TargetQuestPageIndex, int32 QuestPageIndex, bool QuestFound, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestMiniTile_C* K2Node_DynamicCast_AsQuest_Mini_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortQuestItem* CallFunc_GetMainQuest_outCurentMainQuest, bool CallFunc_SetState_QuestFound, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UCampaignMapPage_Plankerton_13_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13, bool K2Node_DynamicCast_bSuccess2, class UCampaignMapPage_Plankerton_07_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07, bool K2Node_DynamicCast_bSuccess3, class UCampaignMapPage_Plankerton_12_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12, bool K2Node_DynamicCast_bSuccess4, class UCampaignMapPage_Plankerton_11_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11, bool K2Node_DynamicCast_bSuccess5, class UCampaignMapPage_Plankerton_10_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10, bool K2Node_DynamicCast_bSuccess6, class UCampaignMapPage_Plankerton_09_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09, bool K2Node_DynamicCast_bSuccess7, class UCampaignMapPage_Plankerton_08_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08, bool K2Node_DynamicCast_bSuccess8, class UCampaignMapPage_Plankerton_06_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06, bool K2Node_DynamicCast_bSuccess9, class UCampaignMapPage_Plankerton_05_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05, bool K2Node_DynamicCast_bSuccess10, class UCampaignMapPage_Plankerton_04_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04, bool K2Node_DynamicCast_bSuccess11, class UCampaignMapPage_Plankerton_03_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03, bool K2Node_DynamicCast_bSuccess12, class UCampaignMapPage_Plankerton_02_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02, bool K2Node_DynamicCast_bSuccess13, class UCampaignMapPage_Plankerton_01_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01, bool K2Node_DynamicCast_bSuccess14, class UCampaignMapPage_Stonewood_10_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10, bool K2Node_DynamicCast_bSuccess15, class UCampaignMapPage_Stonewood_09_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09, bool K2Node_DynamicCast_bSuccess16, class UCampaignMapPage_Stonewood_08_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08, bool K2Node_DynamicCast_bSuccess17, class UCampaignMapPage_Stonewood_07_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07, bool K2Node_DynamicCast_bSuccess18, class UCampaignMapPage_Stonewood_06_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06, bool K2Node_DynamicCast_bSuccess19, class UCampaignMapPage_Stonewood_05_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05, bool K2Node_DynamicCast_bSuccess20, class UCampaignMapPage_Stonewood_04_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04, bool K2Node_DynamicCast_bSuccess21, class UCampaignMapPage_Stonewood_03_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03, bool K2Node_DynamicCast_bSuccess22, class UCampaignMapPage_Stonewood_02_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02, bool K2Node_DynamicCast_bSuccess23, class UCampaignMapPage_Stonewood_01_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01, bool K2Node_DynamicCast_bSuccess24, bool CallFunc_HasAnyChildren_ReturnValue)
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "CheckForMainQuest");

	Params::UProtoCampaignMapPage_C_CheckForMainQuest_Params Parms;
	Parms.QuestPageIndex = QuestPageIndex;
	Parms.QuestFound = QuestFound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Mini_Tile = K2Node_DynamicCast_AsQuest_Mini_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMainQuest_outCurentMainQuest = CallFunc_GetMainQuest_outCurentMainQuest;
	Parms.CallFunc_SetState_QuestFound = CallFunc_SetState_QuestFound;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01 = K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10;
	Parms.K2Node_DynamicCast_bSuccess15 = K2Node_DynamicCast_bSuccess15;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09;
	Parms.K2Node_DynamicCast_bSuccess16 = K2Node_DynamicCast_bSuccess16;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08;
	Parms.K2Node_DynamicCast_bSuccess17 = K2Node_DynamicCast_bSuccess17;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07;
	Parms.K2Node_DynamicCast_bSuccess18 = K2Node_DynamicCast_bSuccess18;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06;
	Parms.K2Node_DynamicCast_bSuccess19 = K2Node_DynamicCast_bSuccess19;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05;
	Parms.K2Node_DynamicCast_bSuccess20 = K2Node_DynamicCast_bSuccess20;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04;
	Parms.K2Node_DynamicCast_bSuccess21 = K2Node_DynamicCast_bSuccess21;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03;
	Parms.K2Node_DynamicCast_bSuccess22 = K2Node_DynamicCast_bSuccess22;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02;
	Parms.K2Node_DynamicCast_bSuccess23 = K2Node_DynamicCast_bSuccess23;
	Parms.K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01 = K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01;
	Parms.K2Node_DynamicCast_bSuccess24 = K2Node_DynamicCast_bSuccess24;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = Parms.TargetQuestFound;

	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = Parms.TargetQuestPageIndex;

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              OutCurentMainQuest                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetMainQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::GetMainQuest(class UFortQuestItem** OutCurentMainQuest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue)
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "GetMainQuest");

	Params::UProtoCampaignMapPage_C_GetMainQuest_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetMainQuest_ReturnValue = CallFunc_GetMainQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurentMainQuest != nullptr)
		*OutCurentMainQuest = Parms.OutCurentMainQuest;

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProtoCampaignMapPage_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "PreConstruct");

	Params::UProtoCampaignMapPage_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProtoCampaignMapPage_C::Construct()
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "Construct");

	Params::UProtoCampaignMapPage_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForMainQuest_TargetQuestFound                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckForMainQuest_TargetQuestPageIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::ExecuteUbergraph_ProtoCampaignMapPage(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_CheckForMainQuest_TargetQuestFound, int32 CallFunc_CheckForMainQuest_TargetQuestPageIndex)
{
	static auto Func = Class->GetFunction("ProtoCampaignMapPage_C", "ExecuteUbergraph_ProtoCampaignMapPage");

	Params::UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CheckForMainQuest_TargetQuestFound = CallFunc_CheckForMainQuest_TargetQuestFound;
	Parms.CallFunc_CheckForMainQuest_TargetQuestPageIndex = CallFunc_CheckForMainQuest_TargetQuestPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

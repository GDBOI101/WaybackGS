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


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         MemberInfo                                                       (Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnPartyDataChanged");

	Params::APartyCharacterPlacementHelper_C_OnPartyDataChanged_Params Parms;
	Parms.MemberInfo = MemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCompleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::CompletedQuestPrerequisites(bool* bCompleted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "CompletedQuestPrerequisites");

	Params::APartyCharacterPlacementHelper_C_CompletedQuestPrerequisites_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInLobby                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::IsInLobby(bool* IsInLobby, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "IsInLobby");

	Params::APartyCharacterPlacementHelper_C_IsInLobby_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInLobby != nullptr)
		*IsInLobby = Parms.IsInLobby;

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyMemberIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        ()
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnByIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::PlayLobbyAnimation(int32 PartyMemberIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "PlayLobbyAnimation");

	Params::APartyCharacterPlacementHelper_C_PlayLobbyAnimation_Params Parms;
	Parms.PartyMemberIndex = PartyMemberIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnByIndex_ReturnValue = CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface = K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyCharacterPlacementHelper_C::OnLobbyDisconnected()
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyDisconnected");

	Params::APartyCharacterPlacementHelper_C_OnLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Edit)
// bool                               Has_Player                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_IsInLobby                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompletedQuestPrerequisites_bCompleted                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_IsInLobby2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPartyMaxSize_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStoreState         CallFunc_GetStoreState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          ()
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         CallFunc_GetFrontEndCamera_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::RefreshWidgets(const struct FFortTeamMemberInfo& TeamMemberInfo, bool Has_Player, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_IsInLobby, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_CompletedQuestPrerequisites_bCompleted, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInLobby_IsInLobby2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetCurrentPartyMaxSize_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue5)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "RefreshWidgets");

	Params::APartyCharacterPlacementHelper_C_RefreshWidgets_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.Has_Player = Has_Player;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInLobby_IsInLobby = CallFunc_IsInLobby_IsInLobby;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_CompletedQuestPrerequisites_bCompleted = CallFunc_CompletedQuestPrerequisites_bCompleted;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInLobby_IsInLobby2 = CallFunc_IsInLobby_IsInLobby2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetCurrentPartyMaxSize_ReturnValue = CallFunc_GetCurrentPartyMaxSize_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetStoreState_ReturnValue = CallFunc_GetStoreState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetFrontEndCamera_ReturnValue = CallFunc_GetFrontEndCamera_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobbyPlayerAddPlayer_C*     K2Node_DynamicCast_AsLobby_Player_Add_Player                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULobbyPlayerPadGadgets_C*    K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobbyPlayerPadTop_C*        K2Node_DynamicCast_AsLobby_Player_Pad_Top                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::InitializeWidgets(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue2, class ULobbyPlayerAddPlayer_C* K2Node_DynamicCast_AsLobby_Player_Add_Player, bool K2Node_DynamicCast_bSuccess, class ULobbyPlayerPadGadgets_C* K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets, bool K2Node_DynamicCast_bSuccess2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue3, class ULobbyPlayerPadTop_C* K2Node_DynamicCast_AsLobby_Player_Pad_Top, bool K2Node_DynamicCast_bSuccess3)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializeWidgets");

	Params::APartyCharacterPlacementHelper_C_InitializeWidgets_Params Parms;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue2 = CallFunc_GetUserWidgetObject_ReturnValue2;
	Parms.K2Node_DynamicCast_AsLobby_Player_Add_Player = K2Node_DynamicCast_AsLobby_Player_Add_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets = K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue3 = CallFunc_GetUserWidgetObject_ReturnValue3;
	Parms.K2Node_DynamicCast_AsLobby_Player_Pad_Top = K2Node_DynamicCast_AsLobby_Player_Pad_Top;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerUnhovered");

	Params::APartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberStateChanged");

	Params::APartyCharacterPlacementHelper_C_OnTeamMemberStateChanged_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamMemberRemovedInt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnTeamMemberRemoved(int32 TeamMemberRemovedInt, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberRemoved");

	Params::APartyCharacterPlacementHelper_C_OnTeamMemberRemoved_Params Parms;
	Parms.TeamMemberRemovedInt = TeamMemberRemovedInt;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberAdded");

	Params::APartyCharacterPlacementHelper_C_OnTeamMemberAdded_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         OldCamera                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnByIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnFrontEndCameraChanged");

	Params::APartyCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params Parms;
	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnByIndex_ReturnValue = CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnLobbyStarted(bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyStarted");

	Params::APartyCharacterPlacementHelper_C_OnLobbyStarted_Params Parms;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue = CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyCharacterPlacementHelper_C::InitializePadUI()
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializePadUI");

	Params::APartyCharacterPlacementHelper_C_InitializePadUI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyCharacterPlacementHelper_C::Initialize()
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "Initialize");

	Params::APartyCharacterPlacementHelper_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortPartyContext* CallFunc_GetContext_ReturnValue9)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializeContextEvents");

	Params::APartyCharacterPlacementHelper_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnselected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerUnselected");

	Params::APartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerSelected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerSelected");

	Params::APartyCharacterPlacementHelper_C_OnLobbyPlayerSelected_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerHovered");

	Params::APartyCharacterPlacementHelper_C_OnLobbyPlayerHovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "UserConstructionScript");

	Params::APartyCharacterPlacementHelper_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APartyCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "ReceiveBeginPlay");

	Params::APartyCharacterPlacementHelper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "HandleClientEvent_StoreTabClosed");

	Params::APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "HandleClientEvent_StoreTabSelected");

	Params::APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent2                            (ConstParm, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)

void APartyCharacterPlacementHelper_C::ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent)
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "ExecuteUbergraph_PartyCharacterPlacementHelper");

	Params::APartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_HandleClientEvent_EventSource2 = K2Node_HandleClientEvent_EventSource2;
	Parms.K2Node_HandleClientEvent_EventFocus2 = K2Node_HandleClientEvent_EventFocus2;
	Parms.K2Node_HandleClientEvent_ClientEvent2 = K2Node_HandleClientEvent_ClientEvent2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyCharacterPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	Params::APartyCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

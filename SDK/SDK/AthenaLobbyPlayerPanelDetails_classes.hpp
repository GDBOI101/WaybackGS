#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x3E8 - 0x238)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C
class UAthenaLobbyPlayerPanelDetails_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextInviteSent;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x258(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyPlayerPanelDetails_C");
		return Clss;
	}

	void RefreshBanner();
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void OnPartyInvitesCountChanged(int32 InvitesCount);
	void Initialize();
	void IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_HasPendingPartyInvitation_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForPlayer_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool K2Node_Select_Default, bool Temp_bool_Variable8, bool K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue2, const struct FUniqueNetIdRepl& K2Node_Select3_Default);
	void RefreshPendingInvite(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsInvitationPending_bIsInvitationPending, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshPlayerName();
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

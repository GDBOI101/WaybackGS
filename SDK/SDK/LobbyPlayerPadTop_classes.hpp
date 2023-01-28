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

// 0x1DD (0x415 - 0x238)
// WidgetBlueprintGeneratedClass LobbyPlayerPadTop.LobbyPlayerPadTop_C
class ULobbyPlayerPadTop_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                LeaderImage;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner_92;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PowerBox;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ReadyStatusBox;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ReadyUpStatusText;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextHomeBasePower;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x280(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PlayerIndex;                                       // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyPlayerPadTop_C");
		return Clss;
	}

	void RefreshReadyState(bool Ready, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable2, class UClass* K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText K2Node_Select2_Default);
	void OnAthenaReadyStateChanged(struct FUniqueNetIdRepl& Member_Id, bool Ready, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Initialize(int32 PlayerIndex);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue3);
	void OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void Refresh(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_IsAthenaPartyMemberReady_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default);
	void RefreshPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshHomeBasePower(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLobbyStarted();
	void OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady);
	void OnLobbyDisconnected();
	void ExecuteUbergraph_LobbyPlayerPadTop(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const class FString& Temp_string_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, const class FString& Temp_string_Variable4, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, bool K2Node_CustomEvent_bIsReady, bool CallFunc_AreUniqueIDsIdentical_ReturnValue, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

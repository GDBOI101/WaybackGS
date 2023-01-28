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

// 0x402 (0x63A - 0x238)
// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
class UFullPartyMemberAthena_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          CONNECTED;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Connecting;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_233;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageEmpty;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KillsText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LeaderImageOverlay;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MemberStateSwitcher;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper_0;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Open;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Speaker;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x2B0(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             Dimensions;                                        // 0x440(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  DeclineAction;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalPlayerActionsTitle;                           // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bLocalPlayerAlone;                                 // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_LocalPlayerProfileModal_C*         NewLocalPlayerWidget;                              // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Modified_Power;                                    // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamMemberIndex;                                   // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MutedBrush;                                        // 0x488(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           NotTalkingBrush;                                   // 0x518(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           TalkingBrush;                                      // 0x5A8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsTalking;                                        // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMuted;                                          // 0x639(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FullPartyMemberAthena_C");
		return Clss;
	}

	void HandleAthenaTeamMemberKillsChanged(TArray<int32>& Kills, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue2);
	void UpdateMicIndicator();
	void HighlightEmptyBanner(bool BannerIsHighlighted, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* K2Node_Select_Default);
	void SetTeamMemberIndex(int32 Index);
	void HandleAthenaTeamMemberTalkingChanged(TArray<bool>& Talking, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Get_Item);
	void HandleAthenaTeamMemberMuteChanged(TArray<bool>& Mutes, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Get_Item);
	void HandleAthenaTeamMemberChanged(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget);
	void MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions, const TArray<struct FConfirmationDialogAction>& ConfirmActions, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2);
	void HandleLocalPlayerActionsResult(enum class EFortDialogResult Result, class FName ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2);
	void UpdateLocalPlayerAction(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	class UFullPartyMemberConnected_C* DuplicateConnectedWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue);
	void UpdateDimensions(const struct FVector2D& NewDimensions);
	void ShowConnected(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ShowConnecting();
	void ShowOpen();
	void UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnClicked();
	void Destruct();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<bool>& CallFunc_GetTeamMuted_MutedStates, TArray<int32>& CallFunc_GetTeamKills_Kills, TArray<bool>& CallFunc_GetTeamTalking_TalkingStates, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewInfo, const class FString& CallFunc_GetPlatformName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_StartsWith_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

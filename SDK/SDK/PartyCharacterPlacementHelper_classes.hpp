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

// 0x100 (0x488 - 0x388)
// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
class APartyCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UWidgetComponent*                      LobbyPlayerAddPlayer;                              // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerPadTop;                                 // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LobbyPlayerPadGadgets;                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  UnderlightBluePoint02;                             // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  UnderlightBluePoint01;                             // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   UnderlightBlue02;                                  // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   UnderlightBlue01;                                  // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimSpotLight;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   TopSpotLight;                                      // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LightsParent;                                      // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Sparkle;                               // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl02;                               // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl01;                               // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lobby_Character_Pad_Light_Ring;                 // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lobby_Character_Pad;                            // 0x400(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CharacterPlacement;                                // 0x408(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x410(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerID;                                          // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewMesh;                                       // 0x41C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayerSelected;                                 // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayerOnPad;                                       // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D70[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Pad;                                           // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugFakePlayer;                                   // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebugFakePlayerID_;                                // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  NewEventDispatcher_0;                              // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PlayerBeingRemoved;                                // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayEmptySpot;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadTop_C*                  Top;                                               // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadGadgets_C*              Gadgets;                                           // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerAddPlayer_C*               PlayerAdd;                                         // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LastAnimatedPlayerPawn;                            // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyCharacterPlacementHelper_C");
		return Clss;
	}

	void OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo);
	void CompletedQuestPrerequisites(bool* bCompleted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsInLobby(bool* IsInLobby, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void PlayLobbyAnimation(int32 PartyMemberIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnLobbyDisconnected();
	void RefreshWidgets(const struct FFortTeamMemberInfo& TeamMemberInfo, bool Has_Player, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_IsInLobby, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_CompletedQuestPrerequisites_bCompleted, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInLobby_IsInLobby2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetCurrentPartyMaxSize_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select4_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue5);
	void InitializeWidgets(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue2, class ULobbyPlayerAddPlayer_C* K2Node_DynamicCast_AsLobby_Player_Add_Player, bool K2Node_DynamicCast_bSuccess, class ULobbyPlayerPadGadgets_C* K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets, bool K2Node_DynamicCast_bSuccess2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue3, class ULobbyPlayerPadTop_C* K2Node_DynamicCast_AsLobby_Player_Pad_Top, bool K2Node_DynamicCast_bSuccess3);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberRemoved(int32 TeamMemberRemovedInt, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnLobbyStarted(bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void InitializePadUI();
	void Initialize();
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortPartyContext* CallFunc_GetContext_ReturnValue9);
	void OnLobbyPlayerUnselected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerSelected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void ReceiveBeginPlay();
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

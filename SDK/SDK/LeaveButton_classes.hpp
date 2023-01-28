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

// 0x60 (0x298 - 0x238)
// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
class ULeaveButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     Leave;                                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnClicked;                                         // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Update_Visibility;                                 // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                ButtonStyleOverride;                               // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ControllerStyleOverride;                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtoneStyleOverride;                           // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OverrideButtonText;                                // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2EFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonTextOverride;                                // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaveButton_C");
		return Clss;
	}

	void IsInNeighborhood(bool* bIsInNeighborhood, class AFortDeployableBaseManager* DeployableBaseManager, enum class EDeployableBaseUseType CallFunc_GetDeployableBaseUseType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue);
	void Update_Style_State();
	void SetText(class FText TextOverride);
	void GetButton(class UIconTextButton_C** Leave);
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue);
	void LeaveParty(class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void UpdateState(class FText CallFunc_GetLeaveActionText_Text, bool CallFunc_IsConsideredInGame_InGame, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsConsideredInGame(bool* InGame, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetLeaveActionText(class FText* Text, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInOutpostZone_ReturnValue, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText Temp_text_Variable5, class FText K2Node_Select_Default, bool CallFunc_IsConsideredInGame_InGame, bool Temp_bool_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select2_Default, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class FText K2Node_Select3_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void DialogResult_1E39F47546648367BB2F218F69311220(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(enum class EFortDialogResult Result, class FName ResultName);
	void HandleTeamMemberRemoved(int32 PlayerIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleLobbyEvents();
	void Construct();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LeaveButton(int32 EntryPoint, bool Temp_bool_Variable, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName3, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, bool Temp_bool_Variable3, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FText K2Node_Select_Default, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class FName Temp_name_Variable4, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable4, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, class FText Temp_text_Variable3, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, class FText Temp_text_Variable4, class FText Temp_text_Variable5, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress2, bool Temp_bool_Variable4, class UFortOutpostContext* CallFunc_GetContext_ReturnValue8, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_IsInOutpostZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue10, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class FText Temp_text_Variable7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable8, bool Temp_bool_Variable5, bool Temp_bool_Variable6, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool Temp_bool_Variable7, bool CallFunc_IsConsideredInGame_InGame2, bool CallFunc_IsInNeighborhood_bIsInNeighborhood, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class FText Temp_text_Variable9, bool CallFunc_IsInOutpostZone_ReturnValue2, class FText Temp_text_Variable10, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, class FText K2Node_Select7_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4);
	void Update_Visibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

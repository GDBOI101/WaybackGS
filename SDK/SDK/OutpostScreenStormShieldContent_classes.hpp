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

// 0x169 (0x549 - 0x3E0)
// WidgetBlueprintGeneratedClass OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C
class UOutpostScreenStormShieldContent_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonHelp;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpandShieldText;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxRequestHelp;                                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_11;                                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_12;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaveButton_C*                        LeaveButton;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OutpostShieldContent;                              // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_2;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_3;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_4;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_5;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_6;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_7;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_8;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_9;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_10;                                     // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_1a;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerLevel_1b;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextReady;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Upgrade_Button;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  WoodResource;                                      // 0x488(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortOutpostBuilding*                  OutpostCoreBuilding;                               // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgradeable;                                       // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Amplifier;                                         // 0x4A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AdvanceCampaignText;                               // 0x4B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ShieldExpandingText;                               // 0x4C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  MaxLevelText;                                      // 0x4E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  InstallShieldText;                                 // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GetHelp;                                           // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CloseOutpostScreen;                                // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOutpostScreenStormShield_C*           ParentReference;                                   // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldUpdateButtons_;                              // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OutpostIsDefined;                                  // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ReadyToExpand_;                                    // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OutpostScreenStormShieldContent_C");
		return Clss;
	}

	void EnablePowerBarChunk(class UImage* InImage, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void CenterActiveButton(bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool CallFunc_GetIsEnabled_ReturnValue3);
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void SetButtonState(bool Enabled_);
	class UWidget* Get_GetHelpButton_ToolTipWidget_0(class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void UpdateGetHelpButton(class AFortPlayerControllerOutpost* OutpostControllerReference, bool CallFunc_IsOutpostOwner_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EPartyType CallFunc_GetPartyPrivacySetting_OutPartyType, bool CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly, bool CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly, bool CallFunc_GetPartyPrivacySetting_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess2);
	void SetExpandShieldText(class FText NewExpandText, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue);
	void Update_ExpandShieldText(class UFortOutpostContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetOutpostCoreLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UOutpostScreenStormShield_C* Parent_Widget);
	void Update_LeaveOutpost_ButtonEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_CanLeaveOutpost_AllowedToLeave, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* Get_LeaveOutpost_Button_ToolTipWidget(class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	bool IsOwningPlayerOutpostOwner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue);
	void Update_Upgrade_ButtonEnabled(bool CallFunc_IsOwningPlayerOutpostOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetOutpostReadyState_ReadyToExpand, bool CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier);
	void IsPlayerAlone(bool* IsAlone, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ResrouceProgress_Wood(int32 NewParam, int32 NewParam1);
	float GetPercent_2(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	float GetPercent_1(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	float GetPercent_0(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	void Construct();
	void UpdateEnabledStates();
	void BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OutpostIsDefined_Event();
	void BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void ExecuteUbergraph_OutpostScreenStormShieldContent(int32 EntryPoint, class UFortOutpostContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetOutpostCoreLevel_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOwningPlayerOutpostOwner_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_GetOutpostReadyState_ReadyToExpand, bool CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText CallFunc_GetEmptyText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost3, bool K2Node_DynamicCast_bSuccess4);
	void OutpostIsDefined__DelegateSignature();
	void CloseOutpostScreen__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

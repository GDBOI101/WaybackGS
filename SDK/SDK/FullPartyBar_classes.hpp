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

// 0x2A0 (0x4D8 - 0x238)
// WidgetBlueprintGeneratedClass FullPartyBar.FullPartyBar_C
class UFullPartyBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Fortitude;                                         // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FortitudeImage;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FortitudeText;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        LocalPlayer;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFullPartyMember_C*                    LocalPlayer_FPM;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Offense;                                           // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OffenseImage;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OffenseText;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        RemotePlayer1;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFullPartyMember_C*                    RemotePlayer1_FPM;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        RemotePlayer2;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFullPartyMember_C*                    RemotePlayer2_FPM;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        RemotePlayer3;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFullPartyMember_C*                    RemotePlayer3_FPM;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Resistance;                                        // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ResistanceImage;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ResistanceText;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Tech;                                              // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TechImage;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TechText;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUITeamInfo*                       LocalTeam;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   EmptyPartyMember;                                  // 0x2E8(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FConfirmationDialogAction>     PrivacyConfirmOptions;                             // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  DeclineAction;                                     // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Public;                                            // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Friends;                                           // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Private;                                           // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                        PartyFinder;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrivacyWidget_C*                      PrivacyWidget;                                     // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnButtonHovered;                                   // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFriendCode>                   FriendCodes;                                       // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FullPartyBar_C");
		return Clss;
	}

	bool GetTooltipStat(const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue);
	void InitializeStatLabels(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute2, bool CallFunc_GetTooltipStat_ReturnValue2, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute3, bool CallFunc_GetTooltipStat_ReturnValue3, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute4, bool CallFunc_GetTooltipStat_ReturnValue4);
	class UWidget* Get_Tech_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	class UWidget* Get_Resistance_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	class UWidget* Get_Offense_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	class UWidget* Get_Fortitude_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	void GetTotalNumFriendCodes(int32* Num_Codes, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool IsTeammateSlotPopulated(int32 InSlotNUmber, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue);
	void OpenPartyPrivacy(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortUIFeatureState Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default);
	void Initialize(class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void Construct();
	void BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_FullPartyBar(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button11, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetEmptyText_ReturnValue, bool Temp_bool_Variable4, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_isTeammateSlotPopulated_ReturnValue, bool CallFunc_isTeammateSlotPopulated_ReturnValue2, bool CallFunc_isTeammateSlotPopulated_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText K2Node_Select2_Default, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2);
	void OnButtonHovered__DelegateSignature(class FText HelpText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

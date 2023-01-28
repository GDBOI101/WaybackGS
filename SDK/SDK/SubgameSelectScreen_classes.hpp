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

// 0x110 (0x4F0 - 0x3E0)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Pan_P1P2;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1;                                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P2;                                            // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ContractSeperator;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToggleCycle;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ExpandSeperator;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      DescriptionIntro;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchMaterial;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     AthenaBtn;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BGImage;                                           // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonBack;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonExit;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchase;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRedeem;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CampaignBtn;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FullDescription;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PVEDescriptionBorder;                              // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionText;                                // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PVPDescriptionBorder;                              // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionText;                                // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherMenu;                                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      TitleImage;                                        // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x4D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        PveRotatorIndex;                                   // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubGameSelectRotatorItems>    Items;                                             // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectScreen_C");
		return Clss;
	}

	void ShowUpsell(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeShortDescriptions(class FText ShortDescription, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue2, class FText CallFunc_GetShortDescription_ShortDescription2, bool CallFunc_GetShortDescription_ReturnValue2);
	bool IsBusyMatchmakingOrPartyTransitioning(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsLocalPlayerInParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Update();
	void AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SafeSetSubGame(enum class ESubGame SubGame, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue);
	void SetDescriptionForSubGame(enum class ESubGame SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription2, bool CallFunc_GetFullDescription_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESubGame Temp_byte_Variable, class FText K2Node_Select_Default);
	void OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF();
	void OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF();
	void DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Try_And_Remove_The_Dialog();
	void Clear_Party_and_Matchmaking_Delegates();
	void CustomEvent_0(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState);
	void CustomEvent_1();
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void CustomEvent_2();
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess);
	void Destruct();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortAsyncAction_ShowPlatformRedeemCode* CallFunc_ShowPlatformRedeemCode_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum2_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_CanPlay_DenialReason2, bool CallFunc_CanPlay_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, enum class EMatchmakingState K2Node_CustomEvent_OldState, enum class EMatchmakingState K2Node_CustomEvent_NewState, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortPartyContext* CallFunc_GetContext_ReturnValue8, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UStoreMain_Root_C* CallFunc_Create_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue9, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class FText Temp_text_Variable2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_bSuccess, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, TArray<class FString>& K2Node_MakeArray_Array, class UCommonUIContext* CallFunc_GetContext_ReturnValue10, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, float Temp_float_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, float K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class FText CallFunc_GetPlatformDisplayName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

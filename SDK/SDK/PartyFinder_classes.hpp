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

// 0x128 (0x530 - 0x408)
// WidgetBlueprintGeneratedClass PartyFinder.PartyFinder_C
class UPartyFinder_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_3819[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IgnoreButton;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InviteButton;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       InviteIgnoreSwitcher;                              // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     JoinButton;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyInfo_C*                          PartyInfo;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       SocialTreeView;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ViewProfileButton;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*               ViewProfileVisibility;                             // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           LeaveConfirmationIcon;                             // 0x470(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LeaveConfirmationTitle;                            // 0x500(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LeaveConfirmationDescription;                      // 0x518(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinder_C");
		return Clss;
	}

	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void UpdateDetailsEmpty(enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem);
	void HandleFriendPresenceUpdated(struct FUniqueNetIdRepl& FriendId, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	TArray<class UObject*> SocialTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortSocialItem*>& SocialItems, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortSocialItem*>& CallFunc_GetPartyInvites_OutPartyInvites);
	void IgnoreInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SendInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class ESlateVisibility GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateDetails(class UFortSocialItem* PartyFinderItem, enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem, enum class EFortSocialItemType Temp_byte_Variable, class UWidget* Temp_object_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortSocialItemType Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue2, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, class UWidget* K2Node_Select_Default, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason, bool CallFunc_CanBeInvited_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default);
	void HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems, bool bExpandAll, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSocialItem* CallFunc_Array_Get_Item, class UFortSocialItem* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandlePartyTransitionStarted(enum class EFortPartyTransition Transition, bool K2Node_SwitchEnum_CmpSuccess);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_9763B6F5495998E5B2E944A5F646709C(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePartyDataChanged(struct FPartyState& PartyData);
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnSocialListChanged(TArray<class UFortSocialItem*>& SocialItems);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Destruct();
	void EnableInviteButton();
	void ExecuteUbergraph_PartyFinder(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, const struct FPartyState& K2Node_CustomEvent_PartyData, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item2, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_GetSelectedItem_ReturnValue2, class UObject* CallFunc_GetSelectedItem_ReturnValue3, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, TArray<class UFortSocialItem*>& K2Node_CustomEvent_SocialItems, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_GetSelectedItem_ReturnValue4, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item4, bool K2Node_DynamicCast_bSuccess4, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

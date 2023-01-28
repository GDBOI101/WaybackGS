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

// 0x70 (0x2A8 - 0x238)
// WidgetBlueprintGeneratedClass BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C
class UBP_LocalPlayerProfileManagement_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseProfileButton;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       HomebaseBanner;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HomebaseName;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                  HomeBaseRating;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LeavePartyButton;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenBannerEditorButton;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ViewProfileButton;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OpenBannerEditor;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  CloseProfileModal;                                 // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_LocalPlayerProfileManagement_C");
		return Clss;
	}

	void Update_Bang_State(bool bItemUnseen, const TArray<class UFortAccountItem*>& LocalAccountItems, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, bool CallFunc_Less_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items2);
	void UpdateBannerEditorButton(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	enum class ESlateVisibility Get_LeavePartyButton_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_ViewProfileButton_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateBannerIconAndColor(class FName InBannerIconId, class FName InBannerColorId, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2);
	void OnWidgetDeactivated();
	void OnWidgetActivated(enum class ESlateVisibility Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_BP_LocalPlayerProfileManagement(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue);
	void CloseProfileModal__DelegateSignature();
	void OpenBannerEditor__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

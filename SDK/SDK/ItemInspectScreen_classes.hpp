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

// 0xD0 (0x4C0 - 0x3F0)
// WidgetBlueprintGeneratedClass ItemInspectScreen.ItemInspectScreen_C
class UItemInspectScreen_C : public UFortItemInspectionScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              CycleItem;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  ExtraDetailsPanelTabList;                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExtraDetailsTabContentSwitcher;                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IconTextButton_0;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ItemActionSwitcher;                                // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*    ItemAlterationsListDetailWidget;                   // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*        ItemDescriptionDetailWidget;                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionConfirmation_C*   ItemInspectEvolutionConfirmation;                  // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeCallout_C*          ItemInspectUpgradeCallout;                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeConfirmation_C*     ItemInspectUpgradeConfirmation;                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemPerksListDetailWidget_C*          ItemPerksListDetailWidget;                         // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* MainDetailsPanel;                                  // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksAndAlterationsBox;                            // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportHeroSquadBonusesDetailWidget_C* SupportHeroSquadBonusesDetailWidget;               // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*         SurvivorTraitsDetailWidget;                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionItemExtraDetailsHostPanel_C* TabbedExtraDetailsPanel;                           // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PreviewLabel;                                 // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             InspectedItem;                                     // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedEvolutionIndex;                            // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             SelectedEvolutionItem;                             // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpgradeAllowed;                                    // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EvolveAllowed;                                     // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FavoriteAllowed;                                   // 0x4B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30ED[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemView_C*                           ItemView;                                          // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectScreen_C");
		return Clss;
	}

	void PassThrough(bool* PassThrough);
	void SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode);
	void SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshCallout(bool CallFunc_BooleanAND_ReturnValue);
	void RefreshActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable5, enum class EInputActionState Temp_byte_Variable6, bool Temp_bool_Variable3, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasEvolutions_ReturnValue, bool CallFunc_IsInZone_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EInputActionState K2Node_Select2_Default, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class EInputActionState K2Node_Select3_Default);
	void HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RefreshOnUpgrade();
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OpenItemInspect__Function_(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavoriting, bool ShouldShowPreviewDisplay);
	void ResetDetailsPanel();
	void SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle8);
	void GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex);
	void HandleEvolutionChoiceUnhovered(class UFortItem* Item);
	void HandleEvolutionChoiceHovered(class UFortItem* Item);
	void SetInspectMode(enum class EFortItemInspectionMode NewInspectMode, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleUpgrade(bool* PassThrough);
	void HandleEvolution(bool* PassThrough);
	void HandleView(bool* PassThrough);
	void HandleFavorite(bool* PassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleBack(bool* PassThrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetItemToRepresent(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, TArray<class UFortAlterationItemDefinition*>& CallFunc_GetAlterations_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess2, class UFortHero* K2Node_DynamicCast_AsFort_Hero2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo3, bool CallFunc_RegisterFortTab_ReturnValue2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo4, bool CallFunc_RegisterFortTab_ReturnValue3, bool CallFunc_RegisterFortTab_ReturnValue4);
	void OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature();
	void BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature();
	void BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature();
	void Construct();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature();
	void OnActivated();
	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem);
	void Destruct();
	void OnDeactivated();
	void BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnInputModeChanged(bool bUsingGamepad);
	void ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_HandleBack_PassThrough, bool K2Node_ComponentBoundEvent_bItemChanged, bool K2Node_ComponentBoundEvent_bAmmoChanged, bool K2Node_ComponentBoundEvent_bIngredientsChanged, bool CallFunc_HandleBack_PassThrough2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortItem* K2Node_Event_ItemToInspect, enum class EFortItemInspectionMode K2Node_Event_Mode, bool K2Node_Event_ShouldAllowUpgrading, bool K2Node_Event_ShouldAllowEvolution, bool K2Node_Event_ShouldAllowFavorite, bool K2Node_Event_IsTemporaryItem, class UFortMcpContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleUpgrade_PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_HandleEvolution_PassThrough, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortMcpContext* CallFunc_GetContext_ReturnValue9, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_IsPanelOnStack_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue10, class UItemView_C* CallFunc_Create_ReturnValue, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_Event_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

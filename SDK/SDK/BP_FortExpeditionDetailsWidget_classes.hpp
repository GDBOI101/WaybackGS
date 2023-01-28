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

// 0xBC (0x334 - 0x278)
// WidgetBlueprintGeneratedClass BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C
class UBP_FortExpeditionDetailsWidget_C : public UFortExpeditionDetailsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          BonusSet;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*     BP_FortExpeditionExpiresWidget;                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionReturnsWidget_C*     BP_FortExpeditionReturnsWidget;                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionDescription;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionDuration;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionName;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExpeditionProgressSwitcher;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InfoAction;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RarityBorder;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RequirementSet;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardsSet;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                  SquadPowerRating;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SuccessChance;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SuccessProgressText;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                  TargetPowerRating;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxSlotBonuses;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VehicleImage;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UViewInfoButton_NoText_C*              ViewInfoButton_NoText;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ExpeditionBuildSquadWidgetClass;                   // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionOverviewWidget_C*    ParentWidget;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CancelInputActionName;                             // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInfoWindow_C*                         RewardInfoWindow;                                  // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle WaitingForDialogHandle;                            // 0x330(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionDetailsWidget_C");
		return Clss;
	}

	void Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, enum class EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor, const struct FLinearColor& RarityColor, const struct FSlateBrush& TagBrush, class FText DisplayName, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName, const struct FFortMultiSizeBrush& CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush, bool CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void Set_Bonus_Criteria(class UFortExpeditionItem* Item, TArray<struct FFortCriteriaRequirementData>& CallFunc_GetBonusCriteriaBP_OutBonusCriteria, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFortCriteriaRequirementData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, const struct FSlateBrush& CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M, class FText CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName, const struct FLinearColor& CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Expedition_Returns_Data(class UFortExpeditionItem* Item, class FName CallFunc_GetExpeditionSquadId_ReturnValue, bool CallFunc_IsExpeditionInProgress_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag, bool CallFunc_GetVehicleTagFromSquadId_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_CalculateTotalPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue);
	void Set_In_Progress_State(class UFortExpeditionItem* Self2, bool Temp_bool_Variable, bool CallFunc_IsExpeditionInProgress_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 K2Node_Select_Default);
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item);
	void Set_Requirements(class UFortExpeditionItemDefinition* ItemDef, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void Open_Build_Expedition_Squad(bool CallFunc_IsValidClass_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortExpeditionBuildSquadWidget* K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget, bool K2Node_DynamicCast_bSuccess);
	void Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Set_Rewards(class UFortExpeditionItemDefinition* Item_Def, int32 Temp_int_Array_Index_Variable, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Set_Expedition_Duration(class UFortExpeditionItemDefinition* Item_Def, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Description(class UFortItem* Item, class FText CallFunc_GetDescription_ReturnValue);
	void Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue);
	void Refresh_Item_Data(bool CallFunc_IsValid_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def);
	void DialogResult_11B7688B48FDD9A59A2D55A7B4F60124(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void SetData(class UFortExpeditionItem* InItem);
	void HandleOnExpeditionCompleted(class UFortExpeditionItem* Item);
	void BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void HandleAbandonExpedition();
	void OnAbandonExpeditionCompleted();
	void ExecuteUbergraph_BP_FortExpeditionDetailsWidget(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortExpeditionItem* K2Node_Event_InItem, class UFortExpeditionItem* K2Node_CustomEvent_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UInfoWindow_C* CallFunc_Create_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class FText CallFunc_GetText_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x58 (0x910 - 0x8B8)
// WidgetBlueprintGeneratedClass BP_FortExpeditionListItem.BP_FortExpeditionListItem_C
class UBP_FortExpeditionListItem_C : public UFortExpeditionListItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                  BasicRatingWidget;                                 // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*     BP_FortExpeditionExpiresWidget;                    // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionReturnsWidget_C*     BP_FortExpeditionReturnsWidget;                    // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionDuration;                                // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionName;                                    // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InProgressSwitcher;                                // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RewardsSet;                                        // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SuccessChance;                                     // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VechileImage;                                      // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionListItem_C");
		return Clss;
	}

	void Update_Bang_State(class UFortAccountItem* Item, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Success_Chance(class UFortExpeditionItem* Item, class FName SquadId, class FName CallFunc_GetExpeditionSquadId_ReturnValue, bool CallFunc_IsExpeditionInProgress_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateTotalPower_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue);
	void Set_Vehicle_Icon(class UFortExpeditionItem* Expedition, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue);
	void Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin);
	void Set_In_Progress_State(class UFortExpeditionItem* Item, bool Temp_bool_Variable, bool CallFunc_IsExpeditionInProgress_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 K2Node_Select_Default);
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item);
	void Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Set_Rewards(class UFortItem* Item, int32 Temp_int_Array_Index_Variable, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_SimpleItemWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue);
	void Setup_Base_Item_Data(class UFortExpeditionItem* Expedition, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnSelected();
	void OnItemChanged();
	void OnDeselected();
	void BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnHovered();
	void ExecuteUbergraph_BP_FortExpeditionListItem(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

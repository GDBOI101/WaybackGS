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

// 0x20 (0x8F0 - 0x8D0)
// WidgetBlueprintGeneratedClass ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C
class UItemTransformKeyPickerTileButton_C : public UFortTransformKeyPickerTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NullItemBorder;                                    // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RootWidgetSwitcher;                                // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformKeyPickerTileButton_C");
		return Clss;
	}

	void Get_Fort_PC(class AFortPlayerController** FortPC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	struct FGameplayTagContainer Get_Transform_Key_Catalysts(class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue);
	void Mark_Item_as_Seen(const struct FGameplayTagContainer& CatalystTags, class AFortPlayerController* CallFunc_Get_Fort_PC_FortPC, const struct FGameplayTagContainer& CallFunc_Get_Transform_Key_Catalysts_ReturnValue, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Is_Transform_Key_Consumable(bool* bConsumedOnConversion, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item, class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess);
	void Update_Bang_State(const struct FGameplayTagContainer& CatalystTags, class AFortPlayerController* CallFunc_Get_Fort_PC_FortPC, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_Get_Transform_Key_Catalysts_ReturnValue, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, bool CallFunc_HasBeenSeenLocally_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnSelected();
	void OnHovered();
	void ExecuteUbergraph_ItemTransformKeyPickerTileButton(int32 EntryPoint, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool Temp_bool_Variable, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

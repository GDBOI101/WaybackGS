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

// 0x4F (0x2AF - 0x260)
// WidgetBlueprintGeneratedClass AthenaEquippedItemWidget.AthenaEquippedItemWidget_C
class UAthenaEquippedItemWidget_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__AmmoIcon;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__ResourceIcon;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderDivider;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherContent;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextAmmoOutOverlay;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMagazineAmmoCount;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextResourceCount;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextTotalAmmoCount;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentQuickbar;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CursorModeEnabled;                                 // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InfiniteAmmo;                                      // 0x2AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InfiniteMagazine;                                  // 0x2AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEquippedItemWidget_C");
		return Clss;
	}

	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2);
	void UpdateResourceCount(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetCurrentResourceCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void UpdateCurrentAmmo(int32 LocalCount, int32 LocalRemaining, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue3, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue4, class FText CallFunc_GetCurrentAmmoText_CurrentAmmoText, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue6, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortWorldItemDefinition* CallFunc_GetCurrentAmmoItemDefinition_ReturnValue, class FText Temp_text_Variable, class UFortAmmoItemDefinition* K2Node_DynamicCast_AsFort_Ammo_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, class FText K2Node_Select_Default, float Temp_float_Variable2, bool Temp_bool_Variable2, float Temp_float_Variable3, float K2Node_Select2_Default, float Temp_float_Variable4, bool Temp_bool_Variable3, float K2Node_Select3_Default);
	void UpdateAmmoCapacity(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortWorldItemDefinition* CallFunc_GetCurrentAmmoItemDefinition_ReturnValue, class UFortAmmoItemDefinition* K2Node_DynamicCast_AsFort_Ammo_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void UpdateWidgetColor(bool HasAmmo, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Debuff_Color_Color, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select3_Default);
	void UpdateVisibility(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_ShouldDisplayAmmoCounter_ReturnValue);
	void FullUpdateResourceDisplay(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, int32 CallFunc_GetCurrentResourceCount_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void FullUpdateAmmoDisplay(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, int32 CallFunc_GetLocalRemainingAmmo_ReturnValue);
	void Construct();
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
	void OnWorldItemsChanged();
	void OnBuildingMaterialCycled();
	void ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 K2Node_CustomEvent_LocalCount, int32 K2Node_CustomEvent_LocalRemaining, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortHUDContext* CallFunc_GetContext_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xA4 (0x2E4 - 0x240)
// WidgetBlueprintGeneratedClass ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C
class UItemInspectUpgradeConfirmation_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CurrentLevelText;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemCountBG;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NextLevelText;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RestrictionBorder;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextHelpMessage;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     UpgradeConfirmButton;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCount_C*                          UpgradeCostItemCount;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              UpgradeHighlight;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UpgradeInfo;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UpgradeRestrictionText;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              UpgradeTextOverlay;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnUpgradeConfirm;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnUpgradeCancel;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        UpgradeCost;                                       // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectUpgradeConfirmation_C");
		return Clss;
	}

	void RefreshLevelInfo(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_GetLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2);
	void RefreshEnabledState(bool CallFunc_IsUpgradeAvailable_UpgradeAvailable, bool CallFunc_CanAffordUpgrade_CanAfford, TArray<enum class EItemUpgradeRestrictionReason>& CallFunc_CanBeUpgraded_OutRestrictionReasons, bool CallFunc_CanBeUpgraded_ReturnValue, enum class EItemUpgradeRestrictionReason CallFunc_Array_Get_Item, class FText CallFunc_GetUpgradeRestrictionReasonText_ReturnValue, bool CallFunc_IsUpgradeAvailable_UpgradeAvailable2, bool CallFunc_BooleanAND_ReturnValue);
	void CanAffordUpgrade(bool* CanAfford, class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void IsUpgradeAvailable(bool* UpgradeAvailable, TArray<enum class EItemUpgradeRestrictionReason>& CallFunc_CanBeUpgraded_OutRestrictionReasons, bool CallFunc_CanBeUpgraded_ReturnValue);
	void RefreshOnUpgrade(int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetUpgradeCost_ReturnValue);
	void OnShow(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetItemToRepresent(class UFortItem* Item);
	void Refresh(class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, int32 CallFunc_GetUpgradeCost_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemInspectUpgradeConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnUpgradeCancel__DelegateSignature();
	void OnUpgradeConfirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

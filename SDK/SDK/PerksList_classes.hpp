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

// 0x9F (0x34F - 0x2B0)
// WidgetBlueprintGeneratedClass PerksList.PerksList_C
class UPerksList_C : public UFortPerksWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderLockedL;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderLockedR;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderUnlockedL;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderUnlockedR;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksLockedL;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksLockedR;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PerksNoTiers;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksRightColumn;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksUnlockedL;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksUnlockedR;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerkTiers;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 PerkTierSwitcher;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFirstTier;                                        // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIncludeDescription;                               // 0x31A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortBrushSize                    IconSize;                                          // 0x31B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bGenerateTiers;                                    // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFirstPerkCompleteL;                               // 0x31D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3303[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PerkCount;                                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTwoColumns;                                       // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bSecondColumnStarted;                              // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFirstPerkCompleteR;                               // 0x326(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3304[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SecondColumnSplitCount;                            // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                               RowPadding;                                        // 0x32C(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FMargin                               Description_Padding;                               // 0x33C(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         bUseLargeFormatNameOnly;                           // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bShowActiveAbilitiesOnly;                          // 0x34D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bEnableMouseTooltips;                              // 0x34E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PerksList_C");
		return Clss;
	}

	void ResetVariables();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget);
	void OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget);
	void Construct();
	void OnHeroChanged();
	void OnStateChanged();
	void ExecuteUbergraph_PerksList(int32 EntryPoint, const struct FFortUIPerkTier& K2Node_Event_FortPerkTier, class UFortPerkTierWidget_NUI* K2Node_Event_PerkTierWidget, class UPerkTierWidgetNew_C* K2Node_DynamicCast_AsPerk_Tier_Widget_New, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FFortUIPerk& K2Node_Event_FortPerk, class UFortPerkWidget_NUI* K2Node_Event_PerkWidget, class UPerkWidgetNew_C* K2Node_DynamicCast_AsPerk_Widget_New, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsPerkUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, class UPerkDivider_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue3, bool CallFunc_HasAnyChildren_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select4_Default, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable5, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, enum class ESlateVisibility K2Node_Select5_Default, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, bool Temp_bool_Variable6, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4, enum class ESlateVisibility K2Node_Select6_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x50 (0x530 - 0x4E0)
// WidgetBlueprintGeneratedClass HeroSquadManagementScreen.HeroSquadManagementScreen_C
class UHeroSquadManagementScreen_C : public UFortHeroSquadManagementScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AniShowSlotInfo;                                   // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HidePicker;                                        // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AniHideSlotInfo;                                   // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowPicker;                                        // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderSlotInfo;                                    // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlotBody;                                      // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlotHeader;                                    // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputBackAction;                                   // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadManagementScreen_C");
		return Clss;
	}

	void HandlePickerHideAni();
	void HandleHideSlotInfoAni();
	void HandlePickerShowAni();
	void HandleShowSlotInfoAni();
	void UpdateSquadSlotInfoPanel(int32 SquadSlotIndex, int32 Temp_int_Variable, int32 Temp_int_Variable2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText K2Node_Select2_Default);
	void Update_Hero_Squad_Bonus_Highlight_State(class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus2, bool K2Node_DynamicCast_bSuccess2, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess3, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus3, bool K2Node_DynamicCast_bSuccess4, bool K2Node_SwitchInteger_CmpSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus4, bool K2Node_DynamicCast_bSuccess5, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus5, bool K2Node_DynamicCast_bSuccess6, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus6, bool K2Node_DynamicCast_bSuccess7);
	void Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State(class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkEmpty_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess2, class UWidget* CallFunc_GetChildAt_ReturnValue2, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsPerkEmpty_ReturnValue2, bool CallFunc_IsPerkUnlocked_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2);
	void HideSlotInfo();
	void ShowSlotInfo(class FText HeaderText, class FText BodyText, class FText LocalItemType, class FText LocalDisplayName, class FText LocalHeaderText);
	void HandleClosePicker(bool* bPassThrough, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility GetInZoneVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnActivated();
	void Construct();
	void SetDefaultScroll();
	void OnDeactivated();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void ExecuteUbergraph_HeroSquadManagementScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Not_PreBool_ReturnValue, class USquadSlotDetailsPanel_C* K2Node_DynamicCast_AsSquad_Slot_Details_Panel, bool K2Node_DynamicCast_bSuccess3, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, class UHeroSquadBonuses_C* K2Node_DynamicCast_AsHero_Squad_Bonuses, bool K2Node_DynamicCast_bSuccess4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget3, bool K2Node_DynamicCast_bSuccess5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

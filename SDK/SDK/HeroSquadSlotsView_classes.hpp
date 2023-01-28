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

// 0x20 (0x2E0 - 0x2C0)
// WidgetBlueprintGeneratedClass HeroSquadSlotsView.HeroSquadSlotsView_C
class UHeroSquadSlotsView_C : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class USquadSlotGroup_C*                     BonusSquadSlotGroup;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadSlotGroup_C*                     DefendersSquadSlotGroup;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadSlotGroup_C*                     PrimarySquadSlotGroup;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadSlotsView_C");
		return Clss;
	}

	void UndarkenAllSlots();
	void HighlightSlotByIndex(int32 Index, bool K2Node_SwitchInteger_CmpSuccess);
	void HandleSquadNavigation(class FName SquadId, int32 SlotIndex, int32 SquadSlotId, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UWidget*>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue2, bool Temp_bool_Variable2, TArray<class UWidget*>& K2Node_MakeArray_Array3, const struct FSlateBrush& K2Node_Select2_Default, bool Temp_bool_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class FText K2Node_Select3_Default, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, TArray<class UWidget*>& K2Node_MakeArray_Array5, class FText CallFunc_Format_ReturnValue2);
	void Construct();
	void ExecuteUbergraph_HeroSquadSlotsView(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

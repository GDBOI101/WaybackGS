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

// 0x49 (0x279 - 0x230)
// WidgetBlueprintGeneratedClass TooltipHeroBonuses.TooltipHeroBonuses_C
class UTooltipHeroBonuses_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBoxBonusContainer;                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextHeroBonuses;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxBonusContainer;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_HeroSquadBonusesOrientation;        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHero*                             Hero;                                              // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Comparison;                                        // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         PanelMode;                                         // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_24A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortUIPerk>                   PerkSet;                                           // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         UseVerticalDisplayFormat;                          // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TooltipHeroBonuses_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_TooltipHeroBonuses(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyPerkWidget_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, const struct FFortUIPerk& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Variable2, const struct FMargin& K2Node_MakeStruct_Margin, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, TArray<struct FFortUIPerk>& CallFunc_GetSupportBonusPerks_SupportBonusPerks, bool CallFunc_GetSupportBonusPerks_ReturnValue, class ULegacyPerkWidget_C* CallFunc_Create_ReturnValue2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool Temp_bool_Variable2, float Temp_float_Variable, int32 K2Node_Select_Default, float Temp_float_Variable2, float K2Node_Select2_Default, const struct FMargin& K2Node_MakeStruct_Margin2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

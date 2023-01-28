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

// 0x14A (0x41A - 0x2D0)
// WidgetBlueprintGeneratedClass PerkWidget.PerkWidget_C
class UPerkWidget_C : public UFortPerkWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(Transient, DuplicateTransient)
	class UBorder*                               BorderAbility;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderFrame;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderHighlightBorder;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderHightlightBackground;                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAbilityIcon;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHeroBonusIcon;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTier;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            NamedSlotTextOnlyContent;                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayAbilityPerk;                                // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBadge;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBasicPerk;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayImagePerk;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayLevel;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxHoldingBox;                                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Perkname;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_SquadBonusType;                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_TextInfo;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherBasicPerkOrAbilityPerk;              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherTextOrImage;                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherTierOrLevel;                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           DemoImage;                                         // 0x388(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bTextOnly;                                         // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowTextWithIcon;                                  // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PerkWidget_C");
		return Clss;
	}

	class UWidget* CreateToolTipWidget(TArray<class FText>& CallFunc_GetTooltipDescription_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output);
	void InitializeTextInfo(enum class EFortSupportBonusType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetTooltipTitle_ReturnValue);
	void HighlightBadge(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FLinearColor& CallFunc_GetHighlightColor_Color2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetPerkStat(struct FTooltipStat* TooltipStat, bool Temp_bool_Variable, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, bool CallFunc_IsTierPerk_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetTooltipTitle_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetTierText_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, class FText K2Node_Select_Default, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat);
	void ShowTierImage();
	void SetupBadge(enum class EFortSupportBonusType SupportPerkType, const struct FSlateBrush& CallFunc_GetTierAbilityBrush_SlateBrush, bool CallFunc_IsTierPerk_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void InitializeHeroBonusIcon(enum class EFortSupportBonusType SupportPerkType, enum class EFortSupportBonusType Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeTextOnlyPerk(const struct FTooltipStat& CallFunc_GetPerkStat_TooltipStat, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipStatWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ShouldFadePerk(bool* Result, bool CallFunc_IsPerkHighlighted_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	void GetHighlightColor(struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, bool CallFunc_IsPerkHighlighted_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void GetTierAbilityBrush(struct FSlateBrush* SlateBrush, enum class EFortItemTier Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, class UObject* Temp_object_Variable11, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void InitializeAbilityPerk(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsPerkHighlighted_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select2_Default, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam);
	void InitializeBasicPerk(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_PerkWidget(int32 EntryPoint, bool CallFunc_HasAbility_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_ShouldFadePerk_Result, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

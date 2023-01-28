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

// 0x1A9 (0x479 - 0x2D0)
// WidgetBlueprintGeneratedClass PerkWidgetNew.PerkWidgetNew_C
class UPerkWidgetNew_C : public UFortPerkWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(Transient, DuplicateTransient)
	class UBorder*                               BorderAbility;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderHighlightBorder;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderHightlightBackground;                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Divider;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EvolutionBorder;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAbilityIcon;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHeroBonusIcon;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockAbility;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTier;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InfoSwitcher;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LargeInfo;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelTextNew;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayAbilityPerk;                                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBadge;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBasicPerk;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayImagePerk;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayLevel;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SkillDescription;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SkillName;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SmallInfo;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherBasicPerkOrAbilityPerk;              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherTierOrLevel;                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           DemoImage;                                         // 0x3A0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIncludeName;                                      // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeDescription;                               // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3371[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            LevelText_0;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bUseLargeFormatName;                               // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3372[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Locked_Text_Style;                                 // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Locked_Description_Style;                          // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               ListPadding;                                       // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                Default_Description_Style;                         // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Default_Text_Style;                                // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableMouseTooltips;                              // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PerkWidgetNew_C");
		return Clss;
	}

	class UWidget* Get_OverlayAbilityPerk_ToolTipWidget(class FText CallFunc_GetTooltipTitle_ReturnValue, class FText CallFunc_GetCombinedTooltipDescription_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitializeSettings(bool bIncludeName, bool bIncludeDescription, enum class EFortBrushSize IconSize, bool bUseLargeFormatName, const struct FFortUIPerk& Perk, bool ShowMouseTooltips);
	void HighlightBadge(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FLinearColor& CallFunc_GetHighlightColor_Color2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetPerkStat(struct FTooltipStat* TooltipStat, bool Temp_bool_Variable, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, bool CallFunc_IsTierPerk_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetTooltipTitle_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetTierText_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, class FText K2Node_Select_Default, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat);
	void ShowTierImage();
	void SetupBadge(enum class EFortSupportBonusType SupportPerkType, const struct FSlateBrush& CallFunc_GetTierAbilityBrush_SlateBrush, bool CallFunc_IsTierPerk_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void InitializeHeroBonusIcon(enum class EFortSupportBonusType SupportPerkType, enum class EFortSupportBonusType Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeText(const class FString& DescriptionText, class FText CallFunc_GetCombinedTooltipDescription_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTooltipTitle_ReturnValue);
	void ShouldFadePerk(bool* Result, bool CallFunc_IsPerkHighlighted_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	void GetHighlightColor(struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, bool CallFunc_IsPerkHighlighted_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void GetTierAbilityBrush(struct FSlateBrush* SlateBrush, enum class EFortItemTier Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, class UObject* Temp_object_Variable11, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void InitializeAbilityPerk(bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default);
	void InitializeBasicPerk(const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_PerkWidgetNew(int32 EntryPoint, bool CallFunc_IsPerkHighlighted_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_ShouldFadePerk_Result, const struct FLinearColor& Temp_struct_Variable, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_HasAbility_ReturnValue, const struct FLinearColor& Temp_struct_Variable2, bool Temp_bool_Variable5, const struct FLinearColor& K2Node_Select3_Default, class UClass* K2Node_Select4_Default, class UClass* K2Node_Select5_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

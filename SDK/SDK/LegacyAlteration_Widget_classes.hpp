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

// 0x69 (0x2C1 - 0x258)
// WidgetBlueprintGeneratedClass LegacyAlteration_Widget.LegacyAlteration_Widget_C
class ULegacyAlteration_Widget_C : public UFortAlterationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UBorder*                               BorderBadge;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderBadge_Alt;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderFrame;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxCompactContent;                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAlteration;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAlteration_Alt;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText_Alt;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxFullContent;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AlterationInfo;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AlterationName;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherContent;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bTextOnly;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyAlteration_Widget_C");
		return Clss;
	}

	void InitSmallAlteration(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam, class FText CallFunc_GetSingleLineDescription_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void InitFullAlteration(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_GetHighlightColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateColor& K2Node_Select_Default, TArray<class FText>& CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	bool ShouldFadeAlteration(bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	struct FLinearColor GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_LegacyAlteration_Widget(int32 EntryPoint, bool CallFunc_ShouldFadeAlteration_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

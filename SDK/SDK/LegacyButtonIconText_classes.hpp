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

// 0x108 (0x970 - 0x868)
// WidgetBlueprintGeneratedClass LegacyButtonIconText.LegacyButtonIconText_C
class ULegacyButtonIconText_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x868(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Outro;                                        // 0x870(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x878(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHBox;                                       // 0x880(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x888(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              IconOverlay;                                       // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shadow;                                            // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayText;                                       // 0x8B0(0x18)(Edit, BlueprintVisible, Config, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x8C8(0x90)(Edit, BlueprintVisible, Config, ExposeOnSpawn)
	bool                                         HasIcon;                                           // 0x958(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasText;                                           // 0x959(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ETextJustify                      Content_Align;                                     // 0x95A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  On_Mouse_Hovered_Changed;                          // 0x960(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyButtonIconText_C");
		return Clss;
	}

	void Outro();
	void Intro();
	void Toggle(bool Show_Button, class UWidgetAnimation* NextAnimation, class UWidgetAnimation* PrevAnimation, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select2_Default);
	void Set_Alignment(enum class ETextJustify Align, enum class ETextJustify Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable2, enum class EHorizontalAlignment Temp_byte_Variable3, enum class EHorizontalAlignment Temp_byte_Variable4, enum class EHorizontalAlignment K2Node_Select_Default, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess2);
	void Update_Size_Box(class UFortButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	struct FSlateColor Get_Primary_Color(const struct FFortStateStyle& CallFunc_GetCurrentStateStyle_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	struct FLinearColor Get_Secondary_Color(const struct FFortStateStyle& CallFunc_GetCurrentStateStyle_ReturnValue);
	void Update_Padding(const struct FMargin& Margin, bool Temp_bool_Variable, float Temp_float_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot2, bool K2Node_DynamicCast_bSuccess3, const struct FMargin& K2Node_MakeStruct_Margin3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortButtonStyle* CallFunc_GetStyle_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin4, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue);
	void Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Text(class FText InText, bool RefreshPadding, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FSlateFontInfo& CallFunc_GetCurrentFont_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_LegacyButtonIconText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xCE0 (0xFF8 - 0x318)
// WidgetBlueprintGeneratedClass Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C
class UTooltip_DisplayAttribute_C : public UFortAttributeListItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Blink;                                             // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderBasicPairedValue;                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderBasicSingleValue;                            // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonHover;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHorizontalRuler;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePairedBuffArrow;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSingleBuffArrow;                              // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Paired;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Single;                                            // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SwitcherDisplayType;                               // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBasicPairedLabel;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBasicPairedValue;                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBasicSingleValue;                              // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyBasicGradientFill_C*            WidgetGradient;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 TooltipData;                                       // 0x390(0x70)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EFortStatValueDisplayType         Display_Type;                                      // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Buff_State;                                        // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Comparison_Type;                                   // 0x402(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1869[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Blank;                                             // 0x404(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Base_Color;                                        // 0x414(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Buff_Color;                                        // 0x424(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_White;                                     // 0x434(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_186A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x448(0xBB0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tooltip-DisplayAttribute_C");
		return Clss;
	}

	class UWidget* GetToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void UpdateValueText(const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute);
	void Update_Base___Buff_Colors(const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff);
	void Update(enum class EFortComparisonType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class EFortBuffState Temp_byte_Variable6, bool Temp_bool_Variable, enum class EFortComparisonType Temp_byte_Variable7, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, enum class EFortBuffState Temp_byte_Variable8, enum class EFortStatValueDisplayType Temp_byte_Variable9, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, float Temp_float_Variable5, float Temp_float_Variable6, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, float Temp_float_Variable7, float Temp_float_Variable8, enum class EFortComparisonType Temp_byte_Variable10, float K2Node_Select3_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float K2Node_Select4_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, const struct FLinearColor& K2Node_Select5_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select6_Default, class UWidget* K2Node_Select7_Default);
	void Construct();
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature();
	void DisplayAttributeChanged();
	void ValueChanged(float Delta);
	void PreviewStarted();
	void PreviewEnded();
	void ExecuteUbergraph_Tooltip_DisplayAttribute(int32 EntryPoint, const struct FFortDisplayAttribute& CallFunc_SetDisplayAttribute_DeltaAttribute, bool CallFunc_SetDisplayAttribute_ReturnValue, float K2Node_Event_Delta, class UWidget* CallFunc_GetToolTipWidget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

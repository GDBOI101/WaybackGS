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

// 0xF8 (0x9B0 - 0x8B8)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
class UAthenaCustomizationSlotButton_C : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(Transient, DuplicateTransient)
	class UImage*                                EmptyImage;                                        // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSlotType;                                     // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayTypeIcon;                                   // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TooltipBody;                                       // 0x8E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TooltipHeader;                                     // 0x8F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowSubTypeIcon;                                   // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3F40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SubTypeIcon;                                       // 0x918(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bSuppressTooltip;                                  // 0x9A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortItemCardSize                 SlottedItemCardSize;                               // 0x9A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3F41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TypeIconVerticalOffset;                            // 0x9AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationSlotButton_C");
		return Clss;
	}

	enum class ESlateVisibility ShouldShowEmptyImage(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateTypeIconOffset(float VerticalOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void Update_SubType_Icon_Glow(bool GlowIcon, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Update_SubType_Icon_Image();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

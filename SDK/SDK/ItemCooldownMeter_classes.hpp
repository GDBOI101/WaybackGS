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

// 0x2F0 (0x520 - 0x230)
// WidgetBlueprintGeneratedClass ItemCooldownMeter.ItemCooldownMeter_C
class UItemCooldownMeter_C : public UUserWidget
{
public:
	class UImage*                                _Image__Backfill;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Overfill;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _SizeBox_;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            _Text__Clock;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeFont                    MultiSizeFont;                                     // 0x250(0x270)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeMargin                  MultiSizeMargin;                                   // 0x4C0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCooldownMeter_C");
		return Clss;
	}

	void GetCooldownMaterial(class UMaterialInstanceDynamic** CooldownMat, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	int32 GetSecondsCorrectedMinutes(int32 Minutes, int32 Seconds, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	void Set_Cooldown(const struct FTimespan& Time_Left, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetSecondsCorrectedMinutes_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue2, const class FString& CallFunc_Conv_IntToString_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue3, class FText CallFunc_Conv_StringToText_ReturnValue3, const class FString& CallFunc_Conv_IntToString_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue4, class FText CallFunc_Conv_StringToText_ReturnValue4, float CallFunc_GetTotalSeconds_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Update(enum class EFortBrushSize Brush_Size, const struct FVector2D& CallFunc_Get_Item_Icon_Size_Icon_Size, const struct FSlateFontInfo& CallFunc_GetFontBySizeFromMultiSizeFont_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FTimespan& CallFunc_FromSeconds_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

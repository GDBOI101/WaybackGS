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

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass ItemDurabilityMeter.ItemDurabilityMeter_C
class UItemDurabilityMeter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__Backfill;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Overfill;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Box;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        DefaultPadding;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinimumFillHeight;                                 // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Backfill_Color;                                    // 0x258(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDurabilityMeter_C");
		return Clss;
	}

	void Set_Backfill_Color(const struct FLinearColor& Backfill_Color);
	void Set_Durability(float Durability, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Update(const struct FVector2D& Draw_Size, float Durability, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin);
	void Construct();
	void ExecuteUbergraph_ItemDurabilityMeter(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

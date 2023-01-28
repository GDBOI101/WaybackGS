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

// 0x94 (0x2C4 - 0x230)
// WidgetBlueprintGeneratedClass TooltipDurabilityMeter.TooltipDurabilityMeter_C
class UTooltipDurabilityMeter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          _Vertical_Box__Durability;                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDurabilityMeter_C*                ItemDurabilityMeter;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTooltip_DisplayAttribute_C*           Tooltip_DisplayAttribute;                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 DisplayData;                                       // 0x250(0x70)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        Normalized;                                        // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TooltipDurabilityMeter_C");
		return Clss;
	}

	void Draw(float Normalized, const struct FFortDisplayAttribute& Display_Attribute, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Less_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_TooltipDurabilityMeter(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

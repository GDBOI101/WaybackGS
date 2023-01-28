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

// 0x48 (0x298 - 0x250)
// WidgetBlueprintGeneratedClass CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C
class UCollectionBookSectionTileRewardWidget_C : public UFortCollectionBookGenericRewardWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UImage*                                ArrowImage;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckImage;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DivisorText;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumSlotsText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardStatusSwitcher;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SlotsFilledText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ClaimedTextStyle;                                  // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AvailableTextStyle;                                // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookSectionTileRewardWidget_C");
		return Clss;
	}

	void SetSlotCompletionRatio(int32 NumSlotted, int32 NumSlots, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2);
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	void ExecuteUbergraph_CollectionBookSectionTileRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UClass* Temp_class_Variable, enum class ECollectionBookRewardStatus Temp_byte_Variable2, class UWidget* K2Node_Select_Default, class UClass* K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

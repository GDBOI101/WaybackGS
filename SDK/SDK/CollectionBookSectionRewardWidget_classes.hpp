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

// 0x28 (0x2C8 - 0x2A0)
// WidgetBlueprintGeneratedClass CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C
class UCollectionBookSectionRewardWidget_C : public UFortCollectionBookSectionCompletionRewardWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UImage*                                CheckmarkImage;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardPendingBox;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardStatusSwitcher;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextRewardName;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookSectionRewardWidget_C");
		return Clss;
	}

	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	void ExecuteUbergraph_CollectionBookSectionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, enum class ECollectionBookRewardStatus Temp_byte_Variable, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

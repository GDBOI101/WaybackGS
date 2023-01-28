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

// 0x20 (0x270 - 0x250)
// WidgetBlueprintGeneratedClass CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C
class UCollectionBookPageCompletionRewardWidget_C : public UFortCollectionBookPageCompletionRewardWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UImage*                                ArrowImage;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckImage;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardStatusSwitcher;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookPageCompletionRewardWidget_C");
		return Clss;
	}

	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	void ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

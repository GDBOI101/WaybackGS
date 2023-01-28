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

// 0x18 (0x5E8 - 0x5D0)
// WidgetBlueprintGeneratedClass ItemRatingIndicator.ItemRatingIndicator_C
class UItemRatingIndicator_C : public UFortItemRatingIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(Transient, DuplicateTransient)
	class UImage*                                PowerRatingIconImage;                              // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatNumericTextBlock_C*               PowerRatingText;                                   // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemRatingIndicator_C");
		return Clss;
	}

	void HandleViewModelChanged();
	void ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

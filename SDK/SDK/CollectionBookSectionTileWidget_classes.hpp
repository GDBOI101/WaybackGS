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

// 0x30 (0x940 - 0x910)
// WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C
class UCollectionBookSectionTileWidget_C : public UFortCollectionBookSectionTileWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         SlotBorder;                                        // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                NormalTextStyle;                                   // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CompletedTextStyle;                                // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NormalBorderStyle;                                 // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CompletedBorderStyle;                              // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookSectionTileWidget_C");
		return Clss;
	}

	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState);
	void ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint, enum class EFortCollectionBookState Temp_byte_Variable, int32 K2Node_Event_NumFilledSlots, int32 K2Node_Event_NumSlots, enum class EFortCollectionBookState K2Node_Event_SectionState, class UCollectionBookSectionTileRewardWidget_C* K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

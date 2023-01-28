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

// 0x18 (0x2B8 - 0x2A0)
// WidgetBlueprintGeneratedClass CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C
class UCollectionBookPageDetailsWidget_C : public UFortCollectionBookPageDetailsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookPageDetailsWidget_C");
		return Clss;
	}

	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void ExecuteUbergraph_CollectionBookPageDetailsWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 K2Node_Event_TotalFilledSlots, int32 K2Node_Event_TotalSlots, enum class EFortCollectionBookState K2Node_Event_State, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

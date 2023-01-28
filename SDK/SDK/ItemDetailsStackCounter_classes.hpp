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

// 0x65A (0x892 - 0x238)
// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
class UItemDetailsStackCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              _SizeBox_;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBase;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCounter;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   MultiSizeBase;                                     // 0x258(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                    MultiSizeFont;                                     // 0x5B8(0x270)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                  MultiSizeMargin;                                   // 0x828(0x60)(Edit, BlueprintVisible, NoDestructor)
	enum class EFortBrushSize                    Brush_Size;                                        // 0x888(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3468[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x88C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysVisible;                                     // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TruncateValue;                                     // 0x891(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDetailsStackCounter_C");
		return Clss;
	}

	void Refresh_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Stack_Count(int32 Count, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Truncate_Integer_Value_Formatted_Value, class FText K2Node_Select_Default);
	void Update(enum class EFortBrushSize Brush_Size, int32 Count);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

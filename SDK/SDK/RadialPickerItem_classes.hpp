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

// 0x58 (0x290 - 0x238)
// WidgetBlueprintGeneratedClass RadialPickerItem.RadialPickerItem_C
class URadialPickerItem_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderItemBorder;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageItemNotSelected;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ImageOrItemSwitcher;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                PickerItem;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLabel;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PickerItemText;                                    // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadialPickerItem_C");
		return Clss;
	}

	void SetKeybindVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetShowImageAndLabel(bool ShowImageAndLabel);
	void SetItemContent(class UFortItem* Item, bool Option_Enabled, int32 Radial_Item_Index, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue);
	void SetSelected(bool IsSelected, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2);
	void SetImageAndLabelContent(class FText Text, const struct FSlateBrush& Brush, bool Option_Enabled, int32 RadialItemIndex, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue);
	void Construct();
	void ExecuteUbergraph_RadialPickerItem(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

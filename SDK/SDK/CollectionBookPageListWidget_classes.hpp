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

// 0x98 (0x968 - 0x8D0)
// WidgetBlueprintGeneratedClass CollectionBookPageListWidget.CollectionBookPageListWidget_C
class UCollectionBookPageListWidget_C : public UFortCollectionBookPageListWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         AvailableSlotsBorder;                              // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExpansionStateSwitcher;                            // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 PageCategorySwitcher;                              // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               PageSpacer;                                        // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CategoryTextStyle;                                 // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PageTextStyle;                                     // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CategoryButtonStyle;                               // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PageButtonStyle;                                   // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AvailableSlotBorderColor1ParamName;                // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AvailableSlotBorderColor2ParamName;                // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AvailableSlotBorderSelectedColor;                  // 0x948(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AvailableSlotBorderDeselectedColor;                // 0x958(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookPageListWidget_C");
		return Clss;
	}

	void Update_Available_Slots_Widget(int32 NumAvailableSlots, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateAvailableSlotsBorderColors(const struct FLinearColor& ColorToUse, bool CallFunc_GetSelected_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void SetupAsPage(class UFortCollectionBookPage* Page);
	void OnExpansionChanged(bool bExpanded);
	void PreConstruct(bool IsDesignTime);
	void OnPageDetailsUpdated(int32 NumAvailableSlots, enum class EFortCollectionBookState State);
	void OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected);
	void ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, class UFortCollectionBookCategory* K2Node_Event_Category, class UFortCollectionBookPage* K2Node_Event_Page, bool K2Node_Event_bExpanded, int32 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_NumAvailableSlots, enum class EFortCollectionBookState K2Node_Event_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Select2_Default, class UCommonButton* K2Node_CustomEvent_ThisButton, bool K2Node_CustomEvent_bSelected);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x2C (0x294 - 0x268)
// WidgetBlueprintGeneratedClass StatsListWidget.StatsListWidget_C
class UStatsListWidget_C : public UFortAttributeList_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HBoxCapMessage;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsList;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               RowMargin;                                         // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ClampedAttributeCount;                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatsListWidget_C");
		return Clss;
	}

	void AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void ToggleClampedValueMessage(bool InShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void ExecuteUbergraph_StatsListWidget(int32 EntryPoint, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget, int32 K2Node_Event_AtIndex, bool CallFunc_RemoveChildAt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

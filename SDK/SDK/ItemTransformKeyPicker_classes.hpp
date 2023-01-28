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

// 0x0 (0x300 - 0x300)
// WidgetBlueprintGeneratedClass ItemTransformKeyPicker.ItemTransformKeyPicker_C
class UItemTransformKeyPicker_C : public UFortTransformKeyPicker
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformKeyPicker_C");
		return Clss;
	}

	void NavigateToFirstItem(class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue);
	void NavigateToSelectedItem(class UFortItem* InItem, class UFortItem* Item, bool CallFunc_SetSelectedItem_ReturnValue);
	void GetSelectedKey(class UFortItem** SelectedKey, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	void SetSelectedKey(class UFortAccountItem* AccountKey, bool CallFunc_SetSelectedItem_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

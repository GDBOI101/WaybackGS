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

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass ItemAttributesDetailWidget.ItemAttributesDetailWidget_C
class UItemAttributesDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UStatsListWidget_C*                    StatsListWidget;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemAttributesDetailWidget_C");
		return Clss;
	}

	void UpdateItemsForWidgets(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue3, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetUpgradeStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetTooltipStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetComparisonStats_ReturnValue);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePreDifferentItemToDetailSet();
	void HandlePreDifferentItemToCompareWithSet();
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void ExecuteUbergraph_ItemAttributesDetailWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bItemChanged2, bool K2Node_CustomEvent_bAmmoChanged2, bool K2Node_CustomEvent_bIngredientsChanged2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_bItemChanged, bool K2Node_CustomEvent_bAmmoChanged, bool K2Node_CustomEvent_bIngredientsChanged, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

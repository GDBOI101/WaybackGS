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

// 0x23 (0x25B - 0x238)
// WidgetBlueprintGeneratedClass ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C
class UItemManagementInventoryLimitStatusIndicator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      InventoryLabel;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemStorageCountLabel;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemStorageLimitLabel;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortInventoryType                InventoryTypeTracked;                              // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeployableBase;                                  // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseTypeSpecificLabel;                              // 0x25A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementInventoryLimitStatusIndicator_C");
		return Clss;
	}

	void RefreshStorageInventoryStatus(int32 MaxCount, int32 CurrentCount, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount2, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2, int32 CallFunc_GetStorageNumItems_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 K2Node_Select_Default, int32 K2Node_Select2_Default, bool Temp_bool_Variable3, const struct FLinearColor& K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2);
	void TrackStorageInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void RefreshWorldInventoryStatus(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void TrackAccountInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue);
	void TrackWorldInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue);
	void HandleVaultItemLimitStateChanged(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, enum class EVaultItemLimitStatus CallFunc_GetVaultItemLimitStatus_ReturnValue, int32 CallFunc_GetCountOfVaultLimitedItems_ReturnValue, int32 CallFunc_GetVaultItemLimit_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, const struct FLinearColor& Temp_struct_Variable3, enum class EVaultItemLimitStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void Destruct();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleOutpostItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleDeployableBaseInventoryChanged(class ADeployableBasePlot* Plot);
	void ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator(int32 EntryPoint, class ADeployableBasePlot* K2Node_CustomEvent_Plot, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded2, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, bool K2Node_SwitchEnum_CmpSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

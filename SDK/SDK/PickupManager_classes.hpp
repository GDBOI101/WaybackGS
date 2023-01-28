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

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass PickupManager.PickupManager_C
class UPickupManager_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UPackResource_C*                       _Pack_Resource__Metal;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                       _Pack_Resource__Stone;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                       _Pack_Resource__Wood;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          _Vertical_Box__Pickup_Message_Stream;              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackpackImage;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBluGloInventory_C*                    BluGloInventory;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderSurvivorCount;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Divider;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindInventory;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorRescuedCounter_C*             SurvivorRescuedCounter;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextInventoryCount;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextInventoryMax;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUIMessageManager*                 MessageManager;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_Displayed_Items;                               // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastUpdateTime;                                    // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickupManager_C");
		return Clss;
	}

	void UpdateKeybinds();
	void RefreshCounts(float BackpackFullPct, const struct FSlateColor& BackpackColor, int32 Overflow_Items_Count, int32 Max_Items_Count, int32 Items_Count, float CurrentUpdateTime, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color2, bool Temp_bool_Variable2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Less_FloatFloat_ReturnValue2);
	void HandleItemPickedUp(class UFortWorldItem* NewItem, int32 Count, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UFortUIMessageItemWidget* CallFunc_AddMessageItem_ReturnValue, class UPickupMessageItem_C* K2Node_DynamicCast_AsPickup_Message_Item, bool K2Node_DynamicCast_bSuccess);
	void HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item);
	void TryGetNextItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIMessageItemWidget* CallFunc_GetNextMessageInQueue_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_GetNumDisplayedItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void Destruct();
	void HandleBuildingMaterialChanged();
	void ExecuteUbergraph_PickupManager(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_GetMessageManager_bCreatedNew, class UFortUIMessageManager* CallFunc_GetMessageManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

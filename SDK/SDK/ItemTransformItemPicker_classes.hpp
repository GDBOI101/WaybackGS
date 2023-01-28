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

// 0x5C (0x294 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformItemPicker.ItemTransformItemPicker_C
class UItemTransformItemPicker_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  FilterTabList;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotItemPicker_C*        ItemTransformSlotItemPicker;                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainModeItemDetailsHostPanel_C*       MainModeItemDetailsHostPanel;                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnItemSelected;                                    // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFortItemTransformFilterTabLabelInfo> FilterTabs;                                        // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<class UFortItem*>                     SacrificeItems;                                    // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  CurrentTab;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentlySelectedSlot;                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformItemPicker_C");
		return Clss;
	}

	void Return_Item_to_Detail(class UFortItem* InItem, class UFortItem** OutItem, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, class UFortItem* K2Node_Select_Default);
	void OpenInspectionScreen(bool* PassThru, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CommitSelectedItem(bool* PassThru, bool CallFunc_TryCommitSelectedItem_ReturnValue);
	void OpenPicker(TArray<class UFortItem*>& SacrificeItems, int32 SelectedSlot, bool CallFunc_SelectTabByID_ReturnValue);
	void SetFilter(class FName FilterName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemTransformFilterTabLabelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SetupFilterTabList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemTransformFilterTabLabelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue);
	void HandleItemCommitted(class UFortItem* Item);
	void RemoveInvalidItems(TArray<class UFortAccountItem*>& UnrefinedItems, TArray<class UFortItem*>& CurrentSacrificeItems, TArray<class UFortAccountItem*>* RefinedItems, const TArray<class UFortAccountItem*>& TempItemArray, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_GetRecycleValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_IsRecyclable_Reason, bool CallFunc_IsRecyclable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void HandleItemSelected(class UFortItem* Item, class UFortItem* CallFunc_Return_Item_to_Detail_OutItem, bool CallFunc_IsValid_ReturnValue);
	void SetupItemPicker(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void ExecuteUbergraph_ItemTransformItemPicker(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_ComponentBoundEvent_TabId);
	void OnItemSelected__DelegateSignature(class UFortItem* SelectedItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xC0 (0x2F8 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformSlotScreen.ItemTransformSlotScreen_C
class UItemTransformSlotScreen_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UItemTransformItemPicker_C*            ItemTransformItemPicker;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformResultInfo_C*            ItemTransformResultInfo;                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot1;                                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot2;                                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot3;                                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot4;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot5;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             SelectedKey;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSlotIndex;                                  // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     SacrificeItems;                                    // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UItemTransformSlotEntry_C*>     SacrificeItemSlotWidgets;                          // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTransformConfirmed;                              // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFortItemTransformFilterTabLabelInfo> ItemPickerFilterTabs;                              // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTransformButtonUpdated;                          // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemPickerClosed;                                // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemPickerOpened;                                // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformSlotScreen_C");
		return Clss;
	}

	class UItemTransformSlotEntry_C* GetSlotFromIndex(int32 Temp_int_Variable, class UItemTransformSlotEntry_C* K2Node_Select_Default);
	void NavigateToFirstItem(class UItemTransformSlotEntry_C* CallFunc_GetSlotFromIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Get_Transform_Data(TArray<class UFortItem*>* SacrificeItems, int32* CurrentSacrificePoints, int32* CurrentTier, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier);
	void ResetScreen(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* Temp_object_Variable);
	void CloseItemPicker(int32 CallFunc_Array_Length_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item);
	void SetupSlotScreen(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5);
	void OpenItemPicker(class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item);
	void OpenSlotScreen(class UFortItem* Key, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature();
	void BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature();
	void BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature();
	void BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature();
	void BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem);
	void Construct();
	void BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier);
	void BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive);
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature();
	void BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature();
	void BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature();
	void BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature();
	void ExecuteUbergraph_ItemTransformSlotScreen(int32 EntryPoint, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 K2Node_ComponentBoundEvent_SacrificePoints, int32 K2Node_ComponentBoundEvent_CurrentTier, bool K2Node_ComponentBoundEvent_TransformActive);
	void OnItemPickerOpened__DelegateSignature();
	void OnItemPickerClosed__DelegateSignature();
	void OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void OnTransformConfirmed__DelegateSignature(TArray<class UFortItem*>& ItemsToSacrifice, int32 SacrificePoints, int32 CurrentTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

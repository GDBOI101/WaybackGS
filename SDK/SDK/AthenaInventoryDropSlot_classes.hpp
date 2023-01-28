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

// 0x50 (0x290 - 0x240)
// WidgetBlueprintGeneratedClass AthenaInventoryDropSlot.AthenaInventoryDropSlot_C
class UAthenaInventoryDropSlot_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UImage*                                DropTarget;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DropTargetOverlay;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EmptyImage;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InputActionOverlay;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selection;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnEquipRequested;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryDropSlot_C");
		return Clss;
	}

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue2, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_CanBeDropped_ReturnValue, int32 CallFunc_Max_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_AthenaInventoryDropSlot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	void OnEquipRequested__DelegateSignature(int32 SlotIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

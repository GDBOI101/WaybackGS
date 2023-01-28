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

// 0x30 (0x900 - 0x8D0)
// WidgetBlueprintGeneratedClass AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C
class UAthenaInventoryFortItemTileButton_C : public UAthenaInventoryFortItemTileButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(Transient, DuplicateTransient)
	class UImage*                                DropTarget;                                        // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EquipSlotBorder;                                   // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquipSlotOverlay;                                  // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              InputActionWrapper;                                // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemWidgetHolder;                                  // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryFortItemTileButton_C");
		return Clss;
	}

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ValidDrop, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_DetectDrag_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue2);
	void UpdateInteractionWidgetVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UObject* CallFunc_GetData_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_DoesMatchSearchString_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetEquipSlotOverlay(int32 EquipSlot, int32 Temp_int_Variable, bool K2Node_MathExpression_ReturnValue, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, class UTexture2D* Temp_object_Variable5, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UAthenaInventoryDragDrop_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaInventoryDragVisual_C* CallFunc_Create_ReturnValue);
	void UpdateStyle();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void OnInventoryItemSelected_Event_0(class UFortItem* Item);
	void Construct();
	void Destruct();
	void OnSelected();
	void ExecuteUbergraph_AthenaInventoryFortItemTileButton(int32 EntryPoint, int32 K2Node_Event_EquipSlot, class UFortItem* K2Node_CustomEvent_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

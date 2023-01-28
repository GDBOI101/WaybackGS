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

// 0x10 (0x440 - 0x430)
// WidgetBlueprintGeneratedClass ItemManagementMulchModeBox.ItemManagementMulchModeBox_C
class UItemManagementMulchModeBox_C : public UFortItemMulchModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UItemWindow_C*                         Recycle_Info_Window;                               // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementMulchModeBox_C");
		return Clss;
	}

	void HandleLeaveInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleMulchListChanged(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleInfo(bool* Pass_Through, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleBack(bool* PassThrough);
	void HandleDifferentItemToDetailSetBP();
	void Construct();
	void OnActivated();
	void Destruct();
	void ExecuteUbergraph_ItemManagementMulchModeBox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UItemWindow_C* CallFunc_Create_ReturnValue, class UItemManagementMulchDetailsPanel_C* K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UItemManagementMulchDetailsPanel_C* K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_IsInZone_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

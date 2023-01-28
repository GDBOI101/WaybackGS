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

// 0x21 (0x281 - 0x260)
// WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C
class UQuickbarBase_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	enum class EFortQuickBars                    MyQuickbarIndex;                                   // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FocusedSlot;                                       // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQuickbarSlot_C*>               QuickbarSlots;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         IsMaximized;                                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuickbarBase_C");
		return Clss;
	}

	void RefreshQuickbar(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleKeybindsChanged(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Minimize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Maximize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Is_Valid_Slot(int32 Slot, bool* Is_Valid, int32* Array_Index, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void OnWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void OnQuickbarSlotFocusChanged(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex);
	void OnQuickbarForceFullUpdate(enum class EFortQuickBars QuickbarIndex);
	void OnQuickbarSecondarySlotFocusChanged_Event_0(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void OnLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport);
	void OnLocalPlayerRevived();
	void OnLocalPlayerSpawned();
	void Destruct();
	void ExecuteUbergraph_QuickbarBase(int32 EntryPoint, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Is_Valid_Slot_Is_Valid, int32 CallFunc_Is_Valid_Slot_Array_Index, bool CallFunc_Is_Valid_Slot_Is_Valid2, int32 CallFunc_Is_Valid_Slot_Array_Index2, class UQuickbarSlot_C* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UQuickbarSlot_C* CallFunc_Array_Get_Item2, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex4, int32 K2Node_CustomEvent_Slot2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Is_Valid_Slot_Is_Valid3, int32 CallFunc_Is_Valid_Slot_Array_Index3, class UQuickbarSlot_C* CallFunc_Array_Get_Item3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex3, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UQuickbarSlot_C* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

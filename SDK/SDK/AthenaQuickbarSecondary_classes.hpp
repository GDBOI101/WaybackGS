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

// 0x8B (0x30C - 0x281)
// WidgetBlueprintGeneratedClass AthenaQuickbarSecondary.AthenaQuickbarSecondary_C
class UAthenaQuickbarSecondary_C : public UQuickbarBase_C
{
public:
	uint8                                        Pad_3CCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        _Horizontal_Box__Camera_Mode_Content;              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Separator;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Switch_Action;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindSwitchBinding;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                 QuickbarSlotF1;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                 QuickbarSlotF2;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                 QuickbarSlotF3;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                 QuickbarSlotF4;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                 QuickbarSlotF5;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Building;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                      TutorialQBS1;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                      TutorialQBS2;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                      TutorialQBS3;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                      TutorialQBS4;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                      TutorialQBS5;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentBuildingSlot;                               // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaQuickbarSecondary_C");
		return Clss;
	}

	void HandleMaximizeShowing(const class FString& ConfigF, const class FString& ConfigE, bool IsConfigE, bool IsConfigF, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleShowHideRail(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void HandleMinimizeHiding(const class FString& ConfigE, const class FString& ConfigF, bool IsConfigE, bool IsConfigF, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleKeyBindsChange(int32 Temp_int_Array_Index_Variable, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Show_Secondary_Quickbar_Rail(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void Maximize();
	void Minimize();
	void HandleKeybindsChanged();
	void HandleInputMethodChanged_Bind(bool bUsingGamepad);
	void Destruct();
	void OnQuickBarSlotFocusChanged_Bind(enum class EFortQuickBars QuickbarIndex, int32 Slot);
	void Construct();
	void OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex);
	void ExecuteUbergraph_AthenaQuickbarSecondary(int32 EntryPoint, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UQuickbarSlot_C*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortQuickBars K2Node_Event_QuickbarIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

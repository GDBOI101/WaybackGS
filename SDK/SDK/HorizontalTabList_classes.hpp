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

// 0x64 (0x3D4 - 0x370)
// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
class UHorizontalTabList_C : public UFortTabListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UImage*                                ImageGamepadKeyPrompt;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHorizRule;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   NextTabAction;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NextTabActionWrapper;                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   PreviousTabAction;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PreviousTabActionWrapper;                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TabButtonBox;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               TabButtonPadding;                                  // 0x3B0(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class UClass*                                ButtonStyle;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseButtonStyle;                                    // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowGamePadInputPrompt;                            // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowRail;                                          // 0x3CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_24CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinTabWidth;                                       // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar_0;                                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizontalTabList_C");
		return Clss;
	}

	class UCommonButton* Get_Tab_From_Id(class FName TabNameID, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue);
	void ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding);
	void Construct();
	void Handle_OnInputMethodChanged(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void Previous_Visibility();
	void HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void CustomEvent_0(class FName TabId);
	void ExecuteUbergraph_HorizontalTabList(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_CustomEvent_bUsingGamepad, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable10, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue2, enum class ESlateVisibility K2Node_Select3_Default, class FName K2Node_Event_TabNameID, class UCommonButton* K2Node_Event_TabButton, enum class ESlateVisibility K2Node_Select4_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool Temp_bool_Variable5, enum class ESlateVisibility K2Node_Select5_Default, class FName K2Node_CustomEvent_TabId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

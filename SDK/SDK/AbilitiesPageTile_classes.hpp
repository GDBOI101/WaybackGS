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

// 0x124 (0x9C4 - 0x8A0)
// WidgetBlueprintGeneratedClass AbilitiesPageTile.AbilitiesPageTile_C
class UAbilitiesPageTile_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UFortSZAwareImage*                     AbilityImage;                                      // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AbilityName;                                       // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindAbilityKeybind;                             // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindGamepadAbility1;                            // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindGamepadAbility2;                            // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxAbilityKeybind;                             // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherAbilityBindingSwitcher;                    // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        QuickBarSlot;                                      // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityKit*                       AbilityKit;                                        // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGadgetItemDefinition*             GadgetItemDef;                                     // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             AbilityItem;                                       // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbilityLocked;                                     // 0x900(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerk                           AbilityUIPerk;                                     // 0x908(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          LockedColor;                                       // 0x990(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnlockedColor;                                     // 0x9A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    AbilityIconBrushSize;                              // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LockedAbilityIconColor;                            // 0x9B4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitiesPageTile_C");
		return Clss;
	}

	void SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue);
	void UpdateKeyBinding(bool K2Node_SwitchInteger_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue);
	void SetAbilityItemInfo(class UFortItem* SlottedAbilityItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGadgetItemDefinition* K2Node_DynamicCast_AsFort_Gadget_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	void Construct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void ExecuteUbergraph_AbilitiesPageTile(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

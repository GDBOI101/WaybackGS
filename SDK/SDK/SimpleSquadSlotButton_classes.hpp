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

// 0x108 (0xA00 - 0x8F8)
// WidgetBlueprintGeneratedClass SimpleSquadSlotButton.SimpleSquadSlotButton_C
class USimpleSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x900(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSlotType;                                     // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSlotTypeShadow;                               // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       InputActionOverride;                               // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayTypeIcon;                                   // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TooltipBody;                                       // 0x930(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TooltipHeader;                                     // 0x948(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowSubTypeIcon;                                   // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_37A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SubTypeIcon;                                       // 0x968(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bSuppressTooltip;                                  // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortItemCardSize                 SlottedItemCardSize;                               // 0x9F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_37A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TypeIconVerticalOffset;                            // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimpleSquadSlotButton_C");
		return Clss;
	}

	void UpdateTypeIconOffset(float VerticalOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void Update_SubType_Icon_Glow(bool GlowIcon, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Update_SubType_Icon_Image();
	void IsSlotEmpty(bool* IsEmpty, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Mark_Squad_Slot_Seen_State(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Bang_State(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSquadSlotUnseen_ReturnValue);
	class UWidget* GetSimpleSquadButtonTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandlePostDifferentSquadSlotSetBP();
	void SquadSlotWidgetUpdated();
	void OnSelected();
	void ExecuteUbergraph_SimpleSquadSlotButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, enum class EFortItemCardSize Temp_byte_Variable3, class FName CallFunc_GetActiveCombatSquadId_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, class UClass* Temp_class_Variable6, class UClass* Temp_class_Variable7, bool K2Node_Event_IsDesignTime, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UClass* K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

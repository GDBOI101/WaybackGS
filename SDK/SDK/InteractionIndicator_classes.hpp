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

// 0x38 (0x2D0 - 0x298)
// WidgetBlueprintGeneratedClass InteractionIndicator.InteractionIndicator_C
class UInteractionIndicator_C : public UFortActorIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UBasicInteractionWidget_C*             BasicInteractionWidget;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_PickupItemWidget_C*               HUD_PickupItemWidget;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteraction_DefenderBeacon_C*         Interaction_DefenderBeacon;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextUnderKeybindText;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInteractContextInfo*              CurrentInteraction;                                // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractionIndicator_C");
		return Clss;
	}

	void UpdateKeybinds();
	void ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap);
	void HandleInteractionUpdated(class UFortInteractContextInfo* Interaction, bool CallFunc_IsValid_ReturnValue);
	void ShowBasicInteractionWidget(bool Temp_bool_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default);
	void ShowPickupWidget(class AFortPickup* Pickup, bool Temp_bool_Variable, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_ReturnValue, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default);
	void HandleInteractionChanged(class UFortInteractContextInfo* Interaction, bool ValidInteraction, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class ABuildingTrapDefender* K2Node_DynamicCast_AsBuilding_Trap_Defender, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_PickedUp_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_InteractionIndicator(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

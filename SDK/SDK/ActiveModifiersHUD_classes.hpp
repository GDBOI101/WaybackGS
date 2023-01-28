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

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass ActiveModifiersHUD.ActiveModifiersHUD_C
class UActiveModifiersHUD_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HboxModifierStack;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                  Timers;                                            // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMissionDetailsModifierRow_C*>  ModifierRows;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActiveModifiersHUD_C");
		return Clss;
	}

	void PopulateModifiers(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers, float AnimationDuration, class UClass* DescriptionTextStyle, class UClass* NameTextStyle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActiveModifierItemHUD_C* CallFunc_Create_ReturnValue, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnActiveGameplayModifiersChanged(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers);
	void Construct();
	void ExecuteUbergraph_ActiveModifiersHUD(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_AppliedModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x30 (0x270 - 0x240)
// WidgetBlueprintGeneratedClass HordeWaveModifiersWidget.HordeWaveModifiersWidget_C
class UHordeWaveModifiersWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                          ModifierVertBox;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UHordeWaveModifiersTile_C*>     ModifierWidgets;                                   // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurPresentedIdx;                                   // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnAllModifiersPresented;                           // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HordeWaveModifiersWidget_C");
		return Clss;
	}

	void PresentNextModifier(class UHordeWaveModifiersTile_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers, bool StartPresentationImmediately, int32 Temp_int_Array_Index_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHordeWaveModifiersTile_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnAllModifiersPresented__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

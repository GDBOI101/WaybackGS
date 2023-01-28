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

// 0x39 (0x2F9 - 0x2C0)
// WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C
class UBP_ExpeditionSquadSlotsView_C : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class USquadSlotGroup_C*                     SubordinatesSquadSlotGroup;                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnSquadSlotSelected;                               // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bShowHeader;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSelectableButtons;                                // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3314[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSquadSlotOpened;                                 // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortItemCardSize                 Slot_Size;                                         // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ExpeditionSquadSlotsView_C");
		return Clss;
	}

	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UExpeditionSquadSlotButton_C* CallFunc_Create_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void HandleSquadSlotSelected(int32 SquadSlotIndex);
	void PreConstruct(bool IsDesignTime);
	void HandleSquadSlotOpened();
	void ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_SquadSlotIndex);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

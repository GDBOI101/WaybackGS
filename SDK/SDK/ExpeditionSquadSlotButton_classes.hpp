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

// 0x41 (0x939 - 0x8F8)
// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(Transient, DuplicateTransient)
	int32                                        SquadSlotIndex;                                    // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_32D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSquadSlotSelected;                               // 0x908(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSquadSlotUpdated;                                // 0x918(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSquadSlotOpened;                                 // 0x928(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortItemCardSize                 SlottedItemCardSize;                               // 0x938(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExpeditionSquadSlotButton_C");
		return Clss;
	}

	void Send_to_Skill_Tree(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_IsSquadSlotLockedBP_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Get_Squad_Data(class FName* OutSquadId, int32* OutSquadSlotIndex, TArray<enum class EFortItemType>* ItemTypes, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_IsValid_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item);
	void PreConstruct(bool IsDesignTime);
	void OnClicked();
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void OnDoubleClicked();
	void OnSelected();
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int32 EntryPoint, enum class EFortItemCardSize Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, class UClass* Temp_class_Variable6, class UClass* Temp_class_Variable7, class UClass* K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_IsSquadSlotLockedBP_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue2, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue2, bool CallFunc_IsSquadSlotLockedBP_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

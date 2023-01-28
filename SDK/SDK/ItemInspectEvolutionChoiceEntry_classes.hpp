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

// 0x6C (0x93C - 0x8D0)
// WidgetBlueprintGeneratedClass ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C
class UItemInspectEvolutionChoiceEntry_C : public UPanelButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Grow;                                              // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DisabledOverlay;                                   // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnEvolutionChoiceHovered;                          // 0x900(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionChoiceUnhovered;                        // 0x910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionChoiceSelected;                         // 0x920(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             ItemRepresented;                                   // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndexRepresented;                            // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolutionChoiceEntry_C");
		return Clss;
	}

	void SelectEvolutionChoice();
	void DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, class UFortItemDefinition* K2Node_Select_Default, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void SetItemToRepresent(class UFortItem* Item, int32 RecipeIndex, bool EnabledChoice, class FText DisableReasonText);
	void OnSelected();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item);
	void OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

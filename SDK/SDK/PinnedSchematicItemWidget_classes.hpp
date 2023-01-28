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

// 0x38 (0x270 - 0x238)
// WidgetBlueprintGeneratedClass PinnedSchematicItemWidget.PinnedSchematicItemWidget_C
class UPinnedSchematicItemWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                FortItemCard_XXSSchematicItemCard;                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        IngredientBox;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextItemName;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSchematicItem*                    PinnedSchematic;                                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCraftingIngredient_C*>         CraftingIngredients;                               // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PinnedSchematicItemWidget_C");
		return Clss;
	}

	void HandleCursorModeChanged(bool CursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2);
	void ClearPinnedSchematic();
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void SetupIngredients(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCraftingIngredient_C* CallFunc_Create_ReturnValue, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleOnSchematicUnlocked(class UFortSchematicItem* Schematic, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortHUDContext* CallFunc_GetContext_ReturnValue2);
	void SetPinnedSchematic(class UFortSchematicItem* NewPinnedSchematic, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetDisplayName_ReturnValue);
	void Refresh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCraftingIngredient_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PinButton_Clicked(class UFortBaseButton* NewParam);
	void ExecuteUbergraph_PinnedSchematicItemWidget(int32 EntryPoint, class UFortBaseButton* K2Node_CustomEvent_NewParam, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

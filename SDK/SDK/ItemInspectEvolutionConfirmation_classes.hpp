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

// 0xD0 (0x308 - 0x238)
// WidgetBlueprintGeneratedClass ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C
class UItemInspectEvolutionConfirmation_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     EvolutionConfirmButton;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EvolutionInfo;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 EvolutionInfoSwitcher;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionIngredientsList_C* EvolutionIngredientsList;                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EvolutionNameText;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EvolutionOptionsList;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EvolveRestrictionText;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoEvolutionInfo;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoEvolutionIngredientsText;                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PromptText;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RestrictionBorder;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnEvolutionConfirm;                                // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             Item;                                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EvolutionRecipeIndex;                              // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3882[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnEvolutionOptionHovered;                          // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionOptionUnhovered;                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionOptionSelected;                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         EvolutionSelected;                                 // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3883[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             EvolutionItemSelected;                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroup*                    EvoButtonGroup;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolutionConfirmation_C");
		return Clss;
	}

	void SetEvolutionRestrictions(enum class EItemEvolutionRestrictionReason Temp_byte_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue, enum class EItemEvolutionRestrictionReason Temp_byte_Variable2, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanEvolve_OutRestrictionReasons, bool CallFunc_CanEvolve_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue2);
	void ClearEvolutionRepresented();
	void OnShow(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void HideEvolutionOptions();
	void ShowEvolutionOptions();
	void GetNumEvolutionOptions(int32* NumRecipes, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
	void SetupEvolutionOptions(class UFortItem* TemporaryEvolutionItem, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsAllowedConversionIndex_ReturnValue);
	void HandleEvolutionOptionSelected(class UFortItem* Item, int32 RecipeIndex);
	void SetEvolutionToRepresent(int32 EvolutionIndex, class UFortItem* EvolutionItem, const TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item2, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void SetItemToRepresent(class UFortItem* Item, bool CanEvolve, bool NoEvolutions, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanEvolve_OutRestrictionReasons, bool CallFunc_CanEvolve_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EItemEvolutionRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_ItemInspectEvolutionConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue);
	void OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item);
	void OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item);
	void OnEvolutionConfirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

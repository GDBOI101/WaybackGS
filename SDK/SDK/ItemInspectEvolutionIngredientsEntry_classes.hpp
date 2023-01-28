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

// 0xA0 (0x2D0 - 0x230)
// WidgetBlueprintGeneratedClass ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C
class UItemInspectEvolutionIngredientsEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UImage*                                CheckMarkIcon;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemName;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuantityText;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                 IngredientItemQuantity;                            // 0x258(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           NotHaveColor;                                      // 0x280(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HaveColor;                                         // 0x2A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolutionIngredientsEntry_C");
		return Clss;
	}

	int32 GetHaveQuantity(struct FFortItemQuantityPair& InPair, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue);
	void SetIngredientCount(int32 NeedQuantity, int32 HaveQuantity, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, const struct FSlateColor& K2Node_Select_Default, int32 CallFunc_GetHaveQuantity_ReturnValue);
	void GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void Construct();
	void ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, TArray<class FText>& CallFunc_GetDescription_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output, class FText CallFunc_GetDisplayName_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

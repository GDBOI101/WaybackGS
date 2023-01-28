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

// 0x28 (0x260 - 0x238)
// WidgetBlueprintGeneratedClass MissionDetailsModifierList.MissionDetailsModifierList_C
class UMissionDetailsModifierList_C : public UCommonUserWidget
{
public:
	class UCommonBorder*                         BorderExtra;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMore;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxModifiers;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> DebugMods;                                         // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionDetailsModifierList_C");
		return Clss;
	}

	void CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers, class UFortGameplayModifierItemDefinition* DebugMod8, class UFortGameplayModifierItemDefinition* DebugMod7, class UFortGameplayModifierItemDefinition* DebugMod6, class UFortGameplayModifierItemDefinition* DebugMod5, class UFortGameplayModifierItemDefinition* DebugMod4, class UFortGameplayModifierItemDefinition* DebugMod3, class UFortGameplayModifierItemDefinition* DebugMod2, class UFortGameplayModifierItemDefinition* DebugMod1, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UFortGameplayModifierItemDefinition* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool Show_Descriptions, TArray<class UFortGameplayModifierItemDefinition*>& ModifierItems, bool UseSmallIcons, int32 DisplayMoreThreshold, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, float Temp_float_Variable2, float K2Node_Select2_Default, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionDetailsModifierRow_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

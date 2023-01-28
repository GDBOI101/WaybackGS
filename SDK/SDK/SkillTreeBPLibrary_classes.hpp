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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SkillTreeBPLibrary.SkillTreeBPLibrary_C
class USkillTreeBPLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkillTreeBPLibrary_C");
		return Clss;
	}

	void GetSkillTreeNodeIconSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, enum class EFortBrushSize* Icon_Size, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, enum class EFortBrushSize Temp_byte_Variable2, enum class EFortBrushSize Temp_byte_Variable3, enum class EFortBrushSize Temp_byte_Variable4, enum class EFortBrushSize Temp_byte_Variable5, enum class EFortBrushSize K2Node_Select_Default);
	void GetSkillTreeNodeShapeByDisplayType(enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable2, bool K2Node_Select_Default, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, bool Temp_bool_Variable13, bool Temp_bool_Variable14, bool K2Node_Select2_Default);
	void GetSkillTreeNodeSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size, bool Temp_bool_Variable, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, float Temp_float_Variable, float Temp_float_Variable2, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, float K2Node_Select_Default, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float K2Node_Select2_Default);
	void UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue3);
	void GetSkillTreeNodeCostTint(struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, const struct FSlateColor& CallFunc_GetQuestNodeColour_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess);
	void UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext, class UClass* Temp_class_Variable, enum class EFortBrushSize CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FLinearColor& CallFunc_GetSkillTreeNodeCostTint_NodeTintColour, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, class UClass* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortHomebaseNodeMagnitudeNode_Magnitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Icon_Size                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHomebaseNodeMagnitudeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::GetSkillTreeNodeIconSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, enum class EFortBrushSize* Icon_Size, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, enum class EFortBrushSize Temp_byte_Variable2, enum class EFortBrushSize Temp_byte_Variable3, enum class EFortBrushSize Temp_byte_Variable4, enum class EFortBrushSize Temp_byte_Variable5, enum class EFortBrushSize K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeIconSizeByMagnitude");

	Params::USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params Parms;
	Parms.Node_Magnitude = Node_Magnitude;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon_Size != nullptr)
		*Icon_Size = Parms.Icon_Size;

}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortHomebaseNodeDisplayTypeDisplay_Type                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSquare                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsExitNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortHomebaseNodeDisplayTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortHomebaseNodeDisplayTypeTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTreeBPLibrary_C::GetSkillTreeNodeShapeByDisplayType(enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable2, bool K2Node_Select_Default, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, bool Temp_bool_Variable13, bool Temp_bool_Variable14, bool K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeShapeByDisplayType");

	Params::USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params Parms;
	Parms.Display_Type = Display_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSquare != nullptr)
		*IsSquare = Parms.IsSquare;

	if (IsExitNode != nullptr)
		*IsExitNode = Parms.IsExitNode;

}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortHomebaseNodeMagnitudeNode_Magnitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortHomebaseNodeDisplayTypeDisplay_Type                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     World_Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHomebaseNodeMagnitudeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::GetSkillTreeNodeSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size, bool Temp_bool_Variable, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, float Temp_float_Variable, float Temp_float_Variable2, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, float K2Node_Select_Default, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeSizeByMagnitude");

	Params::USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params Parms;
	Parms.Node_Magnitude = Node_Magnitude;
	Parms.Display_Type = Display_Type;
	Parms.World_Context = World_Context;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare = CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare;
	Parms.CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode = CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;

}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     World_Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseNodeState          NodeState                                                        (Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue3)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "UpdateSkillTreeNodeMaterial_DynamicData");

	Params::USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params Parms;
	Parms.World_Context = World_Context;
	Parms.Material = Material;
	Parms.NodeState = NodeState;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_Conv_BoolToFloat_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue3 = CallFunc_Conv_BoolToFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHomebaseNode               HomebaseNode                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NodeTintColour                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetQuestNodeColour_ReturnValue                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTokenType*              K2Node_DynamicCast_AsFort_Token_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTreeBPLibrary_C::GetSkillTreeNodeCostTint(struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, const struct FSlateColor& CallFunc_GetQuestNodeColour_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeCostTint");

	Params::USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params Parms;
	Parms.HomebaseNode = HomebaseNode;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestNodeColour_ReturnValue = CallFunc_GetQuestNodeColour_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Token_Type = K2Node_DynamicCast_AsFort_Token_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NodeTintColour != nullptr)
		*NodeTintColour = Parms.NodeTintColour;

}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     World_Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseNode               NodeData                                                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFortSkillTreeNodeDisplayDataDisplayData                                                      (Parm)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// struct FLinearColor                CallFunc_GetSkillTreeNodeCostTint_NodeTintColour                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHomebaseNodeMagnitudeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext, class UClass* Temp_class_Variable, enum class EFortBrushSize CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FLinearColor& CallFunc_GetSkillTreeNodeCostTint_NodeTintColour, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SkillTreeBPLibrary_C", "UpdateSkillTreeNodeMaterial_StaticData");

	Params::USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params Parms;
	Parms.World_Context = World_Context;
	Parms.Material = Material;
	Parms.NodeData = NodeData;
	Parms.DisplayData = DisplayData;
	Parms.Button = Button;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size = CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_GetSkillTreeNodeCostTint_NodeTintColour = CallFunc_GetSkillTreeNodeCostTint_NodeTintColour;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

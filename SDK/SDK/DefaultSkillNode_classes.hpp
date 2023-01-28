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

// 0x149 (0xA11 - 0x8C8)
// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C8(0x8)(Transient, DuplicateTransient)
	class USpacer*                               InternalSpacer;                                    // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionPulseEffect;                              // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SelectionGlowPercentage;                           // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverGlowPercentage;                               // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HoverGlowTimerHandle;                              // 0x8E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          SelectionGlowTimerHandle;                          // 0x8F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSkillTreePageColors                  PageColors;                                        // 0x8F8(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreePages                   Pages;                                             // 0x9B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillTreeGroupColors                 GroupColors;                                       // 0x9BC(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreeGroups                  Groups;                                            // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultSkillNode_C");
		return Clss;
	}

	void SetBackgroundColor(enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable2, enum class ESkillTreePages Temp_byte_Variable3, enum class ESkillTreeGroups Temp_byte_Variable4, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default);
	void UpdateFromButtonState(bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	void UpdateSelectionGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void UpdateHoverGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void StepSelectionGlowInterpolation(float TargetGlowPercentage, bool CallFunc_GetSelected_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void StepHoverGlowInterpolation(float TargetGlowPercentage, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UpdateFromNodeData(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FFortSkillTreeNodeDisplayData& CallFunc_TryGetNodeDisplayData_OutDisplayData, bool CallFunc_TryGetNodeDisplayData_ReturnValue, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSkillTreeNodeSizeByMagnitude_Size, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateFromNodeState(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FHomebaseNodeState& CallFunc_TryGetSkillTreeNodeState_OutNodeState, bool CallFunc_TryGetSkillTreeNodeState_ReturnValue);
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool IsDesignTime);
	void OnUnhovered();
	void OnHovered();
	void OnSelected();
	void OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue4, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

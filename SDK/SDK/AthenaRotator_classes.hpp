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

// 0x31 (0x961 - 0x930)
// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
class UAthenaRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x930(0x8)(Transient, DuplicateTransient)
	struct FDataTableRowHandle                   Left_Triggering_Input_Action;                      // 0x938(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   Right_Triggering_Input_Action;                     // 0x948(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                TextStyle;                                         // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowGamepadButtonOnlyWhenFocused;                  // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaRotator_C");
		return Clss;
	}

	void NewFunction_0();
	void ChangeDirection(bool bDirection, bool CallFunc_IsInteractionEnabled_ReturnValue);
	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnClicked();
	void ExecuteUbergraph_AthenaRotator(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform2, bool CallFunc_IsInteractionEnabled_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsInteractionEnabled_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

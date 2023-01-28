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

// 0xB9 (0x2F1 - 0x238)
// WidgetBlueprintGeneratedClass RadialPicker.RadialPicker_C
class URadialPicker_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRadialPointer;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget_81;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption0;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption1;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption2;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption3;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption4;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption5;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption6;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                   PickerOption7;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_OK;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ActiveOption;                                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumOptions;                                        // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        YAxisMultiplier;                                   // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PickerClosing;                                     // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortPickerMode                   PickerMode;                                        // 0x2BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EControllerAnalogStick            Thumbstick;                                        // 0x2BE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnAccept;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnCancel;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnSelect;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URadialPickerItem_C*>           PickerOptions;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bUsingGamepad;                                     // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIgnoringMoveInput;                                // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIgnoringLookInput;                                // 0x2EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39E8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentPointerAngle;                               // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowingMouseCursor;                               // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadialPicker_C");
		return Clss;
	}

	void SetShowMouseCursor(bool InShowMouseCursor, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue2, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetPointerDirection(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void IsGamepadInPickerDeadZone(bool* bIsInDeadZone, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void MoveActiveOption(int32 MoveOptionDirection, int32 NewActiveOption, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetOptionPosition_Position, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, bool CallFunc_IsGamepadInPickerDeadZone_bIsInDeadZone, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetOptionAngle_Angle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue2);
	void ResetInput(class UFortPickerContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void CanConfirm(bool* CanAccept, bool CallFunc_NotEqual_IntInt_ReturnValue, class URadialPickerItem_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void SetInputMode(bool WasUsingGamepad, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortPickerContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_UseLeftThumbstick_ReturnValue);
	void SetActiveOption(int32 Option, class URadialPickerItem_C* CallFunc_Array_Get_Item);
	void ClearActiveOption(class URadialPickerItem_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void GetOptionAngle(int32 Option, float* Angle, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void GetAngleDifference(float AngleA, float AngleB, float* Difference, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2);
	void GetOptionPosition(int32 Option, struct FVector2D* Position, float CallFunc_GetOptionAngle_Angle, float CallFunc_DegCos_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void InitializePicker(enum class EFortPickerMode PickerMode, int32 InitialOption, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class URadialPickerItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_GetOptionPosition_Position, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UFortPickerContext* CallFunc_GetContext_ReturnValue, class URadialPickerItem_C* CallFunc_Array_Get_Item, int32 CallFunc_GetNumPickerOptions_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, class UFortPickerContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_GetRadialPickerOptionItem_Item, bool CallFunc_GetRadialPickerOptionItem_bOptionEnabled, class FText CallFunc_GetRadialPickerOptionImageAndLabel_Label, const struct FSlateBrush& CallFunc_GetRadialPickerOptionImageAndLabel_Brush, bool CallFunc_GetRadialPickerOptionImageAndLabel_bOptionEnabled, bool CallFunc_Less_IntInt_ReturnValue2);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Event_AcceptOption();
	void Event_CancelPicker();
	void ClosePicker();
	void AcceptChosenOption(int32 PickerOption);
	void OnPickerRefreshItems();
	void ExecuteUbergraph_RadialPicker(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, float CallFunc_GetOptionAngle_Angle, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_CanConfirm_CanAccept, int32 K2Node_CustomEvent_PickerOption, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_DegAtan2_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetAngleDifference_Difference, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_DegAtan2_ReturnValue2, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue2, class UFortPickerContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, class URadialPickerItem_C* CallFunc_Array_Get_Item, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsGamepadInPickerDeadZone_bIsInDeadZone, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, class UFortPickerContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

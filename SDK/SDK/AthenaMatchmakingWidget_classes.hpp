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

// 0x10 (0x2E8 - 0x2D8)
// WidgetBlueprintGeneratedClass AthenaMatchmakingWidget.AthenaMatchmakingWidget_C
class UAthenaMatchmakingWidget_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(Transient, DuplicateTransient)
	class UImage*                                MatchmakingSpinner;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingWidget_C");
		return Clss;
	}

	void FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetPlayButtonState(bool bCanMatchmake);
	void Construct();
	void SetCancelButtonState(bool bIsMatchmaking);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void ExecuteUbergraph_AthenaMatchmakingWidget(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, bool Temp_bool_Variable, bool CallFunc_Conv_IntToBool_ReturnValue, class FText Temp_text_Variable, enum class EFortAthenaPlaylist Temp_byte_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, enum class EFortAthenaPlaylist Temp_byte_Variable2, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, bool Temp_bool_Variable2, class FText Temp_text_Variable10, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bCanMatchmake, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsMatchmaking, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button2, bool K2Node_DynamicCast_bSuccess2, int32 K2Node_ComponentBoundEvent_Value2, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

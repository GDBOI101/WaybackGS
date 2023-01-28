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

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C
class UReportSpectatingPlayerButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReportSpectatingPlayerButton_C");
		return Clss;
	}

	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_ReportSpectatingPlayerButton(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFeedback_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

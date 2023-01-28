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

// 0xA0 (0x480 - 0x3E0)
// WidgetBlueprintGeneratedClass AthenaWinWidget.AthenaWinWidget_C
class UAthenaWinWidget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillsWidget_C*                  AthenaKillsWidget_78;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayersLeftWidget_C*            AthenaPlayersLeftWidget_65;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                    AthenaSessionId;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_PrimaryDeathText;                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LeaveButton;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenShadowPlayHighlights;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTeamInfo_C*                     TeamInfo;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RespawnTimerHandle;                                // 0x430(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ReleaseTimeRemaining;                              // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReadyToRespawnText;                                // 0x440(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ShowExtraLivesTimerHandle;                         // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ResurrectTimeRemaining;                            // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlacePrefixText;                                   // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaWinWidget_C");
		return Clss;
	}

	void HighlightCountChanged(int32 HighlightCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void Construct();
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaWinWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

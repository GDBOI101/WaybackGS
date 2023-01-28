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

// 0x100 (0x4E0 - 0x3E0)
// WidgetBlueprintGeneratedClass AthenaDeathWidget.AthenaDeathWidget_C
class UAthenaDeathWidget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UAthenaGamePhaseWidget_C*              AthenaGamePhaseWidget;                             // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillerPortraitWidget_C*         AthenaKillerPortraitWidget;                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillsWidget_C*                  AthenaKillsWidget_102;                             // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayersLeftWidget_C*            AthenaPlayersLeftWidget;                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                    AthenaSessionId;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaViewTargetHitPointInfo_C*       AthenaViewTargetHitPointInfo;                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_PrimaryDeathText;                  // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     FollowNextTeammate;                                // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LeaveButton;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*             MinimapContainer;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenShadowPlayHighlights;                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlaceText;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReportSpectatingPlayerButton_C*       ReportPlayer;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTeamInfo_C*                     TeamInfo;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortActorCanvas*                      TeamMembersActorCanvas;                            // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        WinnerBox;                                         // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WinnerPlayerName;                                  // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            YouDiedOrSpectating;                               // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        YouPlacedBox;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            YouPlacedText;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  YouDied;                                           // 0x498(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Spectating;                                        // 0x4B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsWaitingForTeamEliminationForPlacement;           // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Place;                                             // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberIndicator_C*>  TeamMemberIndicators;                              // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDeathWidget_C");
		return Clss;
	}

	void UpdateYouPlacedBoxVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HighlightCountChanged(int32 HighlightCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateFollowNextTeammateVisibility(int32 NumTeammatesAlive, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<bool>& CallFunc_GetTeamDead_DeadStates, bool CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAthenaTeamMemberIndicator_C* CallFunc_Create_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AnyTeamMembersStillAlive(class AFortPlayerControllerAthena* PlayerController, bool* AnyAlive, bool Any_Alive, TArray<bool>& CallFunc_GetTeamDead_DeadStates, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnWinnerAnnounced(const class FString& Winner, class FText CallFunc_Conv_StringToText_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess);
	void HideExtraStuffForSpectating();
	void OnViewTargetChanged(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnPlaceChanged(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Format_ReturnValue, bool CallFunc_AnyTeamMembersStillAlive_AnyAlive, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default);
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void Construct();
	void On_Kill_Feed_Updated();
	void TeamMemberChanged();
	void BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDeathWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena2, bool K2Node_DynamicCast_bSuccess3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_AnyTeamMembersStillAlive_AnyAlive, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaTeamMemberIndicator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2, bool K2Node_DynamicCast_bSuccess5, class AFortPlayerStateAthena* CallFunc_Array_Get_Item2, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3, bool K2Node_DynamicCast_bSuccess6, int32 Temp_int_Loop_Counter_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena4, bool K2Node_DynamicCast_bSuccess7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

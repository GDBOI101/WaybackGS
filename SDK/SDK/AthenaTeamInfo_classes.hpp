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

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C
class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          _Vertical_Box__Team_Members;                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberInfo_C*>       TeamMembers;                                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamInfo_C");
		return Clss;
	}

	void HandleTeamMutedChanged(TArray<bool>& TeamMuted, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleTeamTalkingChanged(TArray<bool>& TeamTalking, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleTeamMemberRemoved(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleTeamRevivingChanged(TArray<bool>& TeamReviving, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleTeamMemberPlayerNamesChanged(int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleTeamDeadChanged(TArray<bool>& TeamDead, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleTeamDBNOChanged(TArray<bool>& TeamDBNO, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleTeamMemberAdded(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleTeamHitInfoChanged(TArray<float>& HealthFractions, TArray<float>& ShieldFractions, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item2, float CallFunc_Array_Get_Item3, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ClearContents();
	void AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int32 PlayerIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_BuildString_Int_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Construct();
	void HandlePartyLeft();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaTeamInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<bool>& CallFunc_GetTeamMuted_MutedStates, TArray<bool>& CallFunc_GetTeamTalking_TalkingStates, TArray<bool>& CallFunc_GetTeamReviving_RevivingStates, TArray<bool>& CallFunc_GetTeamDBNO_DBNOStates, TArray<bool>& CallFunc_GetTeamDead_DeadStates, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

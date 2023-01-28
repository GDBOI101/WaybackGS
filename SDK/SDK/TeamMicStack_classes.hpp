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

// 0x29 (0x289 - 0x260)
// WidgetBlueprintGeneratedClass TeamMicStack.TeamMicStack_C
class UTeamMicStack_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          _Vertical_Box__Team_Members;                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderFrame;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCinematic_TeamMics_C*>         TeamMembers;                                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         NewVar_0;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamMicStack_C");
		return Clss;
	}

	void ClearContents();
	void AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo, int32 CurrentIndex, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCinematic_TeamMics_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ShiftTeamMembers(struct FFortTeamMemberInfo& TeamMemberInfo, int32 Index, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, TArray<class UHUD_TeamMemberInfo_C*>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class UHUD_TeamMemberInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCinematic_TeamMics_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info, int32 CallFunc_Array_Length_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCinematic_TeamMics_C* CallFunc_Array_Get_Item);
	void HandleTeamMemberRemoved(int32 Member_Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void HandlePartyLeft();
	void ExecuteUbergraph_TeamMicStack(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Loop_Counter_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

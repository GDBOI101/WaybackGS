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

// 0x30 (0x410 - 0x3E0)
// WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C
class UOutpostScreenStormShieldPermissions_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UOutpostScreenCanEditPanel_C*          OutpostScreenCanEditPanel;                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         GetHelp;                                           // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CloseOutpostScreen;                                // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOutpostScreenStormShield_C*           ParentReference;                                   // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OutpostScreenStormShieldPermissions_C");
		return Clss;
	}

	void CenterWidget();
	void SetParent(class UOutpostScreenStormShield_C* ParentWidget);
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	bool IsOwningPlayerOutpostOwner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue);
	void UpdatePrivilages(bool CallFunc_isPlayerAlone_isAlone);
	void IsPlayerAlone(bool* IsAlone, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void UpdatePrivilagesEvent_0(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void UpdatePrivilagesEvent_1(int32 PlayerIndex);
	void OnActivated();
	void ExecuteUbergraph_OutpostScreenStormShieldPermissions(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void CloseOutpostScreen__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

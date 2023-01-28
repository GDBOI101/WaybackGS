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

// 0x1C8 (0x400 - 0x238)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
class UAthenaLobbyPlayerPanel_C : public UCommonUserWidget
{
public:
	class UAthenaLobbyPlayerPanelActions_C*      Actions;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border_TabM;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanelDetails_C*      Details;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x250(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnGadgetsClicked;                                  // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnClosed;                                          // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyPlayerPanel_C");
		return Clss;
	}

	void Cancel();
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasValidActions_bHasValidActions);
	void Refresh();
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void Initialize();
	void OnClosed__DelegateSignature();
	void OnGadgetsClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

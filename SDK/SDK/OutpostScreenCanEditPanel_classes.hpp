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

// 0x50 (0x290 - 0x240)
// WidgetBlueprintGeneratedClass OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C
class UOutpostScreenCanEditPanel_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     MasterSwitchButton;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoTeammates_TextBlock;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenCanEditRow_C*            OutpostScreenCanEditRow_0;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenCanEditRow_C*            OutpostScreenCanEditRow_1;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenCanEditRow_C*            OutpostScreenCanEditRow_2;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenCanEditRow_C*            OutpostScreenCanEditRow_3;                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PlayerlistBox;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*               OutpostOwner;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerOutpost*          FortPlayerControllerOutpostRef;                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OutpostScreenCanEditPanel_C");
		return Clss;
	}

	void CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOutpostScreenCanEditRow_C* K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row, bool K2Node_DynamicCast_bSuccess);
	void SetMasterSwitch(bool bCanEdit, class AFortPlayerStateOutpost* LocalPlayerState, bool LocalCanEdit, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void Init(class AFortPlayerControllerOutpost* InOutpostOwner, bool CallFunc_IsOutpostOwner_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UOutpostScreenCanEditRow_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool Selected);
	void Construct();
	void HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleRemoved(int32 PlayerIndex);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void PartyUpdated(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_OutpostScreenCanEditPanel(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortBaseButton* K2Node_ComponentBoundEvent_Button2, bool K2Node_ComponentBoundEvent_Selected2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

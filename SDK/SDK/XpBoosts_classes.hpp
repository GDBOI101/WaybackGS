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

// 0xC0 (0x2F8 - 0x238)
// WidgetBlueprintGeneratedClass XpBoosts.XpBoosts_C
class UXpBoosts_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UXpBoostRow_C*                         Ally0Boost;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                         Ally1Boost;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                         Ally2Boost;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CurrentBoosts;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostDailyBonus_C*                  DailyBonus;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                         LocalPlayerBoost;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PartyRows;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalBoost;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                     TotalIcon;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBarXpText_C*                        XpBoostBar;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostCounts_C*                      XpBoostCounts;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostInfoText_C*                    XpBoostInfoText;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostQuantities_C*                  XpBoostQuantities;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Total_Boost_Amount;                                // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3680[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UXpBoostRow_C*>                 Party_Members;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUniqueNetIdRepl                      Player_to_Boost;                                   // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<bool>                                 RowsBoosted;                                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBoosts_C");
		return Clss;
	}

	void Activate();
	void Update_Total_Boosts(bool Player_Boosted, bool Other_Boosted, int32 Temp_int_Array_Index_Variable, class UXpBoostRow_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Unbind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState);
	void Update_Total_Boost_Amounts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable2, class UXpBoostRow_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Get_Current_Boost_Boost_Amount, int32 CallFunc_Add_IntInt_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UXpBoostRow_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4);
	void HandleRemotePlayerRemoved(int32 RemovedIndex);
	void Bind_Party_Delegates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void Update_Current_Boosts(const struct FFortTeamMemberInfo& Temp_struct_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UXpBoostRow_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortTeamMemberInfo& K2Node_Select_Default);
	void Construct();
	void Give_Boost_Clicked(const struct FUniqueNetIdRepl& Player_to_Boost);
	void On_Party_Left();
	void On_Party_Joined();
	void Xp_Boost_Changed(int32 BoostAmount);
	void ExecuteUbergraph_XpBoosts(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_To_Boost, TArray<class UXpBoostRow_C*>& K2Node_MakeArray_Array, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UXpBoostRow_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_CustomEvent_BoostAmount, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

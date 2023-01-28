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

// 0x60 (0x290 - 0x230)
// WidgetBlueprintGeneratedClass XpBoostRow.XpBoostRow_C
class UXpBoostRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Boost;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BoostIcon;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     GiveXPButton;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsBoosted;                                         // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayer;                                          // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasPartyMember;                                    // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2798[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Give_Boost_Clicked;                                // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUniqueNetIdRepl                      Player_Id;                                         // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBoostRow_C");
		return Clss;
	}

	void HasBoost(class UFortAccountItemDefinition* AccountItemDef, bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Update_Boost_Material(bool Other_Boosted);
	void Center_On_Row(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Update_Party_Member(bool Row_Has_Party_Member, const struct FFortTeamMemberInfo& Party_Members_Info, class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_HasBoost_Result, bool CallFunc_HasBoost_Result2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue, int32 CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue2, class FText CallFunc_Format_ReturnValue3);
	void OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62();
	void DialogResult_9BF60C804C82DAA0C1A2839132130883(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0(enum class EFortDialogResult Result, class FName ResultName);
	void OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C();
	void BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_XpBoostRow(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, bool K2Node_SwitchEnum2_CmpSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue2, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4);
	void Give_Boost_Clicked__DelegateSignature(const struct FUniqueNetIdRepl& Player_to_Boost);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

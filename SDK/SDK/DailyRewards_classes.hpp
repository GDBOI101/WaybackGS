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

// 0x7A (0x48A - 0x410)
// WidgetBlueprintGeneratedClass DailyRewards.DailyRewards_C
class UDailyRewards_C : public UFortDailyRewards
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ClaimedRewardBox;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentDaysLogged;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CurrentRewardsBox;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                DailyRewardsCurrent_C_8;                           // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MainBorder;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SchedulesVerticalBox;                              // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ViewOrClaimSwitcher;                               // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LengthOfWeek;                                      // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDailyRewardsComplete;                            // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumSchedulesToDisplay;                             // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDailyRewardsCurrent_C*>        Rewards_to_Receive;                                // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Currently_Open;                                    // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Trigger_Update_On_Complete;                        // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyRewards_C");
		return Clss;
	}

	void Handle_Collect(bool* PassThrough);
	void Handle_Close(bool* PassThrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void PopPanelWhileInGame(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void Setup_Daily_Rewards(int32 Temp_int_Array_Index_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize2, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable2, class UDailyRewardsCurrent_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UDailyRewardsMissingFoundersPack_C* CallFunc_Create_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class EInputActionState Temp_byte_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UDailyRewardsCurrent_C* CallFunc_Create_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class UDailyRewardsSchedule_C* CallFunc_Create_ReturnValue4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, enum class EInputActionState Temp_byte_Variable4, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFortDailyRewardsData& CallFunc_TryGetDailyRewardsData_OutDailyRewardsData, bool CallFunc_TryGetDailyRewardsData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortDailyRewardsScheduleData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, enum class EInputActionState K2Node_Select2_Default, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>& Loot);
	void OnDeactivated();
	void Destruct();
	void ExecuteUbergraph_DailyRewards(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsInZone_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, TArray<struct FFortItemInstanceQuantityPair>& K2Node_Event_Loot, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UDailyRewardsCurrent_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void OnDailyRewardsComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

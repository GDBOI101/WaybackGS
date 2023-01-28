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

// 0x70 (0x2A8 - 0x238)
// WidgetBlueprintGeneratedClass Results_Summary.Results_Summary_C
class UResults_Summary_C : public UFortResultsSummaryScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonClose;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridBadges;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLootChest;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayRewards;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLootLevel;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextTeamScore;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPlayerScores;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnReturnClicked;                                   // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumberGridBadgeRows;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PointsPerLootLevel;                                // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    ChestIcons;                                        // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_Summary_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void InitializeRewards(TArray<class UFortItem*>& Items, int32 InTotalMissionPoints, int32 Row, int32 Column, int32 TotalBadgePoints, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, class UResults_SummaryBadge_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void DoDesignTimeRandomization(int32 Row, int32 Column, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, class UResults_PlayerScoreRow_C* CallFunc_Create_ReturnValue, class UResults_SummaryBadge_C* CallFunc_Create_ReturnValue2, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Initialize(class UFortUIScoreReport* InScoreReport, TArray<class UFortItem*>& InRewardItems, int32 InTotalMissionPoints, const TArray<class UFortItem*>& RewardItems, class UFortUIScoreReport* ScoreReport, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue2, int32 CallFunc_GetTeamScore_ReturnValue3, int32 CallFunc_GetTeamScore_ReturnValue4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<int32>& CallFunc_GetTotalScoreSortedScoreIndices_OutSortedScoreIndices, class UResults_PlayerScoreRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void InitializeLootChest(int32 Level, int32 NewLocalVar_0, class UTexture2D* Texture, int32 CallFunc_Add_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_Results_Summary(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime);
	void OnReturnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

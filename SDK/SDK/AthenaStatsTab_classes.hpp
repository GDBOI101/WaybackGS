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

// 0xE0 (0x580 - 0x4A0)
// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
class UAthenaStatsTab_C : public UAthenaStatsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class UComingSoonPlaceholderWidget_C*        ComingSoonPlaceholderWidget;                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider1;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider2;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 HiddenSwitcher;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     KillsRow;                                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LastUpdatedTime;                                   // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LastUpdatedTimeBox;                                // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     MatchesPlayedRow;                                  // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 SecondTierTile;                                    // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 ThirdTierTile;                                     // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     TimePlayedRow;                                     // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        UpdatingBox;                                       // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 WinsTile;                                          // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             TagToDisplayName;                                  // 0x530(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaStatsTab_C");
		return Clss;
	}

	void UpdateLastUpdatedTime(bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_GetLastUpdateTime_ReturnValue);
	void UpdateStats(int32 CallFunc_GetStatValue_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue2, class FText CallFunc_FormatStatValueAsElapsedTime_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue3, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue4, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue3, int32 CallFunc_GetStatValue_ReturnValue5, class FText CallFunc_Conv_IntToText_ReturnValue4, const class FString& CallFunc_GetWinsTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue6, class FText CallFunc_Conv_IntToText_ReturnValue5);
	void Construct();
	void OnActivated();
	void OnQueryFinished(bool bWasSuccessful);
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnQueryStarted();
	void OnDeactivated();
	void ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue, int32 K2Node_Select_Default, bool K2Node_Event_bWasSuccessful, class FName K2Node_ComponentBoundEvent_TabId, const class FString& CallFunc_GetWinsTag_ReturnValue, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class FText CallFunc_Map_Find_Value3, bool CallFunc_Map_Find_ReturnValue3, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

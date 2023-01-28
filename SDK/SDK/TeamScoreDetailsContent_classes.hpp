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

// 0x38 (0x278 - 0x240)
// WidgetBlueprintGeneratedClass TeamScoreDetailsContent.TeamScoreDetailsContent_C
class UTeamScoreDetailsContent_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_2;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreBarsWidget_C*                    ScoreBarsWidget_0;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxScores;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamScoreDetailsContent_C");
		return Clss;
	}

	void TrimUnusedRows(int32 CallFunc_GetPlayerCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetRowData(int32 RowIdx, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UScoreDetailsRow_C* K2Node_DynamicCast_AsScore_Details_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue2, int32 CallFunc_GetPlayerScore_ReturnValue3, int32 CallFunc_GetPlayerScore_ReturnValue4, class FText CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreDetailsRow_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void OnScoreReportChanged();
	void ExecuteUbergraph_TeamScoreDetailsContent(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

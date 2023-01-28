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

// 0x81 (0x2B9 - 0x238)
// WidgetBlueprintGeneratedClass Results_PlayerScoreRow.Results_PlayerScoreRow_C
class UResults_PlayerScoreRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UBasicGradientFill_C*                  BasicGradientFill;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCapLeft;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCapRight;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCenter;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextHomeBasePower;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreBuilding;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreCombat;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreMission;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreTotal;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreUtility;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          PlayerNameColor;                                   // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LocalPlayerNameColor;                              // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLocalPlayer;                                    // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_PlayerScoreRow_C");
		return Clss;
	}

	void InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void InitializePlayerName(class UFortUIScoreReport* ScoreReport, int32 ScoreReportReferece, class FText CallFunc_GetPlayerName_ReturnValue);
	void InitializeScores(class UFortUIScoreReport* InScoreReport, int32 InScoreReportIndex, const TArray<class UCommonNumericTextBlock*>& TextScoresOrdered, const TArray<enum class EFortUIScoreType>& ScoreTypesOrdered, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, enum class EFortUIScoreType CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<enum class EFortUIScoreType>& K2Node_MakeArray_Array2);
	void InitializeBackground(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize(class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl, bool CallFunc_IsLocalPlayer_ReturnValue);
	void Manual_Pre_Construct(bool bIsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Results_PlayerScoreRow(int32 EntryPoint, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, const class FString& Temp_string_Variable4, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue2, int32 CallFunc_RandomInteger_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue2, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_bIsDesignTime, bool CallFunc_RandomBool_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

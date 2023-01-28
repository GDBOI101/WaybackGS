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

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C
class UWorkerTooltipStatsWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UTextBlock*                            BuildingSynergyTextBlock;                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PersonalityTextBlock;                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SetBonusTextBlock;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortWorker*                           Worker_Item;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WorkerTooltipStatsWidget_C");
		return Clss;
	}

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void On_Worker_Preview_State_Changed();
	void ExecuteUbergraph_WorkerTooltipStatsWidget(int32 EntryPoint, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_GetWorkerPreviewStatus_OutIsPreviewing, class UFortWorker* CallFunc_GetWorkerPreviewStatus_OutWorker, bool CallFunc_GetWorkerPreviewStatus_OutMatchesPersonality, bool CallFunc_GetWorkerPreviewStatus_OutMatchesSquadType, const struct FWorkerSetBonusState& CallFunc_GetWorkerPreviewStatus_OutSetBonusState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool Temp_bool_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& CallFunc_Calculate_Current_Pulsing_Highlight_Color_Current_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue4, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

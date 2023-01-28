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

// 0x10 (0x248 - 0x238)
// WidgetBlueprintGeneratedClass QuestProgressWidget.QuestProgressWidget_C
class UQuestProgressWidget_C : public UCommonUserWidget
{
public:
	class UProgressBar*                          _ProgressBar__Quest_Progress;                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ProgressValue;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestProgressWidget_C");
		return Clss;
	}

	void Update(int32 Required, int32 Achieved, int32 Current, int32 Total, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, int32 CallFunc_Max_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, float CallFunc_Conv_IntToFloat_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

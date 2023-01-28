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

// 0x170 (0x3E8 - 0x278)
// WidgetBlueprintGeneratedClass QuestTrackerSubEntry.QuestTrackerSubEntry_C
class UQuestTrackerSubEntry_C : public UFortQuestTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      CheckmarkAnimation;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompletionRemove;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompletionFlash;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BulletOverlay;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Checkmark;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FlashImage;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ObjectiveDescriptionText;                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pin;                                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           NonHUDBullet;                                      // 0x2C8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           NonHUDPin;                                         // 0x358(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTrackerSubEntry_C");
		return Clss;
	}

	float GetHeightEstimate(class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void HandleRemoveFinished();
	void HideIfEmpty(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateObjectiveText(class FText ObjectiveProgressText, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable3, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue2, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default);
	void Construct();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void OnCompletionFlashFInished();
	void PostCompletionDelay();
	void ExecuteUbergraph_QuestTrackerSubEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

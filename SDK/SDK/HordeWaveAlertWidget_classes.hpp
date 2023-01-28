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

// 0x7C (0x2BC - 0x240)
// WidgetBlueprintGeneratedClass HordeWaveAlertWidget.HordeWaveAlertWidget_C
class UHordeWaveAlertWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AppearanceAndDisappearance_Quick;                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ModifierDisappearance;                             // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ModifierAppearance;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AppearanceAndDisappearance;                        // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HordeLevelText;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ModifierAddedText;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardText;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHordeWaveModifiersWidget_C*           WaveModifiersWidget;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WaveNumText;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WaveText;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        AllModsPresentedDisplayDelay;                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> EmptyArray;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        PostInitializationDelay;                           // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HordeWaveAlertWidget_C");
		return Clss;
	}

	void OnWaveStarted(class FText& LevelText, int32 Level, class FText& WaveText, int32 WaveNum);
	void OnWaveCompleted(int32 Wave, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnHordeTierInitialized_Event_0(TArray<struct FFortItemInstanceQuantityPair>& Items);
	void OnWaveModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers);
	void Construct();
	void OnModifierAppearanceAnimComplete();
	void OnAllModifiersPresented();
	void OnAppearanceDisappearanceAnimComplete();
	void OnModifierDisappearanceAnimComplete();
	void OnAppearanceDisappearanceAnimComplete_Quick();
	void ExecuteUbergraph_HordeWaveAlertWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_LevelText, int32 K2Node_CustomEvent_Level, class FText K2Node_CustomEvent_WaveText, int32 K2Node_CustomEvent_WaveNum, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 K2Node_CustomEvent_Wave, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Rewards, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_Items, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_Modifiers, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

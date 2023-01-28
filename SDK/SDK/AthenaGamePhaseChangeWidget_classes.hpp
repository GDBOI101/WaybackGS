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

// 0x54 (0x2BC - 0x268)
// WidgetBlueprintGeneratedClass AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C
class UAthenaGamePhaseChangeWidget_C : public UAthenaHUDGamePhaseChangingBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IconSlide;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      IconPulse;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ModeChanged;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Content;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Feedback;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MESSAGE;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimeText;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortGameStateAthena*                  GameState_0;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ServerTime;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGamePhaseChangeWidget_C");
		return Clss;
	}

	void PlayGamePhaseAlertSound(enum class EAthenaGamePhaseStep Index, enum class EAthenaGamePhaseStep Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* Temp_object_Variable9, class USoundBase* Temp_object_Variable10, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void ExecuteUbergraph_AthenaGamePhaseChangeWidget(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable10, enum class EAthenaGamePhaseStep K2Node_Event_Step2, class FText K2Node_Event_Message, class FText K2Node_Event_TimeText, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaGamePhaseStep K2Node_Event_Step, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x38 (0x2B8 - 0x280)
// WidgetBlueprintGeneratedClass AthenaPlayerActionAlert.AthenaPlayerActionAlert_C
class UAthenaPlayerActionAlert_C : public UAthenaHUDPlayerActionAlertBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      CrawlDown;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      FlashRun;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowAlert;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MessageSwitcher;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerDownText;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerEliminatedText;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerActionAlert_C");
		return Clss;
	}

	void AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_AthenaPlayerActionAlert(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable2, enum class EAthenaPlayerActionAlert K2Node_Event_Alert, class FText K2Node_Event_DetailText, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable3, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaPlayerActionAlert Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

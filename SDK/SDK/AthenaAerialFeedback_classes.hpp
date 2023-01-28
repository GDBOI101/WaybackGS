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

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C
class UAthenaAerialFeedback_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        Feedback;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FeedbackText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget_0;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaAerialFeedback_C");
		return Clss;
	}

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_AthenaAerialFeedback(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EAthenaAerialPhase Temp_byte_Variable, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_Format_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess2, enum class EAthenaAerialPhase CallFunc_GetAerialPhase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

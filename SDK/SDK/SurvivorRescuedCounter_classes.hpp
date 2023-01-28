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
// WidgetBlueprintGeneratedClass SurvivorRescuedCounter.SurvivorRescuedCounter_C
class USurvivorRescuedCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               NumberSurvivors;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SurvivorRescuedCounter_C");
		return Clss;
	}

	void UpdateSurvivorsRescued(int32 SurvivorsRescued, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_SurvivorRescuedCounter(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumSurvivorsRescued_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

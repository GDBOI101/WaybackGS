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

// 0x60 (0x298 - 0x238)
// WidgetBlueprintGeneratedClass AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C
class UAthenaKillerPortraitWidget_C : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      KillerNameText;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortPlayerDeathReport                Death_Report;                                      // 0x248(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaKillerPortraitWidget_C");
		return Clss;
	}

	void GetOwningPlayerState(class AFortPlayerStateAthena** AsFort_Player_State_Athena, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Init(struct FFortPlayerDeathReport& DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortKillerVisualInfo& CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue, class AFortPlayerStateAthena* CallFunc_GetOwningPlayerState_AsFort_Player_State_Athena, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue2, bool CallFunc_HasTag_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

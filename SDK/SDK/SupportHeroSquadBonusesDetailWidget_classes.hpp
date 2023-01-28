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

// 0x19 (0x2B9 - 0x2A0)
// WidgetBlueprintGeneratedClass SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C
class USupportHeroSquadBonusesDetailWidget_C : public UFortSquadSlotItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UFortHeroSupportPerkWidget_C*          SupportPerkWidget;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHeroSupportPerkWidget_C*          TacticalPerkWidget;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AlwaysDisplayDescriptions;                         // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SupportHeroSquadBonusesDetailWidget_C");
		return Clss;
	}

	void SetState(enum class EFortSupportPerkWidgetState InState);
	void UpdatePerkWidgets(bool Temp_bool_Variable, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, enum class EFortSupportBonusType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortSupportBonusType Temp_byte_Variable2, enum class EFortSupportBonusType K2Node_Select_Default);
	void UpdateVisibility(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentSquadSlotSetBP();
	void Construct();
	void ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

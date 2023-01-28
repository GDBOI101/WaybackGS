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

// 0x12 (0x2B2 - 0x2A0)
// WidgetBlueprintGeneratedClass PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C
class UPrimaryHeroActiveAbilitiesListDetailWidget_C : public UFortSquadSlotItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UPerksList_C*                          PerksList;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         EnableMouseTooltips;                               // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DisplayOutsideOfHeroSquad;                         // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PrimaryHeroActiveAbilitiesListDetailWidget_C");
		return Clss;
	}

	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentSquadSlotSetBP();
	void Construct();
	void ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget(int32 EntryPoint, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2, bool Temp_bool_Variable, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad2, bool CallFunc_TryGetHomebaseSquadData_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

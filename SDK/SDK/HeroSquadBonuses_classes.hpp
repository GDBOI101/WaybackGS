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

// 0x0 (0x278 - 0x278)
// WidgetBlueprintGeneratedClass HeroSquadBonuses.HeroSquadBonuses_C
class UHeroSquadBonuses_C : public UFortHeroSquadBonusPerksWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadBonuses_C");
		return Clss;
	}

	void OnSquadSlotSelected(int32 SquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus2, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x0 (0x70 - 0x70)
// BlueprintGeneratedClass GCNS_GM_OnDeathAreaHeal.GCNS_GM_OnDeathAreaHeal_C
class UGCNS_GM_OnDeathAreaHeal_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNS_GM_OnDeathAreaHeal_C");
		return Clss;
	}

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

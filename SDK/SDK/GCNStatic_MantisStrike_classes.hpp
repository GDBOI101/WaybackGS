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

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GCNStatic_MantisStrike.GCNStatic_MantisStrike_C
class UGCNStatic_MantisStrike_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNStatic_MantisStrike_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class USoundBase* LocalMantisStrikeImpactCue, class UParticleSystem* LocalP_MantisStrikeImpact, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

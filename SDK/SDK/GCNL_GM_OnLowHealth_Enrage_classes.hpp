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

// 0x18 (0x480 - 0x468)
// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C
class AGCNL_GM_OnLowHealth_Enrage_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*              BodyMistFX;                                        // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Hand_Trail_L;                                      // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              HandTrailR;                                        // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GM_OnLowHealth_Enrage_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_GetVisualEffectQuality_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

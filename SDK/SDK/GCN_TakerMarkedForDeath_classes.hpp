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

// 0x49 (0x4B1 - 0x468)
// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              OverHeadEffect;                                    // 0x470(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 MiniMapCrosshair;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 MiniMapIconBackground;                             // 0x480(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   TakerFeedbackEvent;                                // 0x488(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TakerFeedbackRepeatDelay;                          // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TakerFeedbackInitialDelay;                         // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_GameplayStatusStun;                             // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerIsStunned;                                   // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_TakerMarkedForDeath_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess2, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

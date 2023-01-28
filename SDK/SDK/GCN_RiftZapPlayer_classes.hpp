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
// BlueprintGeneratedClass GCN_RiftZapPlayer.GCN_RiftZapPlayer_C
class UGCN_RiftZapPlayer_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_RiftZapPlayer_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AB_DtB_LightningZap_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_OnExecute_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, class AB_DtB_LightningZap_C* K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// BlueprintGeneratedClass GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C
class AGCNL_Enemy_Frozen_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*              Ice_Particles;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  IceMesh;                                           // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IceMeshMID;                                        // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Enemy_Frozen_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_RandomFloatInRange_ReturnValue, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_SpawnMeshAttachedToCharacter_Static_Mesh_Component_Reference, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

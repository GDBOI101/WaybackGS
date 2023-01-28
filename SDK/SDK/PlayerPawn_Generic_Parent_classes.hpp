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

// 0xC0 (0x1770 - 0x16B0)
// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x16B0(0x8)(Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x16B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x16C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x16D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x16E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x16F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x1708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x1718(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnLegsMaterials;                                 // 0x1728(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnTorsoMaterials;                                // 0x1738(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x1748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x1750(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x1760(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Generic_Parent_C");
		return Clss;
	}

	void Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Select_Default, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
	void GameplayCue_Teleport_Out(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void GameplayCue_Teleport_In(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

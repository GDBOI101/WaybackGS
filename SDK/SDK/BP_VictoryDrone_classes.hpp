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

// 0x48 (0x430 - 0x3E8)
// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PlayerTeleportEffect;                              // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnEffect;                                       // 0x400(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x408(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  SpawnOutAnimEndedDispatcher;                       // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        AnimPlayRate;                                      // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              StaticMeshMID;                                     // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_VictoryDrone_C");
		return Clss;
	}

	void NotifyTeleportFinishedTriggered(bool CallFunc_HasAuthority_ReturnValue);
	void PlaySpawnOutAnim(class UAnimMontage* Montage, float NewLocalVar_0, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void InitDrone(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue);
	void TriggerPlayerSpawnEffects(bool CallFunc_HasAuthority_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, float K2Node_Event_DeltaSeconds, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

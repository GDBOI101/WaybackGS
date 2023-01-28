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

// 0xB8 (0x440 - 0x388)
// BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  WeaponHiddenLocation;                              // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SKMeleeWeapon;                                     // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MeleeWeaponDefaultPosition;                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponRoot;                                        // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PinataSceneRoot;                                   // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>             SoundWeaponReady;                                  // 0x3B8(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>             SoundWeaponSwing;                                  // 0x3D8(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>             SoundWeaponImpact;                                 // 0x3F8(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponObject;                                      // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          WeaponAssetID;                                     // 0x420(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreWeaponMaster_BP_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoaded_F90E39F1410BE83EB4E318A6426EF786(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

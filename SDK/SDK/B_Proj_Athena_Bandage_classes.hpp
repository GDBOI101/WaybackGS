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

// 0x18 (0x810 - 0x7F8)
// BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C
class AB_Proj_Athena_Bandage_C : public AFortProjectileBase
{
public:
	uint8                                        Pad_2F38[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  MedBandage;                                        // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Proj_Athena_Bandage_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnStop(struct FHitResult& Hit);
	void OnBounce(struct FHitResult& Hit);
	void ExecuteUbergraph_B_Proj_Athena_Bandage(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit3, const struct FHitResult& K2Node_Event_Hit2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

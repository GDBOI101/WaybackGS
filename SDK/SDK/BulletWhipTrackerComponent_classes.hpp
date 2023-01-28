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

// 0x5C (0x14C - 0xF0)
// BlueprintGeneratedClass BulletWhipTrackerComponent.BulletWhipTrackerComponent_C
class UBulletWhipTrackerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PassByPawn;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousPlaneDotProd;                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VelocityDirection;                                 // 0x104(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0x110(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedPassDistance;                                // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PassByClosenessIntensity;                          // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedPassBySound;                             // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PassByRadiusMax;                                   // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PassByRadiusMin;                                   // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PassByFarSound;                                    // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PassByCloseSound;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End;                                               // 0x140(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BulletWhipTrackerComponent_C");
		return Clss;
	}

	void PlayWhipSound(const struct FVector& Location, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	class AFortPlayerPawn* GetLocalPawnForTracking(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void TrackWhipStatus(bool* Changed, float* Whip_Distance, bool ChangedResult, class AFortPlayerPawn* CallFunc_GetLocalPawnForTracking_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_VSize_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void Reset(const struct FVector& StartLocation);
	void Update_Velocity(const struct FVector& Current_Velocity);
	void ExecuteUbergraph_BulletWhipTrackerComponent(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Current_Velocity, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_TrackWhipStatus_Changed, float CallFunc_TrackWhipStatus_Whip_Distance, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FVector& K2Node_CustomEvent_StartLocation, bool CallFunc_TrackWhipStatus_Changed2, float CallFunc_TrackWhipStatus_Whip_Distance2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x64 (0x474 - 0x410)
// BlueprintGeneratedClass TracerGeneric.TracerGeneric_C
class ATracerGeneric_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	float                                        PreviousPlaneDotProd;                              // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedPassBySound;                             // 0x41C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CachedDirectionVector;                             // 0x420(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Start;                                             // 0x42C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End;                                               // 0x438(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PassByRadiusMin;                                   // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PassByRadiusMax;                                   // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            PassByFarSound;                                    // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PassByCloseSound;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PassByClosenessIntensity;                          // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PassByPawn;                                        // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedPassDistance;                                // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TracerGeneric_C");
		return Clss;
	}

	class AFortPlayerPawn* GetLocalPawnForPassBy(class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void PlayPassBySound(const struct FVector& Location, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void TrackPassBy(bool* Changed, float* Pass_Distance, bool ChangedResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, float CallFunc_VSize_ReturnValue, class AFortPlayerPawn* CallFunc_GetLocalPawnForPassBy_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void ReceiveTick(float DeltaSeconds);
	void OnInit(struct FVector& Start, struct FVector& End);
	void ExecuteUbergraph_TracerGeneric(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_TrackPassBy_Changed, float CallFunc_TrackPassBy_Pass_Distance, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& K2Node_Event_Start, const struct FVector& K2Node_Event_End, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TrackPassBy_Changed2, float CallFunc_TrackPassBy_Pass_Distance2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

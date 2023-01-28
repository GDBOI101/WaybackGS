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

// 0xB0 (0x970 - 0x8C0)
// BlueprintGeneratedClass WM_Camera.WM_Camera_C
class AWM_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	float                                        TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1; // 0x8C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1; // 0x8CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4066[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_CameraDeactivateAnim;                           // 0x8D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B; // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B; // 0x8DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4067[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_CameraActivateAnim;                             // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x8F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4068[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraNoise;                                       // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            InitialPosition;                                   // 0x900(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            ZoomPosition;                                      // 0x930(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AWorldMapPin*>                  AllPinsArray;                                      // 0x960(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WM_Camera_C");
		return Clss;
	}

	void UserConstructionScript(const struct FTransform& CallFunc_GetTransform_ReturnValue);
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void CameraActivateAnim();
	void StopWiggle();
	void CameraDeactivateAnim();
	void CameraWiggle();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_WM_Camera(int32 EntryPoint, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_TLerp_ReturnValue2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AWM_Lights_C* CallFunc_Array_Get_Item2, TArray<class AWM_Lights_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AWM_Lights_C* CallFunc_Array_Get_Item3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function WM_Camera.WM_Camera_C.UserConstructionScript
struct AWM_Camera_C_UserConstructionScript_Params
{
public:
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x0(0x30)(IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__FinishedFunc
struct AWM_Camera_C_TL_CameraActivateAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__UpdateFunc
struct AWM_Camera_C_TL_CameraActivateAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__FinishedFunc
struct AWM_Camera_C_TL_CameraDeactivateAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__UpdateFunc
struct AWM_Camera_C_TL_CameraDeactivateAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.CameraNoise__FinishedFunc
struct AWM_Camera_C_CameraNoise__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.CameraNoise__UpdateFunc
struct AWM_Camera_C_CameraNoise__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.CameraActivateAnim
struct AWM_Camera_C_CameraActivateAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.StopWiggle
struct AWM_Camera_C_StopWiggle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.CameraDeactivateAnim
struct AWM_Camera_C_CameraDeactivateAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.CameraWiggle
struct AWM_Camera_C_CameraWiggle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.OnDeactivated
struct AWM_Camera_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Camera.WM_Camera_C.OnActivated
struct AWM_Camera_C_OnActivated_Params
{
public:
};

// 0x468 (0x468 - 0x0)
// Function WM_Camera.WM_Camera_C.ExecuteUbergraph_WM_Camera
struct AWM_Camera_C_ExecuteUbergraph_WM_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x10(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x38(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4061[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x50(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue;                        // 0x80(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location2;                 // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation2;                 // 0xBC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale2;                    // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X2;                           // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y2;                           // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z2;                           // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue2;                  // 0xE4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0xF0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location3;                 // 0x120(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation3;                 // 0x12C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale3;                    // 0x138(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4062[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue2;                       // 0x150(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X3;                           // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y3;                           // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z3;                           // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4063[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x190(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue3;                  // 0x220(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x22C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4064[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue3;               // 0x240(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorRelativeTransform_SweepHitResult; // 0x270(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetActorRelativeTransform_SweepHitResult2; // 0x2F8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x388(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4065[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x418(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWM_Lights_C*>                  CallFunc_GetAllActorsOfClass_OutActors2;           // 0x438(0x10)(ZeroConstructor, ReferenceParm)
	class AWM_Lights_C*                          CallFunc_Array_Get_Item2;                          // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWM_Lights_C*>                  CallFunc_GetAllActorsOfClass_OutActors3;           // 0x450(0x10)(ZeroConstructor, ReferenceParm)
	class AWM_Lights_C*                          CallFunc_Array_Get_Item3;                          // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

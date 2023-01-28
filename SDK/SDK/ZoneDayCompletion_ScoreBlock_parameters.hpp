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

// 0x8 (0x8 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.SetScore
struct UZoneDayCompletion_ScoreBlock_C_SetScore_Params
{
public:
	int32                                        New_Score;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.On Count Finished
struct UZoneDayCompletion_ScoreBlock_C_On_Count_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Outro
struct UZoneDayCompletion_ScoreBlock_C_Outro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Intro
struct UZoneDayCompletion_ScoreBlock_C_Intro_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Increment
struct UZoneDayCompletion_ScoreBlock_C_Increment_Params
{
public:
	int32                                        New_Score;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Interpolation_Length;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_358A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Construct
struct UZoneDayCompletion_ScoreBlock_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature_Params
{
public:
	class UFortNumericTextBlock*                 NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.ExecuteUbergraph_ZoneDayCompletion_ScoreBlock
struct UZoneDayCompletion_ScoreBlock_C_ExecuteUbergraph_ZoneDayCompletion_ScoreBlock_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNumericTextBlock*                 K2Node_ComponentBoundEvent_NumericTextBlock;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.OutroComplete__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_OutroComplete__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IncrementComplete__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_IncrementComplete__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.IntroComplete__DelegateSignature
struct UZoneDayCompletion_ScoreBlock_C_IntroComplete__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

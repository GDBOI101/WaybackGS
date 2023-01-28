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

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SkipToFinalState
struct UResults_TeamScoreBox_C_SkipToFinalState_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SetSkippingToEnd
struct UResults_TeamScoreBox_C_SetSkippingToEnd_Params
{
public:
	bool                                         CallFunc_IsInterpolatingNumericValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.UpdateFlashTextType
struct UResults_TeamScoreBox_C_UpdateFlashTextType_Params
{
public:
	struct FLinearColor                          ColorWhite;                                        // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimePassed;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3626[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)()
};

// 0x20 (0x20 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.FlashTextType
struct UResults_TeamScoreBox_C_FlashTextType_Params
{
public:
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3627[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Initialize
struct UResults_TeamScoreBox_C_Initialize_Params
{
public:
	enum class EFortUIScoreType                  ScoreType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3628[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F1 (0x3F1 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.InitializeScoreType
struct UResults_TeamScoreBox_C_InitializeScoreType_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x18(0x18)(Edit)
	struct FFortScoreStylingInfo                 CallFunc_GetScoreStylingData_ScoreStylingInfo;     // 0x30(0x388)()
	bool                                         CallFunc_GetScoreStylingData_ReturnValue;          // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3629[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x3C0(0x28)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Intro Sequence
struct UResults_TeamScoreBox_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Up Sequence
struct UResults_TeamScoreBox_C_Count_Up_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Down Sequence
struct UResults_TeamScoreBox_C_Count_Down_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.PreConstruct
struct UResults_TeamScoreBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Up Finished
struct UResults_TeamScoreBox_C_Text_Count_Up_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Down Finished
struct UResults_TeamScoreBox_C_Text_Count_Down_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Skip Count Interpolation
struct UResults_TeamScoreBox_C_Skip_Count_Interpolation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Stop Count Down Absorption
struct UResults_TeamScoreBox_C_Stop_Count_Down_Absorption_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_TeamScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.ExecuteUbergraph_Results_TeamScoreBox
struct UResults_TeamScoreBox_C_ExecuteUbergraph_Results_TeamScoreBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue2;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue5;                   // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCommonNumericTextBlock*               K2Node_ComponentBoundEvent_NumericTextBlock;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_HadCompleted;           // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue6;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue2;         // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.IntroFinished__DelegateSignature
struct UResults_TeamScoreBox_C_IntroFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountDownFinished__DelegateSignature
struct UResults_TeamScoreBox_C_CountDownFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountUpFinished__DelegateSignature
struct UResults_TeamScoreBox_C_CountUpFinished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

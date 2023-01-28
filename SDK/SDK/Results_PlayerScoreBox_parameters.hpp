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

// 0x1 (0x1 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox
struct UResults_PlayerScoreBox_C_GetIsValidScoreBox_Params
{
public:
	bool                                         bIsValidScoreBox;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox
struct UResults_PlayerScoreBox_C_SetIsValidScoreBox_Params
{
public:
	bool                                         bIsValidScoreBox;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd
struct UResults_PlayerScoreBox_C_SetSkippingToEnd_Params
{
public:
	bool                                         CallFunc_IsInterpolatingNumericValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore
struct UResults_PlayerScoreBox_C_SetIsBestScore_Params
{
public:
	bool                                         bIsBestScore;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ScoreColor;                                        // 0x4(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x28)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize
struct UResults_PlayerScoreBox_C_Initialize_Params
{
public:
	int32                                        Score;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue2;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct
struct UResults_PlayerScoreBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence
struct UResults_PlayerScoreBox_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_PlayerScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence
struct UResults_PlayerScoreBox_C_Count_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation
struct UResults_PlayerScoreBox_C_Skipped_Count_Interpolation_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_PlayerScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox
struct UResults_PlayerScoreBox_C_ExecuteUbergraph_Results_PlayerScoreBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               K2Node_ComponentBoundEvent_NumericTextBlock;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_HadCompleted;           // 0x20(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

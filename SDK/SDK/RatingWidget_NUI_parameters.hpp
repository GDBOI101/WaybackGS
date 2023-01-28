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
// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
struct URatingWidget_NUI_C_SetShouldShowTeamPowerRating_Params
{
public:
	bool                                         ShowTeamRating;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
struct URatingWidget_NUI_C_Override_Default_Color_Set_Params
{
public:
	bool                                         Override;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Light_Color;                                       // 0x4(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Medium_Color;                                      // 0x14(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Dark_Color;                                        // 0x24(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x409 (0x409 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
struct URatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Parameter;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   MBrush;                                            // 0x10(0x360)(Parm)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x370(0x90)(ConstParm)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
struct URatingWidget_NUI_C_Update_From_Unique_ID_Params
{
public:
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLocalTeamHomebaseRating_Rating;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLocalTeamHomebaseRating_ProgressFraction; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLocalTeamHomebaseRating_ReturnValue;   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D02[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTotalHomebaseRating_Rating;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
struct URatingWidget_NUI_C_Set_Unique_ID_Params
{
public:
	struct FUniqueNetIdRepl                      ID;                                                // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Update
struct URatingWidget_NUI_C_Update_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
struct URatingWidget_NUI_C_Update_Rating_Value_Params
{
public:
	int32                                        Rating;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
struct URatingWidget_NUI_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
struct URatingWidget_NUI_C_PlayerInfoChanged_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.Construct
struct URatingWidget_NUI_C_Construct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
struct URatingWidget_NUI_C_PlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1E8 (0x1E8 - 0x0)
// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
struct URatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UniqueId;                       // 0x30(0x18)(ConstParm, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x58(0x190)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

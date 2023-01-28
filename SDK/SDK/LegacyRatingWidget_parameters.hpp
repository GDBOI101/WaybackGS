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
// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
struct ULegacyRatingWidget_C_SetShouldShowTeamPowerRating_Params
{
public:
	bool                                         ShowTeamRating;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
struct ULegacyRatingWidget_C_Override_Default_Color_Set_Params
{
public:
	bool                                         Override;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3236[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Light_Color;                                       // 0x4(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Medium_Color;                                      // 0x14(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Dark_Color;                                        // 0x24(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x409 (0x409 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
struct ULegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Parameter;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   MBrush;                                            // 0x10(0x360)(Parm)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x370(0x90)(ConstParm)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6E0 (0x6E0 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
struct ULegacyRatingWidget_C_Update_Base_Material_Params
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3237[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   K2Node_Select_Default;                             // 0x10(0x360)()
	bool                                         Temp_bool_Variable2;                               // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3238[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   K2Node_Select2_Default;                            // 0x378(0x360)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26 (0x26 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
struct ULegacyRatingWidget_C_Update_From_Unique_ID_Params
{
public:
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamHomebaseRating_Rating;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTeamHomebaseRating_ProgressFraction;   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTeamHomebaseRating_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3239[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTotalHomebaseRating_Rating;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
struct ULegacyRatingWidget_C_Set_Unique_ID_Params
{
public:
	struct FUniqueNetIdRepl                      ID;                                                // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Update
struct ULegacyRatingWidget_C_Update_Params
{
public:
};

// 0x84 (0x84 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
struct ULegacyRatingWidget_C_Set_Padding_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeMargin                  K2Node_Select_Default;                             // 0x4(0x60)(NoDestructor)
	uint8                                        Pad_323B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue; // 0x74(0x10)(ConstParm, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
struct ULegacyRatingWidget_C_Set_Size_Box_Params
{
public:
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0(0x90)(ConstParm)
	float                                        CallFunc_BreakVector2D_X;                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x98(0x90)()
};

// 0xD4 (0xD4 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
struct ULegacyRatingWidget_C_Update_Rating_Value_Params
{
public:
	int32                                        Rating;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable;                              // 0x4(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable2;                             // 0xC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable3;                             // 0x14(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable4;                             // 0x1C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable5;                             // 0x24(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable6;                             // 0x2C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)()
	struct FSlateFontInfo                        CallFunc_GetCurrentFont_ReturnValue;               // 0x60(0x68)(ConstParm, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_Select_Default;                             // 0xCC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
struct ULegacyRatingWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
struct ULegacyRatingWidget_C_PlayerInfoChanged_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.Construct
struct ULegacyRatingWidget_C_Construct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
struct ULegacyRatingWidget_C_PlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1E8 (0x1E8 - 0x0)
// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
struct ULegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UniqueId;                       // 0x38(0x18)(ConstParm, HasGetValueTypeHash)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x58(0x190)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
struct UAthenaTeamMemberInfo_C_SetTalking_Params
{
public:
	bool                                         NewTalking;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
struct UAthenaTeamMemberInfo_C_UpdateMicIcon_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
struct UAthenaTeamMemberInfo_C_SetMuted_Params
{
public:
	bool                                         NewMuted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
struct UAthenaTeamMemberInfo_C_SetReviving_Params
{
public:
	bool                                         Reviving;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
struct UAthenaTeamMemberInfo_C_UpdatePlayerName_Params
{
public:
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
struct UAthenaTeamMemberInfo_C_SetDBNO_Params
{
public:
	bool                                         DBNO;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
struct UAthenaTeamMemberInfo_C_SetDead_Params
{
public:
	bool                                         Dead;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x38(0x28)()
	struct FSlateColor                           K2Node_Select2_Default;                            // 0x60(0x28)()
};

// 0x8 (0x8 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
struct UAthenaTeamMemberInfo_C_UpdatePS_Params
{
public:
	class AFortPlayerStateAthena*                InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
struct UAthenaTeamMemberInfo_C_SetShield_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
struct UAthenaTeamMemberInfo_C_SetHealth_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
struct UAthenaTeamMemberInfo_C_Construct_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
struct UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x8(0x90)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

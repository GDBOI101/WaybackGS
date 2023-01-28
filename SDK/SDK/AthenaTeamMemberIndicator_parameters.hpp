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
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Player Names Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Player_Names_Changed_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Talking_Changed_Params
{
public:
	TArray<bool>                                 Team_Talking;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Get_Item;                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_310F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params
{
public:
	TArray<bool>                                 Team_Reviving;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Get_Item;                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
struct UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params
{
public:
	TArray<bool>                                 DBNOStates;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Get_Item;                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
struct UAthenaTeamMemberIndicator_C_Construct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
struct UAthenaTeamMemberIndicator_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
struct UAthenaTeamMemberIndicator_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
struct UAthenaTeamMemberIndicator_C_Update_Pawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.CapturePlayerName
struct UAthenaTeamMemberIndicator_C_CapturePlayerName_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
struct UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3110[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x50(0x34)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3111[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDBNO_ReturnValue;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xD0(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

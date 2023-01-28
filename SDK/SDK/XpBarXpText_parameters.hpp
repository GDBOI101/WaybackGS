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

// 0x80 (0x80 - 0x0)
// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
struct UXpBarXpText_C_Get_Skill_Points_For_Next_Level_Params
{
public:
	int32                                        Next_Level_Skill_Points;                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPrivateAccountInfo               CallFunc_GetLocalAccountInfo_Result;               // 0x18(0x28)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemQuantityPair>         CallFunc_GetAccountLevelUpRewards_Rewards;         // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x58(0x28)()
};

// 0x160 (0x160 - 0x0)
// Function XpBarXpText.XpBarXpText_C.Update Xp Text
struct UXpBarXpText_C_Update_Xp_Text_Params
{
public:
	struct FFortPublicAccountInfo                Account_Info;                                      // 0x0(0x24)(Parm, NoDestructor)
	uint8                                        Pad_365C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x68(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xD8(0x18)()
	int32                                        CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points; // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0xF8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x138(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x148(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function XpBarXpText.XpBarXpText_C.Construct
struct UXpBarXpText_C_Construct_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
struct UXpBarXpText_C_HandleAccountUpdate_Params
{
public:
	struct FFortPublicAccountInfo                NewInfo;                                           // 0x0(0x24)(Parm, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
struct UXpBarXpText_C_ExecuteUbergraph_XpBarXpText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                K2Node_CustomEvent_NewInfo;                        // 0x4(0x24)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                CallFunc_GetCurrentlyViewedAccountInfo_Result;     // 0x40(0x24)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

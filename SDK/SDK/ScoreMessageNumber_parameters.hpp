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

// 0x5 (0x5 - 0x0)
// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
struct UScoreMessageNumber_C_SetScore_Params
{
public:
	int32                                        InScore;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
struct UScoreMessageNumber_C_UpdateScoreText_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x50(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
struct UScoreMessageNumber_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
struct UScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
struct UScoreMessageNumber_C_OnScoreValueSet__DelegateSignature_Params
{
public:
	enum class EStatCategory                     ChangedScoreCategory;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

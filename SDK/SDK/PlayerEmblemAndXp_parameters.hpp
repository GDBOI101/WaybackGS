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

// 0x54 (0x54 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
struct UPlayerEmblemAndXp_C_SetupReward_Params
{
public:
	class UWidget*                               Container;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            RewardText;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                RewardItemCard;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasReward;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         RewardItem;                                        // 0x20(0x10)(Parm, NoDestructor)
	int32                                        LevelRewarded;                                     // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x38(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x148 (0x148 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
struct UPlayerEmblemAndXp_C_Refresh_Params
{
public:
	struct FFortPublicAccountInfo                FortPublicAccountInfo;                             // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F14[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)()
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x48(0x18)()
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue3;              // 0x70(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         CallFunc_GetNextSeasonChaseReward_Reward;          // 0x90(0x10)(NoDestructor)
	int32                                        CallFunc_GetNextSeasonChaseReward_RewardLevel;     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNextSeasonChaseReward_ReturnValue;     // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)()
	struct FFortItemInstanceQuantityPair         CallFunc_GetNextSeasonChaseReward_Reward2;         // 0xD8(0x10)(NoDestructor)
	int32                                        CallFunc_GetNextSeasonChaseReward_RewardLevel2;    // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNextSeasonChaseReward_ReturnValue2;    // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  Temp_text_Variable;                                // 0xF0(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x108(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x128(0x18)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
struct UPlayerEmblemAndXp_C_Construct_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
struct UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params
{
public:
	struct FFortPublicAccountInfo                Result;                                            // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
struct UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                K2Node_Event_Result;                               // 0x4(0x24)(ConstParm, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

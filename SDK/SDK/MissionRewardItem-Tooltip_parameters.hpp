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

// 0x60 (0x60 - 0x0)
// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	struct FLinearColor                          CallFunc_Get_Rarity_Color_ReturnValue;             // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)()
};

// 0xA8 (0xA8 - 0x0)
// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RarityColor;                                       // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3862[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x28(0x80)()
};

// 0x1B8 (0x1B8 - 0x0)
// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
struct UMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           Reward_Icon;                                       // 0x90(0x90)(Edit)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3863[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x128(0x90)()
};

// 0x70 (0x70 - 0x0)
// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
struct UMissionRewardItem_Tooltip_C_Get_Reward_Name_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  Reward_Name;                                       // 0x18(0x18)(Edit)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3864[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3865[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

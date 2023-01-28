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

// 0x98 (0x98 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
struct UTooltipLibrary_C_CreateXPTooltip_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header;                                            // 0x8(0x18)(Parm)
	class FText                                  CommanderXP;                                       // 0x20(0x18)(Parm)
	class FText                                  BoostXP;                                           // 0x38(0x18)(Parm)
	class FText                                  RestXP;                                            // 0x50(0x18)(Parm)
	class FText                                  Body;                                              // 0x68(0x18)(Parm)
	class UObject*                               __WorldContext;                                    // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     Out;                                               // 0x88(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UXpBarToolTip_C*                       CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D8 (0x3D8 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
struct UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHeroCoreStat                         Data;                                              // 0x8(0x3B0)(Parm, HasGetValueTypeHash)
	float                                        Value;                                             // 0x3B8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x3C0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x3C8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_CoreStat_C*                   CallFunc_Create_ReturnValue;                       // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
struct UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Body_Text;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Header_Text;                                       // 0x18(0x18)(Parm)
	class USlateBrushAsset*                      Icon_Brush;                                        // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_BasicMultiLine_S_C*           CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
struct UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(Parm)
	class USlateBrushAsset*                      Header_Icon;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             ComparedItem;                                      // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Return_Value;                                      // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Item_C*                       CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
struct UTooltipLibrary_C_Create_Item_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(Parm)
	class USlateBrushAsset*                      Header_Icon;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideQuantity;                                  // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Return_Value;                                      // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Item_C*                       CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
struct UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tooltip_Text;                                      // 0x10(0x18)(Parm)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
struct UTooltipLibrary_C_Create_Custom_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(Parm)
	class USlateBrushAsset*                      Icon_Brush;                                        // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Widget;                                            // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Custom_S_C*                   CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
struct UTooltipLibrary_C_Create_Basic_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Body_Text;                                         // 0x8(0x18)(Parm)
	class FText                                  Header_Text;                                       // 0x20(0x18)(Parm)
	class USlateBrushAsset*                      Icon_Brush;                                        // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x48(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Basic_S_C*                    CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

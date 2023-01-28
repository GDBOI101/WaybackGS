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

// 0x28 (0x28 - 0x0)
// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
struct UPerkTierWidgetNew_C_InitializeSettings_Params
{
public:
	bool                                         bIncludeName;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIncludeDescription;                               // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    IconSize;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A23[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x8(0x20)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
struct UPerkTierWidgetNew_C_Construct_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
struct UPerkTierWidgetNew_C_OnGeneratePerk_Params
{
public:
	struct FFortUIPerk                           Perk;                                              // 0x0(0x88)(Parm)
	class UFortPerkWidget_NUI*                   PerkWidget;                                        // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
struct UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPerkDivider_C*                        CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIPerk                           K2Node_Event_Perk;                                 // 0x18(0x88)()
	class UFortPerkWidget_NUI*                   K2Node_Event_PerkWidget;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                      K2Node_DynamicCast_AsPerk_Widget_New;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue2;                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

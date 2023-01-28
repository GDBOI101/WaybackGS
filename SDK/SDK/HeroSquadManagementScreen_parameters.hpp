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
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni
struct UHeroSquadManagementScreen_C_HandlePickerHideAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleHideSlotInfoAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni
struct UHeroSquadManagementScreen_C_HandlePickerShowAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleShowSlotInfoAni_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
struct UHeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable2;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x10(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x28(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x40(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x58(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0x70(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0xA0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue7;             // 0xB8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue8;             // 0xD0(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0xE8(0x18)()
};

// 0x69 (0x69 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Highlight_State_Params
{
public:
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus;             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus2;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus3;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus4;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus5;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus6;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess7;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State_Params
{
public:
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkEmpty_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USimpleSquadSlotButton_C*              K2Node_DynamicCast_AsSimple_Squad_Slot_Button;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*              K2Node_DynamicCast_AsSimple_Squad_Slot_Button2;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkEmpty_ReturnValue2;                 // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue2;              // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
struct UHeroSquadManagementScreen_C_HideSlotInfo_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
struct UHeroSquadManagementScreen_C_ShowSlotInfo_Params
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(Parm)
	class FText                                  LocalItemType;                                     // 0x30(0x18)(Edit)
	class FText                                  LocalDisplayName;                                  // 0x48(0x18)(Edit)
	class FText                                  LocalHeaderText;                                   // 0x60(0x18)(Edit)
};

// 0x11 (0x11 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
struct UHeroSquadManagementScreen_C_HandleClosePicker_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
struct UHeroSquadManagementScreen_C_GetInZoneVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
struct UHeroSquadManagementScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
struct UHeroSquadManagementScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
struct UHeroSquadManagementScreen_C_SetDefaultScroll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
struct UHeroSquadManagementScreen_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerShown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerHidden_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
struct UHeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
struct UHeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue;  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget2;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USquadSlotDetailsPanel_C*              K2Node_DynamicCast_AsSquad_Slot_Details_Panel;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_SquadSlotIndex;         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHeroSquadBonuses_C*                   K2Node_DynamicCast_AsHero_Squad_Bonuses;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget3;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x160 (0x160 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
struct UAbilitiesPageTile_C_SetAbilityPerkInfo_Params
{
public:
	struct FFortUIPerk                           AbilityPerk;                                       // 0x0(0x88)(Parm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x88(0x28)()
	TArray<class UFortGadgetItemDefinition*>     CallFunc_BP_GetGadgets_GadgetItemDefinitions;      // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	class UFortGadgetItemDefinition*             CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0xC8(0x90)()
	class UFortAbilityKit*                       CallFunc_GetGrantedAbilityKit_ReturnValue;         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
struct UAbilitiesPageTile_C_UpdateKeyBinding_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
struct UAbilitiesPageTile_C_SetAbilityItemInfo_Params
{
public:
	class UFortItem*                             SlottedAbilityItem;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGadgetItemDefinition*             K2Node_DynamicCast_AsFort_Gadget_Item_Definition;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x40(0x90)()
};

// 0x0 (0x0 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.Construct
struct UAbilitiesPageTile_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
struct UAbilitiesPageTile_C_HandleInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
struct UAbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x19 (0x19 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
struct UItemInspectUpgradeCallout_C_IsEvolutionReady_Params
{
public:
	bool                                         EvolutionReady;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3724[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemEvolutionRestrictionReason> CallFunc_CanEvolve_OutRestrictionReasons;          // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanEvolve_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
struct UItemInspectUpgradeCallout_C_ShowEvolutionInfo_Params
{
public:
	bool                                         CallFunc_IsEvolutionReady_EvolutionReady;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3725[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	struct FRecipe                               CallFunc_Array_Get_Item;                           // 0x28(0x50)()
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item2;                          // 0x78(0x28)()
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
struct UItemInspectUpgradeCallout_C_ShowUpgradeInfo_Params
{
public:
	bool                                         CallFunc_IsUpgradeReady_UpgradeReady;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3726[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradeCost_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x36 (0x36 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
struct UItemInspectUpgradeCallout_C_IsUpgradeReady_Params
{
public:
	bool                                         UpgradeReady;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3727[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemUpgradeRestrictionReason> CallFunc_CanBeUpgraded_OutRestrictionReasons;      // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanBeUpgraded_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3728[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInInventory_ReturnValue;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
struct UItemInspectUpgradeCallout_C_RefreshOnUpgrade_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
struct UItemInspectUpgradeCallout_C_EnableUpgrade_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
struct UItemInspectUpgradeCallout_C_DisableUpgrade_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
struct UItemInspectUpgradeCallout_C_OnShow_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3729[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
struct UItemInspectUpgradeCallout_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
struct UItemInspectUpgradeCallout_C_Refresh_Params
{
public:
	bool                                         CallFunc_HasEvolutions_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
struct UItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature
struct UItemInspectUpgradeCallout_C_OnRequestUpgrade__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

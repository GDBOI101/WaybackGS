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
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
struct UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params
{
public:
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue3;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetUpgradeStats_ReturnValue;              // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetTooltipStats_ReturnValue;              // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetComparisonStats_ReturnValue;           // 0x50(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
struct UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToDetailSet
struct UItemAttributesDetailWidget_C_HandlePreDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToCompareWithSet
struct UItemAttributesDetailWidget_C_HandlePreDifferentItemToCompareWithSet_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged
struct UItemAttributesDetailWidget_C_HandleItemToDetailChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged
struct UItemAttributesDetailWidget_C_HandleItemToCompareWithChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
struct UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3630[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bItemChanged2;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAmmoChanged2;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bIngredientsChanged2;           // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3631[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bItemChanged;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bAmmoChanged;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bIngredientsChanged;            // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3632[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

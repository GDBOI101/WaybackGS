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

// 0xA0 (0xA0 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients
struct UItemCraftingIngredientList_C_GetIngredients_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         ReturnIngredients;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FFortItemQuantityPair>         Ingredients;                                       // 0x18(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3610[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSchematicItem*                    K2Node_DynamicCast_AsFort_Schematic_Item;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3611[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSchematicRequirement>         CallFunc_GetSchematicRequirements_Requirements;    // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	struct FSchematicRequirement                 CallFunc_Array_Get_Item;                           // 0x50(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_MakeItemQuantityPair_ReturnValue;         // 0x68(0x28)()
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3613[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare
struct UItemCraftingIngredientList_C_SetItemToCompare_Params
{
public:
	class UFortItem*                             ItemToCompare;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         CallFunc_GetIngredients_ReturnIngredients;         // 0x8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0xE (0xE - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
struct UItemCraftingIngredientList_C_ItemNeedsInventoryTracking_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NeedsTracking;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue2;       // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
struct UItemCraftingIngredientList_C_HandleItemChanged_Params
{
public:
	bool                                         ItemChanged;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AmmoChanged;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IngredientsChanged;                                // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
struct UItemCraftingIngredientList_C_RefreshInventoryTracking_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3614[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3615[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemCraftingIngredientListEntryHaveNeedVerbose_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3616[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemCraftingIngredientListEntryHaveNeed_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3617[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemsChanged
struct UItemCraftingIngredientList_C_HandleWorldItemsChanged_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
struct UItemCraftingIngredientList_C_HandleWorldItemListChanged_Params
{
public:
	TArray<class UFortWorldItem*>                ItemsAdded;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                ItemsRemoved;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
struct UItemCraftingIngredientList_C_Refresh_Params
{
public:
	TArray<struct FFortItemQuantityPair>         CallFunc_GetIngredients_ReturnIngredients;         // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x68 (0x68 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
struct UItemCraftingIngredientList_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ItemNeedsInventoryTracking_NeedsTracking; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3618[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ItemNeedsInventoryTracking_NeedsTracking2; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3619[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization
struct UItemCraftingIngredientList_C_DoDesignTimeRandomization_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable3;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable4;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct
struct UItemCraftingIngredientList_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
struct UItemCraftingIngredientList_C_AddListEntry_Params
{
public:
	class UFortItemQuantityListEntryBase*        ListEntry;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
struct UItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_361C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemQuantityListEntryBase*        K2Node_Event_ListEntry;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

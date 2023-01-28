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
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice
struct UItemInspectEvolutionChoiceEntry_C_SelectEvolutionChoice_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization
struct UItemInspectEvolutionChoiceEntry_C_DoDesignTimeRandomization_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable3;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Temp_object_Variable4;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
struct UItemInspectEvolutionChoiceEntry_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnabledChoice;                                     // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_385D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisableReasonText;                                 // 0x10(0x18)(Edit)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnSelected
struct UItemInspectEvolutionChoiceEntry_C_OnSelected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct
struct UItemInspectEvolutionChoiceEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
struct UItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceUnhovered__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceHovered__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

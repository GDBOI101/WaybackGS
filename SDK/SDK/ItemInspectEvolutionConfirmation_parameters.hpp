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

// 0x62 (0x62 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionRestrictions
struct UItemInspectEvolutionConfirmation_C_SetEvolutionRestrictions_Params
{
public:
	enum class EItemEvolutionRestrictionReason   Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEvolveRestrictionReasonText_ReturnValue; // 0x10(0x18)()
	enum class EItemEvolutionRestrictionReason   Temp_byte_Variable2;                               // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3870[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemEvolutionRestrictionReason> CallFunc_CanEvolve_OutRestrictionReasons;          // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanEvolve_ReturnValue;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3871[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEvolveRestrictionReasonText_ReturnValue2; // 0x48(0x18)()
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue2;              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ClearEvolutionRepresented
struct UItemInspectEvolutionConfirmation_C_ClearEvolutionRepresented_Params
{
public:
};

// 0x22 (0x22 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnShow
struct UItemInspectEvolutionConfirmation_C_OnShow_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumEvolutionOptions_NumRecipes;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3872[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectEvolutionChoiceEntry_C*    K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HideEvolutionOptions
struct UItemInspectEvolutionConfirmation_C_HideEvolutionOptions_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ShowEvolutionOptions
struct UItemInspectEvolutionConfirmation_C_ShowEvolutionOptions_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.GetNumEvolutionOptions
struct UItemInspectEvolutionConfirmation_C_GetNumEvolutionOptions_Params
{
public:
	int32                                        NumRecipes;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetupEvolutionOptions
struct UItemInspectEvolutionConfirmation_C_SetupEvolutionOptions_Params
{
public:
	class UFortItem*                             TemporaryEvolutionItem;                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectEvolutionChoiceEntry_C*    CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3874[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3875[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3876[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRecipe                               CallFunc_Array_Get_Item;                           // 0x88(0x50)()
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3877[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item2;                          // 0xE0(0x28)()
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue3;                // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue2;              // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3878[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue4;                // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue3;              // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3879[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAllowedConversionIndex_ReturnValue;     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.HandleEvolutionOptionSelected
struct UItemInspectEvolutionConfirmation_C_HandleEvolutionOptionSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetEvolutionToRepresent
struct UItemInspectEvolutionConfirmation_C_SetEvolutionToRepresent_Params
{
public:
	int32                                        EvolutionIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             EvolutionItem;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         Ingredients;                                       // 0x10(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	struct FRecipe                               CallFunc_Array_Get_Item;                           // 0x50(0x50)()
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item2;                          // 0xA0(0x28)()
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xD8(0x18)()
};

// 0x4D (0x4D - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.SetItemToRepresent
struct UItemInspectEvolutionConfirmation_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEvolve;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoEvolutions;                                      // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumEvolutionOptions_NumRecipes;        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemEvolutionRestrictionReason> CallFunc_CanEvolve_OutRestrictionReasons;          // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanEvolve_ReturnValue;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemEvolutionRestrictionReason   CallFunc_Array_Get_Item;                           // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3880[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UItemInspectEvolutionConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.Construct
struct UItemInspectEvolutionConfirmation_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.ExecuteUbergraph_ItemInspectEvolutionConfirmation
struct UItemInspectEvolutionConfirmation_C_ExecuteUbergraph_ItemInspectEvolutionConfirmation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3881[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroup*                    CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectEvolutionConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
struct UItemInspectEvolutionConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
struct UItemInspectEvolutionConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C.OnEvolutionConfirm__DelegateSignature
struct UItemInspectEvolutionConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

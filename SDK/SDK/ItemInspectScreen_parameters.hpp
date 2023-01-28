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

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.PassThrough
struct UItemInspectScreen_C_PassThrough_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
struct UItemInspectScreen_C_SetInspectModeForChildPanels_Params
{
public:
	enum class EFortItemInspectionMode           NewInspectMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
struct UItemInspectScreen_C_SetTabButtonStyle_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
struct UItemInspectScreen_C_ShowPreviewHeader_Params
{
public:
	bool                                         ShowPreviewLabel;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
struct UItemInspectScreen_C_RefreshCallout_Params
{
public:
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E (0x2E - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
struct UItemInspectScreen_C_RefreshActionHandlers_Params
{
public:
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable3;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable4;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable5;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable6;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasEvolutions_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select2_Default;                            // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue3;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select3_Default;                            // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
struct UItemInspectScreen_C_HandleEvolutionComplete_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ResultingItems;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FFortItemInstanceQuantityPair         CallFunc_Array_Get_Item;                           // 0x10(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
struct UItemInspectScreen_C_RefreshOnUpgrade_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
struct UItemInspectScreen_C_HandleCursorModeChanging_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
struct UItemInspectScreen_C_OpenItemInspect__Function__Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowFavoriting;                             // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldShowPreviewDisplay;                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
struct UItemInspectScreen_C_ResetDetailsPanel_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
struct UItemInspectScreen_C_SetupActionHandlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle2;             // 0x30(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle3;             // 0x40(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle4;             // 0x70(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle5;             // 0x90(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle6;             // 0xA0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle7;             // 0xC0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle8;             // 0xF0(0x10)(NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
struct UItemInspectScreen_C_GetFirstEvolutionOption_Params
{
public:
	class UFortItem*                             EvolutionItem;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         Results;                                           // 0x8(0x10)(Edit, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x40(0x28)()
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRecipe                               CallFunc_Array_Get_Item2;                          // 0x98(0x50)()
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue2;              // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
struct UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
struct UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
struct UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
struct UItemInspectScreen_C_SetInspectMode_Params
{
public:
	enum class EFortItemInspectionMode           NewInspectMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
struct UItemInspectScreen_C_HandleUpgrade_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
struct UItemInspectScreen_C_HandleEvolution_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
struct UItemInspectScreen_C_HandleView_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
struct UItemInspectScreen_C_HandleFavorite_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFavorite_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
struct UItemInspectScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30A (0x30A - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
struct UItemInspectScreen_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo;          // 0x10(0xA8)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue;              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAlterationItemDefinition*> CallFunc_GetAlterations_ReturnValue;               // 0xC0(0x10)(ZeroConstructor, ReferenceParm)
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorker*                           K2Node_DynamicCast_AsFort_Worker;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero2;                   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSchematic_ReturnValue;                  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo2;         // 0x108(0xA8)()
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo3;         // 0x1B0(0xA8)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue2;             // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo4;         // 0x260(0xA8)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue3;             // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RegisterFortTab_ReturnValue4;             // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
struct UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Construct
struct UItemInspectScreen_C_Construct_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
struct UItemInspectScreen_C_OnActivated_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
struct UItemInspectScreen_C_OpenItemInspect_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowFavorite;                               // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsTemporaryItem;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
struct UItemInspectScreen_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
struct UItemInspectScreen_C_OnDeactivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
struct UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
struct UItemInspectScreen_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
struct UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bItemChanged;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bAmmoChanged;           // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bIngredientsChanged;    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough2;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_ComponentBoundEvent_Item;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_RecipeIndex;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue5;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_ItemToInspect;                        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           K2Node_Event_Mode;                                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_ShouldAllowUpgrading;                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_ShouldAllowEvolution;                 // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_ShouldAllowFavorite;                  // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsTemporaryItem;                      // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue6;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HandleUpgrade_PassThrough;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue7;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HandleEvolution_PassThrough;              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue8;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue9;                  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPanelOnStack_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue10;                 // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemView_C*                           CallFunc_Create_ReturnValue;                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

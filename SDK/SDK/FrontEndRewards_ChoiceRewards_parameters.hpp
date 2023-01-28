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

// 0x11 (0x11 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished
struct UFrontEndRewards_ChoiceRewards_C_HandleResizeFinished_Params
{
public:
	class URewards_ItemCard_C*                   Card;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions
struct UFrontEndRewards_ChoiceRewards_C_AddInputActions_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction
struct UFrontEndRewards_ChoiceRewards_C_HandleInspectAction_Params
{
public:
	bool                                         Committed;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemToRepresent_ItemToRepresent;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete
struct UFrontEndRewards_ChoiceRewards_C_HandleTransitionInComplete_Params
{
public:
};

// 0x1D (0x1D - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset
struct UFrontEndRewards_ChoiceRewards_C_Reset_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList
struct UFrontEndRewards_ChoiceRewards_C_PopulateFromCardList_Params
{
public:
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        CurrentIndex;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CurrentCard;                                       // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x50(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue2;                // 0x58(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation
struct UFrontEndRewards_ChoiceRewards_C_HideConfirmation_Params
{
public:
};

// 0x2D (0x2D - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation
struct UFrontEndRewards_ChoiceRewards_C_ShowConfirmation_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice
struct UFrontEndRewards_ChoiceRewards_C_ConfirmChoice_Params
{
public:
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemToRepresent_ItemToRepresent;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize
struct UFrontEndRewards_ChoiceRewards_C_SetCanvasSize_Params
{
public:
	float                                        TotalCardSize;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalCardPadding;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldUseNewItemCards_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetCardDimensions_ReturnValue;            // 0xC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue2;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription
struct UFrontEndRewards_ChoiceRewards_C_SetSelectedItemDescription_Params
{
public:
	class UFortItem*                             CurrentItem;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x18(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x18)()
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemToRepresent_ItemToRepresent;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked
struct UFrontEndRewards_ChoiceRewards_C_HandleCardClicked_Params
{
public:
	class URewards_ItemCard_C*                   ItemCard;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue2;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard
struct UFrontEndRewards_ChoiceRewards_C_SelectPreviousCard_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard
struct UFrontEndRewards_ChoiceRewards_C_SelectNextCard_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard
struct UFrontEndRewards_ChoiceRewards_C_SelectCard_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue2;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item2;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected
struct UFrontEndRewards_ChoiceRewards_C_SetCardSelected_Params
{
public:
	class URewards_ItemCard_C*                   Card;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView
struct UFrontEndRewards_ChoiceRewards_C_InitDesignView_Params
{
public:
	class UFortItemDefinition*                   TempItemDefinition;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     ItemList;                                          // 0x8(0x10)(Edit, ZeroConstructor)
	class URewards_ItemCard_C*                   CurrentCard;                                       // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x38(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue2;                // 0x40(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions
struct UFrontEndRewards_ChoiceRewards_C_AdjustCardPositions_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CurrentSlot;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldUseNewItemCards_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetCardDimensions_ReturnValue;            // 0x1C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4C(0x10)(NoDestructor)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x5C(0x10)(NoDestructor)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct
struct UFrontEndRewards_ChoiceRewards_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin
struct UFrontEndRewards_ChoiceRewards_C_TransitionInBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin
struct UFrontEndRewards_ChoiceRewards_C_TransitionOutBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Construct
struct UFrontEndRewards_ChoiceRewards_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft
struct UFrontEndRewards_ChoiceRewards_C_OnNavigationLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight
struct UFrontEndRewards_ChoiceRewards_C_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated
struct UFrontEndRewards_ChoiceRewards_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated
struct UFrontEndRewards_ChoiceRewards_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0
struct UFrontEndRewards_ChoiceRewards_C_CustomEvent_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1
struct UFrontEndRewards_ChoiceRewards_C_CustomEvent_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction
struct UFrontEndRewards_ChoiceRewards_C_OnPrimaryAction_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards
struct UFrontEndRewards_ChoiceRewards_C_ExecuteUbergraph_FrontEndRewards_ChoiceRewards_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class URewards_ItemCard_C*                   CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnRewardSelected__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_OnRewardSelected__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

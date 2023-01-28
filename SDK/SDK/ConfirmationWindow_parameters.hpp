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

// 0x8 (0x8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation
struct UConfirmationWindow_C_CloseConfirmation_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton
struct UConfirmationWindow_C_CenterFirstButton_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue2;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent
struct UConfirmationWindow_C_SetupAdditionalContent_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3957[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent
struct UConfirmationWindow_C_SetupLeftAdditionalContent_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
public:
};

// 0x2A (0x2A - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot
struct UConfirmationWindow_C_ClickButtonIfBot_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsClientBot_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction
struct UConfirmationWindow_C_OnWaitForExternalLatentAction_Params
{
public:
	struct FFortDialogExternalLatentActionHandle LatentActionHandle;                                // 0x0(0x4)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction
struct UConfirmationWindow_C_StopWaitingForLatentAction_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle
struct UConfirmationWindow_C_GetLatentActionWaitHandle_Params
{
public:
	struct FFortDialogExternalLatentActionHandle LatentActionHandle;                                // 0x0(0x4)(Parm, OutParm, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description
struct UConfirmationWindow_C_Set_Hover_Description_Params
{
public:
	class UCommonButton*                         Button_to_Hover;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x28(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft
struct UConfirmationWindow_C_SetupLeft_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription
struct UConfirmationWindow_C_SetupTitleAndDescription_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon
struct UConfirmationWindow_C_SetupMainIcon_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize
struct UConfirmationWindow_C_Deinitialize_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation
struct UConfirmationWindow_C_KillCurrentConfirmation_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle CallFunc_ProcessConfirmationResult_WaitingDialogHandle; // 0x8(0x4)(NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.GetResultName
struct UConfirmationWindow_C_GetResultName_Params
{
public:
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundIndex;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_395F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseInputAction;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3960[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3961[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x28(0x10)(NoDestructor)
	struct FDataTableRowHandle                   Temp_struct_Variable;                              // 0x38(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x48(0x10)(NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton
struct UConfirmationWindow_C_AddSingleConfirmButton_Params
{
public:
	struct FConfirmationDialogAction             ConfirmDialogAction;                               // 0x0(0xD0)(Parm)
	bool                                         UseInputAction;                                    // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     AddedConfirmButton;                                // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalUseInputAction;                               // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3963[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationDialogAction             LocalConfirmDialogAction;                          // 0xE8(0xD0)(Edit)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3964[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetInputAction_ReturnValue;               // 0x1E8(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x200(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction
struct UConfirmationWindow_C_HasAnyConfirmAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3966[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked
struct UConfirmationWindow_C_ConfirmActionClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ResultName;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundIndex;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3967[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3968[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetResultName_ResultName;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle CallFunc_ProcessConfirmationResult_WaitingDialogHandle; // 0x38(0x4)(NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction
struct UConfirmationWindow_C_IsSimpleConfirmAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked
struct UConfirmationWindow_C_DeclineActionClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle CallFunc_ProcessConfirmationResult_WaitingDialogHandle; // 0x10(0x4)(NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton
struct UConfirmationWindow_C_AddDeclineButton_Params
{
public:
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3969[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x50(0x10)(NoDestructor)
};

// 0x1C1 (0x1C1 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons
struct UConfirmationWindow_C_AddConfirmButtons_Params
{
public:
	struct FConfirmationDialogAction             LocalConfirmDialogAction;                          // 0x0(0xD0)(Edit)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     CallFunc_Array_Get_Item;                           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyConfirmAction_ReturnValue;          // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSimpleConfirmAction_ReturnValue;        // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationDialogAction             CallFunc_Array_Get_Item2;                          // 0xF0(0xD0)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
public:
};

// 0x180 (0x180 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetDescription
struct UConfirmationWindow_C_SetDescription_Params
{
public:
	struct FFortDialogDescription_NUI            NewDescription;                                    // 0x0(0x180)(Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Construct
struct UConfirmationWindow_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded
struct UConfirmationWindow_C_HandleIntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded
struct UConfirmationWindow_C_HandleOutroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro
struct UConfirmationWindow_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
struct UConfirmationWindow_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnActivated
struct UConfirmationWindow_C_OnActivated_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x1A (0x1A - 0x0)
// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
struct URejoinWindow_C_OnButtonClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetInputAction_InputActionRow;            // 0x8(0x10)(NoDestructor)
	bool                                         CallFunc_GetInputAction_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
struct URejoinWindow_C_CenterFirstButton_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
struct URejoinWindow_C_InitializeRejoinWindow_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)(ConstParm)
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x50(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
struct URejoinWindow_C_ShowInitalScreen_Params
{
public:
	float                                        TimeoutSeconds;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalTimeoutSeconds;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle2;             // 0x18(0x10)(NoDestructor)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x6C (0x6C - 0x0)
// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
struct URejoinWindow_C_ShowRetryScreen_Params
{
public:
	class FText                                  Failure;                                           // 0x0(0x18)(Parm)
	float                                        TimeoutSeconds;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowRetry;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LocalAllowRetry;                                   // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LocalRetryFailure;                                 // 0x20(0x18)(Edit)
	float                                        LocalTimeoutSeconds;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x40(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle2;             // 0x58(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RejoinWindow.RejoinWindow_C.Construct
struct URejoinWindow_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
struct URejoinWindow_C_OnTimeoutTimeReached_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
struct URejoinWindow_C_ExecuteUbergraph_RejoinWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
struct URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
struct URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x5 (0x5 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail
struct UQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.Construct
struct UQuickbarSecondary_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.Maximize
struct UQuickbarSecondary_C_Maximize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.Minimize
struct UQuickbarSecondary_C_Minimize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged
struct UQuickbarSecondary_C_HandleKeybindsChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged
struct UQuickbarSecondary_C_HandleInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.Destruct
struct UQuickbarSecondary_C_Destruct_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary
struct UQuickbarSecondary_C_ExecuteUbergraph_QuickbarSecondary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQuickbarSlot_C*>               K2Node_MakeArray_Array;                            // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuickbarSlot_C*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

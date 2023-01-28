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

// 0x3A (0x3A - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
struct UOptionsMenuRowSelector_C_Button_Hovered_Params
{
public:
	class UCommonButton*                         Button_Hovered;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3451[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x18(0x18)()
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
struct UOptionsMenuRowSelector_C_Deselect_All_Rows_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
struct UOptionsMenuRowSelector_C_Update_Row_Selector_Params
{
public:
	int32                                        Tab_Number;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
struct UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params
{
public:
	class FText                                  Row_Text;                                          // 0x0(0x18)(Parm)
	TArray<class FText>                          Buttons;                                           // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FText>                          Hover_Texts;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         Require_Selection;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3452[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Tab_Tooltip;                                       // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3453[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x60(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x80(0x8)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
struct UOptionsMenuRowSelector_C_Construct_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0
struct UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0_Params
{
public:
	class UCommonButton*                         AssociatedButton;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
struct UOptionsMenuRowSelector_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
struct UOptionsMenuRowSelector_C_Destruct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
struct UOptionsMenuRowSelector_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
struct UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_AssociatedButton;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ButtonIndex;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x20(0x78)(ConstParm)
	class UCommonButtonGroup*                    CallFunc_SpawnObject_ReturnValue;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3456[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0xB0(0x18)(ConstParm)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3457[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0xD4(0x8)(NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3458[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
struct UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

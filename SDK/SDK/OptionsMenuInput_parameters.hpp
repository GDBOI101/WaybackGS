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

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren
struct UOptionsMenuInput_C_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel
struct UOptionsMenuInput_C_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded
struct UOptionsMenuInput_C_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.GetData
struct UOptionsMenuInput_C_GetData_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.Change Key
struct UOptionsMenuInput_C_Change_Key_Params
{
public:
	bool                                         Primary_Key;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Key_To_Sets;                                       // 0x8(0x18)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget
struct UOptionsMenuInput_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool
struct UOptionsMenuInput_C_OnAcquireFromPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool
struct UOptionsMenuInput_C_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuInput_C_Private_OnExpanderArrowShiftClicked_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked
struct UOptionsMenuInput_C_RegisterOnClicked_Params
{
public:
	UDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded
struct UOptionsMenuInput_C_SetExpanded_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList
struct UOptionsMenuInput_C_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.SetSelected
struct UOptionsMenuInput_C_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion
struct UOptionsMenuInput_C_ToggleExpansion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.Reset
struct UOptionsMenuInput_C_Reset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.SetData
struct UOptionsMenuInput_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave
struct UOptionsMenuInput_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter
struct UOptionsMenuInput_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput
struct UOptionsMenuInput_C_ExecuteUbergraph_OptionsMenuInput_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_Event_Callback;                             // 0x8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bExpanded;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InIndexInList;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSelected;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_InData;                               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuInputData*             K2Node_DynamicCast_AsFort_Options_Menu_Input_Data; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA8(0x18)()
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0xC0(0x78)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x138(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x170(0x78)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.UnbindClicked__DelegateSignature
struct UOptionsMenuInput_C_UnbindClicked__DelegateSignature_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature
struct UOptionsMenuInput_C_Input_Clicked__DelegateSignature_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Primary_Button;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

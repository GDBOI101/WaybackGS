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

// 0x38 (0x38 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData
struct ULoginResultWIdget_C_SetResultsData_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
	bool                                         bShowError;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x20(0x18)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.SetDescription
struct ULoginResultWIdget_C_SetDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm)
};

// 0x40 (0x40 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.SetTitle
struct ULoginResultWIdget_C_SetTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
	bool                                         bShowError;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct ULoginResultWIdget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.Construct
struct ULoginResultWIdget_C_Construct_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
struct ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature
struct ULoginResultWIdget_C_OnResultConfirmed__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

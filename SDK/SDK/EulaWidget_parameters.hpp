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

// 0x6 (0x6 - 0x0)
// Function EulaWidget.EulaWidget_C.SetViewOnly
struct UEulaWidget_C_SetViewOnly_Params
{
public:
	bool                                         bViewOnly;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function EulaWidget.EulaWidget_C.SetEulaText
struct UEulaWidget_C_SetEulaText_Params
{
public:
	class FText                                  EULA;                                              // 0x0(0x18)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature
struct UEulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UEulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EulaWidget.EulaWidget_C.Destruct
struct UEulaWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EulaWidget.EulaWidget_C.Construct
struct UEulaWidget_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget
struct UEulaWidget_C_ExecuteUbergraph_EulaWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2694[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
struct UEulaWidget_C_OnEulaResponse__DelegateSignature_Params
{
public:
	bool                                         Accepted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

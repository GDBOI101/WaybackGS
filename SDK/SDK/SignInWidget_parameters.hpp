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
// Function SignInWidget.SignInWidget_C.HandleTextCommited
struct USignInWidget_C_HandleTextCommited_Params
{
public:
	enum class ETextCommit                       TextCommitType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonBorder*                         HighlightBorder;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         NormalBorder;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue2;            // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select2_Default;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function SignInWidget.SignInWidget_C.OnActivated
struct USignInWidget_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
struct USignInWidget_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SignInWidget.SignInWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
struct USignInWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function SignInWidget.SignInWidget_C.ExecuteUbergraph_SignInWidget
struct USignInWidget_C_ExecuteUbergraph_SignInWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text4;                  // 0x8(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod2;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text3;                  // 0x28(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text2;                  // 0x50(0x18)(ConstParm)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x68(0x18)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

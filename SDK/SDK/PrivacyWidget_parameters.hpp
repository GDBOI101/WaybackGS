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

// 0x1AF (0x1AF - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.SetMode
struct UPrivacyWidget_C_SetMode_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A40[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x18(0x190)()
	bool                                         CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.InitializePrivacyButtons
struct UPrivacyWidget_C_InitializePrivacyButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.Construct
struct UPrivacyWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__PublicButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__PublicButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__PrivateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__PrivateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__PublicButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__PublicButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__PrivateButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__PrivateButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__Apply_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UPrivacyWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function PrivacyWidget.PrivacyWidget_C.ExecuteUbergraph_PrivacyWidget
struct UPrivacyWidget_C_ExecuteUbergraph_PrivacyWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button10;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button9;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button8;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button7;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)()
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

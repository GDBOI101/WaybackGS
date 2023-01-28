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

// 0x2C (0x2C - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.HandleMessageSelected
struct UMessageCenterWidget_C_HandleMessageSelected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3009[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotification*                   MESSAGE;                                           // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_300A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotification*                   K2Node_DynamicCast_AsFort_UINotification;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.Construct
struct UMessageCenterWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginIntro
struct UMessageCenterWidget_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginOutro
struct UMessageCenterWidget_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.HandleIntroEnded
struct UMessageCenterWidget_C_HandleIntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.HandleOutroEnded
struct UMessageCenterWidget_C_HandleOutroEnded_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UMessageCenterWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature
struct UMessageCenterWidget_C_BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
struct UMessageCenterWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
struct UMessageCenterWidget_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function MessageCenterWidget.MessageCenterWidget_C.ExecuteUbergraph_MessageCenterWidget
struct UMessageCenterWidget_C_ExecuteUbergraph_MessageCenterWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_300B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsSelected;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_300C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue2;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_DynamicCast_AsFort_UINotification;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_300D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotification*                   K2Node_DynamicCast_AsFort_UINotification2;         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_300E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

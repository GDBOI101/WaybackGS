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
// Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility
struct UToastWidget_C_GetOpenButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.StartIntro
struct UToastWidget_C_StartIntro_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function ToastWidget.ToastWidget_C.ShowText
struct UToastWidget_C_ShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ToastWidget.ToastWidget_C.SetToast
struct UToastWidget_C_SetToast_Params
{
public:
	class UFortUINotification*                   Toast;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTwitchNotification_C*                 K2Node_DynamicCast_AsTwitch_Notification;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetOpenButtonVisibility_ReturnValue;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3974[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetImageOverride_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.Construct
struct UToastWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.HandleIntroFinished
struct UToastWidget_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.HandleOutroFinished
struct UToastWidget_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.HandleAnimationDelay
struct UToastWidget_C_HandleAnimationDelay_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ToastWidget.ToastWidget_C.OnMouseEnter
struct UToastWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ToastWidget.ToastWidget_C.OnMouseLeave
struct UToastWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget
struct UToastWidget_C_ExecuteUbergraph_ToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3976[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x40(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3977[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x78(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xF0(0x78)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature
struct UToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

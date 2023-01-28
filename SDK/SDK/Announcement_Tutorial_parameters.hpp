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

// 0x8 (0x8 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
struct UAnnouncement_Tutorial_C_ContinueTutorial_Params
{
public:
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
struct UAnnouncement_Tutorial_C_CheckContinueTutorial_Params
{
public:
	struct FFortClientAnnouncementData_Tutorial  TutorialData;                                      // 0x0(0x140)(Parm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x140(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x150(0x8)(NoDestructor)
};

// 0x146 (0x146 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
struct UAnnouncement_Tutorial_C_GetLightboxVisibility_Params
{
public:
	struct FFortClientAnnouncementData_Tutorial  FortClientAnnouncementData_Tutorial;               // 0x0(0x140)(ConstParm, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x140(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
struct UAnnouncement_Tutorial_C_RefreshTextLines_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x10(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x298 (0x298 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
struct UAnnouncement_Tutorial_C_UpdateTutorialData_Params
{
public:
	struct FFortClientAnnouncementData_Tutorial  TutorialData;                                      // 0x0(0x140)(Parm)
	class UOverlaySlot*                          ContentBoxSlot;                                    // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientAnnouncementData_Tutorial  LocalTutorialData;                                 // 0x148(0x140)(Edit)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetLightboxVisibility_ReturnValue;        // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x28B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
struct UAnnouncement_Tutorial_C_AddTextLine_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	bool                                         Transparent;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserWidget*                     NewLine;                                           // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialRichText_C*                   CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialTransparentRichText_C*        CallFunc_Create_ReturnValue2;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
struct UAnnouncement_Tutorial_C_HandleUpdateTutorial_Params
{
public:
	struct FFortClientAnnouncementData_Tutorial  TutorialData;                                      // 0x0(0x140)(Parm)
	bool                                         bShow;                                             // 0x140(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.Construct
struct UAnnouncement_Tutorial_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
struct UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingShowUI_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
struct UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingHideUI_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget
struct UAnnouncement_Tutorial_C_ResetTutorialAnnoucementWidget_Params
{
public:
};

// 0x320 (0x320 - 0x0)
// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
struct UAnnouncement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FFortClientAnnouncementData_Tutorial  K2Node_MakeStruct_FortClientAnnouncementData_Tutorial; // 0x18(0x140)()
	class UObject*                               K2Node_HandleClientEvent_EventSource2;             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus2;              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent2;             // 0x168(0x20)(ConstParm, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x198(0x20)(ConstParm, NoDestructor)
	struct FFortClientAnnouncementData_Tutorial  K2Node_CustomEvent_TutorialData;                   // 0x1B8(0x140)()
	bool                                         K2Node_CustomEvent_bShow;                          // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x300(0x10)(ZeroConstructor, NoDestructor)
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue;                   // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x260 (0x260 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
struct UPowerToastWidget_C_UpdatePowerRating_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetHomebaseRating_Rating;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHomebaseRating_ProgressFraction;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHomebaseRating_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)()
	int32                                        CallFunc_GetLocalPlayerHomebaseRating_Rating;      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLocalPlayerHomebaseRating_ReturnValue; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x48(0x190)()
	int32                                        CallFunc_GetTeamHomebaseRating_Rating;             // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTeamHomebaseRating_ProgressFraction;   // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTeamHomebaseRating_ReturnValue;        // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1F0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x230(0x10)(ZeroConstructor, ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x248(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.StartIntro
struct UPowerToastWidget_C_StartIntro_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.ShowText
struct UPowerToastWidget_C_ShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.SetToast
struct UPowerToastWidget_C_SetToast_Params
{
public:
	class UFortUINotification*                   Toast;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*             CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTeamMemberSynchronizing_ReturnValue;    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x40(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.Construct
struct UPowerToastWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
struct UPowerToastWidget_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
struct UPowerToastWidget_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
struct UPowerToastWidget_C_HandleAnimationDelay_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
struct UPowerToastWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
struct UPowerToastWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
struct UPowerToastWidget_C_OnPlayerInfoChanged_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0
struct UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_0_Params
{
public:
	struct FUniqueNetIdRepl                      NewTeamMemberId;                                   // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
struct UPowerToastWidget_C_HandleSynchronizeTimeout_Params
{
public:
};

// 0x350 (0x350 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
struct UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x40(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x78(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xF0(0x78)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   K2Node_Event_NewInfo;                              // 0x170(0x190)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_NewTeamMemberId;                // 0x310(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x32B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x338(0x10)(ZeroConstructor, NoDestructor)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
struct UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

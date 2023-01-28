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

// 0x2 (0x2 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
struct UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params
{
public:
	bool                                         bShouldBeDisabled;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
struct UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
struct UAthenaLeaderboardTab_C_OnQueryStateChanged_Params
{
public:
	bool                                         bQueryInProgress;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
struct UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params
{
public:
	bool                                         bCommitted;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
struct UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params
{
public:
	bool                                         bCommitted;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
struct UAthenaLeaderboardTab_C_OnActivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature
struct UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
struct UAthenaLeaderboardTab_C_Construct_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
struct UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature
struct UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature
struct UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature
struct UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
struct UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaPlaylistLeaderboardData        PlaylistTabData;                                   // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
struct UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLeaderboardRowProxyInstance*      LocalUserRow;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  QueryErrorStr;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
struct UAthenaLeaderboardTab_C_OnUpdateListHeader_Params
{
public:
	struct FAthenaPlaylistLeaderboardData        PlaylistTabData;                                   // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
struct UAthenaLeaderboardTab_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
struct UAthenaLeaderboardTab_C_OnQueryFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
struct UAthenaLeaderboardTab_C_OnQueryStarted_Params
{
public:
};

// 0x210 (0x210 - 0x0)
// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
struct UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLeaderboardContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanShowLeaderboards_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable6;                               // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable7;                               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable8;                               // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable9;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable10;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)()
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId2;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton2;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value2;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Add_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_Event_Button;                               // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaPlaylistLeaderboardData        K2Node_Event_PlaylistTabData2;                     // 0xA8(0x50)(ConstParm)
	bool                                         K2Node_Event_bWasSuccessful;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLeaderboardRowProxyInstance*      K2Node_Event_LocalUserRow;                         // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_QueryErrorStr;                        // 0x108(0x18)(ConstParm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x120(0x18)()
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaLeaderboardTabButton_C*         K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaPlaylistLeaderboardData        K2Node_Event_PlaylistTabData;                      // 0x150(0x50)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1A0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x1B0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable2;                                // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue; // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x1C8(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select4_Default;                            // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortLeaderboardContext*               CallFunc_GetContext_ReturnValue3;                  // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanShowLeaderboards_ReturnValue2;         // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select5_Default;                            // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select6_Default;                            // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select7_Default;                            // 0x1F8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

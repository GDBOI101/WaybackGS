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
// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
struct USubgameSelectScreen_C_ShowUpsell_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
struct USubgameSelectScreen_C_InitializeRedeemButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F77[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
struct USubgameSelectScreen_C_InitializeShortDescriptions_Params
{
public:
	class FText                                  ShortDescription;                                  // 0x0(0x18)(Edit)
	class FText                                  CallFunc_GetShortDescription_ShortDescription;     // 0x18(0x18)()
	bool                                         CallFunc_GetShortDescription_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x38(0x18)()
	class FText                                  CallFunc_GetEmptyText_ReturnValue2;                // 0x50(0x18)()
	class FText                                  CallFunc_GetShortDescription_ShortDescription2;    // 0x68(0x18)()
	bool                                         CallFunc_GetShortDescription_ReturnValue2;         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
struct USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerInParty_ReturnValue;         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
struct USubgameSelectScreen_C_Update_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
struct USubgameSelectScreen_C_AdvanceRotator_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubGameSelectRotatorItems            CallFunc_Array_Get_Item;                           // 0x8(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_3F7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
struct USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params
{
public:
	struct FSubGameSelectRotatorItems            CallFunc_Array_Get_Item;                           // 0x0(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_3F7D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
struct USubgameSelectScreen_C_ToggleTimer_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
struct USubgameSelectScreen_C_SafeSetSubGame_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x18(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
struct USubgameSelectScreen_C_SetDescriptionForSubGame_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetFullDescription_FullDescription;       // 0x8(0x18)()
	bool                                         CallFunc_GetFullDescription_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F81[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetFullDescription_FullDescription2;      // 0x28(0x18)()
	bool                                         CallFunc_GetFullDescription_ReturnValue2;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x50(0x18)()
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x68(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          Temp_byte_Variable;                                // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F83[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
struct USubgameSelectScreen_C_OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
struct USubgameSelectScreen_C_OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
struct USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
struct USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
struct USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_0
struct USubgameSelectScreen_C_CustomEvent_0_Params
{
public:
	enum class EMatchmakingState                 OldState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingState                 NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
struct USubgameSelectScreen_C_CustomEvent_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
struct USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
struct USubgameSelectScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
struct USubgameSelectScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
struct USubgameSelectScreen_C_CustomEvent_2_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
struct USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
struct USubgameSelectScreen_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x298 (0x298 - 0x0)
// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_ShowPlatformRedeemCode* CallFunc_ShowPlatformRedeemCode_ReturnValue;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x50(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue4;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue5;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue6;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F88[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F89[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button9;                // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button8;                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue2;              // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue7;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CanPlay_DenialReason2;                    // 0x118(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue2;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x140(0x10)(ZeroConstructor, NoDestructor)
	class UProgressModalWidget_C*                CallFunc_Create_ReturnValue;                       // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x158(0x18)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x170(0x10)(ZeroConstructor, NoDestructor)
	enum class EMatchmakingState                 K2Node_CustomEvent_OldState;                       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingState                 K2Node_CustomEvent_NewState;                       // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button7;                // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue8;                  // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_Root_C*                     CallFunc_Create_ReturnValue2;                      // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue2;      // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue9;                  // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable2;                               // 0x1F8(0x18)(ConstParm)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue3;      // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue; // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2; // 0x21E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F90[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x220(0x10)(ZeroConstructor, NoDestructor)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x230(0x10)(ZeroConstructor, ReferenceParm)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue10;                 // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue11;                 // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPlatformDisplayName_ReturnValue;       // 0x280(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

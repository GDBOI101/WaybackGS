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

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
struct UJoinServer_C_HandleLobbyConnectingToGame_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function JoinServer.JoinServer_C.ShowAbandoningProgress
struct UJoinServer_C_ShowAbandoningProgress_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
struct UJoinServer_C_ShowRetryRejoinWindow_Params
{
public:
	class FText                                  Failure;                                           // 0x0(0x18)(Parm)
	bool                                         AllowRetry;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
struct UJoinServer_C_ShowRetryRejoinSession_Params
{
public:
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsJoinableGameAvailable_ReturnValue;      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function JoinServer.JoinServer_C.ShowRejoiningProgress
struct UJoinServer_C_ShowRejoiningProgress_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function JoinServer.JoinServer_C.HideRejoinWindow
struct UJoinServer_C_HideRejoinWindow_Params
{
public:
	bool                                         AbandonSession;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function JoinServer.JoinServer_C.ShowRejoinWindow
struct UJoinServer_C_ShowRejoinWindow_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
struct UJoinServer_C_HandleGetMainMenuContent_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function JoinServer.JoinServer_C.ShowTutorialCanceled
struct UJoinServer_C_ShowTutorialCanceled_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function JoinServer.JoinServer_C.GetMatchmakingError
struct UJoinServer_C_GetMatchmakingError_Params
{
public:
	enum class EMatchmakingCompleteResult        MatchMakingError;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ErrorText;                                         // 0x8(0x18)(Parm, OutParm)
	enum class EMatchmakingCompleteResult        Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x58(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x70(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x88(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xA0(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xB8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xD0(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xE8(0x18)()
};

// 0x1A (0x1A - 0x0)
// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
struct UJoinServer_C_HandleLobbyTimeUpdated_Params
{
public:
	int32                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWorldRecordLoaded_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoinFromLobby_ReturnValue;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function JoinServer.JoinServer_C.SkipTutorial
struct UJoinServer_C_SkipTutorial_Params
{
public:
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
struct UJoinServer_C_StartTutorialMatchmakingFlow_Params
{
public:
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartOnboardingMission_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function JoinServer.JoinServer_C.HandleEnterState
struct UJoinServer_C_HandleEnterState_Params
{
public:
	enum class EFortUIState                      PreviousState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      LocalPreviousState;                                // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
struct UJoinServer_C_HandleLobbyDisconnected_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
struct UJoinServer_C_HandleMatchmakingStateChange_Params
{
public:
	enum class EMatchmakingState                 OldState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingState                 NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
struct UJoinServer_C_HandleMatchmakingComplete_Params
{
public:
	enum class EMatchmakingCompleteResult        Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMatchmakingCompleteResult        MatchmakingResult;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMatchmakingError_ErrorText;            // 0x8(0x18)()
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function JoinServer.JoinServer_C.Initialize
struct UJoinServer_C_Initialize_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URejoinWindow_C*                       CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressWidget_C*                     CallFunc_Create_ReturnValue2;                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue3;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class UTutorialWindow_C*                     CallFunc_Create_ReturnValue3;                      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
struct UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
struct UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
struct UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
struct UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
struct UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.RequestTutorialRetry
struct UJoinServer_C_RequestTutorialRetry_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.ShowSkipTutorial
struct UJoinServer_C_ShowSkipTutorial_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
struct UJoinServer_C_HandleClientEvent_RejoinStart_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
struct UJoinServer_C_HandleRequestRejoinRetry_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.HandleRequestAbandon
struct UJoinServer_C_HandleRequestAbandon_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
struct UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JoinServer.JoinServer_C.Construct
struct UJoinServer_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function JoinServer.JoinServer_C.OnEnterState
struct UJoinServer_C_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x151 (0x151 - 0x0)
// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
struct UJoinServer_C_ExecuteUbergraph_JoinServer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldPromptToSkipTutorial_ReturnValue;   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource2;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus2;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent2;             // 0x88(0x20)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_RejoinSession*        CallFunc_RejoinSession_ReturnValue;                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller2;      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_AbandonSession*       CallFunc_AbandonSession_ReturnValue;               // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x130(0x20)(ConstParm, NoDestructor)
	enum class EFortUIState                      K2Node_Event_PreviousUIState;                      // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

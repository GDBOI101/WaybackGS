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

// 0x139 (0x139 - 0x0)
// Function FullPartyBar.FullPartyBar_C.GetTooltipStat
struct UFullPartyBar_C_GetTooltipStat_Params
{
public:
	struct FGameplayTag                          Token;                                             // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x8(0x70)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3070[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3071[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0xA8(0x18)(HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*             CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0xC8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D9 (0x1D9 - 0x0)
// Function FullPartyBar.FullPartyBar_C.InitializeStatLabels
struct UFullPartyBar_C_InitializeStatLabels_Params
{
public:
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x0(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3072[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute2;      // 0x78(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue2;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute3;      // 0xF0(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue3;              // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute4;      // 0x168(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue4;              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Get_Tech_ToolTipWidget
struct UFullPartyBar_C_Get_Tech_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Get_Resistance_ToolTipWidget
struct UFullPartyBar_C_Get_Resistance_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3076[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Get_Offense_ToolTipWidget
struct UFullPartyBar_C_Get_Offense_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Get_Fortitude_ToolTipWidget
struct UFullPartyBar_C_Get_Fortitude_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3078[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function FullPartyBar.FullPartyBar_C.GetTotalNumFriendCodes
struct UFullPartyBar_C_GetTotalNumFriendCodes_Params
{
public:
	int32                                        Num_Codes;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumFriendCodesToIssue_ReturnValue;     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function FullPartyBar.FullPartyBar_C.isTeammateSlotPopulated
struct UFullPartyBar_C_IsTeammateSlotPopulated_Params
{
public:
	int32                                        InSlotNUmber;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_307A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              CallFunc_GetTeamMemberIDs_TeamMemberIDs;           // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x18(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.OpenPartyPrivacy
struct UFullPartyBar_C_OpenPartyPrivacy_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function FullPartyBar.FullPartyBar_C.HandlePartybarUIFeatureChanged
struct UFullPartyBar_C_HandlePartybarUIFeatureChanged_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIFeatureState               FeatureState;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIFeatureState               Temp_byte_Variable5;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Initialize
struct UFullPartyBar_C_Initialize_Params
{
public:
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ArePartyFeaturesEnabled_ReturnValue;      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BindDelegates
struct UFullPartyBar_C_BindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Construct
struct UFullPartyBar_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyBar.FullPartyBar_C.Destruct
struct UFullPartyBar_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function FullPartyBar.FullPartyBar_C.ExecuteUbergraph_FullPartyBar
struct UFullPartyBar_C_ExecuteUbergraph_FullPartyBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_307B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_307C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button11;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button10;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button9;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button8;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x48(0x18)()
	bool                                         Temp_bool_Variable4;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_307D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button7;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isTeammateSlotPopulated_ReturnValue;      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_isTeammateSlotPopulated_ReturnValue2;     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_isTeammateSlotPopulated_ReturnValue3;     // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_307E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xA8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0xC0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0xD8(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xF0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x108(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x120(0x18)()
	class FText                                  K2Node_Select3_Default;                            // 0x138(0x18)()
	class FText                                  K2Node_Select4_Default;                            // 0x150(0x18)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FullPartyBar.FullPartyBar_C.OnButtonHovered__DelegateSignature
struct UFullPartyBar_C_OnButtonHovered__DelegateSignature_Params
{
public:
	class FText                                  HelpText;                                          // 0x0(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0xB0 (0xB0 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.GetHoverText
struct UFullPartyBarAthena_C_GetHoverText_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Output;                                            // 0x8(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)()
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B18[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B19[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x98(0x18)()
};

// 0x139 (0x139 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTooltipStat
struct UFullPartyBarAthena_C_GetTooltipStat_Params
{
public:
	struct FGameplayTag                          Token;                                             // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 OutDisplayAttribute;                               // 0x8(0x70)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0xA8(0x18)(HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*             CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0xC8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Tech_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Tech_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Resistance_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Resistance_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Offense_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Offense_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Fortitude_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Fortitude_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTotalNumFriendCodes
struct UFullPartyBarAthena_C_GetTotalNumFriendCodes_Params
{
public:
	int32                                        Num_Codes;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumFriendCodesToIssue_ReturnValue;     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.isTeammateSlotPopulated
struct UFullPartyBarAthena_C_IsTeammateSlotPopulated_Params
{
public:
	int32                                        InSlotNUmber;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B22[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.OpenPartyPrivacy
struct UFullPartyBarAthena_C_OpenPartyPrivacy_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.HandlePartybarUIFeatureChanged
struct UFullPartyBarAthena_C_HandlePartybarUIFeatureChanged_Params
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
// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
struct UFullPartyBarAthena_C_Initialize_Params
{
public:
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ArePartyFeaturesEnabled_ReturnValue;      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BindDelegates
struct UFullPartyBarAthena_C_BindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
struct UFullPartyBarAthena_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Destruct
struct UFullPartyBarAthena_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.Tick
struct UFullPartyBarAthena_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
struct UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B23[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button11;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button10;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button9;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x38(0x18)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button8;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button7;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetHoverText_Output;                      // 0xA8(0x18)()
	class FText                                  CallFunc_GetHoverText_Output2;                     // 0xC0(0x18)()
	class FText                                  CallFunc_GetHoverText_Output3;                     // 0xD8(0x18)()
	class FText                                  CallFunc_GetHoverText_Output4;                     // 0xF0(0x18)()
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x108(0x34)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FullPartyBarAthena.FullPartyBarAthena_C.OnButtonHovered__DelegateSignature
struct UFullPartyBarAthena_C_OnButtonHovered__DelegateSignature_Params
{
public:
	class FText                                  HelpText;                                          // 0x0(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

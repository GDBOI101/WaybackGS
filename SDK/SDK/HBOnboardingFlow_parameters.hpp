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

// 0x19 (0x19 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
struct AHBOnboardingFlow_C_CanAccessManagementFeatures_Params
{
public:
	bool                                         Can_Manage;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_ReturnValue2;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_ReturnValue3;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
struct AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params
{
public:
	bool                                         WaitingToCheckAgain;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4010[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
struct AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4011[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4012[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestInProgress_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Params
{
public:
	int32                                        NewLocalVar_0;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4013[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4014[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
struct AHBOnboardingFlow_C_ShowBannerSelect_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBannerSelectionWidget_C*              K2Node_DynamicCast_AsBanner_Selection_Widget;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
struct AHBOnboardingFlow_C_HandleMcpFailure_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.UpdateVariableCache
struct AHBOnboardingFlow_C_UpdateVariableCache_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4015[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4016[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
struct AHBOnboardingFlow_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
struct AHBOnboardingFlow_C_OnCanceled_C2C889344301B8DBF8F046A2A175D133_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
struct AHBOnboardingFlow_C_OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
struct AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
struct AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnFailure_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
struct AHBOnboardingFlow_C_OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnFailure_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
struct AHBOnboardingFlow_C_OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
struct AHBOnboardingFlow_C_OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
struct AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B35313D7CD_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
struct AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
struct AHBOnboardingFlow_C_OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
struct AHBOnboardingFlow_C_OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_99CD286F4BDD72A81163058464B73990
struct AHBOnboardingFlow_C_OnStateEntered_99CD286F4BDD72A81163058464B73990_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
struct AHBOnboardingFlow_C_OnFailure_74930F274B5470B17CF720953FE7E260_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
struct AHBOnboardingFlow_C_OnSuccess_74930F274B5470B17CF720953FE7E260_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
struct AHBOnboardingFlow_C_OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
struct AHBOnboardingFlow_C_OnStateEntered_7FBC276641DD576B7417ED97A4734318_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
struct AHBOnboardingFlow_C_OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
struct AHBOnboardingFlow_C_DialogResult_1D81E4B94CE33A3425130BABD5A7283B_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4017[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
struct AHBOnboardingFlow_C_OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
struct AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_7D1C261A4BE47E3567B8D2885C9E298B
struct AHBOnboardingFlow_C_OnFailure_7D1C261A4BE47E3567B8D2885C9E298B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B
struct AHBOnboardingFlow_C_OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
struct AHBOnboardingFlow_C_StartPlaySatelliteCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
struct AHBOnboardingFlow_C_StartNameHomebase_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
struct AHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
struct AHBOnboardingFlow_C_StartOnboardingZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
struct AHBOnboardingFlow_C_StartFlow_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.RejoinCheckCompleted
struct AHBOnboardingFlow_C_RejoinCheckCompleted_Params
{
public:
	enum class ERejoinStatus                     RejoinStatus;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckExistingSession
struct AHBOnboardingFlow_C_HandleCheckExistingSession_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
struct AHBOnboardingFlow_C_HandleCheckOnboardingZoneComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
struct AHBOnboardingFlow_C_HandleSwitchToHomeBase_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
struct AHBOnboardingFlow_C_HandlePlaySatelliteCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
struct AHBOnboardingFlow_C_HandleNameHomebase_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Retry_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
struct AHBOnboardingFlow_C_Handle_Client_Quest_Login_Retries_Exhausted_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
struct AHBOnboardingFlow_C_HandleClientEvent_SubGameSelected_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
struct AHBOnboardingFlow_C_HandleSubGameSelection_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
struct AHBOnboardingFlow_C_HandleClientEvent_OnRejoinGameAbandoned_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
struct AHBOnboardingFlow_C_HandleCompanionAppOnboardingAbort_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
struct AHBOnboardingFlow_C_HandleNoEntitlement_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
struct AHBOnboardingFlow_C_HandleForcedLogout_Params
{
public:
	class FText                                  Reason_Title;                                      // 0x0(0x18)(Parm)
	class FText                                  Reason;                                            // 0x18(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
struct AHBOnboardingFlow_C_HandlePlayEventCine_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
struct AHBOnboardingFlow_C_HandleMobileManagementRestricted_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
struct AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x739 (0x739 - 0x0)
// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
struct AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateVariableCache_Success;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4018[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4019[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AutoSelectSubGame_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue2;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue3;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue5;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue6;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue7;                  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue2;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue8;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue9;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileApp_ReturnValue2;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue10;                 // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4020[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue4;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue11;                 // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4021[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x140(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x150(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x160(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12;                 // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue13;                 // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileApp_ReturnValue3;                 // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue3;                  // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4022[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x188(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x198(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue14;                 // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x1B0(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4023[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x1D0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x1E0(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1F0(0x30)(IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue15;                 // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4024[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue;    // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4025[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue16;                 // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue17;                 // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue18;                 // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsJoinableGameAvailable_ReturnValue;      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4026[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue19;                 // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NeedToCheckRejoinStatus_ReturnValue;      // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4027[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue5;                  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4028[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array;                            // 0x290(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x2A0(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue6;                  // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue8;                     // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4029[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0x2C0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2; // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x2F8(0x10)(ZeroConstructor, NoDestructor)
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue2;         // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue7;                  // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue2;   // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue9;                     // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue10;                    // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x322(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x328(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array2;                           // 0x340(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue;          // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate17;            // 0x358(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue11;                    // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource4;             // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus4;              // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent4;             // 0x380(0x20)(ConstParm, NoDestructor)
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue2;         // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue3;               // 0x3B0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement*               CallFunc_FinishSpawningActor_ReturnValue3;         // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue3;   // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate18;            // 0x3F8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue13;                    // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue20;                 // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue;         // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue21;                 // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfo_Result;                   // 0x430(0x40)()
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x472(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue; // 0x473(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue3;                 // 0x474(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x475(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4030[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue8;                  // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue14;                    // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue15;                    // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue2; // 0x482(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue4;                 // 0x483(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue3; // 0x484(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue5;                 // 0x485(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4031[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array3;                           // 0x488(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate19;            // 0x498(0x10)(ZeroConstructor, NoDestructor)
	enum class ERejoinStatus                     K2Node_CustomEvent_RejoinStatus;                   // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4032[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue;   // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue16;                    // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4033[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate20;            // 0x4C0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate21;            // 0x4D0(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue2;        // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x4E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue6;                 // 0x4EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4034[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate22;            // 0x4F0(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource3;             // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus3;              // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent3;             // 0x510(0x20)(ConstParm, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate23;            // 0x530(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue2;              // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UpdateVariableCache_Success2;             // 0x541(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4035[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource2;             // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus2;              // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent2;             // 0x558(0x20)(ConstParm, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate24;            // 0x578(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasCompletedOnboardingObjective_ReturnValue4; // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue7;                 // 0x589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4036[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate25;            // 0x590(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Reason_Title;                   // 0x5A8(0x18)()
	class FText                                  K2Node_CustomEvent_Reason;                         // 0x5C0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x5D8(0x18)()
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x5F8(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue17;                    // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x618(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x630(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate26;            // 0x648(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_NeedsToPlayEventMovie_ReturnValue;        // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4039[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue3;         // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue18;                    // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate27;            // 0x670(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain; // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2; // 0x681(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0x688(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0x6A0(0x18)()
	bool                                         CallFunc_CanAccessManagementFeatures_Can_Manage;   // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue8;                 // 0x6B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate28;            // 0x6C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x6E8(0x20)(ConstParm, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_LoadCampaignProfiles* CallFunc_LoadCampaignProfiles_ReturnValue;         // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate29;            // 0x728(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue19;                    // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
